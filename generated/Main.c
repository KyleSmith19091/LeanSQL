// Lean compiler output
// Module: Main
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
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lsql_open(lean_object*, lean_object*);
lean_object* l_planIO(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lsql_page_fetches(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00main_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\t"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "usage: leansql-demo <db file> <table> <n>"};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_string_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_string_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " rows, "};
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static const lean_string_object l_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " page fetches]"};
static const lean_object* l_main___closed__3 = (const lean_object*)&l_main___closed__3_value;
static const lean_string_object l_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "n must be a number"};
static const lean_object* l_main___closed__4 = (const lean_object*)&l_main___closed__4_value;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00main_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = l_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00main_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_IO_println___at___00main_spec__0(v_s_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_18_, lean_object* v_b_19_){
_start:
{
if (lean_obj_tag(v_as_x27_18_) == 0)
{
lean_object* v___x_21_; 
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v_b_19_);
return v___x_21_;
}
else
{
lean_object* v_head_22_; lean_object* v_tail_23_; lean_object* v_id_24_; lean_object* v_body_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_head_22_ = lean_ctor_get(v_as_x27_18_, 0);
v_tail_23_ = lean_ctor_get(v_as_x27_18_, 1);
v_id_24_ = lean_ctor_get(v_head_22_, 0);
v_body_25_ = lean_ctor_get(v_head_22_, 1);
v___x_26_ = lean_box(0);
lean_inc(v_id_24_);
v___x_27_ = l_Nat_reprFast(v_id_24_);
v___x_28_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_29_ = lean_string_append(v___x_27_, v___x_28_);
v___x_30_ = lean_string_append(v___x_29_, v_body_25_);
v___x_31_ = l_IO_println___at___00main_spec__0(v___x_30_);
if (lean_obj_tag(v___x_31_) == 0)
{
lean_dec_ref_known(v___x_31_, 1);
v_as_x27_18_ = v_tail_23_;
v_b_19_ = v___x_26_;
goto _start;
}
else
{
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_33_, lean_object* v_b_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_33_, v_b_34_);
lean_dec(v_as_x27_33_);
return v_res_36_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_42_; lean_object* v___x_43_; 
v___x_42_ = 2;
v___x_43_ = lean_box_uint32(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_44_; lean_object* v___x_45_; 
v___x_44_ = 0;
v___x_45_ = lean_box_uint32(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_46_){
_start:
{
if (lean_obj_tag(v_args_46_) == 1)
{
lean_object* v_tail_68_; 
v_tail_68_ = lean_ctor_get(v_args_46_, 1);
lean_inc(v_tail_68_);
if (lean_obj_tag(v_tail_68_) == 1)
{
lean_object* v_tail_69_; 
v_tail_69_ = lean_ctor_get(v_tail_68_, 1);
lean_inc(v_tail_69_);
if (lean_obj_tag(v_tail_69_) == 1)
{
lean_object* v_tail_70_; 
v_tail_70_ = lean_ctor_get(v_tail_69_, 1);
if (lean_obj_tag(v_tail_70_) == 0)
{
lean_object* v_head_71_; lean_object* v_head_72_; lean_object* v_head_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_head_71_ = lean_ctor_get(v_args_46_, 0);
lean_inc(v_head_71_);
lean_dec_ref_known(v_args_46_, 2);
v_head_72_ = lean_ctor_get(v_tail_68_, 0);
lean_inc(v_head_72_);
lean_dec_ref_known(v_tail_68_, 2);
v_head_73_ = lean_ctor_get(v_tail_69_, 0);
lean_inc(v_head_73_);
lean_dec_ref_known(v_tail_69_, 2);
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_string_utf8_byte_size(v_head_73_);
v___x_76_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_76_, 0, v_head_73_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
lean_ctor_set(v___x_76_, 2, v___x_75_);
v___x_77_ = l_String_Slice_toNat_x3f(v___x_76_);
lean_dec_ref_known(v___x_76_, 3);
if (lean_obj_tag(v___x_77_) == 1)
{
lean_object* v_val_78_; lean_object* v___x_79_; 
v_val_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v___x_77_, 1);
v___x_79_ = lsql_open(v_head_71_, v_head_72_);
lean_dec(v_head_72_);
lean_dec(v_head_71_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_81_; 
v_a_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc(v_a_80_);
lean_dec_ref_known(v___x_79_, 1);
v___x_81_ = l_planIO(v_a_80_, v_val_78_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref_known(v___x_81_, 1);
v___x_83_ = lean_box(0);
v___x_84_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_a_82_, v___x_83_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v___x_85_; 
lean_dec_ref_known(v___x_84_, 1);
v___x_85_ = lsql_page_fetches(v_a_80_);
lean_dec(v_a_80_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
lean_dec_ref_known(v___x_85_, 1);
v___x_87_ = ((lean_object*)(l_main___closed__1));
v___x_88_ = l_List_lengthTR___redArg(v_a_82_);
lean_dec(v_a_82_);
v___x_89_ = l_Nat_reprFast(v___x_88_);
v___x_90_ = lean_string_append(v___x_87_, v___x_89_);
lean_dec_ref(v___x_89_);
v___x_91_ = ((lean_object*)(l_main___closed__2));
v___x_92_ = lean_string_append(v___x_90_, v___x_91_);
v___x_93_ = l_Nat_reprFast(v_a_86_);
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = ((lean_object*)(l_main___closed__3));
v___x_96_ = lean_string_append(v___x_94_, v___x_95_);
v___x_97_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_96_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_105_; 
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_105_ == 0)
{
lean_object* v_unused_106_; 
v_unused_106_ = lean_ctor_get(v___x_97_, 0);
lean_dec(v_unused_106_);
v___x_99_ = v___x_97_;
v_isShared_100_ = v_isSharedCheck_105_;
goto v_resetjp_98_;
}
else
{
lean_dec(v___x_97_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_105_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = l_main___boxed__const__2;
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_101_);
v___x_103_ = v___x_99_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_97_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_97_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec(v_a_82_);
v_a_115_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_85_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_85_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_a_82_);
lean_dec(v_a_80_);
v_a_123_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_84_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_84_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec(v_a_80_);
v_a_131_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_81_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_81_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_val_78_);
v_a_139_ = lean_ctor_get(v___x_79_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_79_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_79_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; 
lean_dec(v___x_77_);
lean_dec(v_head_72_);
lean_dec(v_head_71_);
v___x_147_ = ((lean_object*)(l_main___closed__4));
v___x_148_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_147_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_156_; 
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_156_ == 0)
{
lean_object* v_unused_157_; 
v_unused_157_ = lean_ctor_get(v___x_148_, 0);
lean_dec(v_unused_157_);
v___x_150_ = v___x_148_;
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
else
{
lean_dec(v___x_148_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_152_ = l_main___boxed__const__1;
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_152_);
v___x_154_ = v___x_150_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
v_a_158_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_148_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_148_);
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
else
{
lean_dec_ref_known(v_tail_69_, 2);
lean_dec_ref_known(v_tail_68_, 2);
lean_dec_ref_known(v_args_46_, 2);
goto v___jp_48_;
}
}
else
{
lean_dec(v_tail_69_);
lean_dec_ref_known(v_tail_68_, 2);
lean_dec_ref_known(v_args_46_, 2);
goto v___jp_48_;
}
}
else
{
lean_dec_ref_known(v_args_46_, 2);
lean_dec(v_tail_68_);
goto v___jp_48_;
}
}
else
{
lean_dec(v_args_46_);
goto v___jp_48_;
}
v___jp_48_:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(l_main___closed__0));
v___x_50_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_58_; 
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_58_ == 0)
{
lean_object* v_unused_59_; 
v_unused_59_ = lean_ctor_get(v___x_50_, 0);
lean_dec(v_unused_59_);
v___x_52_ = v___x_50_;
v_isShared_53_ = v_isSharedCheck_58_;
goto v_resetjp_51_;
}
else
{
lean_dec(v___x_50_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_58_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_54_ = l_main___boxed__const__1;
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 0, v___x_54_);
v___x_56_ = v___x_52_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_67_; 
v_a_60_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_67_ == 0)
{
v___x_62_ = v___x_50_;
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_50_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = _lean_main(v_args_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_169_, lean_object* v_as_x27_170_, lean_object* v_b_171_, lean_object* v_a_172_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_170_, v_b_171_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_175_, lean_object* v_as_x27_176_, lean_object* v_b_177_, lean_object* v_a_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_175_, v_as_x27_176_, v_b_177_, v_a_178_);
lean_dec(v_as_x27_176_);
lean_dec(v_as_175_);
return v_res_180_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Plan(uint8_t builtin);
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
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
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
