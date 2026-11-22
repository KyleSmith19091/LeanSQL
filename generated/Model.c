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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_MergeSort_Internal_mergeSortTR_u2082___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Db_byIdDesc___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_byIdDesc___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Db_byIdDesc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Db_byIdDesc___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Db_byIdDesc___closed__0 = (const lean_object*)&l_Db_byIdDesc___closed__0_value;
LEAN_EXPORT lean_object* l_Db_byIdDesc(lean_object*);
static const lean_array_object l_Db_lastN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Db_lastN___closed__0 = (const lean_object*)&l_Db_lastN___closed__0_value;
LEAN_EXPORT lean_object* l_Db_lastN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Db_walkBack(lean_object*);
LEAN_EXPORT lean_object* l_Db_plan(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Db_byIdDesc___lam__0(lean_object* v_a_1_, lean_object* v_b_2_){
_start:
{
lean_object* v_id_3_; lean_object* v_id_4_; uint8_t v___x_5_; 
v_id_3_ = lean_ctor_get(v_b_2_, 0);
v_id_4_ = lean_ctor_get(v_a_1_, 0);
v___x_5_ = lean_nat_dec_le(v_id_3_, v_id_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Db_byIdDesc___lam__0___boxed(lean_object* v_a_6_, lean_object* v_b_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Db_byIdDesc___lam__0(v_a_6_, v_b_7_);
lean_dec_ref(v_b_7_);
lean_dec_ref(v_a_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT lean_object* l_Db_byIdDesc(lean_object* v_db_11_){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; 
v___f_12_ = ((lean_object*)(l_Db_byIdDesc___closed__0));
v___x_13_ = l_List_MergeSort_Internal_mergeSortTR_u2082___redArg(v_db_11_, v___f_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Db_lastN(lean_object* v_db_16_, lean_object* v_n_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_18_ = l_Db_byIdDesc(v_db_16_);
v___x_19_ = ((lean_object*)(l_Db_lastN___closed__0));
lean_inc(v___x_18_);
v___x_20_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_18_, v___x_18_, v_n_17_, v___x_19_);
lean_dec(v___x_18_);
v___x_21_ = l_List_reverse___redArg(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Db_walkBack(lean_object* v_db_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_List_reverse___redArg(v_db_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Db_plan(lean_object* v_db_24_, lean_object* v_n_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_26_ = l_List_reverse___redArg(v_db_24_);
v___x_27_ = ((lean_object*)(l_Db_lastN___closed__0));
lean_inc(v___x_26_);
v___x_28_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_26_, v___x_26_, v_n_25_, v___x_27_);
lean_dec(v___x_26_);
v___x_29_ = l_List_reverse___redArg(v___x_28_);
return v___x_29_;
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
