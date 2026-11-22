// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import Plan public import Bench
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_println___at___00benchDb_spec__0(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lsql_open(lean_object*, lean_object*);
lean_object* l_planIO(lean_object*, lean_object*);
lean_object* lsql_page_fetches(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_benchDb(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\t"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "usage: leansql-demo <db file> <table> <n>\n       leansql-demo bench <db file> <table> <ms per cell>"};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_string_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_string_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " rows, "};
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static const lean_string_object l_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " page fetches]"};
static const lean_object* l_main___closed__3 = (const lean_object*)&l_main___closed__3_value;
static const lean_string_object l_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "n must be a number"};
static const lean_object* l_main___closed__4 = (const lean_object*)&l_main___closed__4_value;
static const lean_string_object l_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bench"};
static const lean_object* l_main___closed__5 = (const lean_object*)&l_main___closed__5_value;
static const lean_string_object l_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "budget must be a number of milliseconds"};
static const lean_object* l_main___closed__6 = (const lean_object*)&l_main___closed__6_value;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* l_main___boxed__const__3;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object* v_as_x27_2_, lean_object* v_b_3_){
_start:
{
if (lean_obj_tag(v_as_x27_2_) == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_b_3_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v_id_8_; lean_object* v_body_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_head_6_ = lean_ctor_get(v_as_x27_2_, 0);
v_tail_7_ = lean_ctor_get(v_as_x27_2_, 1);
v_id_8_ = lean_ctor_get(v_head_6_, 0);
v_body_9_ = lean_ctor_get(v_head_6_, 1);
v___x_10_ = lean_box(0);
lean_inc(v_id_8_);
v___x_11_ = l_Nat_reprFast(v_id_8_);
v___x_12_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0));
v___x_13_ = lean_string_append(v___x_11_, v___x_12_);
v___x_14_ = lean_string_append(v___x_13_, v_body_9_);
v___x_15_ = l_IO_println___at___00benchDb_spec__0(v___x_14_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_dec_ref_known(v___x_15_, 1);
v_as_x27_2_ = v_tail_7_;
v_b_3_ = v___x_10_;
goto _start;
}
else
{
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object* v_as_x27_17_, lean_object* v_b_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_List_forIn_x27_loop___at___00main_spec__0___redArg(v_as_x27_17_, v_b_18_);
lean_dec(v_as_x27_17_);
return v_res_20_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_28_; lean_object* v___x_29_; 
v___x_28_ = 2;
v___x_29_ = lean_box_uint32(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_30_; lean_object* v___x_31_; 
v___x_30_ = 0;
v___x_31_ = lean_box_uint32(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_main___boxed__const__3(void){
_start:
{
uint32_t v___x_32_; lean_object* v___x_33_; 
v___x_32_ = 1;
v___x_33_ = lean_box_uint32(v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_34_){
_start:
{
if (lean_obj_tag(v_args_34_) == 1)
{
lean_object* v_head_155_; lean_object* v_tail_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v_head_155_ = lean_ctor_get(v_args_34_, 0);
v_tail_156_ = lean_ctor_get(v_args_34_, 1);
v___x_157_ = ((lean_object*)(l_main___closed__5));
v___x_158_ = lean_string_dec_eq(v_head_155_, v___x_157_);
if (v___x_158_ == 0)
{
goto v___jp_56_;
}
else
{
if (lean_obj_tag(v_tail_156_) == 1)
{
lean_object* v_tail_159_; 
v_tail_159_ = lean_ctor_get(v_tail_156_, 1);
if (lean_obj_tag(v_tail_159_) == 1)
{
lean_object* v_tail_160_; 
v_tail_160_ = lean_ctor_get(v_tail_159_, 1);
if (lean_obj_tag(v_tail_160_) == 1)
{
lean_object* v_tail_161_; 
v_tail_161_ = lean_ctor_get(v_tail_160_, 1);
if (lean_obj_tag(v_tail_161_) == 0)
{
lean_object* v_head_162_; lean_object* v_head_163_; lean_object* v_head_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_inc_ref(v_tail_160_);
lean_inc_ref(v_tail_159_);
lean_inc_ref(v_tail_156_);
lean_dec_ref_known(v_args_34_, 2);
v_head_162_ = lean_ctor_get(v_tail_156_, 0);
lean_inc(v_head_162_);
lean_dec_ref_known(v_tail_156_, 2);
v_head_163_ = lean_ctor_get(v_tail_159_, 0);
lean_inc(v_head_163_);
lean_dec_ref_known(v_tail_159_, 2);
v_head_164_ = lean_ctor_get(v_tail_160_, 0);
lean_inc(v_head_164_);
lean_dec_ref_known(v_tail_160_, 2);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = lean_string_utf8_byte_size(v_head_164_);
v___x_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_167_, 0, v_head_164_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
lean_ctor_set(v___x_167_, 2, v___x_166_);
v___x_168_ = l_String_Slice_toNat_x3f(v___x_167_);
lean_dec_ref_known(v___x_167_, 3);
if (lean_obj_tag(v___x_168_) == 1)
{
lean_object* v_val_169_; lean_object* v___x_170_; 
v_val_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_val_169_);
lean_dec_ref_known(v___x_168_, 1);
v___x_170_ = l_benchDb(v_head_162_, v_head_163_, v_val_169_);
lean_dec(v_val_169_);
lean_dec(v_head_163_);
lean_dec(v_head_162_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_184_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_184_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_184_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_184_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___x_175_; 
v___x_175_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = l_main___boxed__const__3;
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_176_);
v___x_178_ = v___x_173_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
else
{
lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_180_ = l_main___boxed__const__2;
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_180_);
v___x_182_ = v___x_173_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
v_a_185_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_170_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_170_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v___x_168_);
lean_dec(v_head_163_);
lean_dec(v_head_162_);
v___x_193_ = ((lean_object*)(l_main___closed__6));
v___x_194_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_193_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_202_; 
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_202_ == 0)
{
lean_object* v_unused_203_; 
v_unused_203_ = lean_ctor_get(v___x_194_, 0);
lean_dec(v_unused_203_);
v___x_196_ = v___x_194_;
v_isShared_197_ = v_isSharedCheck_202_;
goto v_resetjp_195_;
}
else
{
lean_dec(v___x_194_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_202_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = l_main___boxed__const__1;
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_198_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
v_a_204_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_194_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_194_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
}
else
{
goto v___jp_56_;
}
}
else
{
goto v___jp_56_;
}
}
else
{
goto v___jp_56_;
}
}
else
{
goto v___jp_56_;
}
}
}
else
{
goto v___jp_56_;
}
v___jp_36_:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = ((lean_object*)(l_main___closed__0));
v___x_38_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_37_);
if (lean_obj_tag(v___x_38_) == 0)
{
lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_46_; 
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_46_ == 0)
{
lean_object* v_unused_47_; 
v_unused_47_ = lean_ctor_get(v___x_38_, 0);
lean_dec(v_unused_47_);
v___x_40_ = v___x_38_;
v_isShared_41_ = v_isSharedCheck_46_;
goto v_resetjp_39_;
}
else
{
lean_dec(v___x_38_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_46_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_42_ = l_main___boxed__const__1;
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v___x_42_);
v___x_44_ = v___x_40_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
v_a_48_ = lean_ctor_get(v___x_38_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_38_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_38_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
v___jp_56_:
{
if (lean_obj_tag(v_args_34_) == 1)
{
lean_object* v_tail_57_; 
v_tail_57_ = lean_ctor_get(v_args_34_, 1);
lean_inc(v_tail_57_);
if (lean_obj_tag(v_tail_57_) == 1)
{
lean_object* v_tail_58_; 
v_tail_58_ = lean_ctor_get(v_tail_57_, 1);
lean_inc(v_tail_58_);
if (lean_obj_tag(v_tail_58_) == 1)
{
lean_object* v_tail_59_; 
v_tail_59_ = lean_ctor_get(v_tail_58_, 1);
if (lean_obj_tag(v_tail_59_) == 0)
{
lean_object* v_head_60_; lean_object* v_head_61_; lean_object* v_head_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_head_60_ = lean_ctor_get(v_args_34_, 0);
lean_inc(v_head_60_);
lean_dec_ref_known(v_args_34_, 2);
v_head_61_ = lean_ctor_get(v_tail_57_, 0);
lean_inc(v_head_61_);
lean_dec_ref_known(v_tail_57_, 2);
v_head_62_ = lean_ctor_get(v_tail_58_, 0);
lean_inc(v_head_62_);
lean_dec_ref_known(v_tail_58_, 2);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = lean_string_utf8_byte_size(v_head_62_);
v___x_65_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_65_, 0, v_head_62_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
lean_ctor_set(v___x_65_, 2, v___x_64_);
v___x_66_ = l_String_Slice_toNat_x3f(v___x_65_);
lean_dec_ref_known(v___x_65_, 3);
if (lean_obj_tag(v___x_66_) == 1)
{
lean_object* v_val_67_; lean_object* v___x_68_; 
v_val_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_val_67_);
lean_dec_ref_known(v___x_66_, 1);
v___x_68_ = lsql_open(v_head_60_, v_head_61_);
lean_dec(v_head_61_);
lean_dec(v_head_60_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
v___x_70_ = l_planIO(v_a_69_, v_val_67_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_a_71_);
lean_dec_ref_known(v___x_70_, 1);
v___x_72_ = lean_box(0);
v___x_73_ = l_List_forIn_x27_loop___at___00main_spec__0___redArg(v_a_71_, v___x_72_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v___x_74_; 
lean_dec_ref_known(v___x_73_, 1);
v___x_74_ = lsql_page_fetches(v_a_69_);
lean_dec(v_a_69_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v___x_74_, 1);
v___x_76_ = ((lean_object*)(l_main___closed__1));
v___x_77_ = l_List_lengthTR___redArg(v_a_71_);
lean_dec(v_a_71_);
v___x_78_ = l_Nat_reprFast(v___x_77_);
v___x_79_ = lean_string_append(v___x_76_, v___x_78_);
lean_dec_ref(v___x_78_);
v___x_80_ = ((lean_object*)(l_main___closed__2));
v___x_81_ = lean_string_append(v___x_79_, v___x_80_);
v___x_82_ = l_Nat_reprFast(v_a_75_);
v___x_83_ = lean_string_append(v___x_81_, v___x_82_);
lean_dec_ref(v___x_82_);
v___x_84_ = ((lean_object*)(l_main___closed__3));
v___x_85_ = lean_string_append(v___x_83_, v___x_84_);
v___x_86_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_85_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_94_; 
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_94_ == 0)
{
lean_object* v_unused_95_; 
v_unused_95_ = lean_ctor_get(v___x_86_, 0);
lean_dec(v_unused_95_);
v___x_88_ = v___x_86_;
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
else
{
lean_dec(v___x_86_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_90_ = l_main___boxed__const__2;
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_90_);
v___x_92_ = v___x_88_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_a_96_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_86_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_86_);
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
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_a_71_);
v_a_104_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_74_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_74_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
lean_dec(v_a_71_);
lean_dec(v_a_69_);
v_a_112_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_73_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_73_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec(v_a_69_);
v_a_120_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_70_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_70_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec(v_val_67_);
v_a_128_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_68_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_68_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec(v___x_66_);
lean_dec(v_head_61_);
lean_dec(v_head_60_);
v___x_136_ = ((lean_object*)(l_main___closed__4));
v___x_137_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_145_; 
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; 
v_unused_146_ = lean_ctor_get(v___x_137_, 0);
lean_dec(v_unused_146_);
v___x_139_ = v___x_137_;
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
else
{
lean_dec(v___x_137_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_145_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = l_main___boxed__const__1;
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_141_);
v___x_143_ = v___x_139_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_a_147_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_137_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_137_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_tail_58_, 2);
lean_dec_ref_known(v_tail_57_, 2);
lean_dec_ref_known(v_args_34_, 2);
goto v___jp_36_;
}
}
else
{
lean_dec(v_tail_58_);
lean_dec_ref_known(v_tail_57_, 2);
lean_dec_ref_known(v_args_34_, 2);
goto v___jp_36_;
}
}
else
{
lean_dec_ref_known(v_args_34_, 2);
lean_dec(v_tail_57_);
goto v___jp_36_;
}
}
else
{
lean_dec(v_args_34_);
goto v___jp_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = _lean_main(v_args_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0(lean_object* v_as_215_, lean_object* v_as_x27_216_, lean_object* v_b_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_List_forIn_x27_loop___at___00main_spec__0___redArg(v_as_x27_216_, v_b_217_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object* v_as_221_, lean_object* v_as_x27_222_, lean_object* v_b_223_, lean_object* v_a_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_List_forIn_x27_loop___at___00main_spec__0(v_as_221_, v_as_x27_222_, v_b_223_, v_a_224_);
lean_dec(v_as_x27_222_);
lean_dec(v_as_221_);
return v_res_226_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Plan(uint8_t builtin);
lean_object* initialize_Bench(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Main(uint8_t builtin) {
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
res = initialize_Bench(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
l_main___boxed__const__3 = _init_l_main___boxed__const__3();
lean_mark_persistent(l_main___boxed__const__3);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
