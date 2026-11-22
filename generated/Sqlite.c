// Lean compiler output
// Module: Sqlite
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_HandlePointed;
lean_object* lsql_open(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Handle_open___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lsql_last(lean_object*);
LEAN_EXPORT lean_object* l_Handle_last___boxed(lean_object*, lean_object*);
lean_object* lsql_previous(lean_object*);
LEAN_EXPORT lean_object* l_Handle_previous___boxed(lean_object*, lean_object*);
lean_object* lsql_rowid(lean_object*);
LEAN_EXPORT lean_object* l_Handle_rowid___boxed(lean_object*, lean_object*);
lean_object* lsql_body(lean_object*);
LEAN_EXPORT lean_object* l_Handle_body___boxed(lean_object*, lean_object*);
lean_object* lsql_page_fetches(lean_object*);
LEAN_EXPORT lean_object* l_Handle_pageFetches___boxed(lean_object*, lean_object*);
static lean_object* _init_l_HandlePointed(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_Handle_open___boxed(lean_object* v_path_5_, lean_object* v_table_6_, lean_object* v_a_00___x40___internal___hyg_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lsql_open(v_path_5_, v_table_6_);
lean_dec_ref(v_table_6_);
lean_dec_ref(v_path_5_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Handle_last___boxed(lean_object* v_h_11_, lean_object* v_a_00___x40___internal___hyg_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lsql_last(v_h_11_);
lean_dec(v_h_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Handle_previous___boxed(lean_object* v_h_16_, lean_object* v_a_00___x40___internal___hyg_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lsql_previous(v_h_16_);
lean_dec(v_h_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Handle_rowid___boxed(lean_object* v_h_21_, lean_object* v_a_00___x40___internal___hyg_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lsql_rowid(v_h_21_);
lean_dec(v_h_21_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Handle_body___boxed(lean_object* v_h_26_, lean_object* v_a_00___x40___internal___hyg_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lsql_body(v_h_26_);
lean_dec(v_h_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Handle_pageFetches___boxed(lean_object* v_h_31_, lean_object* v_a_00___x40___internal___hyg_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lsql_page_fetches(v_h_31_);
lean_dec(v_h_31_);
return v_res_33_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Sqlite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_HandlePointed = _init_l_HandlePointed();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
