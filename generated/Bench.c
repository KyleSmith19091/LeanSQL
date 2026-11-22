// Lean compiler output
// Module: Bench
// Imports: public import Init public meta import Init public import Plan
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
lean_object* lean_get_stdout();
lean_object* lsql_open(lean_object*, lean_object*);
lean_object* l_planIO(lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lsql_end(lean_object*);
lean_object* lsql_begin(lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
double lean_float_mul(double, double);
double round(double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lsql_bench_sql(lean_object*, lean_object*, lean_object*, uint8_t, double);
lean_object* lsql_bench_btree(lean_object*, lean_object*, lean_object*, uint8_t, double);
lean_object* lsql_check_sql(lean_object*, lean_object*, lean_object*);
lean_object* lsql_check_btree(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checksum_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checksum_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_checksum(lean_object*);
LEAN_EXPORT lean_object* l_checksum___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_benchLean(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_benchLean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_fmt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_fmt___closed__0;
static const lean_string_object l_fmt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_fmt___closed__1 = (const lean_object*)&l_fmt___closed__1_value;
LEAN_EXPORT lean_object* l_fmt(double);
LEAN_EXPORT lean_object* l_fmt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "| "};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " |"};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MISMATCH n="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ": sql="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " btree-c="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " btree-lean="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_benchDb___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2000) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_benchDb___closed__0 = (const lean_object*)&l_benchDb___closed__0_value;
static const lean_ctor_object l_benchDb___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&l_benchDb___closed__0_value)}};
static const lean_object* l_benchDb___closed__1 = (const lean_object*)&l_benchDb___closed__1_value;
static const lean_ctor_object l_benchDb___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_benchDb___closed__1_value)}};
static const lean_object* l_benchDb___closed__2 = (const lean_object*)&l_benchDb___closed__2_value;
LEAN_EXPORT lean_object* l_benchDb(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_benchDb___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checksum_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v_id_5_; lean_object* v_body_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_head_3_ = lean_ctor_get(v_x_2_, 0);
v_tail_4_ = lean_ctor_get(v_x_2_, 1);
v_id_5_ = lean_ctor_get(v_head_3_, 0);
v_body_6_ = lean_ctor_get(v_head_3_, 1);
v___x_7_ = lean_nat_add(v_x_1_, v_id_5_);
lean_dec(v_x_1_);
v___x_8_ = lean_string_utf8_byte_size(v_body_6_);
v___x_9_ = lean_nat_add(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
v_x_1_ = v___x_9_;
v_x_2_ = v_tail_4_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00checksum_spec__0___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_List_foldl___at___00checksum_spec__0(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_checksum(lean_object* v_rows_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_unsigned_to_nat(0u);
v___x_16_ = l_List_foldl___at___00checksum_spec__0(v___x_15_, v_rows_14_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_checksum___boxed(lean_object* v_rows_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_checksum(v_rows_17_);
lean_dec(v_rows_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg(lean_object* v_a_19_, lean_object* v_n_20_, uint8_t v_txnPerQuery_21_, lean_object* v_range_22_, lean_object* v_b_23_, lean_object* v_i_24_){
_start:
{
lean_object* v_stop_26_; lean_object* v_step_27_; uint8_t v___x_28_; 
v_stop_26_ = lean_ctor_get(v_range_22_, 1);
v_step_27_ = lean_ctor_get(v_range_22_, 2);
v___x_28_ = lean_nat_dec_lt(v_i_24_, v_stop_26_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; 
lean_dec(v_i_24_);
lean_dec(v_n_20_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v_b_23_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(0);
if (v_txnPerQuery_21_ == 0)
{
goto v___jp_34_;
}
else
{
lean_object* v___x_45_; 
v___x_45_ = lsql_begin(v_a_19_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_dec_ref_known(v___x_45_, 1);
goto v___jp_34_;
}
else
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_53_; 
lean_dec(v_i_24_);
lean_dec(v_n_20_);
v_a_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_53_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
if (v_isShared_49_ == 0)
{
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_46_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
v___jp_31_:
{
lean_object* v___x_32_; 
v___x_32_ = lean_nat_add(v_i_24_, v_step_27_);
lean_dec(v_i_24_);
v_b_23_ = v___x_30_;
v_i_24_ = v___x_32_;
goto _start;
}
v___jp_34_:
{
lean_object* v___x_35_; 
lean_inc(v_n_20_);
v___x_35_ = l_planIO(v_a_19_, v_n_20_);
if (lean_obj_tag(v___x_35_) == 0)
{
lean_dec_ref_known(v___x_35_, 1);
if (v_txnPerQuery_21_ == 0)
{
goto v___jp_31_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lsql_end(v_a_19_);
if (lean_obj_tag(v___x_36_) == 0)
{
lean_dec_ref_known(v___x_36_, 1);
goto v___jp_31_;
}
else
{
lean_dec(v_i_24_);
lean_dec(v_n_20_);
return v___x_36_;
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
lean_dec(v_i_24_);
lean_dec(v_n_20_);
v_a_37_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_35_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_35_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg___boxed(lean_object* v_a_54_, lean_object* v_n_55_, lean_object* v_txnPerQuery_56_, lean_object* v_range_57_, lean_object* v_b_58_, lean_object* v_i_59_, lean_object* v___y_60_){
_start:
{
uint8_t v_txnPerQuery_boxed_61_; lean_object* v_res_62_; 
v_txnPerQuery_boxed_61_ = lean_unbox(v_txnPerQuery_56_);
v_res_62_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg(v_a_54_, v_n_55_, v_txnPerQuery_boxed_61_, v_range_57_, v_b_58_, v_i_59_);
lean_dec_ref(v_range_57_);
lean_dec(v_a_54_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg(lean_object* v_val_67_, lean_object* v_budgetNs_68_, lean_object* v_a_69_, lean_object* v_n_70_, uint8_t v_txnPerQuery_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_fst_74_; lean_object* v_snd_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_104_; 
v_fst_74_ = lean_ctor_get(v_a_72_, 0);
v_snd_75_ = lean_ctor_get(v_a_72_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_104_ == 0)
{
v___x_77_ = v_a_72_;
v_isShared_78_ = v_isSharedCheck_104_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_snd_75_);
lean_inc(v_fst_74_);
lean_dec(v_a_72_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_104_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_79_ = lean_nat_sub(v_snd_75_, v_val_67_);
v___x_80_ = lean_nat_dec_lt(v___x_79_, v_budgetNs_68_);
lean_dec(v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_82_; 
lean_dec(v_n_70_);
if (v_isShared_78_ == 0)
{
v___x_82_ = v___x_77_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_fst_74_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_snd_75_);
v___x_82_ = v_reuseFailAlloc_84_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; 
v___x_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec(v_snd_75_);
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = lean_unsigned_to_nat(8u);
v___x_87_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___closed__0));
v___x_88_ = lean_box(0);
lean_inc(v_n_70_);
v___x_89_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg(v_a_69_, v_n_70_, v_txnPerQuery_71_, v___x_87_, v___x_88_, v___x_85_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
lean_dec_ref_known(v___x_89_, 1);
v___x_90_ = lean_nat_add(v_fst_74_, v___x_86_);
lean_dec(v_fst_74_);
v___x_91_ = lean_io_mono_nanos_now();
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v___x_91_);
lean_ctor_set(v___x_77_, 0, v___x_90_);
v___x_93_ = v___x_77_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_95_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
v_a_72_ = v___x_93_;
goto _start;
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
lean_del_object(v___x_77_);
lean_dec(v_fst_74_);
lean_dec(v_n_70_);
v_a_96_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_89_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_89_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg___boxed(lean_object* v_val_105_, lean_object* v_budgetNs_106_, lean_object* v_a_107_, lean_object* v_n_108_, lean_object* v_txnPerQuery_109_, lean_object* v_a_110_, lean_object* v___y_111_){
_start:
{
uint8_t v_txnPerQuery_boxed_112_; lean_object* v_res_113_; 
v_txnPerQuery_boxed_112_ = lean_unbox(v_txnPerQuery_109_);
v_res_113_ = l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg(v_val_105_, v_budgetNs_106_, v_a_107_, v_n_108_, v_txnPerQuery_boxed_112_, v_a_110_);
lean_dec(v_a_107_);
lean_dec(v_budgetNs_106_);
lean_dec(v_val_105_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_benchLean(lean_object* v_path_114_, lean_object* v_table_115_, lean_object* v_n_116_, uint8_t v_txnPerQuery_117_, lean_object* v_budgetNs_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lsql_open(v_path_114_, v_table_115_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_122_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref_known(v___x_120_, 1);
lean_inc(v_n_116_);
v___x_122_ = l_planIO(v_a_121_, v_n_116_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec_ref_known(v___x_122_, 1);
v___x_123_ = lean_io_mono_nanos_now();
v___x_124_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_123_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
v___x_126_ = l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg(v___x_123_, v_budgetNs_118_, v_a_121_, v_n_116_, v_txnPerQuery_117_, v___x_125_);
lean_dec(v_a_121_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_141_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_141_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_141_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_141_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_fst_131_; lean_object* v_snd_132_; lean_object* v___x_133_; double v___x_134_; double v___x_135_; double v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v_fst_131_ = lean_ctor_get(v_a_127_, 0);
lean_inc(v_fst_131_);
v_snd_132_ = lean_ctor_get(v_a_127_, 1);
lean_inc(v_snd_132_);
lean_dec(v_a_127_);
v___x_133_ = lean_nat_sub(v_snd_132_, v___x_123_);
lean_dec(v___x_123_);
lean_dec(v_snd_132_);
v___x_134_ = lean_float_of_nat(v___x_133_);
v___x_135_ = lean_float_of_nat(v_fst_131_);
v___x_136_ = lean_float_div(v___x_134_, v___x_135_);
v___x_137_ = lean_box_float(v___x_136_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v___x_137_);
v___x_139_ = v___x_129_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec(v___x_123_);
v_a_142_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_126_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_126_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec(v_a_121_);
lean_dec(v_n_116_);
v_a_150_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_122_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_122_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec(v_n_116_);
v_a_158_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_120_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_120_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_benchLean___boxed(lean_object* v_path_166_, lean_object* v_table_167_, lean_object* v_n_168_, lean_object* v_txnPerQuery_169_, lean_object* v_budgetNs_170_, lean_object* v_a_171_){
_start:
{
uint8_t v_txnPerQuery_boxed_172_; lean_object* v_res_173_; 
v_txnPerQuery_boxed_172_ = lean_unbox(v_txnPerQuery_169_);
v_res_173_ = l_benchLean(v_path_166_, v_table_167_, v_n_168_, v_txnPerQuery_boxed_172_, v_budgetNs_170_);
lean_dec(v_budgetNs_170_);
lean_dec_ref(v_table_167_);
lean_dec_ref(v_path_166_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0(lean_object* v_a_174_, lean_object* v_n_175_, uint8_t v_txnPerQuery_176_, lean_object* v_range_177_, lean_object* v_b_178_, lean_object* v_i_179_, lean_object* v_hs_180_, lean_object* v_hl_181_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___redArg(v_a_174_, v_n_175_, v_txnPerQuery_176_, v_range_177_, v_b_178_, v_i_179_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0___boxed(lean_object* v_a_184_, lean_object* v_n_185_, lean_object* v_txnPerQuery_186_, lean_object* v_range_187_, lean_object* v_b_188_, lean_object* v_i_189_, lean_object* v_hs_190_, lean_object* v_hl_191_, lean_object* v___y_192_){
_start:
{
uint8_t v_txnPerQuery_boxed_193_; lean_object* v_res_194_; 
v_txnPerQuery_boxed_193_ = lean_unbox(v_txnPerQuery_186_);
v_res_194_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00benchLean_spec__0(v_a_184_, v_n_185_, v_txnPerQuery_boxed_193_, v_range_187_, v_b_188_, v_i_189_, v_hs_190_, v_hl_191_);
lean_dec_ref(v_range_187_);
lean_dec(v_a_184_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1(lean_object* v_val_195_, lean_object* v_budgetNs_196_, lean_object* v_a_197_, lean_object* v_n_198_, uint8_t v_txnPerQuery_199_, lean_object* v_inst_200_, lean_object* v_a_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___redArg(v_val_195_, v_budgetNs_196_, v_a_197_, v_n_198_, v_txnPerQuery_199_, v_a_201_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1___boxed(lean_object* v_val_204_, lean_object* v_budgetNs_205_, lean_object* v_a_206_, lean_object* v_n_207_, lean_object* v_txnPerQuery_208_, lean_object* v_inst_209_, lean_object* v_a_210_, lean_object* v___y_211_){
_start:
{
uint8_t v_txnPerQuery_boxed_212_; lean_object* v_res_213_; 
v_txnPerQuery_boxed_212_ = lean_unbox(v_txnPerQuery_208_);
v_res_213_ = l___private_Init_While_0__repeatM_erased___at___00benchLean_spec__1(v_val_204_, v_budgetNs_205_, v_a_206_, v_n_207_, v_txnPerQuery_boxed_212_, v_inst_209_, v_a_210_);
lean_dec(v_a_206_);
lean_dec(v_budgetNs_205_);
lean_dec(v_val_204_);
return v_res_213_;
}
}
static double _init_l_fmt___closed__0(void){
_start:
{
lean_object* v___x_214_; double v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(10u);
v___x_215_ = lean_float_of_nat(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_fmt(double v_ns_217_){
_start:
{
lean_object* v___x_218_; double v___x_219_; double v___x_220_; double v___x_221_; uint64_t v___x_222_; lean_object* v_tenths_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_218_ = lean_unsigned_to_nat(10u);
v___x_219_ = lean_float_once(&l_fmt___closed__0, &l_fmt___closed__0_once, _init_l_fmt___closed__0);
v___x_220_ = lean_float_mul(v_ns_217_, v___x_219_);
v___x_221_ = round(v___x_220_);
v___x_222_ = lean_float_to_uint64(v___x_221_);
v_tenths_223_ = lean_uint64_to_nat(v___x_222_);
v___x_224_ = lean_nat_div(v_tenths_223_, v___x_218_);
v___x_225_ = l_Nat_reprFast(v___x_224_);
v___x_226_ = ((lean_object*)(l_fmt___closed__1));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v___x_228_ = lean_nat_mod(v_tenths_223_, v___x_218_);
lean_dec(v_tenths_223_);
v___x_229_ = l_Nat_reprFast(v___x_228_);
v___x_230_ = lean_string_append(v___x_227_, v___x_229_);
lean_dec_ref(v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_fmt___boxed(lean_object* v_ns_231_){
_start:
{
double v_ns_boxed_232_; lean_object* v_res_233_; 
v_ns_boxed_232_ = lean_unbox_float(v_ns_231_);
lean_dec_ref(v_ns_231_);
v_res_233_ = l_fmt(v_ns_boxed_232_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0(lean_object* v_s_234_){
_start:
{
lean_object* v___x_236_; lean_object* v_putStr_237_; lean_object* v___x_238_; 
v___x_236_ = lean_get_stdout();
v_putStr_237_ = lean_ctor_get(v___x_236_, 4);
lean_inc_ref(v_putStr_237_);
lean_dec_ref(v___x_236_);
v___x_238_ = lean_apply_2(v_putStr_237_, v_s_234_, lean_box(0));
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0___boxed(lean_object* v_s_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0(v_s_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__0(lean_object* v_s_242_){
_start:
{
uint32_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = 10;
v___x_245_ = lean_string_push(v_s_242_, v___x_244_);
v___x_246_ = l_IO_print___at___00IO_println___at___00benchDb_spec__0_spec__0(v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__0___boxed(lean_object* v_s_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_IO_println___at___00benchDb_spec__0(v_s_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg(lean_object* v_budget_257_, lean_object* v_path_258_, lean_object* v_table_259_, lean_object* v_as_x27_260_, uint8_t v_b_261_){
_start:
{
if (lean_obj_tag(v_as_x27_260_) == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v_budget_257_);
v___x_263_ = lean_box(v_b_261_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
else
{
lean_object* v_head_265_; lean_object* v_tail_266_; uint8_t v_ok_267_; uint8_t v_ok_269_; lean_object* v___x_372_; 
v_head_265_ = lean_ctor_get(v_as_x27_260_, 0);
v_tail_266_ = lean_ctor_get(v_as_x27_260_, 1);
v_ok_267_ = 1;
v___x_372_ = lsql_open(v_path_258_, v_table_259_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_374_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v___x_374_ = lsql_check_sql(v_path_258_, v_table_259_, v_head_265_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
v___x_376_ = lsql_check_btree(v_path_258_, v_table_259_, v_head_265_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_378_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_376_, 1);
lean_inc(v_head_265_);
v___x_378_ = l_planIO(v_a_373_, v_head_265_);
lean_dec(v_a_373_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_380_; uint8_t v___x_407_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref_known(v___x_378_, 1);
v___x_380_ = l_checksum(v_a_379_);
lean_dec(v_a_379_);
v___x_407_ = lean_nat_dec_eq(v_a_375_, v_a_377_);
if (v___x_407_ == 0)
{
goto v___jp_381_;
}
else
{
uint8_t v___x_408_; 
v___x_408_ = lean_nat_dec_eq(v_a_375_, v___x_380_);
if (v___x_408_ == 0)
{
goto v___jp_381_;
}
else
{
lean_dec(v___x_380_);
lean_dec(v_a_377_);
lean_dec(v_a_375_);
v_ok_269_ = v_b_261_;
goto v___jp_268_;
}
}
v___jp_381_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_382_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__3));
lean_inc(v_head_265_);
v___x_383_ = l_Nat_reprFast(v_head_265_);
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
lean_dec_ref(v___x_383_);
v___x_385_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__4));
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
v___x_387_ = l_Nat_reprFast(v_a_375_);
v___x_388_ = lean_string_append(v___x_386_, v___x_387_);
lean_dec_ref(v___x_387_);
v___x_389_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__5));
v___x_390_ = lean_string_append(v___x_388_, v___x_389_);
v___x_391_ = l_Nat_reprFast(v_a_377_);
v___x_392_ = lean_string_append(v___x_390_, v___x_391_);
lean_dec_ref(v___x_391_);
v___x_393_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__6));
v___x_394_ = lean_string_append(v___x_392_, v___x_393_);
v___x_395_ = l_Nat_reprFast(v___x_380_);
v___x_396_ = lean_string_append(v___x_394_, v___x_395_);
lean_dec_ref(v___x_395_);
v___x_397_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
uint8_t v___x_398_; 
lean_dec_ref_known(v___x_397_, 1);
v___x_398_ = 0;
v_ok_269_ = v___x_398_;
goto v___jp_268_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_budget_257_);
v_a_399_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_397_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_a_377_);
lean_dec(v_a_375_);
lean_dec(v_budget_257_);
v_a_409_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_378_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_378_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_a_375_);
lean_dec(v_a_373_);
lean_dec(v_budget_257_);
v_a_417_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_376_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_376_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec(v_a_373_);
lean_dec(v_budget_257_);
v_a_425_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_374_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_374_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_budget_257_);
v_a_433_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_372_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_372_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
v___jp_268_:
{
uint8_t v___x_270_; double v___x_271_; lean_object* v___x_272_; 
v___x_270_ = 0;
lean_inc(v_budget_257_);
v___x_271_ = lean_float_of_nat(v_budget_257_);
v___x_272_ = lsql_bench_sql(v_path_258_, v_table_259_, v_head_265_, v___x_270_, v___x_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_274_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_a_273_);
lean_dec_ref_known(v___x_272_, 1);
v___x_274_ = lsql_bench_sql(v_path_258_, v_table_259_, v_head_265_, v_ok_267_, v___x_271_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_276_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
v___x_276_ = lsql_bench_btree(v_path_258_, v_table_259_, v_head_265_, v_ok_267_, v___x_271_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
lean_inc(v_head_265_);
v___x_278_ = l_benchLean(v_path_258_, v_table_259_, v_head_265_, v_ok_267_, v_budget_257_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_280_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v___x_280_ = lsql_bench_btree(v_path_258_, v_table_259_, v_head_265_, v___x_270_, v___x_271_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
lean_inc(v_head_265_);
v___x_282_ = l_benchLean(v_path_258_, v_table_259_, v_head_265_, v___x_270_, v_budget_257_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; double v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; double v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; double v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; double v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; double v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; double v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__0));
lean_inc(v_head_265_);
v___x_285_ = l_Nat_reprFast(v_head_265_);
v___x_286_ = lean_string_append(v___x_284_, v___x_285_);
lean_dec_ref(v___x_285_);
v___x_287_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__1));
v___x_288_ = lean_string_append(v___x_286_, v___x_287_);
v___x_289_ = lean_unbox_float(v_a_273_);
lean_dec(v_a_273_);
v___x_290_ = l_fmt(v___x_289_);
v___x_291_ = lean_string_append(v___x_288_, v___x_290_);
lean_dec_ref(v___x_290_);
v___x_292_ = lean_string_append(v___x_291_, v___x_287_);
v___x_293_ = lean_unbox_float(v_a_275_);
lean_dec(v_a_275_);
v___x_294_ = l_fmt(v___x_293_);
v___x_295_ = lean_string_append(v___x_292_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = lean_string_append(v___x_295_, v___x_287_);
v___x_297_ = lean_unbox_float(v_a_277_);
lean_dec(v_a_277_);
v___x_298_ = l_fmt(v___x_297_);
v___x_299_ = lean_string_append(v___x_296_, v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_string_append(v___x_299_, v___x_287_);
v___x_301_ = lean_unbox_float(v_a_279_);
lean_dec(v_a_279_);
v___x_302_ = l_fmt(v___x_301_);
v___x_303_ = lean_string_append(v___x_300_, v___x_302_);
lean_dec_ref(v___x_302_);
v___x_304_ = lean_string_append(v___x_303_, v___x_287_);
v___x_305_ = lean_unbox_float(v_a_281_);
lean_dec(v_a_281_);
v___x_306_ = l_fmt(v___x_305_);
v___x_307_ = lean_string_append(v___x_304_, v___x_306_);
lean_dec_ref(v___x_306_);
v___x_308_ = lean_string_append(v___x_307_, v___x_287_);
v___x_309_ = lean_unbox_float(v_a_283_);
lean_dec(v_a_283_);
v___x_310_ = l_fmt(v___x_309_);
v___x_311_ = lean_string_append(v___x_308_, v___x_310_);
lean_dec_ref(v___x_310_);
v___x_312_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___closed__2));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = l_IO_println___at___00benchDb_spec__0(v___x_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_dec_ref_known(v___x_314_, 1);
v_as_x27_260_ = v_tail_266_;
v_b_261_ = v_ok_269_;
goto _start;
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec(v_budget_257_);
v_a_316_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_314_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_314_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_a_281_);
lean_dec(v_a_279_);
lean_dec(v_a_277_);
lean_dec(v_a_275_);
lean_dec(v_a_273_);
lean_dec(v_budget_257_);
v_a_324_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_282_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_282_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec(v_a_279_);
lean_dec(v_a_277_);
lean_dec(v_a_275_);
lean_dec(v_a_273_);
lean_dec(v_budget_257_);
v_a_332_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_280_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_280_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v_a_277_);
lean_dec(v_a_275_);
lean_dec(v_a_273_);
lean_dec(v_budget_257_);
v_a_340_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_278_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_278_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_a_275_);
lean_dec(v_a_273_);
lean_dec(v_budget_257_);
v_a_348_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_276_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_276_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_a_273_);
lean_dec(v_budget_257_);
v_a_356_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_274_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_274_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_budget_257_);
v_a_364_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_272_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_272_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg___boxed(lean_object* v_budget_441_, lean_object* v_path_442_, lean_object* v_table_443_, lean_object* v_as_x27_444_, lean_object* v_b_445_, lean_object* v___y_446_){
_start:
{
uint8_t v_b_boxed_447_; lean_object* v_res_448_; 
v_b_boxed_447_ = lean_unbox(v_b_445_);
v_res_448_ = l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg(v_budget_441_, v_path_442_, v_table_443_, v_as_x27_444_, v_b_boxed_447_);
lean_dec(v_as_x27_444_);
lean_dec_ref(v_table_443_);
lean_dec_ref(v_path_442_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_benchDb(lean_object* v_path_458_, lean_object* v_table_459_, lean_object* v_budgetMs_460_){
_start:
{
lean_object* v___x_462_; lean_object* v_budget_463_; uint8_t v_ok_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_462_ = lean_unsigned_to_nat(1000000u);
v_budget_463_ = lean_nat_mul(v_budgetMs_460_, v___x_462_);
v_ok_464_ = 1;
v___x_465_ = ((lean_object*)(l_benchDb___closed__2));
v___x_466_ = l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg(v_budget_463_, v_path_458_, v_table_459_, v___x_465_, v_ok_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_benchDb___boxed(lean_object* v_path_467_, lean_object* v_table_468_, lean_object* v_budgetMs_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_benchDb(v_path_467_, v_table_468_, v_budgetMs_469_);
lean_dec(v_budgetMs_469_);
lean_dec_ref(v_table_468_);
lean_dec_ref(v_path_467_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1(lean_object* v_budget_472_, lean_object* v_path_473_, lean_object* v_table_474_, lean_object* v_as_475_, lean_object* v_as_x27_476_, uint8_t v_b_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_List_forIn_x27_loop___at___00benchDb_spec__1___redArg(v_budget_472_, v_path_473_, v_table_474_, v_as_x27_476_, v_b_477_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__1___boxed(lean_object* v_budget_481_, lean_object* v_path_482_, lean_object* v_table_483_, lean_object* v_as_484_, lean_object* v_as_x27_485_, lean_object* v_b_486_, lean_object* v_a_487_, lean_object* v___y_488_){
_start:
{
uint8_t v_b_boxed_489_; lean_object* v_res_490_; 
v_b_boxed_489_ = lean_unbox(v_b_486_);
v_res_490_ = l_List_forIn_x27_loop___at___00benchDb_spec__1(v_budget_481_, v_path_482_, v_table_483_, v_as_484_, v_as_x27_485_, v_b_boxed_489_, v_a_487_);
lean_dec(v_as_x27_485_);
lean_dec(v_as_484_);
lean_dec_ref(v_table_483_);
lean_dec_ref(v_path_482_);
return v_res_490_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Plan(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Bench(uint8_t builtin) {
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
res = initialize_Plan(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
