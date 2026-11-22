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
