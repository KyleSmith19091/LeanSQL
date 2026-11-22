/* Including the amalgamation makes the internal B-tree API visible to us. */
#include "sqlite3.c"
#include "shim.h"

struct LDb {
  sqlite3 *db;
  Btree *bt;
  BtCursor *cur;
  u8 *buf;            /* payload of the current row */
  u32 cap, len;
  u64 base;           /* page gets before our cursor started */
  const char *text;   /* body text inside buf */
  size_t textLen;
};

static u64 pageGets(sqlite3 *db) {
  int cur = 0, hi = 0;
  u64 total = 0;
  sqlite3_db_status(db, SQLITE_DBSTATUS_CACHE_HIT, &cur, &hi, 0);
  total += (u64)cur;
  sqlite3_db_status(db, SQLITE_DBSTATUS_CACHE_MISS, &cur, &hi, 0);
  total += (u64)cur;
  return total;
}

LDb *ldb_open(const char *path, const char *table, const char **err) {
  LDb *d = sqlite3_malloc(sizeof *d);
  sqlite3_stmt *st = 0;
  Pgno root = 0;
  if (!d) { *err = "out of memory"; return 0; }
  memset(d, 0, sizeof *d);
  if (sqlite3_open_v2(path, &d->db, SQLITE_OPEN_READONLY, 0) != SQLITE_OK) {
    *err = "cannot open database"; ldb_close(d); return 0;
  }
  /* Find the root page of the table with the public API. */
  if (sqlite3_prepare_v2(d->db,
        "SELECT rootpage FROM sqlite_schema WHERE type='table' AND name=?1",
        -1, &st, 0) != SQLITE_OK) {
    *err = "cannot read schema"; ldb_close(d); return 0;
  }
  sqlite3_bind_text(st, 1, table, -1, SQLITE_STATIC);
  if (sqlite3_step(st) == SQLITE_ROW) root = (Pgno)sqlite3_column_int(st, 0);
  sqlite3_finalize(st);
  if (root == 0) { *err = "table not found"; ldb_close(d); return 0; }

  /* From here on we talk to the B-tree directly. */
  d->bt = d->db->aDb[0].pBt;
  if (sqlite3BtreeBeginTrans(d->bt, 0, 0) != SQLITE_OK) {
    *err = "cannot start read transaction"; ldb_close(d); return 0;
  }
  d->cur = sqlite3_malloc(sqlite3BtreeCursorSize());
  if (!d->cur) { *err = "out of memory"; ldb_close(d); return 0; }
  sqlite3BtreeCursorZero(d->cur);
  if (sqlite3BtreeCursor(d->bt, root, 0, 0, d->cur) != SQLITE_OK) {
    sqlite3_free(d->cur); d->cur = 0;
    *err = "cannot open cursor"; ldb_close(d); return 0;
  }
  d->base = pageGets(d->db);
  return d;
}

void ldb_close(LDb *d) {
  if (!d) return;
  if (d->cur) { sqlite3BtreeCloseCursor(d->cur); sqlite3_free(d->cur); }
  if (d->bt) sqlite3BtreeCommit(d->bt);
  if (d->db) sqlite3_close(d->db);
  sqlite3_free(d->buf);
  sqlite3_free(d);
}

int ldb_last(LDb *d) {
  int res = 0;
  if (sqlite3BtreeLast(d->cur, &res) != SQLITE_OK) return 0;
  return res == 0;   /* pRes==1 means the table is empty */
}

int ldb_previous(LDb *d) {
  int rc = sqlite3BtreePrevious(d->cur, 0);
  return rc == SQLITE_OK;   /* SQLITE_DONE: ran off the start */
}

int64_t ldb_rowid(LDb *d) { return (int64_t)sqlite3BtreeIntegerKey(d->cur); }

const char *ldb_body(LDb *d, size_t *len) {
  u32 size = sqlite3BtreePayloadSize(d->cur);
  u32 hsz, t0, t1, off;
  if (size > d->cap) {
    u8 *nb = sqlite3_realloc(d->buf, size);
    if (!nb) { *len = 0; return ""; }
    d->buf = nb; d->cap = size;
  }
  if (sqlite3BtreePayload(d->cur, 0, size, d->buf) != SQLITE_OK) { *len = 0; return ""; }
  /* Record = header (size, one serial type per column) then the column data.
   * Column 0 is the rowid alias, stored as NULL (type 0, no data). */
  off = getVarint32(d->buf, hsz);
  off += getVarint32(d->buf + off, t0);
  off += getVarint32(d->buf + off, t1);
  (void)off;
  if (t0 != 0 || t1 < 13 || (t1 & 1) == 0) { *len = 0; return ""; }
  d->text = (const char *)d->buf + hsz;
  d->textLen = (t1 - 13) / 2;
  *len = d->textLen;
  return d->text;
}

uint64_t ldb_page_fetches(LDb *d) { return pageGets(d->db) - d->base; }
