// Lean compiler output
// Module: Model
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_lastN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_lastN___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_walkBack(lean_object*);
static const lean_array_object l_Db_plan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Db_plan___closed__0 = (const lean_object*)&l_Db_plan___closed__0_value;
LEAN_EXPORT lean_object* l_Db_plan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_lastN(lean_object* v_db_1_, lean_object* v_n_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = l_List_lengthTR___redArg(v_db_1_);
v___x_4_ = lean_nat_sub(v___x_3_, v_n_2_);
lean_dec(v___x_3_);
v___x_5_ = l_List_drop___redArg(v___x_4_, v_db_1_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Db_lastN___boxed(lean_object* v_db_6_, lean_object* v_n_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Db_lastN(v_db_6_, v_n_7_);
lean_dec(v_n_7_);
lean_dec(v_db_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Db_walkBack(lean_object* v_db_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_List_reverse___redArg(v_db_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Db_plan(lean_object* v_db_13_, lean_object* v_n_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_15_ = l_List_reverse___redArg(v_db_13_);
v___x_16_ = ((lean_object*)(l_Db_plan___closed__0));
lean_inc(v___x_15_);
v___x_17_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_15_, v___x_15_, v_n_14_, v___x_16_);
lean_dec(v___x_15_);
v___x_18_ = l_List_reverse___redArg(v___x_17_);
return v___x_18_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Model(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
