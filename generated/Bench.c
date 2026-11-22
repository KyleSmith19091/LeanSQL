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
lean_object* lean_string_push(lean_object*, uint32_t);
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
lean_object* lsql_bench_sql(lean_object*, lean_object*, lean_object*, uint8_t, double);
lean_object* lsql_bench_btree(lean_object*, lean_object*, lean_object*, uint8_t, double);
lean_object* lsql_bench_emitted(lean_object*, lean_object*, lean_object*, uint8_t, double);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
double lean_float_mul(double, double);
double round(double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lsql_check_sql(lean_object*, lean_object*, lean_object*);
lean_object* lsql_check_btree(lean_object*, lean_object*, lean_object*);
lean_object* lsql_check_emitted(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
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
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "| "};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " |"};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MISMATCH n="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ": sql="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " btree-c="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " emitted="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " btree-lean="};
static const lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_benchDb___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_benchDb___closed__0 = (const lean_object*)&l_benchDb___closed__0_value;
static const lean_ctor_object l_benchDb___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2000) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_benchDb___closed__1 = (const lean_object*)&l_benchDb___closed__1_value;
static const lean_ctor_object l_benchDb___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&l_benchDb___closed__1_value)}};
static const lean_object* l_benchDb___closed__2 = (const lean_object*)&l_benchDb___closed__2_value;
static const lean_ctor_object l_benchDb___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_benchDb___closed__2_value)}};
static const lean_object* l_benchDb___closed__3 = (const lean_object*)&l_benchDb___closed__3_value;
static const lean_ctor_object l_benchDb___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_benchDb___closed__0_value),((lean_object*)&l_benchDb___closed__0_value)}};
static const lean_object* l_benchDb___closed__4 = (const lean_object*)&l_benchDb___closed__4_value;
static const lean_ctor_object l_benchDb___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_benchDb___closed__4_value)}};
static const lean_object* l_benchDb___closed__5 = (const lean_object*)&l_benchDb___closed__5_value;
static const lean_string_object l_benchDb___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "One read transaction per query:\n"};
static const lean_object* l_benchDb___closed__6 = (const lean_object*)&l_benchDb___closed__6_value;
static const lean_string_object l_benchDb___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 133, .m_capacity = 133, .m_length = 132, .m_data = "| n | SQL (prepared) | SQL (prepare each time) | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |"};
static const lean_object* l_benchDb___closed__7 = (const lean_object*)&l_benchDb___closed__7_value;
static const lean_string_object l_benchDb___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "|--:|--:|--:|--:|--:|--:|"};
static const lean_object* l_benchDb___closed__8 = (const lean_object*)&l_benchDb___closed__8_value;
static const lean_string_object l_benchDb___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "\nOne read transaction kept open:\n"};
static const lean_object* l_benchDb___closed__9 = (const lean_object*)&l_benchDb___closed__9_value;
static const lean_string_object l_benchDb___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "| n | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |"};
static const lean_object* l_benchDb___closed__10 = (const lean_object*)&l_benchDb___closed__10_value;
static const lean_string_object l_benchDb___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "|--:|--:|--:|--:|"};
static const lean_object* l_benchDb___closed__11 = (const lean_object*)&l_benchDb___closed__11_value;
LEAN_EXPORT lean_object* l_benchDb(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_benchDb___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1(lean_object* v_s_234_){
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
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1___boxed(lean_object* v_s_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1(v_s_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__1(lean_object* v_s_242_){
_start:
{
uint32_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = 10;
v___x_245_ = lean_string_push(v_s_242_, v___x_244_);
v___x_246_ = l_IO_print___at___00IO_println___at___00benchDb_spec__1_spec__1(v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00benchDb_spec__1___boxed(lean_object* v_s_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_IO_println___at___00benchDb_spec__1(v_s_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg(lean_object* v_budget_258_, lean_object* v_path_259_, lean_object* v_table_260_, lean_object* v_as_x27_261_, lean_object* v_b_262_){
_start:
{
if (lean_obj_tag(v_as_x27_261_) == 0)
{
lean_object* v___x_264_; 
lean_dec(v_budget_258_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v_b_262_);
return v___x_264_;
}
else
{
lean_object* v_snd_265_; lean_object* v_head_266_; lean_object* v_tail_267_; lean_object* v_fst_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_496_; 
v_snd_265_ = lean_ctor_get(v_b_262_, 1);
lean_inc(v_snd_265_);
v_head_266_ = lean_ctor_get(v_as_x27_261_, 0);
v_tail_267_ = lean_ctor_get(v_as_x27_261_, 1);
v_fst_268_ = lean_ctor_get(v_b_262_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_b_262_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v_b_262_, 1);
lean_dec(v_unused_497_);
v___x_270_ = v_b_262_;
v_isShared_271_ = v_isSharedCheck_496_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_fst_268_);
lean_dec(v_b_262_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_496_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v_fst_272_; lean_object* v_snd_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_495_; 
v_fst_272_ = lean_ctor_get(v_snd_265_, 0);
v_snd_273_ = lean_ctor_get(v_snd_265_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v_snd_265_);
if (v_isSharedCheck_495_ == 0)
{
v___x_275_ = v_snd_265_;
v_isShared_276_ = v_isSharedCheck_495_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_snd_273_);
lean_inc(v_fst_272_);
lean_dec(v_snd_265_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_495_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
uint8_t v_ok_277_; uint8_t v_ok_279_; lean_object* v___x_410_; 
v_ok_277_ = 1;
v___x_410_ = lsql_open(v_path_259_, v_table_260_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_412_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_410_, 1);
v___x_412_ = lsql_check_sql(v_path_259_, v_table_260_, v_head_266_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_414_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
v___x_414_ = lsql_check_btree(v_path_259_, v_table_260_, v_head_266_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v___x_416_ = lsql_check_emitted(v_path_259_, v_table_260_, v_head_266_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_418_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_416_, 1);
lean_inc(v_head_266_);
v___x_418_ = l_planIO(v_a_411_, v_head_266_);
lean_dec(v_a_411_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v___x_420_; uint8_t v___x_451_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
v___x_420_ = l_checksum(v_a_419_);
lean_dec(v_a_419_);
v___x_451_ = lean_nat_dec_eq(v_a_413_, v_a_415_);
if (v___x_451_ == 0)
{
lean_dec(v_fst_268_);
goto v___jp_421_;
}
else
{
uint8_t v___x_452_; 
v___x_452_ = lean_nat_dec_eq(v_a_413_, v_a_417_);
if (v___x_452_ == 0)
{
lean_dec(v_fst_268_);
goto v___jp_421_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = lean_nat_dec_eq(v_a_413_, v___x_420_);
if (v___x_453_ == 0)
{
lean_dec(v_fst_268_);
goto v___jp_421_;
}
else
{
uint8_t v___x_454_; 
lean_dec(v___x_420_);
lean_dec(v_a_417_);
lean_dec(v_a_415_);
lean_dec(v_a_413_);
v___x_454_ = lean_unbox(v_fst_268_);
lean_dec(v_fst_268_);
v_ok_279_ = v___x_454_;
goto v___jp_278_;
}
}
}
v___jp_421_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_422_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__3));
lean_inc(v_head_266_);
v___x_423_ = l_Nat_reprFast(v_head_266_);
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
lean_dec_ref(v___x_423_);
v___x_425_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__4));
v___x_426_ = lean_string_append(v___x_424_, v___x_425_);
v___x_427_ = l_Nat_reprFast(v_a_413_);
v___x_428_ = lean_string_append(v___x_426_, v___x_427_);
lean_dec_ref(v___x_427_);
v___x_429_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__5));
v___x_430_ = lean_string_append(v___x_428_, v___x_429_);
v___x_431_ = l_Nat_reprFast(v_a_415_);
v___x_432_ = lean_string_append(v___x_430_, v___x_431_);
lean_dec_ref(v___x_431_);
v___x_433_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__6));
v___x_434_ = lean_string_append(v___x_432_, v___x_433_);
v___x_435_ = l_Nat_reprFast(v_a_417_);
v___x_436_ = lean_string_append(v___x_434_, v___x_435_);
lean_dec_ref(v___x_435_);
v___x_437_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__7));
v___x_438_ = lean_string_append(v___x_436_, v___x_437_);
v___x_439_ = l_Nat_reprFast(v___x_420_);
v___x_440_ = lean_string_append(v___x_438_, v___x_439_);
lean_dec_ref(v___x_439_);
v___x_441_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_440_);
if (lean_obj_tag(v___x_441_) == 0)
{
uint8_t v___x_442_; 
lean_dec_ref_known(v___x_441_, 1);
v___x_442_ = 0;
v_ok_279_ = v___x_442_;
goto v___jp_278_;
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_443_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_441_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_441_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_dec(v_a_417_);
lean_dec(v_a_415_);
lean_dec(v_a_413_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_fst_268_);
lean_dec(v_budget_258_);
v_a_455_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_418_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_418_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec(v_a_415_);
lean_dec(v_a_413_);
lean_dec(v_a_411_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_fst_268_);
lean_dec(v_budget_258_);
v_a_463_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_416_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_416_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec(v_a_413_);
lean_dec(v_a_411_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_fst_268_);
lean_dec(v_budget_258_);
v_a_471_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_414_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_414_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec(v_a_411_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_fst_268_);
lean_dec(v_budget_258_);
v_a_479_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_412_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_412_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_fst_268_);
lean_dec(v_budget_258_);
v_a_487_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_410_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_410_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
v___jp_278_:
{
uint8_t v___x_280_; double v___x_281_; lean_object* v___x_282_; 
v___x_280_ = 0;
lean_inc(v_budget_258_);
v___x_281_ = lean_float_of_nat(v_budget_258_);
v___x_282_ = lsql_bench_sql(v_path_259_, v_table_260_, v_head_266_, v___x_280_, v___x_281_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = lsql_bench_sql(v_path_259_, v_table_260_, v_head_266_, v_ok_277_, v___x_281_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = lsql_bench_btree(v_path_259_, v_table_260_, v_head_266_, v_ok_277_, v___x_281_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = lsql_bench_emitted(v_path_259_, v_table_260_, v_head_266_, v_ok_277_, v___x_281_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_290_; 
v_a_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_289_);
lean_dec_ref_known(v___x_288_, 1);
lean_inc(v_head_266_);
v___x_290_ = l_benchLean(v_path_259_, v_table_260_, v_head_266_, v_ok_277_, v_budget_258_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_292_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = lsql_bench_btree(v_path_259_, v_table_260_, v_head_266_, v___x_280_, v___x_281_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = lsql_bench_emitted(v_path_259_, v_table_260_, v_head_266_, v___x_280_, v___x_281_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_296_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_294_, 1);
lean_inc(v_head_266_);
v___x_296_ = l_benchLean(v_path_259_, v_table_260_, v_head_266_, v___x_280_, v_budget_258_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; double v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; double v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; double v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; double v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; double v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; double v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; double v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; double v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
v___x_298_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__0));
lean_inc(v_head_266_);
v___x_299_ = l_Nat_reprFast(v_head_266_);
v___x_300_ = lean_string_append(v___x_298_, v___x_299_);
lean_dec_ref(v___x_299_);
v___x_301_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__1));
v___x_302_ = lean_string_append(v___x_300_, v___x_301_);
v___x_303_ = lean_unbox_float(v_a_283_);
lean_dec(v_a_283_);
v___x_304_ = l_fmt(v___x_303_);
lean_inc_ref(v___x_302_);
v___x_305_ = lean_string_append(v___x_302_, v___x_304_);
lean_dec_ref(v___x_304_);
v___x_306_ = lean_string_append(v___x_305_, v___x_301_);
v___x_307_ = lean_unbox_float(v_a_285_);
lean_dec(v_a_285_);
v___x_308_ = l_fmt(v___x_307_);
v___x_309_ = lean_string_append(v___x_306_, v___x_308_);
lean_dec_ref(v___x_308_);
v___x_310_ = lean_string_append(v___x_309_, v___x_301_);
v___x_311_ = lean_unbox_float(v_a_287_);
lean_dec(v_a_287_);
v___x_312_ = l_fmt(v___x_311_);
v___x_313_ = lean_string_append(v___x_310_, v___x_312_);
lean_dec_ref(v___x_312_);
v___x_314_ = lean_string_append(v___x_313_, v___x_301_);
v___x_315_ = lean_unbox_float(v_a_289_);
lean_dec(v_a_289_);
v___x_316_ = l_fmt(v___x_315_);
v___x_317_ = lean_string_append(v___x_314_, v___x_316_);
lean_dec_ref(v___x_316_);
v___x_318_ = lean_string_append(v___x_317_, v___x_301_);
v___x_319_ = lean_unbox_float(v_a_291_);
lean_dec(v_a_291_);
v___x_320_ = l_fmt(v___x_319_);
v___x_321_ = lean_string_append(v___x_318_, v___x_320_);
lean_dec_ref(v___x_320_);
v___x_322_ = ((lean_object*)(l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___closed__2));
v___x_323_ = lean_string_append(v___x_321_, v___x_322_);
v___x_324_ = lean_array_push(v_fst_272_, v___x_323_);
v___x_325_ = lean_unbox_float(v_a_293_);
lean_dec(v_a_293_);
v___x_326_ = l_fmt(v___x_325_);
v___x_327_ = lean_string_append(v___x_302_, v___x_326_);
lean_dec_ref(v___x_326_);
v___x_328_ = lean_string_append(v___x_327_, v___x_301_);
v___x_329_ = lean_unbox_float(v_a_295_);
lean_dec(v_a_295_);
v___x_330_ = l_fmt(v___x_329_);
v___x_331_ = lean_string_append(v___x_328_, v___x_330_);
lean_dec_ref(v___x_330_);
v___x_332_ = lean_string_append(v___x_331_, v___x_301_);
v___x_333_ = lean_unbox_float(v_a_297_);
lean_dec(v_a_297_);
v___x_334_ = l_fmt(v___x_333_);
v___x_335_ = lean_string_append(v___x_332_, v___x_334_);
lean_dec_ref(v___x_334_);
v___x_336_ = lean_string_append(v___x_335_, v___x_322_);
v___x_337_ = lean_array_push(v_snd_273_, v___x_336_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_337_);
lean_ctor_set(v___x_275_, 0, v___x_324_);
v___x_339_ = v___x_275_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_324_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_345_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_340_ = lean_box(v_ok_279_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v___x_339_);
lean_ctor_set(v___x_270_, 0, v___x_340_);
v___x_342_ = v___x_270_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v___x_339_);
v___x_342_ = v_reuseFailAlloc_344_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
v_as_x27_261_ = v_tail_267_;
v_b_262_ = v___x_342_;
goto _start;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_a_295_);
lean_dec(v_a_293_);
lean_dec(v_a_291_);
lean_dec(v_a_289_);
lean_dec(v_a_287_);
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_346_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_296_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_296_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_a_293_);
lean_dec(v_a_291_);
lean_dec(v_a_289_);
lean_dec(v_a_287_);
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_354_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_294_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_294_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_a_291_);
lean_dec(v_a_289_);
lean_dec(v_a_287_);
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_362_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_292_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_292_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
lean_dec(v_a_289_);
lean_dec(v_a_287_);
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_370_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_290_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_290_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_a_287_);
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_378_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_288_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_288_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec(v_a_285_);
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_386_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_286_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_286_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v_a_283_);
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_394_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_284_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_284_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_del_object(v___x_275_);
lean_dec(v_snd_273_);
lean_dec(v_fst_272_);
lean_del_object(v___x_270_);
lean_dec(v_budget_258_);
v_a_402_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_282_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_282_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg___boxed(lean_object* v_budget_498_, lean_object* v_path_499_, lean_object* v_table_500_, lean_object* v_as_x27_501_, lean_object* v_b_502_, lean_object* v___y_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg(v_budget_498_, v_path_499_, v_table_500_, v_as_x27_501_, v_b_502_);
lean_dec(v_as_x27_501_);
lean_dec_ref(v_table_500_);
lean_dec_ref(v_path_499_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2(lean_object* v_as_505_, size_t v_sz_506_, size_t v_i_507_, lean_object* v_b_508_){
_start:
{
uint8_t v___x_510_; 
v___x_510_ = lean_usize_dec_lt(v_i_507_, v_sz_506_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; 
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v_b_508_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; lean_object* v_a_513_; lean_object* v___x_514_; 
v___x_512_ = lean_box(0);
v_a_513_ = lean_array_uget_borrowed(v_as_505_, v_i_507_);
lean_inc(v_a_513_);
v___x_514_ = l_IO_println___at___00benchDb_spec__1(v_a_513_);
if (lean_obj_tag(v___x_514_) == 0)
{
size_t v___x_515_; size_t v___x_516_; 
lean_dec_ref_known(v___x_514_, 1);
v___x_515_ = ((size_t)1ULL);
v___x_516_ = lean_usize_add(v_i_507_, v___x_515_);
v_i_507_ = v___x_516_;
v_b_508_ = v___x_512_;
goto _start;
}
else
{
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2___boxed(lean_object* v_as_518_, lean_object* v_sz_519_, lean_object* v_i_520_, lean_object* v_b_521_, lean_object* v___y_522_){
_start:
{
size_t v_sz_boxed_523_; size_t v_i_boxed_524_; lean_object* v_res_525_; 
v_sz_boxed_523_ = lean_unbox_usize(v_sz_519_);
lean_dec(v_sz_519_);
v_i_boxed_524_ = lean_unbox_usize(v_i_520_);
lean_dec(v_i_520_);
v_res_525_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2(v_as_518_, v_sz_boxed_523_, v_i_boxed_524_, v_b_521_);
lean_dec_ref(v_as_518_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_benchDb(lean_object* v_path_549_, lean_object* v_table_550_, lean_object* v_budgetMs_551_){
_start:
{
lean_object* v___x_553_; lean_object* v_budget_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_553_ = lean_unsigned_to_nat(1000000u);
v_budget_554_ = lean_nat_mul(v_budgetMs_551_, v___x_553_);
v___x_555_ = ((lean_object*)(l_benchDb___closed__3));
v___x_556_ = ((lean_object*)(l_benchDb___closed__5));
v___x_557_ = l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg(v_budget_554_, v_path_549_, v_table_550_, v___x_555_, v___x_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v_snd_559_; lean_object* v_fst_560_; lean_object* v_fst_561_; lean_object* v_snd_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_557_, 1);
v_snd_559_ = lean_ctor_get(v_a_558_, 1);
lean_inc(v_snd_559_);
v_fst_560_ = lean_ctor_get(v_a_558_, 0);
lean_inc(v_fst_560_);
lean_dec(v_a_558_);
v_fst_561_ = lean_ctor_get(v_snd_559_, 0);
lean_inc(v_fst_561_);
v_snd_562_ = lean_ctor_get(v_snd_559_, 1);
lean_inc(v_snd_562_);
lean_dec(v_snd_559_);
v___x_563_ = ((lean_object*)(l_benchDb___closed__6));
v___x_564_ = l_IO_println___at___00benchDb_spec__1(v___x_563_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec_ref_known(v___x_564_, 1);
v___x_565_ = ((lean_object*)(l_benchDb___closed__7));
v___x_566_ = l_IO_println___at___00benchDb_spec__1(v___x_565_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec_ref_known(v___x_566_, 1);
v___x_567_ = ((lean_object*)(l_benchDb___closed__8));
v___x_568_ = l_IO_println___at___00benchDb_spec__1(v___x_567_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v___x_569_; size_t v_sz_570_; size_t v___x_571_; lean_object* v___x_572_; 
lean_dec_ref_known(v___x_568_, 1);
v___x_569_ = lean_box(0);
v_sz_570_ = lean_array_size(v_fst_561_);
v___x_571_ = ((size_t)0ULL);
v___x_572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2(v_fst_561_, v_sz_570_, v___x_571_, v___x_569_);
lean_dec(v_fst_561_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec_ref_known(v___x_572_, 1);
v___x_573_ = ((lean_object*)(l_benchDb___closed__9));
v___x_574_ = l_IO_println___at___00benchDb_spec__1(v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec_ref_known(v___x_574_, 1);
v___x_575_ = ((lean_object*)(l_benchDb___closed__10));
v___x_576_ = l_IO_println___at___00benchDb_spec__1(v___x_575_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; 
lean_dec_ref_known(v___x_576_, 1);
v___x_577_ = ((lean_object*)(l_benchDb___closed__11));
v___x_578_ = l_IO_println___at___00benchDb_spec__1(v___x_577_);
if (lean_obj_tag(v___x_578_) == 0)
{
size_t v_sz_579_; lean_object* v___x_580_; 
lean_dec_ref_known(v___x_578_, 1);
v_sz_579_ = lean_array_size(v_snd_562_);
v___x_580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00benchDb_spec__2(v_snd_562_, v_sz_579_, v___x_571_, v___x_569_);
lean_dec(v_snd_562_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_587_ == 0)
{
lean_object* v_unused_588_; 
v_unused_588_ = lean_ctor_get(v___x_580_, 0);
lean_dec(v_unused_588_);
v___x_582_ = v___x_580_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_dec(v___x_580_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v_fst_560_);
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_fst_560_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v_fst_560_);
v_a_589_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_580_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_580_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_560_);
v_a_597_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_578_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_578_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_560_);
v_a_605_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_576_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_576_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_560_);
v_a_613_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_574_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_574_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_560_);
v_a_621_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_572_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_572_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_561_);
lean_dec(v_fst_560_);
v_a_629_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_568_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_568_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_561_);
lean_dec(v_fst_560_);
v_a_637_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_566_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_566_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_snd_562_);
lean_dec(v_fst_561_);
lean_dec(v_fst_560_);
v_a_645_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_564_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_564_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
v_a_653_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_557_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_557_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_benchDb___boxed(lean_object* v_path_661_, lean_object* v_table_662_, lean_object* v_budgetMs_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_benchDb(v_path_661_, v_table_662_, v_budgetMs_663_);
lean_dec(v_budgetMs_663_);
lean_dec_ref(v_table_662_);
lean_dec_ref(v_path_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0(lean_object* v_budget_666_, lean_object* v_path_667_, lean_object* v_table_668_, lean_object* v_as_669_, lean_object* v_as_x27_670_, lean_object* v_b_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_List_forIn_x27_loop___at___00benchDb_spec__0___redArg(v_budget_666_, v_path_667_, v_table_668_, v_as_x27_670_, v_b_671_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00benchDb_spec__0___boxed(lean_object* v_budget_675_, lean_object* v_path_676_, lean_object* v_table_677_, lean_object* v_as_678_, lean_object* v_as_x27_679_, lean_object* v_b_680_, lean_object* v_a_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_List_forIn_x27_loop___at___00benchDb_spec__0(v_budget_675_, v_path_676_, v_table_677_, v_as_678_, v_as_x27_679_, v_b_680_, v_a_681_);
lean_dec(v_as_x27_679_);
lean_dec(v_as_678_);
lean_dec_ref(v_table_677_);
lean_dec_ref(v_path_676_);
return v_res_683_;
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
