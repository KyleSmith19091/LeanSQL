// Lean compiler output
// Module: Plan
// Imports: public import Init public meta import Init public import Model public import Sqlite
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lsql_rowid(lean_object*);
lean_object* lsql_body(lean_object*);
lean_object* lsql_previous(lean_object*);
lean_object* lsql_last(lean_object*);
LEAN_EXPORT lean_object* l_readPost(lean_object*);
LEAN_EXPORT lean_object* l_readPost___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_walkBack(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_walkBack___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_planIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_planIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_readPost(lean_object* v_h_1_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lsql_rowid(v_h_1_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_5_; 
v_a_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_a_4_);
lean_dec_ref_known(v___x_3_, 1);
v___x_5_ = lsql_body(v_h_1_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_14_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_14_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_14_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_14_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_14_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; lean_object* v___x_12_; 
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v_a_4_);
lean_ctor_set(v___x_10_, 1, v_a_6_);
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_10_);
v___x_12_ = v___x_8_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_10_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
}
else
{
lean_object* v_a_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_22_; 
lean_dec(v_a_4_);
v_a_15_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_22_ == 0)
{
v___x_17_ = v___x_5_;
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_a_15_);
lean_dec(v___x_5_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_a_15_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
v_a_23_ = lean_ctor_get(v___x_3_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_3_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_3_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_readPost___boxed(lean_object* v_h_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_readPost(v_h_31_);
lean_dec(v_h_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_walkBack(lean_object* v_h_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_zero_38_; uint8_t v_isZero_39_; 
v_zero_38_ = lean_unsigned_to_nat(0u);
v_isZero_39_ = lean_nat_dec_eq(v_x_35_, v_zero_38_);
if (v_isZero_39_ == 1)
{
lean_object* v___x_40_; 
lean_dec(v_x_35_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v_x_36_);
return v___x_40_;
}
else
{
lean_object* v_one_41_; lean_object* v_n_42_; lean_object* v___x_43_; 
v_one_41_ = lean_unsigned_to_nat(1u);
v_n_42_ = lean_nat_sub(v_x_35_, v_one_41_);
lean_dec(v_x_35_);
v___x_43_ = l_readPost(v_h_34_);
if (lean_obj_tag(v___x_43_) == 0)
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_72_; 
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_72_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_72_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_72_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_48_, 0, v_a_44_);
lean_ctor_set(v___x_48_, 1, v_x_36_);
v___x_49_ = lean_nat_dec_eq(v_n_42_, v_zero_38_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
lean_del_object(v___x_46_);
v___x_50_ = lsql_previous(v_h_34_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_60_; 
v_a_51_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_60_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_60_ == 0)
{
v___x_53_ = v___x_50_;
v_isShared_54_ = v_isSharedCheck_60_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_60_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
uint8_t v___x_55_; 
v___x_55_ = lean_unbox(v_a_51_);
lean_dec(v_a_51_);
if (v___x_55_ == 0)
{
lean_object* v___x_57_; 
lean_dec(v_n_42_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 0, v___x_48_);
v___x_57_ = v___x_53_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v___x_48_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
else
{
lean_del_object(v___x_53_);
v_x_35_ = v_n_42_;
v_x_36_ = v___x_48_;
goto _start;
}
}
}
else
{
lean_object* v_a_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_68_; 
lean_dec_ref_known(v___x_48_, 2);
lean_dec(v_n_42_);
v_a_61_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_68_ == 0)
{
v___x_63_ = v___x_50_;
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_a_61_);
lean_dec(v___x_50_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
if (v_isShared_64_ == 0)
{
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_a_61_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_n_42_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 0, v___x_48_);
v___x_70_ = v___x_46_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_48_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_80_; 
lean_dec(v_n_42_);
lean_dec(v_x_36_);
v_a_73_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_80_ == 0)
{
v___x_75_ = v___x_43_;
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_43_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_a_73_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_walkBack___boxed(lean_object* v_h_81_, lean_object* v_x_82_, lean_object* v_x_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_walkBack(v_h_81_, v_x_82_, v_x_83_);
lean_dec(v_h_81_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_planIO(lean_object* v_h_86_, lean_object* v_n_87_){
_start:
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_nat_dec_eq(v_n_87_, v___x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = lsql_last(v_h_86_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_103_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_103_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_103_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_103_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
uint8_t v___x_96_; 
v___x_96_ = lean_unbox(v_a_92_);
lean_dec(v_a_92_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_99_; 
lean_dec(v_n_87_);
v___x_97_ = lean_box(0);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_97_);
v___x_99_ = v___x_94_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
else
{
lean_object* v___x_101_; lean_object* v___x_102_; 
lean_del_object(v___x_94_);
v___x_101_ = lean_box(0);
v___x_102_ = l_walkBack(v_h_86_, v_n_87_, v___x_101_);
return v___x_102_;
}
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_n_87_);
v_a_104_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_91_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_91_);
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
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec(v_n_87_);
v___x_112_ = lean_box(0);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* l_planIO___boxed(lean_object* v_h_114_, lean_object* v_n_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_planIO(v_h_114_, v_n_115_);
lean_dec(v_h_114_);
return v_res_117_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Model(uint8_t builtin);
lean_object* initialize_Sqlite(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Plan(uint8_t builtin) {
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
res = initialize_Model(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Sqlite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
