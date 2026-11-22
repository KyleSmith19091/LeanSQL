/* Glue between Lean's runtime and shim.h. Kept apart from sqlite3.c so
 * lean.h and the SQLite internals never share a translation unit. */
#include <lean/lean.h>
#include "shim.h"

static void ldb_finalize(void *p) { ldb_close((LDb *)p); }
static void ldb_foreach(void *p, b_lean_obj_arg f) { (void)p; (void)f; }
static lean_external_class *g_cls = NULL;

static lean_external_class *cls(void) {
  if (!g_cls) g_cls = lean_register_external_class(ldb_finalize, ldb_foreach);
  return g_cls;
}
static LDb *get(b_lean_obj_arg h) { return (LDb *)lean_get_external_data(h); }

LEAN_EXPORT lean_obj_res lsql_open(b_lean_obj_arg path, b_lean_obj_arg table, lean_obj_arg w) {
  const char *err = "unknown error";
  LDb *d = ldb_open(lean_string_cstr(path), lean_string_cstr(table), &err);
  (void)w;
  if (!d) return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(err)));
  return lean_io_result_mk_ok(lean_alloc_external(cls(), d));
}
LEAN_EXPORT lean_obj_res lsql_last(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; return lean_io_result_mk_ok(lean_box(ldb_last(get(h))));
}
LEAN_EXPORT lean_obj_res lsql_previous(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; return lean_io_result_mk_ok(lean_box(ldb_previous(get(h))));
}
LEAN_EXPORT lean_obj_res lsql_rowid(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; return lean_io_result_mk_ok(lean_uint64_to_nat((uint64_t)ldb_rowid(get(h))));
}
LEAN_EXPORT lean_obj_res lsql_body(b_lean_obj_arg h, lean_obj_arg w) {
  size_t len; const char *s = ldb_body(get(h), &len);
  (void)w; return lean_io_result_mk_ok(lean_mk_string_from_bytes(s, len));
}
LEAN_EXPORT lean_obj_res lsql_page_fetches(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; return lean_io_result_mk_ok(lean_uint64_to_nat(ldb_page_fetches(get(h))));
}

/* Benchmarks. The checksum comes back through a second, cheap call so that the
 * timed loop itself stays inside C. Results: a Float (ns per query) or the checksum as a Nat. */
LEAN_EXPORT lean_obj_res lsql_bench_sql(b_lean_obj_arg path, b_lean_obj_arg table, b_lean_obj_arg n,
                                        uint8_t reprepare, double budgetNs, lean_obj_arg w) {
  uint64_t sum = 0; (void)w;
  double ns = ldb_bench_sql(lean_string_cstr(path), lean_string_cstr(table),
                            lean_uint64_of_nat(n), reprepare, budgetNs, &sum);
  return lean_io_result_mk_ok(lean_box_float(ns));
}
LEAN_EXPORT lean_obj_res lsql_check_sql(b_lean_obj_arg path, b_lean_obj_arg table, b_lean_obj_arg n, lean_obj_arg w) {
  uint64_t sum = 0; (void)w;
  ldb_bench_sql(lean_string_cstr(path), lean_string_cstr(table), lean_uint64_of_nat(n), 0, 0, &sum);
  return lean_io_result_mk_ok(lean_uint64_to_nat(sum));
}
LEAN_EXPORT lean_obj_res lsql_bench_btree(b_lean_obj_arg path, b_lean_obj_arg table, b_lean_obj_arg n,
                                          uint8_t txnPerQuery, double budgetNs, lean_obj_arg w) {
  uint64_t sum = 0; (void)w;
  double ns = ldb_bench_btree(lean_string_cstr(path), lean_string_cstr(table),
                              lean_uint64_of_nat(n), txnPerQuery, budgetNs, &sum);
  return lean_io_result_mk_ok(lean_box_float(ns));
}
LEAN_EXPORT lean_obj_res lsql_check_btree(b_lean_obj_arg path, b_lean_obj_arg table, b_lean_obj_arg n, lean_obj_arg w) {
  uint64_t sum = 0; (void)w;
  ldb_bench_btree(lean_string_cstr(path), lean_string_cstr(table), lean_uint64_of_nat(n), 0, 0, &sum);
  return lean_io_result_mk_ok(lean_uint64_to_nat(sum));
}

LEAN_EXPORT lean_obj_res lsql_begin(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; return lean_io_result_mk_ok(lean_box(ldb_begin(get(h))));
}
LEAN_EXPORT lean_obj_res lsql_end(b_lean_obj_arg h, lean_obj_arg w) {
  (void)w; ldb_end(get(h)); return lean_io_result_mk_ok(lean_box(0));
}
