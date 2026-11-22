/* Plain-C view of SQLite's internal B-tree cursor, for the Lean FFI layer.
 * The implementation (sqlite_shim.c) is compiled into the same translation
 * unit as sqlite3.c, because the B-tree functions are `static` there. */
#ifndef LEANSQL_SHIM_H
#define LEANSQL_SHIM_H
#include <stddef.h>
#include <stdint.h>

typedef struct LDb LDb;

/* Open `path` read-only and put a cursor on the root page of `table`.
 * Returns NULL and sets *err (a static string) on failure. */
LDb *ldb_open(const char *path, const char *table, const char **err);
void ldb_close(LDb *db);

/* A read transaction with a cursor. ldb_open starts one. SQL starts and ends one per statement,
 * so a fair per-query comparison calls ldb_begin ... ldb_end around each query. */
int ldb_begin(LDb *db);
void ldb_end(LDb *db);

/* sqlite3BtreeLast. Returns 1 if the cursor now sits on a row, 0 if the table is empty. */
int ldb_last(LDb *db);
/* sqlite3BtreePrevious. Returns 1 if the cursor sits on a row, 0 if it ran off the start. */
int ldb_previous(LDb *db);

/* The row under the cursor (table must be `(id INTEGER PRIMARY KEY, body TEXT)`). */
int64_t ldb_rowid(LDb *db);
const char *ldb_body(LDb *db, size_t *len); /* valid until the next call */

/* Pager page gets (cache hits + misses) since the handle was opened. */
uint64_t ldb_page_fetches(LDb *db);

/* ---- Benchmarks. Each opens its own connection, runs the query once to warm the
 * caches and to compute a checksum (sum of id + body length over the rows returned),
 * then repeats it for about `budgetNs` and returns nanoseconds per query.
 * Connection open, schema load and statement preparation (when `reprepare` is 0)
 * are not timed. */
double ldb_bench_sql(const char *path, const char *table, uint64_t n, int reprepare,
                     double budgetNs, uint64_t *checksum);
double ldb_bench_btree(const char *path, const char *table, uint64_t n, int txnPerQuery,
                       double budgetNs, uint64_t *checksum);
double ldb_bench_emitted(const char *path, const char *table, uint64_t n, int txnPerQuery,
                         double budgetNs, uint64_t *checksum);
#endif
