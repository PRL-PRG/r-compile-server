#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1821424213_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1821424213_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1821424213_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1821424213_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1821424213
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1821424213_, RHO, CCP);
  // st `[.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner1821424213_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1821424213 dynamic dispatch ([x, i, j, drop])

  return Rsh_Fir_user_version_inner1821424213_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1821424213_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1821424213 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1821424213/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_drop;
  SEXP Rsh_Fir_reg_drop_isMissing;
  SEXP Rsh_Fir_reg_drop_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_mdrop;
  SEXP Rsh_Fir_reg_mdrop1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_isS4_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_Narg;
  SEXP Rsh_Fir_reg_Narg1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_mdrop2_;
  SEXP Rsh_Fir_reg_mdrop3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_missing3_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_nm2_;
  SEXP Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_NextMethod;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_cols2_;
  SEXP Rsh_Fir_reg_cols3_;
  SEXP Rsh_Fir_reg_anyNA1_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_nm4_;
  SEXP Rsh_Fir_reg_nm5_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_nm7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_cols4_;
  SEXP Rsh_Fir_reg_cols5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_names__2_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_NextMethod1_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_cols6_;
  SEXP Rsh_Fir_reg_cols7_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_cols8_;
  SEXP Rsh_Fir_reg_cols9_;
  SEXP Rsh_Fir_reg_anyNA2_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_anyDuplicated;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_make_unique;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_names__3_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg__row_names_info;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_oldClass;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_attr__1_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_missing4_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_drop1_;
  SEXP Rsh_Fir_reg_drop2_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_has_j;
  SEXP Rsh_Fir_reg_has_j1_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg__subset2_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_sym26_;
  SEXP Rsh_Fir_reg_base26_;
  SEXP Rsh_Fir_reg_guard26_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_nm8_;
  SEXP Rsh_Fir_reg_nm9_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_character1_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_has_j2_;
  SEXP Rsh_Fir_reg_has_j3_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_sym27_;
  SEXP Rsh_Fir_reg_base27_;
  SEXP Rsh_Fir_reg_guard27_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_sym28_;
  SEXP Rsh_Fir_reg_base28_;
  SEXP Rsh_Fir_reg_guard28_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_c78_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_nm10_;
  SEXP Rsh_Fir_reg_nm11_;
  SEXP Rsh_Fir_reg_anyNA3_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_c79_;
  SEXP Rsh_Fir_reg_c80_;
  SEXP Rsh_Fir_reg_c82_;
  SEXP Rsh_Fir_reg_sym29_;
  SEXP Rsh_Fir_reg_base29_;
  SEXP Rsh_Fir_reg_guard29_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_names__4_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_names__5_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_sym30_;
  SEXP Rsh_Fir_reg_base30_;
  SEXP Rsh_Fir_reg_guard30_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_reg__subset3_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_sym31_;
  SEXP Rsh_Fir_reg_base31_;
  SEXP Rsh_Fir_reg_guard31_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_y6_;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_reg_sym32_;
  SEXP Rsh_Fir_reg_base32_;
  SEXP Rsh_Fir_reg_guard32_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_reg_cols14_;
  SEXP Rsh_Fir_reg_cols15_;
  SEXP Rsh_Fir_reg_anyNA4_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_c83_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg_nm12_;
  SEXP Rsh_Fir_reg_nm13_;
  SEXP Rsh_Fir_reg_c84_;
  SEXP Rsh_Fir_reg_nm15_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_cols16_;
  SEXP Rsh_Fir_reg_cols17_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r156_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_names__6_;
  SEXP Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_reg_has_j4_;
  SEXP Rsh_Fir_reg_has_j5_;
  SEXP Rsh_Fir_reg_c85_;
  SEXP Rsh_Fir_reg_sym33_;
  SEXP Rsh_Fir_reg_base33_;
  SEXP Rsh_Fir_reg_guard33_;
  SEXP Rsh_Fir_reg_r158_;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_reg_j6_;
  SEXP Rsh_Fir_reg__subset4_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_sym34_;
  SEXP Rsh_Fir_reg_base34_;
  SEXP Rsh_Fir_reg_guard34_;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_r163_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_y9_;
  SEXP Rsh_Fir_reg_names6_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_sym35_;
  SEXP Rsh_Fir_reg_base35_;
  SEXP Rsh_Fir_reg_guard35_;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_r166_;
  SEXP Rsh_Fir_reg_cols18_;
  SEXP Rsh_Fir_reg_cols19_;
  SEXP Rsh_Fir_reg_anyNA5_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_c86_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r168_;
  SEXP Rsh_Fir_reg_drop3_;
  SEXP Rsh_Fir_reg_drop4_;
  SEXP Rsh_Fir_reg_c87_;
  SEXP Rsh_Fir_reg_c89_;
  SEXP Rsh_Fir_reg_sym36_;
  SEXP Rsh_Fir_reg_base36_;
  SEXP Rsh_Fir_reg_guard36_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_c92_;
  SEXP Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_c93_;
  SEXP Rsh_Fir_reg_c94_;
  SEXP Rsh_Fir_reg_c96_;
  SEXP Rsh_Fir_reg_sym37_;
  SEXP Rsh_Fir_reg_base37_;
  SEXP Rsh_Fir_reg_guard37_;
  SEXP Rsh_Fir_reg_r173_;
  SEXP Rsh_Fir_reg_r174_;
  SEXP Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_reg_y13_;
  SEXP Rsh_Fir_reg__subset5_;
  SEXP Rsh_Fir_reg_r175_;
  SEXP Rsh_Fir_reg_anyDuplicated1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r179_;
  SEXP Rsh_Fir_reg_c97_;
  SEXP Rsh_Fir_reg_make_unique1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r181_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_names__7_;
  SEXP Rsh_Fir_reg_r182_;
  SEXP Rsh_Fir_reg__row_names_info1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r185_;
  SEXP Rsh_Fir_reg_drop5_;
  SEXP Rsh_Fir_reg_drop6_;
  SEXP Rsh_Fir_reg_c98_;
  SEXP Rsh_Fir_reg_c100_;
  SEXP Rsh_Fir_reg_mdrop4_;
  SEXP Rsh_Fir_reg_mdrop5_;
  SEXP Rsh_Fir_reg_r186_;
  SEXP Rsh_Fir_reg_c101_;
  SEXP Rsh_Fir_reg_c102_;
  SEXP Rsh_Fir_reg_c104_;
  SEXP Rsh_Fir_reg_c106_;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_nrow1_;
  SEXP Rsh_Fir_reg_r187_;
  SEXP Rsh_Fir_reg_c107_;
  SEXP Rsh_Fir_reg_c108_;
  SEXP Rsh_Fir_reg_c110_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r189_;
  SEXP Rsh_Fir_reg_sym38_;
  SEXP Rsh_Fir_reg_base38_;
  SEXP Rsh_Fir_reg_guard38_;
  SEXP Rsh_Fir_reg_r192_;
  SEXP Rsh_Fir_reg_r193_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_oldClass1_;
  SEXP Rsh_Fir_reg_r194_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_attr__2_;
  SEXP Rsh_Fir_reg_r195_;
  SEXP Rsh_Fir_reg__row_names_info2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r197_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_attr__3_;
  SEXP Rsh_Fir_reg_r198_;
  SEXP Rsh_Fir_reg_y16_;
  SEXP Rsh_Fir_reg_y17_;
  SEXP Rsh_Fir_reg_x35_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_sym39_;
  SEXP Rsh_Fir_reg_base39_;
  SEXP Rsh_Fir_reg_guard39_;
  SEXP Rsh_Fir_reg_r200_;
  SEXP Rsh_Fir_reg_r201_;
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_reg_names7_;
  SEXP Rsh_Fir_reg_r202_;
  SEXP Rsh_Fir_reg_sym40_;
  SEXP Rsh_Fir_reg_base40_;
  SEXP Rsh_Fir_reg_guard40_;
  SEXP Rsh_Fir_reg_r203_;
  SEXP Rsh_Fir_reg_r204_;
  SEXP Rsh_Fir_reg_sym41_;
  SEXP Rsh_Fir_reg_base41_;
  SEXP Rsh_Fir_reg_guard41_;
  SEXP Rsh_Fir_reg_r205_;
  SEXP Rsh_Fir_reg_r206_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r207_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r208_;
  SEXP Rsh_Fir_reg_sym42_;
  SEXP Rsh_Fir_reg_base42_;
  SEXP Rsh_Fir_reg_guard42_;
  SEXP Rsh_Fir_reg_r209_;
  SEXP Rsh_Fir_reg_r210_;
  SEXP Rsh_Fir_reg_xx2_;
  SEXP Rsh_Fir_reg_xx3_;
  SEXP Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_copyDFattr;
  SEXP Rsh_Fir_reg_r211_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_attr__4_;
  SEXP Rsh_Fir_reg_r212_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_oldClass__;
  SEXP Rsh_Fir_reg_r213_;
  SEXP Rsh_Fir_reg_has_j6_;
  SEXP Rsh_Fir_reg_has_j7_;
  SEXP Rsh_Fir_reg_c111_;
  SEXP Rsh_Fir_reg_sym43_;
  SEXP Rsh_Fir_reg_base43_;
  SEXP Rsh_Fir_reg_guard43_;
  SEXP Rsh_Fir_reg_r214_;
  SEXP Rsh_Fir_reg_r215_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_names8_;
  SEXP Rsh_Fir_reg_r216_;
  SEXP Rsh_Fir_reg_sym44_;
  SEXP Rsh_Fir_reg_base44_;
  SEXP Rsh_Fir_reg_guard44_;
  SEXP Rsh_Fir_reg_r217_;
  SEXP Rsh_Fir_reg_r218_;
  SEXP Rsh_Fir_reg_nm16_;
  SEXP Rsh_Fir_reg_nm17_;
  SEXP Rsh_Fir_reg_c112_;
  SEXP Rsh_Fir_reg_c113_;
  SEXP Rsh_Fir_reg_character2_;
  SEXP Rsh_Fir_reg_r219_;
  SEXP Rsh_Fir_reg_sym45_;
  SEXP Rsh_Fir_reg_base45_;
  SEXP Rsh_Fir_reg_guard45_;
  SEXP Rsh_Fir_reg_r221_;
  SEXP Rsh_Fir_reg_r222_;
  SEXP Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_reg_j8_;
  SEXP Rsh_Fir_reg_c114_;
  SEXP Rsh_Fir_reg_r223_;
  SEXP Rsh_Fir_reg_c115_;
  SEXP Rsh_Fir_reg_c117_;
  SEXP Rsh_Fir_reg_sym46_;
  SEXP Rsh_Fir_reg_base46_;
  SEXP Rsh_Fir_reg_guard46_;
  SEXP Rsh_Fir_reg_r224_;
  SEXP Rsh_Fir_reg_c120_;
  SEXP Rsh_Fir_reg_r225_;
  SEXP Rsh_Fir_reg_nm18_;
  SEXP Rsh_Fir_reg_nm19_;
  SEXP Rsh_Fir_reg_anyNA6_;
  SEXP Rsh_Fir_reg_r226_;
  SEXP Rsh_Fir_reg_c121_;
  SEXP Rsh_Fir_reg_c122_;
  SEXP Rsh_Fir_reg_c124_;
  SEXP Rsh_Fir_reg_sym47_;
  SEXP Rsh_Fir_reg_base47_;
  SEXP Rsh_Fir_reg_guard47_;
  SEXP Rsh_Fir_reg_r227_;
  SEXP Rsh_Fir_reg_r228_;
  SEXP Rsh_Fir_reg_x43_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_r229_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_names__8_;
  SEXP Rsh_Fir_reg_r230_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_names__9_;
  SEXP Rsh_Fir_reg_r231_;
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_reg_c125_;
  SEXP Rsh_Fir_reg_x48_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_j9_;
  SEXP Rsh_Fir_reg_j10_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r233_;
  SEXP Rsh_Fir_reg_sym48_;
  SEXP Rsh_Fir_reg_base48_;
  SEXP Rsh_Fir_reg_guard48_;
  SEXP Rsh_Fir_reg_r234_;
  SEXP Rsh_Fir_reg_r235_;
  SEXP Rsh_Fir_reg_x49_;
  SEXP Rsh_Fir_reg_x50_;
  SEXP Rsh_Fir_reg_names9_;
  SEXP Rsh_Fir_reg_r236_;
  SEXP Rsh_Fir_reg_drop7_;
  SEXP Rsh_Fir_reg_drop8_;
  SEXP Rsh_Fir_reg_c126_;
  SEXP Rsh_Fir_reg_c128_;
  SEXP Rsh_Fir_reg_sym49_;
  SEXP Rsh_Fir_reg_base49_;
  SEXP Rsh_Fir_reg_guard49_;
  SEXP Rsh_Fir_reg_r237_;
  SEXP Rsh_Fir_reg_c131_;
  SEXP Rsh_Fir_reg_r238_;
  SEXP Rsh_Fir_reg_x51_;
  SEXP Rsh_Fir_reg_x52_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r239_;
  SEXP Rsh_Fir_reg_r240_;
  SEXP Rsh_Fir_reg_c132_;
  SEXP Rsh_Fir_reg_c133_;
  SEXP Rsh_Fir_reg_c135_;
  SEXP Rsh_Fir_reg_sym50_;
  SEXP Rsh_Fir_reg_base50_;
  SEXP Rsh_Fir_reg_guard50_;
  SEXP Rsh_Fir_reg_r241_;
  SEXP Rsh_Fir_reg_r242_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_c136_;
  SEXP Rsh_Fir_reg_c137_;
  SEXP Rsh_Fir_reg_sym51_;
  SEXP Rsh_Fir_reg_base51_;
  SEXP Rsh_Fir_reg_guard51_;
  SEXP Rsh_Fir_reg_r243_;
  SEXP Rsh_Fir_reg_r244_;
  SEXP Rsh_Fir_reg_xx4_;
  SEXP Rsh_Fir_reg_xx5_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r245_;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r248_;
  SEXP Rsh_Fir_reg_sym52_;
  SEXP Rsh_Fir_reg_base52_;
  SEXP Rsh_Fir_reg_guard52_;
  SEXP Rsh_Fir_reg_r250_;
  SEXP Rsh_Fir_reg_r251_;
  SEXP Rsh_Fir_reg_sym53_;
  SEXP Rsh_Fir_reg_base53_;
  SEXP Rsh_Fir_reg_guard53_;
  SEXP Rsh_Fir_reg_r252_;
  SEXP Rsh_Fir_reg_r253_;
  SEXP Rsh_Fir_reg_xx6_;
  SEXP Rsh_Fir_reg_xx7_;
  SEXP Rsh_Fir_reg_j11_;
  SEXP Rsh_Fir_reg_j12_;
  SEXP Rsh_Fir_reg__subset6_;
  SEXP Rsh_Fir_reg_r254_;
  SEXP Rsh_Fir_reg__subset7_;
  SEXP Rsh_Fir_reg_r255_;
  SEXP Rsh_Fir_reg_sym54_;
  SEXP Rsh_Fir_reg_base54_;
  SEXP Rsh_Fir_reg_guard54_;
  SEXP Rsh_Fir_reg_r256_;
  SEXP Rsh_Fir_reg_r257_;
  SEXP Rsh_Fir_reg_sym55_;
  SEXP Rsh_Fir_reg_base55_;
  SEXP Rsh_Fir_reg_guard55_;
  SEXP Rsh_Fir_reg_r258_;
  SEXP Rsh_Fir_reg_r259_;
  SEXP Rsh_Fir_reg_xj;
  SEXP Rsh_Fir_reg_xj1_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r260_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r261_;
  SEXP Rsh_Fir_reg_r262_;
  SEXP Rsh_Fir_reg_c138_;
  SEXP Rsh_Fir_reg_xj2_;
  SEXP Rsh_Fir_reg_xj3_;
  SEXP Rsh_Fir_reg_c139_;
  SEXP Rsh_Fir_reg_xj5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r263_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_xj6_;
  SEXP Rsh_Fir_reg_xj7_;
  SEXP Rsh_Fir_reg_c140_;
  SEXP Rsh_Fir_reg_xj9_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r264_;
  SEXP Rsh_Fir_reg_sym56_;
  SEXP Rsh_Fir_reg_base56_;
  SEXP Rsh_Fir_reg_guard56_;
  SEXP Rsh_Fir_reg_r267_;
  SEXP Rsh_Fir_reg_r268_;
  SEXP Rsh_Fir_reg_cols24_;
  SEXP Rsh_Fir_reg_cols25_;
  SEXP Rsh_Fir_reg_anyNA7_;
  SEXP Rsh_Fir_reg_r269_;
  SEXP Rsh_Fir_reg_c141_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r270_;
  SEXP Rsh_Fir_reg_sym57_;
  SEXP Rsh_Fir_reg_base57_;
  SEXP Rsh_Fir_reg_guard57_;
  SEXP Rsh_Fir_reg_r272_;
  SEXP Rsh_Fir_reg_r273_;
  SEXP Rsh_Fir_reg_sym58_;
  SEXP Rsh_Fir_reg_base58_;
  SEXP Rsh_Fir_reg_guard58_;
  SEXP Rsh_Fir_reg_r274_;
  SEXP Rsh_Fir_reg_r275_;
  SEXP Rsh_Fir_reg_nm20_;
  SEXP Rsh_Fir_reg_nm21_;
  SEXP Rsh_Fir_reg_names10_;
  SEXP Rsh_Fir_reg_r276_;
  SEXP Rsh_Fir_reg_c142_;
  SEXP Rsh_Fir_reg_r277_;
  SEXP Rsh_Fir_reg_c143_;
  SEXP Rsh_Fir_reg_nm22_;
  SEXP Rsh_Fir_reg_nm23_;
  SEXP Rsh_Fir_reg_c144_;
  SEXP Rsh_Fir_reg_nm25_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_cols26_;
  SEXP Rsh_Fir_reg_cols27_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r278_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_names__10_;
  SEXP Rsh_Fir_reg_r279_;
  SEXP Rsh_Fir_reg_structure1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r288_;
  SEXP Rsh_Fir_reg_sym61_;
  SEXP Rsh_Fir_reg_base61_;
  SEXP Rsh_Fir_reg_guard61_;
  SEXP Rsh_Fir_reg_r289_;
  SEXP Rsh_Fir_reg_r290_;
  SEXP Rsh_Fir_reg_nxx;
  SEXP Rsh_Fir_reg_nxx1_;
  SEXP Rsh_Fir_reg_c145_;
  SEXP Rsh_Fir_reg_nxx3_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_j13_;
  SEXP Rsh_Fir_reg_j14_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r291_;
  SEXP Rsh_Fir_reg_sym62_;
  SEXP Rsh_Fir_reg_base62_;
  SEXP Rsh_Fir_reg_guard62_;
  SEXP Rsh_Fir_reg_r292_;
  SEXP Rsh_Fir_reg_r293_;
  SEXP Rsh_Fir_reg_xx12_;
  SEXP Rsh_Fir_reg_xx13_;
  SEXP Rsh_Fir_reg_r294_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r295_;
  SEXP Rsh_Fir_reg_sym63_;
  SEXP Rsh_Fir_reg_base63_;
  SEXP Rsh_Fir_reg_guard63_;
  SEXP Rsh_Fir_reg_r297_;
  SEXP Rsh_Fir_reg_r298_;
  SEXP Rsh_Fir_reg_x53_;
  SEXP Rsh_Fir_reg_x54_;
  SEXP Rsh_Fir_reg_r299_;
  SEXP Rsh_Fir_reg_sym64_;
  SEXP Rsh_Fir_reg_base64_;
  SEXP Rsh_Fir_reg_guard64_;
  SEXP Rsh_Fir_reg_r300_;
  SEXP Rsh_Fir_reg_r301_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_c146_;
  SEXP Rsh_Fir_reg_c147_;
  SEXP Rsh_Fir_reg_sym65_;
  SEXP Rsh_Fir_reg_base65_;
  SEXP Rsh_Fir_reg_guard65_;
  SEXP Rsh_Fir_reg_r302_;
  SEXP Rsh_Fir_reg_r303_;
  SEXP Rsh_Fir_reg_xx14_;
  SEXP Rsh_Fir_reg_xx15_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r304_;
  SEXP Rsh_Fir_reg_pmatch1_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r307_;
  SEXP Rsh_Fir_reg_sym66_;
  SEXP Rsh_Fir_reg_base66_;
  SEXP Rsh_Fir_reg_guard66_;
  SEXP Rsh_Fir_reg_r309_;
  SEXP Rsh_Fir_reg_r310_;
  SEXP Rsh_Fir_reg_x55_;
  SEXP Rsh_Fir_reg_x56_;
  SEXP Rsh_Fir_reg_r311_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_c148_;
  SEXP Rsh_Fir_reg_x57_;
  SEXP Rsh_Fir_reg_xx16_;
  SEXP Rsh_Fir_reg_xx17_;
  SEXP Rsh_Fir_reg_c149_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_xx19_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_sxx;
  SEXP Rsh_Fir_reg_sxx1_;
  SEXP Rsh_Fir_reg_c150_;
  SEXP Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_reg_xx21_;
  SEXP Rsh_Fir_reg_sxx3_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_xx23_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_j15_;
  SEXP Rsh_Fir_reg_j16_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r312_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r313_;
  SEXP Rsh_Fir_reg_sym67_;
  SEXP Rsh_Fir_reg_base67_;
  SEXP Rsh_Fir_reg_guard67_;
  SEXP Rsh_Fir_reg_r314_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_r315_;
  SEXP Rsh_Fir_reg_sym68_;
  SEXP Rsh_Fir_reg_base68_;
  SEXP Rsh_Fir_reg_guard68_;
  SEXP Rsh_Fir_reg_r316_;
  SEXP Rsh_Fir_reg_i37_;
  SEXP Rsh_Fir_reg_r317_;
  SEXP Rsh_Fir_reg_xj10_;
  SEXP Rsh_Fir_reg_xj11_;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r318_;
  SEXP Rsh_Fir_reg_length6_;
  SEXP Rsh_Fir_reg_r319_;
  SEXP Rsh_Fir_reg_r320_;
  SEXP Rsh_Fir_reg_c151_;
  SEXP Rsh_Fir_reg_xj12_;
  SEXP Rsh_Fir_reg_xj13_;
  SEXP Rsh_Fir_reg_c152_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_xj15_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r321_;
  SEXP Rsh_Fir_reg_i46_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_xj16_;
  SEXP Rsh_Fir_reg_xj17_;
  SEXP Rsh_Fir_reg_c153_;
  SEXP Rsh_Fir_reg_i48_;
  SEXP Rsh_Fir_reg_xj19_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i50_;
  SEXP Rsh_Fir_reg_i51_;
  SEXP Rsh_Fir_reg___11_;
  SEXP Rsh_Fir_reg_r322_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_c154_;
  SEXP Rsh_Fir_reg_i53_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_i55_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_j17_;
  SEXP Rsh_Fir_reg_j18_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r323_;
  SEXP Rsh_Fir_reg_drop9_;
  SEXP Rsh_Fir_reg_drop10_;
  SEXP Rsh_Fir_reg_c155_;
  SEXP Rsh_Fir_reg_sym69_;
  SEXP Rsh_Fir_reg_base69_;
  SEXP Rsh_Fir_reg_guard69_;
  SEXP Rsh_Fir_reg_r324_;
  SEXP Rsh_Fir_reg_r325_;
  SEXP Rsh_Fir_reg_x58_;
  SEXP Rsh_Fir_reg_x59_;
  SEXP Rsh_Fir_reg_length7_;
  SEXP Rsh_Fir_reg_r326_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r327_;
  SEXP Rsh_Fir_reg_c156_;
  SEXP Rsh_Fir_reg_x60_;
  SEXP Rsh_Fir_reg_x61_;
  SEXP Rsh_Fir_reg_c157_;
  SEXP Rsh_Fir_reg_x63_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg___12_;
  SEXP Rsh_Fir_reg_r328_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r331_;
  SEXP Rsh_Fir_reg_c158_;
  SEXP Rsh_Fir_reg_x64_;
  SEXP Rsh_Fir_reg_x65_;
  SEXP Rsh_Fir_reg_c159_;
  SEXP Rsh_Fir_reg_x67_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg___13_;
  SEXP Rsh_Fir_reg_r332_;
  SEXP Rsh_Fir_reg_sym70_;
  SEXP Rsh_Fir_reg_base70_;
  SEXP Rsh_Fir_reg_guard70_;
  SEXP Rsh_Fir_reg_r333_;
  SEXP Rsh_Fir_reg_r334_;
  SEXP Rsh_Fir_reg_sym71_;
  SEXP Rsh_Fir_reg_base71_;
  SEXP Rsh_Fir_reg_guard71_;
  SEXP Rsh_Fir_reg_r335_;
  SEXP Rsh_Fir_reg_r336_;
  SEXP Rsh_Fir_reg_xj20_;
  SEXP Rsh_Fir_reg_xj21_;
  SEXP Rsh_Fir_reg_dim2_;
  SEXP Rsh_Fir_reg_r337_;
  SEXP Rsh_Fir_reg_length8_;
  SEXP Rsh_Fir_reg_r338_;
  SEXP Rsh_Fir_reg_r339_;
  SEXP Rsh_Fir_reg_c160_;
  SEXP Rsh_Fir_reg_sym72_;
  SEXP Rsh_Fir_reg_base72_;
  SEXP Rsh_Fir_reg_guard72_;
  SEXP Rsh_Fir_reg_r340_;
  SEXP Rsh_Fir_reg_r341_;
  SEXP Rsh_Fir_reg_xj22_;
  SEXP Rsh_Fir_reg_xj23_;
  SEXP Rsh_Fir_reg_dim3_;
  SEXP Rsh_Fir_reg_r342_;
  SEXP Rsh_Fir_reg_c161_;
  SEXP Rsh_Fir_reg_r344_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg___14_;
  SEXP Rsh_Fir_reg_r345_;
  SEXP Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_reg_sym73_;
  SEXP Rsh_Fir_reg_base73_;
  SEXP Rsh_Fir_reg_guard73_;
  SEXP Rsh_Fir_reg_r346_;
  SEXP Rsh_Fir_reg_xj24_;
  SEXP Rsh_Fir_reg_xj25_;
  SEXP Rsh_Fir_reg_length9_;
  SEXP Rsh_Fir_reg_r347_;
  SEXP Rsh_Fir_reg_mdrop6_;
  SEXP Rsh_Fir_reg_mdrop7_;
  SEXP Rsh_Fir_reg_r348_;
  SEXP Rsh_Fir_reg_c162_;
  SEXP Rsh_Fir_reg_c164_;
  SEXP Rsh_Fir_reg_nrow2_;
  SEXP Rsh_Fir_reg_nrow3_;
  SEXP Rsh_Fir_reg_r349_;
  SEXP Rsh_Fir_reg_c165_;
  SEXP Rsh_Fir_reg_c166_;
  SEXP Rsh_Fir_reg_c168_;
  SEXP Rsh_Fir_reg_drop11_;
  SEXP Rsh_Fir_reg_drop12_;
  SEXP Rsh_Fir_reg_r350_;
  SEXP Rsh_Fir_reg_c170_;
  SEXP Rsh_Fir_reg_sym74_;
  SEXP Rsh_Fir_reg_base74_;
  SEXP Rsh_Fir_reg_guard74_;
  SEXP Rsh_Fir_reg_r351_;
  SEXP Rsh_Fir_reg_r352_;
  SEXP Rsh_Fir_reg_rows4_;
  SEXP Rsh_Fir_reg_rows5_;
  SEXP Rsh_Fir_reg_c171_;
  SEXP Rsh_Fir_reg_c172_;
  SEXP Rsh_Fir_reg_sym75_;
  SEXP Rsh_Fir_reg_base75_;
  SEXP Rsh_Fir_reg_guard75_;
  SEXP Rsh_Fir_reg_r353_;
  SEXP Rsh_Fir_reg_r354_;
  SEXP Rsh_Fir_reg_xx24_;
  SEXP Rsh_Fir_reg_xx25_;
  SEXP Rsh_Fir_reg_attr2_;
  SEXP Rsh_Fir_reg_r355_;
  SEXP Rsh_Fir_reg_rows6_;
  SEXP Rsh_Fir_reg_rows7_;
  SEXP Rsh_Fir_reg_c173_;
  SEXP Rsh_Fir_reg_rows9_;
  SEXP Rsh_Fir_reg_dr32_;
  SEXP Rsh_Fir_reg_dc16_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg_i56_;
  SEXP Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_reg___15_;
  SEXP Rsh_Fir_reg_r357_;
  SEXP Rsh_Fir_reg_sym76_;
  SEXP Rsh_Fir_reg_base76_;
  SEXP Rsh_Fir_reg_guard76_;
  SEXP Rsh_Fir_reg_r358_;
  SEXP Rsh_Fir_reg_r359_;
  SEXP Rsh_Fir_reg_rows10_;
  SEXP Rsh_Fir_reg_rows11_;
  SEXP Rsh_Fir_reg_anyNA8_;
  SEXP Rsh_Fir_reg_r360_;
  SEXP Rsh_Fir_reg_anyDuplicated2_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r362_;
  SEXP Rsh_Fir_reg_r363_;
  SEXP Rsh_Fir_reg_c174_;
  SEXP Rsh_Fir_reg_dup;
  SEXP Rsh_Fir_reg_dup1_;
  SEXP Rsh_Fir_reg_r364_;
  SEXP Rsh_Fir_reg_c175_;
  SEXP Rsh_Fir_reg_c177_;
  SEXP Rsh_Fir_reg_sym77_;
  SEXP Rsh_Fir_reg_base77_;
  SEXP Rsh_Fir_reg_guard77_;
  SEXP Rsh_Fir_reg_r365_;
  SEXP Rsh_Fir_reg_c180_;
  SEXP Rsh_Fir_reg_r366_;
  SEXP Rsh_Fir_reg_rows14_;
  SEXP Rsh_Fir_reg_rows15_;
  SEXP Rsh_Fir_reg_c181_;
  SEXP Rsh_Fir_reg_c182_;
  SEXP Rsh_Fir_reg_c183_;
  SEXP Rsh_Fir_reg_c185_;
  SEXP Rsh_Fir_reg__in_1_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r368_;
  SEXP Rsh_Fir_reg_ina;
  SEXP Rsh_Fir_reg_ina1_;
  SEXP Rsh_Fir_reg_c186_;
  SEXP Rsh_Fir_reg_l21_;
  SEXP Rsh_Fir_reg_c187_;
  SEXP Rsh_Fir_reg_r371_;
  SEXP Rsh_Fir_reg_l23_;
  SEXP Rsh_Fir_reg_dr34_;
  SEXP Rsh_Fir_reg_dc17_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_r373_;
  SEXP Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_reg_sym78_;
  SEXP Rsh_Fir_reg_base78_;
  SEXP Rsh_Fir_reg_guard78_;
  SEXP Rsh_Fir_reg_r378_;
  SEXP Rsh_Fir_reg_r379_;
  SEXP Rsh_Fir_reg_l26_;
  SEXP Rsh_Fir_reg_r380_;
  SEXP Rsh_Fir_reg_r381_;
  SEXP Rsh_Fir_reg_rows18_;
  SEXP Rsh_Fir_reg_rows19_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r382_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r383_;
  SEXP Rsh_Fir_reg_dup2_;
  SEXP Rsh_Fir_reg_dup3_;
  SEXP Rsh_Fir_reg_c188_;
  SEXP Rsh_Fir_reg_make_unique2_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r389_;
  SEXP Rsh_Fir_reg_r390_;
  SEXP Rsh_Fir_reg_has_j8_;
  SEXP Rsh_Fir_reg_has_j9_;
  SEXP Rsh_Fir_reg_c189_;
  SEXP Rsh_Fir_reg_c191_;
  SEXP Rsh_Fir_reg_anyDuplicated3_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r396_;
  SEXP Rsh_Fir_reg_c192_;
  SEXP Rsh_Fir_reg_c193_;
  SEXP Rsh_Fir_reg_c195_;
  SEXP Rsh_Fir_reg_make_unique3_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r398_;
  SEXP Rsh_Fir_reg_l27_;
  SEXP Rsh_Fir_reg_names__11_;
  SEXP Rsh_Fir_reg_r399_;
  SEXP Rsh_Fir_reg_sym81_;
  SEXP Rsh_Fir_reg_base81_;
  SEXP Rsh_Fir_reg_guard81_;
  SEXP Rsh_Fir_reg_r401_;
  SEXP Rsh_Fir_reg_r402_;
  SEXP Rsh_Fir_reg_rows22_;
  SEXP Rsh_Fir_reg_rows23_;
  SEXP Rsh_Fir_reg_c196_;
  SEXP Rsh_Fir_reg_c197_;
  SEXP Rsh_Fir_reg_sym82_;
  SEXP Rsh_Fir_reg_base82_;
  SEXP Rsh_Fir_reg_guard82_;
  SEXP Rsh_Fir_reg_r403_;
  SEXP Rsh_Fir_reg_r404_;
  SEXP Rsh_Fir_reg_xx26_;
  SEXP Rsh_Fir_reg_xx27_;
  SEXP Rsh_Fir_reg_attr3_;
  SEXP Rsh_Fir_reg_r405_;
  SEXP Rsh_Fir_reg_c198_;
  SEXP Rsh_Fir_reg_r407_;
  SEXP Rsh_Fir_reg_dr36_;
  SEXP Rsh_Fir_reg_dc18_;
  SEXP Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_reg_dx45_;
  SEXP Rsh_Fir_reg_i58_;
  SEXP Rsh_Fir_reg_i59_;
  SEXP Rsh_Fir_reg___16_;
  SEXP Rsh_Fir_reg_r408_;
  SEXP Rsh_Fir_reg_rows24_;
  SEXP Rsh_Fir_reg_rows25_;
  SEXP Rsh_Fir_reg_l28_;
  SEXP Rsh_Fir_reg_attr__5_;
  SEXP Rsh_Fir_reg_r409_;
  SEXP Rsh_Fir_reg_sym83_;
  SEXP Rsh_Fir_reg_base83_;
  SEXP Rsh_Fir_reg_guard83_;
  SEXP Rsh_Fir_reg_r410_;
  SEXP Rsh_Fir_reg_r411_;
  SEXP Rsh_Fir_reg_xx28_;
  SEXP Rsh_Fir_reg_xx29_;
  SEXP Rsh_Fir_reg_oldClass2_;
  SEXP Rsh_Fir_reg_r412_;
  SEXP Rsh_Fir_reg_l29_;
  SEXP Rsh_Fir_reg_oldClass__1_;
  SEXP Rsh_Fir_reg_r413_;
  SEXP Rsh_Fir_reg_x70_;
  SEXP Rsh_Fir_reg_x71_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_drop = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // drop_isMissing = missing.0(drop)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_drop;
  Rsh_Fir_reg_drop_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if drop_isMissing then L0() else L1(drop)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_drop_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(drop)
    Rsh_Fir_reg_drop_orDefault = Rsh_Fir_reg_drop;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf missing;
  //   base = ldf missing in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L3() else L4();
  // L0(r1):
  //   c = `as.logical`(r1);
  //   if c then L5() else L1();
  // L3():
  //   missing = ldf missing in base;
  //   r2 = dyn missing(<sym i>);
  //   goto L0(r2);
  // L4():
  //   r = dyn base(<sym i>);
  //   goto L0(r);
  // L1():
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L7() else L8();
  // L5():
  //   return TRUE;
  // L2(r4):
  //   r6 = `==`(r4, 1.0);
  //   return r6;
  // L7():
  //   cols = ld cols;
  //   cols1 = force? cols;
  //   checkMissing(cols1);
  //   length = ldf length in base;
  //   r5 = dyn length(cols1);
  //   goto L2(r5);
  // L8():
  //   r3 = dyn base1(<sym cols>);
  //   goto L2(r3);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_drop_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st drop = drop_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_drop_orDefault, RHO);
  (void)(Rsh_Fir_reg_drop_orDefault);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard2 then L193() else L194()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L193()
    goto L193_;
  } else {
  // L194()
    goto L194_;
  }

L2_:;
  // st mdrop = r9
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym3 = ldf nargs
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf nargs in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard3 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L3_:;
  // mdrop = ld mdrop
  Rsh_Fir_reg_mdrop = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L198() else D1()
  // L198()
  goto L198_;

L4_:;
  // r19 = `!`(r17)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args12);
  // st `has.j` = r19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym5 = ldf all
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf all in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard5 then L201() else L202()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L201()
    goto L201_;
  } else {
  // L202()
    goto L202_;
  }

L5_:;
  // r33 = `!`(r21)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c2 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c2 then L206() else L6(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L206()
    goto L206_;
  } else {
  // L6(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L6_;
  }

L6_:;
  // c11 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c11 then L212() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L212()
    goto L212_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // r37 = `!`(r35)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // c8 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // c9 = `&&`(c7, c8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args19);
  // goto L6(c9)
  // L6(c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c9_;
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // Narg = ld Narg
  Rsh_Fir_reg_Narg = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L216() else D9()
  // L216()
  goto L216_;

L10_:;
  // sym22 = ldf missing
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base22 = ldf missing in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard22 then L332() else L333()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L332()
    goto L332_;
  } else {
  // L333()
    goto L333_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym9 = ldf missing
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base9 = ldf missing in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard9 then L223() else L224()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L223()
    goto L223_;
  } else {
  // L224()
    goto L224_;
  }

L13_:;
  // c14 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c14 then L225() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L225()
    goto L225_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // sym10 = ldf `is.matrix`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base10 = ldf `is.matrix` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard10 then L229() else L230()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L229()
    goto L229_;
  } else {
  // L230()
    goto L230_;
  }

L16_:;
  // c15 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c15 then L233() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L233()
    goto L233_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard11 then L242() else L243()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L242()
    goto L242_;
  } else {
  // L243()
    goto L243_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L20_:;
  // st nm = r60
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard12 then L246() else L247()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L246()
    goto L246_;
  } else {
  // L247()
    goto L247_;
  }

L21_:;
  // c18 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c18 then L249() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L249()
    goto L249_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym13 = ldf `is.character`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base13 = ldf `is.character` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard13 then L253() else L254()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L253()
    goto L253_;
  } else {
  // L254()
    goto L254_;
  }

L24_:;
  // r68 = `!`(r67)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args29);
  // c20 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c20 then L256() else L25(c20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L256()
    goto L256_;
  } else {
  // L25(c20)
    Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c20_;
    goto L25_;
  }

L25_:;
  // c29 = `as.logical`(c22)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c29 then L262() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L262()
    goto L262_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // c26 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // c27 = `&&`(c25, c26)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args33);
  // goto L25(c27)
  // L25(c27)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c27_;
  goto L25_;

L27_:;
  // NextMethod1 = ldf NextMethod
  Rsh_Fir_reg_NextMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L292() else D44()
  // L292()
  goto L292_;

L28_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L266() else D28()
  // L266()
  goto L266_;

L29_:;
  // st cols = r79
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // sym17 = ldf anyNA
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base17 = ldf anyNA in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard17 then L276() else L277()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L276()
    goto L276_;
  } else {
  // L277()
    goto L277_;
  }

L30_:;
  // c30 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c30 then L280() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L280()
    goto L280_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // nm4 = ld nm
  Rsh_Fir_reg_nm4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L284() else D40()
  // L284()
  goto L284_;

L33_:;
  // l2 = ld y
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__2 = ldf `names<-`
  Rsh_Fir_reg_names__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L289() else D42()
  // L289()
  goto L289_;

L34_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L311() else D53()
  // L311()
  goto L311_;

L35_:;
  // st cols = r90
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // sym19 = ldf `is.null`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base19 = ldf `is.null` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard19 then L298() else L299()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L298()
    goto L298_;
  } else {
  // L299()
    goto L299_;
  }

L36_:;
  // r94 = `!`(r93)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c33 = `as.logical`(r94)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c33 then L301() else L37(c33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L301()
    goto L301_;
  } else {
  // L37(c33)
    Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c33_;
    goto L37_;
  }

L37_:;
  // c42 = `as.logical`(c35)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c42 then L307() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L307()
    goto L307_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // c39 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // c40 = `&&`(c38, c39)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args41);
  // goto L37(c40)
  // L37(c40)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c40_;
  goto L37_;

L39_:;
  // goto L34()
  // L34()
  goto L34_;

L40_:;
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // _row_names_info = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L319() else D59()
  // L319()
  goto L319_;

L42_:;
  // l5 = ld y
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L327() else D65()
  // L327()
  goto L327_;

L44_:;
  // c44 = `as.logical`(r115)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c44 then L334() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L334()
    goto L334_;
  } else {
  // L45()
    goto L45_;
  }

L45_:;
  // x35 = ld x
  Rsh_Fir_reg_x35_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L478() else D139()
  // L478()
  goto L478_;

L46_:;
  // c51 = `as.logical`(c47)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c51 then L339() else L47(c51)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L339()
    goto L339_;
  } else {
  // L47(c51)
    Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c51_;
    goto L47_;
  }

L47_:;
  // c60 = `as.logical`(c53)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c60 then L345() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L345()
    goto L345_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // r121 = `==`(r119, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args45);
  // c57 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // c58 = `&&`(c56, c57)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args47);
  // goto L47(c58)
  // L47(c58)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c58_;
  goto L47_;

L49_:;
  // sym25 = ldf names
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base25 = ldf names in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard25 then L352() else L353()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L352()
    goto L352_;
  } else {
  // L353()
    goto L353_;
  }

L50_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r123
  return Rsh_Fir_reg_r123_;

L52_:;
  // st nm = r128
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // sym26 = ldf `is.null`
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base26 = ldf `is.null` in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard26 then L356() else L357()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L356()
    goto L356_;
  } else {
  // L357()
    goto L357_;
  }

L53_:;
  // c62 = `as.logical`(r131)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c62 then L359() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L359()
    goto L359_;
  } else {
  // L54()
    goto L54_;
  }

L54_:;
  // goto L55()
  // L55()
  goto L55_;

L55_:;
  // has_j2 = ld `has.j`
  Rsh_Fir_reg_has_j2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L363() else D79()
  // L363()
  goto L363_;

L56_:;
  // c73 = `as.logical`(c65)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c73 then L369() else L58(c73)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L369()
    goto L369_;
  } else {
  // L58(c73)
    Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c73_;
    goto L58_;
  }

L57_:;
  // r136 = `!`(r135)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args52);
  // c70 = `as.logical`(r136)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // c71 = `&&`(c68, c70)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c68_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args54);
  // goto L56(c71)
  // L56(c71)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c71_;
  goto L56_;

L58_:;
  // c82 = `as.logical`(c75)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_c82_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c82 then L375() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c82_)) {
  // L375()
    goto L375_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // c79 = `as.logical`(r138)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // c80 = `&&`(c78, c79)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c78_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c79_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args57);
  // goto L58(c80)
  // L58(c80)
  Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c80_;
  goto L58_;

L60_:;
  // has_j4 = ld `has.j`
  Rsh_Fir_reg_has_j4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L408() else D101()
  // L408()
  goto L408_;

L61_:;
  // l6 = ld x
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__4 = ldf `names<-`
  Rsh_Fir_reg_names__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L379() else D84()
  // L379()
  goto L379_;

L62_:;
  // st y = r146
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r146_, RHO);
  (void)(Rsh_Fir_reg_r146_);
  // sym31 = ldf names
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base31 = ldf names in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard31 then L388() else L389()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L388()
    goto L388_;
  } else {
  // L389()
    goto L389_;
  }

L63_:;
  // st cols = r149
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r149_, RHO);
  (void)(Rsh_Fir_reg_r149_);
  // sym32 = ldf anyNA
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base32 = ldf anyNA in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard32 then L392() else L393()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L392()
    goto L392_;
  } else {
  // L393()
    goto L393_;
  }

L64_:;
  // c83 = `as.logical`(r152)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r152_;
  Rsh_Fir_reg_c83_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c83 then L396() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c83_)) {
  // L396()
    goto L396_;
  } else {
  // L65()
    goto L65_;
  }

L65_:;
  // goto L66()
  // L66()
  goto L66_;

L66_:;
  // nm12 = ld nm
  Rsh_Fir_reg_nm12_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L400() else D97()
  // L400()
  goto L400_;

L67_:;
  // l8 = ld y
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__6 = ldf `names<-`
  Rsh_Fir_reg_names__6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L405() else D99()
  // L405()
  goto L405_;

L68_:;
  // drop3 = ld drop
  Rsh_Fir_reg_drop3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L429() else D112()
  // L429()
  goto L429_;

L69_:;
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L416() else D105()
  // L416()
  goto L416_;

L70_:;
  // goto L71(r159)
  // L71(r159)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r159_;
  goto L71_;

L71_:;
  // st y = r161
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r161_, RHO);
  (void)(Rsh_Fir_reg_r161_);
  // sym34 = ldf names
  Rsh_Fir_reg_sym34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base34 = ldf names in base
  Rsh_Fir_reg_base34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard34 = `==`.4(sym34, base34)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym34_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base34_;
  Rsh_Fir_reg_guard34_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard34 then L417() else L418()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard34_)) {
  // L417()
    goto L417_;
  } else {
  // L418()
    goto L418_;
  }

L72_:;
  // st cols = r163
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r163_, RHO);
  (void)(Rsh_Fir_reg_r163_);
  // sym35 = ldf anyNA
  Rsh_Fir_reg_sym35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base35 = ldf anyNA in base
  Rsh_Fir_reg_base35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard35 = `==`.4(sym35, base35)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym35_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base35_;
  Rsh_Fir_reg_guard35_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard35 then L421() else L422()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard35_)) {
  // L421()
    goto L421_;
  } else {
  // L422()
    goto L422_;
  }

L73_:;
  // c86 = `as.logical`(r166)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c86 then L425() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c86_)) {
  // L425()
    goto L425_;
  } else {
  // L74()
    goto L74_;
  }

L74_:;
  // goto L68()
  // L68()
  goto L68_;

L75_:;
  // c96 = `as.logical`(c89)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_c89_;
  Rsh_Fir_reg_c96_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // if c96 then L436() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c96_)) {
  // L436()
    goto L436_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // r172 = `==`(r170, 1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r170_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args65);
  // c93 = `as.logical`(r172)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r172_;
  Rsh_Fir_reg_c93_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // c94 = `&&`(c92, c93)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_c92_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_c93_;
  Rsh_Fir_reg_c94_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args67);
  // goto L75(c94)
  // L75(c94)
  Rsh_Fir_reg_c89_ = Rsh_Fir_reg_c94_;
  goto L75_;

L77_:;
  // anyDuplicated1 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L443() else D117()
  // L443()
  goto L443_;

L78_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r174
  return Rsh_Fir_reg_r174_;

L80_:;
  // goto L81()
  // L81()
  goto L81_;

L81_:;
  // _row_names_info1 = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L451() else D123()
  // L451()
  goto L451_;

L82_:;
  // c104 = `as.logical`(c100)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_c100_;
  Rsh_Fir_reg_c104_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c104 then L457() else L83(c104)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c104_)) {
  // L457()
    goto L457_;
  } else {
  // L83(c104)
    Rsh_Fir_reg_c106_ = Rsh_Fir_reg_c104_;
    goto L83_;
  }

L83_:;
  // c110 = `as.logical`(c106)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_c106_;
  Rsh_Fir_reg_c110_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c110 then L460() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c110_)) {
  // L460()
    goto L460_;
  } else {
  // L84()
    goto L84_;
  }

L84_:;
  // sym38 = ldf oldClass
  Rsh_Fir_reg_sym38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base38 = ldf oldClass in base
  Rsh_Fir_reg_base38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard38 = `==`.4(sym38, base38)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym38_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base38_;
  Rsh_Fir_reg_guard38_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard38 then L465() else L466()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard38_)) {
  // L465()
    goto L465_;
  } else {
  // L466()
    goto L466_;
  }

L86_:;
  // l10 = ld y
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L469() else D132()
  // L469()
  goto L469_;

L88_:;
  // st cols = r201
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r201_, RHO);
  (void)(Rsh_Fir_reg_r201_);
  // sym40 = ldf vector
  Rsh_Fir_reg_sym40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base40 = ldf vector in base
  Rsh_Fir_reg_base40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard40 = `==`.4(sym40, base40)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym40_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base40_;
  Rsh_Fir_reg_guard40_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard40 then L483() else L484()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard40_)) {
  // L483()
    goto L483_;
  } else {
  // L484()
    goto L484_;
  }

L89_:;
  // st x = r204
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r204_, RHO);
  (void)(Rsh_Fir_reg_r204_);
  // sym42 = ldf `.Internal`
  Rsh_Fir_reg_sym42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base42 = ldf `.Internal` in base
  Rsh_Fir_reg_base42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard42 = `==`.4(sym42, base42)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym42_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base42_;
  Rsh_Fir_reg_guard42_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard42 then L490() else L491()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard42_)) {
  // L490()
    goto L490_;
  } else {
  // L491()
    goto L491_;
  }

L90_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r208 = dyn vector("list", r206)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r206_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r208_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L489() else D144()
  // L489()
  goto L489_;

L91_:;
  // st x = r210
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r210_, RHO);
  (void)(Rsh_Fir_reg_r210_);
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__4 = ldf `attr<-`
  Rsh_Fir_reg_attr__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L495() else D148()
  // L495()
  goto L495_;

L92_:;
  // sym63 = ldf seq_along
  Rsh_Fir_reg_sym63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base63 = ldf seq_along in base
  Rsh_Fir_reg_base63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard63 = `==`.4(sym63, base63)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym63_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base63_;
  Rsh_Fir_reg_guard63_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard63 then L624() else L625()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard63_)) {
  // L624()
    goto L624_;
  } else {
  // L625()
    goto L625_;
  }

L93_:;
  // st nm = r215
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r215_, RHO);
  (void)(Rsh_Fir_reg_r215_);
  // sym44 = ldf `is.null`
  Rsh_Fir_reg_sym44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base44 = ldf `is.null` in base
  Rsh_Fir_reg_base44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard44 = `==`.4(sym44, base44)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym44_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base44_;
  Rsh_Fir_reg_guard44_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard44 then L505() else L506()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard44_)) {
  // L505()
    goto L505_;
  } else {
  // L506()
    goto L506_;
  }

L94_:;
  // c113 = `as.logical`(r218)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r218_;
  Rsh_Fir_reg_c113_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c113 then L508() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c113_)) {
  // L508()
    goto L508_;
  } else {
  // L95()
    goto L95_;
  }

L95_:;
  // goto L96()
  // L96()
  goto L96_;

L96_:;
  // sym45 = ldf `is.character`
  Rsh_Fir_reg_sym45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base45 = ldf `is.character` in base
  Rsh_Fir_reg_base45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard45 = `==`.4(sym45, base45)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym45_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base45_;
  Rsh_Fir_reg_guard45_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard45 then L512() else L513()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard45_)) {
  // L512()
    goto L512_;
  } else {
  // L513()
    goto L513_;
  }

L97_:;
  // r223 = `!`(r222)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r222_;
  Rsh_Fir_reg_r223_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args78);
  // c115 = `as.logical`(r223)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r223_;
  Rsh_Fir_reg_c115_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c115 then L515() else L98(c115)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c115_)) {
  // L515()
    goto L515_;
  } else {
  // L98(c115)
    Rsh_Fir_reg_c117_ = Rsh_Fir_reg_c115_;
    goto L98_;
  }

L98_:;
  // c124 = `as.logical`(c117)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_c117_;
  Rsh_Fir_reg_c124_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args80);
  // if c124 then L521() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c124_)) {
  // L521()
    goto L521_;
  } else {
  // L100()
    goto L100_;
  }

L99_:;
  // c121 = `as.logical`(r225)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r225_;
  Rsh_Fir_reg_c121_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // c122 = `&&`(c120, c121)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_c120_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_c121_;
  Rsh_Fir_reg_c122_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args82);
  // goto L98(c122)
  // L98(c122)
  Rsh_Fir_reg_c117_ = Rsh_Fir_reg_c122_;
  goto L98_;

L100_:;
  // goto L102()
  // L102()
  goto L102_;

L101_:;
  // l14 = ld x
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__8 = ldf `names<-`
  Rsh_Fir_reg_names__8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L525() else D162()
  // L525()
  goto L525_;

L102_:;
  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L530() else D166()
  // L530()
  goto L530_;

L103_:;
  // st x = dx9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym48 = ldf names
  Rsh_Fir_reg_sym48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base48 = ldf names in base
  Rsh_Fir_reg_base48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard48 = `==`.4(sym48, base48)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym48_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base48_;
  Rsh_Fir_reg_guard48_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard48 then L535() else L536()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard48_)) {
  // L535()
    goto L535_;
  } else {
  // L536()
    goto L536_;
  }

L104_:;
  // st cols = r235
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r235_, RHO);
  (void)(Rsh_Fir_reg_r235_);
  // drop7 = ld drop
  Rsh_Fir_reg_drop7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L539() else D170()
  // L539()
  goto L539_;

L105_:;
  // c135 = `as.logical`(c128)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_c128_;
  Rsh_Fir_reg_c135_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args84);
  // if c135 then L546() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c135_)) {
  // L546()
    goto L546_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // r240 = `==`(r238, 1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r238_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r240_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args85);
  // c132 = `as.logical`(r240)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r240_;
  Rsh_Fir_reg_c132_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // c133 = `&&`(c131, c132)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_c131_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_c132_;
  Rsh_Fir_reg_c133_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args87);
  // goto L105(c133)
  // L105(c133)
  Rsh_Fir_reg_c128_ = Rsh_Fir_reg_c133_;
  goto L105_;

L107_:;
  // sym56 = ldf anyNA
  Rsh_Fir_reg_sym56_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base56 = ldf anyNA in base
  Rsh_Fir_reg_base56_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard56 = `==`.4(sym56, base56)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym56_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base56_;
  Rsh_Fir_reg_guard56_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard56 then L587() else L588()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard56_)) {
  // L587()
    goto L587_;
  } else {
  // L588()
    goto L588_;
  }

L108_:;
  // c137 = `as.logical`(r242)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r242_;
  Rsh_Fir_reg_c137_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args89);
  // if c137 then L550() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c137_)) {
  // L550()
    goto L550_;
  } else {
  // L109()
    goto L109_;
  }

L109_:;
  // goto L111()
  // L111()
  goto L111_;

L110_:;
  // st rows = r244
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r244_, RHO);
  (void)(Rsh_Fir_reg_r244_);
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L555() else D176()
  // L555()
  goto L555_;

L111_:;
  // sym52 = ldf `.subset2`
  Rsh_Fir_reg_sym52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base52 = ldf `.subset2` in base
  Rsh_Fir_reg_base52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard52 = `==`.4(sym52, base52)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym52_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base52_;
  Rsh_Fir_reg_guard52_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard52 then L558() else L559()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard52_)) {
  // L558()
    goto L558_;
  } else {
  // L559()
    goto L559_;
  }

L112_:;
  // st xj = r251
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r251_, RHO);
  (void)(Rsh_Fir_reg_r251_);
  // sym54 = ldf length
  Rsh_Fir_reg_sym54_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base54 = ldf length in base
  Rsh_Fir_reg_base54_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard54 = `==`.4(sym54, base54)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym54_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base54_;
  Rsh_Fir_reg_guard54_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard54 then L566() else L567()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard54_)) {
  // L566()
    goto L566_;
  } else {
  // L567()
    goto L567_;
  }

L113_:;
  // _subset7 = ldf `.subset2` in base
  Rsh_Fir_reg__subset7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r255 = dyn _subset7(r253, 1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r253_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r255_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset7_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L565() else D181()
  // L565()
  goto L565_;

L114_:;
  // r262 = `!=`(r257, 2)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r257_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r262_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args93);
  // c138 = `as.logical`(r262)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r262_;
  Rsh_Fir_reg_c138_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // if c138 then L573() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c138_)) {
  // L573()
    goto L573_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r261 = dyn length5(r259)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r259_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r261_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L572() else D184()
  // L572()
  goto L572_;

L116_:;
  // xj6 = ld xj
  Rsh_Fir_reg_xj6_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L580() else D187()
  // L580()
  goto L580_;

L117_:;
  // goto L118(dx11)
  // L118(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L118_;

L118_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx12
  return Rsh_Fir_reg_dx12_;

L120_:;
  // c141 = `as.logical`(r268)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r268_;
  Rsh_Fir_reg_c141_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // if c141 then L591() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c141_)) {
  // L591()
    goto L591_;
  } else {
  // L121()
    goto L121_;
  }

L121_:;
  // goto L122()
  // L122()
  goto L122_;

L122_:;
  // sym57 = ldf `is.null`
  Rsh_Fir_reg_sym57_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base57 = ldf `is.null` in base
  Rsh_Fir_reg_base57_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard57 = `==`.4(sym57, base57)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym57_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base57_;
  Rsh_Fir_reg_guard57_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard57 then L595() else L596()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard57_)) {
  // L595()
    goto L595_;
  } else {
  // L596()
    goto L596_;
  }

L123_:;
  // r277 = `!`(r273)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_r273_;
  Rsh_Fir_reg_r277_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args98);
  // c143 = `as.logical`(r277)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r277_;
  Rsh_Fir_reg_c143_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // if c143 then L601() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c143_)) {
  // L601()
    goto L601_;
  } else {
  // L125()
    goto L125_;
  }

L124_:;
  // c142 = `==`(r275, NULL)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r275_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c142_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args100);
  // goto L123(c142)
  // L123(c142)
  Rsh_Fir_reg_r273_ = Rsh_Fir_reg_c142_;
  goto L123_;

L125_:;
  // goto L127()
  // L127()
  goto L127_;

L126_:;
  // l16 = ld x
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__10 = ldf `names<-`
  Rsh_Fir_reg_names__10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L607() else D197()
  // L607()
  goto L607_;

L127_:;
  // structure1 = ldf structure
  Rsh_Fir_reg_structure1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L610() else D199()
  // L610()
  goto L610_;

L128_:;
  // st sxx = r290
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r290_, RHO);
  (void)(Rsh_Fir_reg_r290_);
  // goto L131()
  // L131()
  goto L131_;

L129_:;
  // sym62 = ldf seq_along
  Rsh_Fir_reg_sym62_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base62 = ldf seq_along in base
  Rsh_Fir_reg_base62_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard62 = `==`.4(sym62, base62)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym62_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base62_;
  Rsh_Fir_reg_guard62_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard62 then L619() else L620()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard62_)) {
  // L619()
    goto L619_;
  } else {
  // L620()
    goto L620_;
  }

L130_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r295 = dyn match(dx18, r293, NA_INT, NULL)
  SEXP Rsh_Fir_array_args102[4];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r293_;
  Rsh_Fir_array_args102[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args102[3] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r295_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L622() else D204()
  // L622()
  goto L622_;

L131_:;
  // st rows = NULL
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_const(CCP, 38), RHO);
  (void)(Rsh_const(CCP, 38));
  // sym64 = ldf `is.character`
  Rsh_Fir_reg_sym64_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base64 = ldf `is.character` in base
  Rsh_Fir_reg_base64_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard64 = `==`.4(sym64, base64)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym64_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base64_;
  Rsh_Fir_reg_guard64_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard64 then L627() else L628()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard64_)) {
  // L627()
    goto L627_;
  } else {
  // L628()
    goto L628_;
  }

L132_:;
  // st sxx = r298
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r298_, RHO);
  (void)(Rsh_Fir_reg_r298_);
  // goto L131()
  // L131()
  goto L131_;

L133_:;
  // c147 = `as.logical`(r301)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r301_;
  Rsh_Fir_reg_c147_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args104);
  // if c147 then L630() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c147_)) {
  // L630()
    goto L630_;
  } else {
  // L134()
    goto L134_;
  }

L134_:;
  // goto L136()
  // L136()
  goto L136_;

L135_:;
  // st rows = r303
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r303_, RHO);
  (void)(Rsh_Fir_reg_r303_);
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L635() else D209()
  // L635()
  goto L635_;

L136_:;
  // sym66 = ldf seq_along
  Rsh_Fir_reg_sym66_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base66 = ldf seq_along in base
  Rsh_Fir_reg_base66_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard66 = `==`.4(sym66, base66)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym66_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base66_;
  Rsh_Fir_reg_guard66_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard66 then L638() else L639()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard66_)) {
  // L638()
    goto L638_;
  } else {
  // L639()
    goto L639_;
  }

L137_:;
  // s = toForSeq(r310)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r310_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // l17 = length(s)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l17_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args107);
  // i19 = 0
  Rsh_Fir_reg_i19_ = Rsh_const(CCP, 43);
  // goto L138(i19)
  // L138(i19)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i19_;
  goto L138_;

L138_:;
  // i21 = `+`.1(i20, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_i21_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // c148 = `<`.1(l17, i21)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_c148_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if c148 then L641() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c148_)) {
  // L641()
    goto L641_;
  } else {
  // L147()
    goto L147_;
  }

L139_:;
  // st xj = dx20
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_dx20_, RHO);
  (void)(Rsh_Fir_reg_dx20_);
  // sym67 = ldf length
  Rsh_Fir_reg_sym67_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base67 = ldf length in base
  Rsh_Fir_reg_base67_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard67 = `==`.4(sym67, base67)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym67_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base67_;
  Rsh_Fir_reg_guard67_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard67 then L651() else L652()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard67_)) {
  // L651()
    goto L651_;
  } else {
  // L652()
    goto L652_;
  }

L140_:;
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r313 = dyn __9(xx23, dx22)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_xx23_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r313_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L139(i31, r313)
  // L139(i31, r313)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r313_;
  goto L139_;

L141_:;
  // r320 = `!=`(r315, 2)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r315_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r320_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args112);
  // c151 = `as.logical`(r320)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r320_;
  Rsh_Fir_reg_c151_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args113);
  // if c151 then L658() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c151_)) {
  // L658()
    goto L658_;
  } else {
  // L143()
    goto L143_;
  }

L142_:;
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r319 = dyn length6(r317)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r317_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r319_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L657() else D217()
  // L657()
  goto L657_;

L143_:;
  // xj16 = ld xj
  Rsh_Fir_reg_xj16_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L665() else D220()
  // L665()
  goto L665_;

L144_:;
  // goto L145(i43, dx24)
  // L145(i43, dx24)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L145_;

L145_:;
  // l18 = ld x
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c154 = `is.object`(l18)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c154_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args115);
  // if c154 then L670() else L671(i46, dx25, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c154_)) {
  // L670()
    goto L670_;
  } else {
  // L671(i46, dx25, l18)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L671_;
  }

L146_:;
  // st x = dx32
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx32_, RHO);
  (void)(Rsh_Fir_reg_dx32_);
  // goto L138(i55)
  // L138(i55)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i55_;
  goto L138_;

L147_:;
  // x57 = `[[`(s, i21, NULL, TRUE)
  SEXP Rsh_Fir_array_args116[4];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args116[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x57_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args116);
  // st j = x57
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_x57_, RHO);
  (void)(Rsh_Fir_reg_x57_);
  // xx16 = ld xx
  Rsh_Fir_reg_xx16_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L642() else D212()
  // L642()
  goto L642_;

L148_:;
  // goto L163()
  // L163()
  goto L163_;

L149_:;
  // st n = r325
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r325_, RHO);
  (void)(Rsh_Fir_reg_r325_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L680() else D226()
  // L680()
  goto L680_;

L150_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L688() else D228()
  // L688()
  goto L688_;

L151_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx34
  return Rsh_Fir_reg_dx34_;

L153_:;
  // st drop = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_const(CCP, 47), RHO);
  (void)(Rsh_const(CCP, 47));
  // goto L162(FALSE)
  // L162(FALSE)
  Rsh_Fir_reg_c168_ = Rsh_const(CCP, 47);
  goto L162_;

L154_:;
  // st xj = dx36
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_dx36_, RHO);
  (void)(Rsh_Fir_reg_dx36_);
  // sym70 = ldf length
  Rsh_Fir_reg_sym70_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base70 = ldf length in base
  Rsh_Fir_reg_base70_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard70 = `==`.4(sym70, base70)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym70_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base70_;
  Rsh_Fir_reg_guard70_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard70 then L694() else L695()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard70_)) {
  // L694()
    goto L694_;
  } else {
  // L695()
    goto L695_;
  }

L155_:;
  // r339 = `==`(r334, 2)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r334_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r339_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args118);
  // c160 = `as.logical`(r339)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r339_;
  Rsh_Fir_reg_c160_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args119);
  // if c160 then L701() else L157()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c160_)) {
  // L701()
    goto L701_;
  } else {
  // L157()
    goto L157_;
  }

L156_:;
  // length8 = ldf length in base
  Rsh_Fir_reg_length8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r338 = dyn length8(r336)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r336_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r338_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length8_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L700() else D232()
  // L700()
  goto L700_;

L157_:;
  // sym73 = ldf length
  Rsh_Fir_reg_sym73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base73 = ldf length in base
  Rsh_Fir_reg_base73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard73 = `==`.4(sym73, base73)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym73_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base73_;
  Rsh_Fir_reg_guard73_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard73 then L710() else L711()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard73_)) {
  // L710()
    goto L710_;
  } else {
  // L711()
    goto L711_;
  }

L158_:;
  // c161 = `is.object`(r341)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r341_;
  Rsh_Fir_reg_c161_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args122);
  // if c161 then L706() else L707(r341)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c161_)) {
  // L706()
    goto L706_;
  } else {
  // L707(r341)
    Rsh_Fir_reg_r344_ = Rsh_Fir_reg_r341_;
    goto L707_;
  }

L159_:;
  // goto L160(dx38)
  // L160(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L160_;

L160_:;
  // st nrow = dx39
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_dx39_, RHO);
  (void)(Rsh_Fir_reg_dx39_);
  // mdrop6 = ld mdrop
  Rsh_Fir_reg_mdrop6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L714() else D237()
  // L714()
  goto L714_;

L161_:;
  // st drop = c164
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_c164_, RHO);
  (void)(Rsh_Fir_reg_c164_);
  // goto L162(c164)
  // L162(c164)
  Rsh_Fir_reg_c168_ = Rsh_Fir_reg_c164_;
  goto L162_;

L162_:;
  // goto L163()
  // L163()
  goto L163_;

L163_:;
  // drop11 = ld drop
  Rsh_Fir_reg_drop11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L720() else D239()
  // L720()
  goto L720_;

L164_:;
  // goto L192()
  // L192()
  goto L192_;

L165_:;
  // c172 = `as.logical`(r352)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r352_;
  Rsh_Fir_reg_c172_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args123);
  // if c172 then L725() else L166()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c172_)) {
  // L725()
    goto L725_;
  } else {
  // L166()
    goto L166_;
  }

L166_:;
  // goto L168()
  // L168()
  goto L168_;

L167_:;
  // st rows = r354
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r354_, RHO);
  (void)(Rsh_Fir_reg_r354_);
  // goto L168()
  // L168()
  goto L168_;

L168_:;
  // rows6 = ld rows
  Rsh_Fir_reg_rows6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L731() else D243()
  // L731()
  goto L731_;

L169_:;
  // st rows = dx41
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx41_, RHO);
  (void)(Rsh_Fir_reg_dx41_);
  // sym76 = ldf anyNA
  Rsh_Fir_reg_sym76_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base76 = ldf anyNA in base
  Rsh_Fir_reg_base76_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard76 = `==`.4(sym76, base76)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_sym76_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_base76_;
  Rsh_Fir_reg_guard76_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args124);
  // if guard76 then L736() else L737()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard76_)) {
  // L736()
    goto L736_;
  } else {
  // L737()
    goto L737_;
  }

L170_:;
  // st ina = r359
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r359_, RHO);
  (void)(Rsh_Fir_reg_r359_);
  // anyDuplicated2 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L740() else D247()
  // L740()
  goto L740_;

L171_:;
  // goto L182()
  // L182()
  goto L182_;

L172_:;
  // c185 = `as.logical`(c177)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_c177_;
  Rsh_Fir_reg_c185_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args125);
  // if c185 then L749() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c185_)) {
  // L749()
    goto L749_;
  } else {
  // L174()
    goto L174_;
  }

L173_:;
  // c182 = `as.logical`(r366)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r366_;
  Rsh_Fir_reg_c182_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args126);
  // c183 = `&&`(c180, c182)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_c180_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_c182_;
  Rsh_Fir_reg_c183_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args127);
  // goto L172(c183)
  // L172(c183)
  Rsh_Fir_reg_c177_ = Rsh_Fir_reg_c183_;
  goto L172_;

L174_:;
  // goto L175()
  // L175()
  goto L175_;

L175_:;
  // ina = ld ina
  Rsh_Fir_reg_ina = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L753() else D253()
  // L753()
  goto L753_;

L176_:;
  // goto L179()
  // L179()
  goto L179_;

L177_:;
  // st rows = dx43
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // goto L179()
  // L179()
  goto L179_;

L178_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r383 = dyn ___(l26, r380, r381)
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_r380_;
  Rsh_Fir_array_args128[2] = Rsh_Fir_reg_r381_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r383_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L177(r379, r383)
  // L177(r379, r383)
  Rsh_Fir_reg_r373_ = Rsh_Fir_reg_r379_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r383_;
  goto L177_;

L179_:;
  // dup2 = ld dup
  Rsh_Fir_reg_dup2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L763() else D256()
  // L763()
  goto L763_;

L180_:;
  // goto L181(NULL)
  // L181(NULL)
  Rsh_Fir_reg_r390_ = Rsh_const(CCP, 38);
  goto L181_;

L181_:;
  // goto L182()
  // L182()
  goto L182_;

L182_:;
  // has_j8 = ld `has.j`
  Rsh_Fir_reg_has_j8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L769() else D259()
  // L769()
  goto L769_;

L183_:;
  // c195 = `as.logical`(c191)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_c191_;
  Rsh_Fir_reg_c195_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args129);
  // if c195 then L774() else L184()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c195_)) {
  // L774()
    goto L774_;
  } else {
  // L184()
    goto L184_;
  }

L184_:;
  // goto L185()
  // L185()
  goto L185_;

L185_:;
  // sym81 = ldf `is.null`
  Rsh_Fir_reg_sym81_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base81 = ldf `is.null` in base
  Rsh_Fir_reg_base81_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard81 = `==`.4(sym81, base81)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym81_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base81_;
  Rsh_Fir_reg_guard81_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard81 then L780() else L781()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard81_)) {
  // L780()
    goto L780_;
  } else {
  // L781()
    goto L781_;
  }

L186_:;
  // c197 = `as.logical`(r402)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r402_;
  Rsh_Fir_reg_c197_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c197 then L783() else L187()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c197_)) {
  // L783()
    goto L783_;
  } else {
  // L187()
    goto L187_;
  }

L187_:;
  // goto L190()
  // L190()
  goto L190_;

L188_:;
  // c198 = `is.object`(r404)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r404_;
  Rsh_Fir_reg_c198_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c198 then L788() else L789(r404)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c198_)) {
  // L788()
    goto L788_;
  } else {
  // L789(r404)
    Rsh_Fir_reg_r407_ = Rsh_Fir_reg_r404_;
    goto L789_;
  }

L189_:;
  // st rows = dx45
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // goto L190()
  // L190()
  goto L190_;

L190_:;
  // rows24 = ld rows
  Rsh_Fir_reg_rows24_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L793() else D270()
  // L793()
  goto L793_;

L191_:;
  // l29 = ld x
  Rsh_Fir_reg_l29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // oldClass__1 = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L800() else D275()
  // L800()
  goto L800_;

L192_:;
  // x70 = ld x
  Rsh_Fir_reg_x70_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L803() else D277()
  // L803()
  goto L803_;

L193_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn missing1(<sym drop>)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L2_;

L194_:;
  // r8 = dyn base2(<sym drop>)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L2_;

L195_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r13 = dyn nargs()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L197() else D0()
  // L197()
  goto L197_;

L196_:;
  // r11 = dyn base3()
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 0, NULL, NULL, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D0_:;
  // deopt 7 [r13]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L197_:;
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L3_;

D1_:;
  // deopt 7 [r12, mdrop]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_mdrop;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L198_:;
  // mdrop1 = force? mdrop
  Rsh_Fir_reg_mdrop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdrop);
  // checkMissing(mdrop1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_mdrop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // r14 = `!`(mdrop1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_mdrop1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args136);
  // r15 = `-`(r12, r14)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args137);
  // st Narg = r15
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args138);
  // if guard4 then L199() else L200()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L199()
    goto L199_;
  } else {
  // L200()
    goto L200_;
  }

L199_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r18 = dyn missing2(<sym j>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

L200_:;
  // r16 = dyn base4(<sym j>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

L201_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L203() else D2()
  // L203()
  goto L203_;

L202_:;
  // r20 = dyn base5(<lang `%in%`(names(sys.call()), c("", "drop"))>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L5_;

D2_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L203_:;
  // p1 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   sys_call = ldf `sys.call`;
  //   r24 = dyn sys_call();
  //   names = ldf names in base;
  //   r25 = dyn names(r24);
  //   goto L0(r25);
  // L2():
  //   r22 = dyn base6(<lang sys.call()>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c1 = ldf c in base;
  //   r29 = dyn c1("", "drop");
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base7("", "drop");
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_2, 0, NULL, CCP, RHO);
  // r31 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L204() else D3()
  // L204()
  goto L204_;

D3_:;
  // deopt 23 [r31]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L204_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r32 = dyn all(r31)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L205() else D4()
  // L205()
  goto L205_;

D4_:;
  // deopt 25 [r32]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L205_:;
  // goto L5(r32)
  // L5(r32)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r32_;
  goto L5_;

L206_:;
  // sym8 = ldf isS4
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base8 = ldf isS4 in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args150);
  // if guard8 then L207() else L208()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L207()
    goto L207_;
  } else {
  // L208()
    goto L208_;
  }

L207_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L209() else D5()
  // L209()
  goto L209_;

L208_:;
  // r34 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L7(c2, r34)
  // L7(c2, r34)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L7_;

D5_:;
  // deopt 29 [c2, x1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L209_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r36 = dyn isS4(x2)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L210() else D6()
  // L210()
  goto L210_;

D6_:;
  // deopt 32 [c2, r36]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L210_:;
  // goto L7(c2, r36)
  // L7(c2, r36)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L7_;

L212_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L213() else D7()
  // L213()
  goto L213_;

D7_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L213_:;
  // r38 = dyn warning("named arguments other than 'drop' are discouraged")
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L214() else D8()
  // L214()
  goto L214_;

D8_:;
  // deopt 38 [r38]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L214_:;
  // goto L9()
  // L9()
  goto L9_;

D9_:;
  // deopt 41 [Narg]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_Narg;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L216_:;
  // Narg1 = force? Narg
  Rsh_Fir_reg_Narg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Narg);
  // checkMissing(Narg1)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_Narg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // r40 = `<`(Narg1, 3)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_Narg1_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args156);
  // c12 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args157);
  // if c12 then L217() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L217()
    goto L217_;
  } else {
  // L10()
    goto L10_;
  }

L217_:;
  // mdrop2 = ld mdrop
  Rsh_Fir_reg_mdrop2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L218() else D10()
  // L218()
  goto L218_;

D10_:;
  // deopt 45 [mdrop2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_mdrop2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L218_:;
  // mdrop3 = force? mdrop2
  Rsh_Fir_reg_mdrop3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdrop2_);
  // checkMissing(mdrop3)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_mdrop3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // r41 = `!`(mdrop3)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_mdrop3_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args159);
  // c13 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args160);
  // if c13 then L219() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L219()
    goto L219_;
  } else {
  // L11()
    goto L11_;
  }

L219_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L220() else D11()
  // L220()
  goto L220_;

D11_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L220_:;
  // r42 = dyn warning1("'drop' argument will be ignored")
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L221() else D12()
  // L221()
  goto L221_;

D12_:;
  // deopt 51 [r42]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L221_:;
  // goto L12()
  // L12()
  goto L12_;

L223_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r46 = dyn missing3(<sym i>)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(r46)
  // L13(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L13_;

L224_:;
  // r44 = dyn base9(<sym i>)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L13(r44)
  // L13(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L13_;

L225_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L226() else D13()
  // L226()
  goto L226_;

D13_:;
  // deopt 57 [x3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L226_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_;

L229_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L231() else D14()
  // L231()
  goto L231_;

L230_:;
  // r49 = dyn base10(<sym i>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L16(r49)
  // L16(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L16_;

D14_:;
  // deopt 64 [i1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L231_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r51 = dyn is_matrix(i2)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L232() else D15()
  // L232()
  goto L232_;

D15_:;
  // deopt 67 [r51]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L232_:;
  // goto L16(r51)
  // L16(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L16_;

L233_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L234() else D16()
  // L234()
  goto L234_;

D16_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L234_:;
  // p3 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_3, 0, NULL, CCP, RHO);
  // r53 = dyn as_matrix(p3)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L235() else D17()
  // L235()
  goto L235_;

D17_:;
  // deopt 71 [r53]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L235_:;
  // c16 = `is.object`(r53)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args170);
  // if c16 then L236() else L237(r53)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L236()
    goto L236_;
  } else {
  // L237(r53)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    goto L237_;
  }

L236_:;
  // dr = tryDispatchBuiltin.1("[", r53)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc then L238() else L237(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L238()
    goto L238_;
  } else {
  // L237(dr)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_dr;
    goto L237_;
  }

L237_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L239() else D18()
  // L239()
  goto L239_;

L238_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;

D18_:;
  // deopt 72 [r55, i3]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L239_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r56 = dyn __(r55, i4)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L18(r56)
  // L18(r56)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r56_;
  goto L18_;

L242_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L244() else D19()
  // L244()
  goto L244_;

L243_:;
  // r59 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L20_;

D19_:;
  // deopt 80 [x7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L244_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r61 = dyn names1(x8)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L245() else D20()
  // L245()
  goto L245_;

D20_:;
  // deopt 83 [r61]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L20_;

L246_:;
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L248() else D21()
  // L248()
  goto L248_;

L247_:;
  // r62 = dyn base12(<sym nm>)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L21(r62)
  // L21(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L21_;

D21_:;
  // deopt 86 [nm]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_nm;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L248_:;
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // c17 = `==`(nm1, NULL)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args180);
  // goto L21(c17)
  // L21(c17)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_c17_;
  goto L21_;

L249_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L250() else D22()
  // L250()
  goto L250_;

D22_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L250_:;
  // r64 = dyn character()
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L251() else D23()
  // L251()
  goto L251_;

D23_:;
  // deopt 91 [r64]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L251_:;
  // st nm = r64
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // goto L23()
  // L23()
  goto L23_;

L253_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L255() else D24()
  // L255()
  goto L255_;

L254_:;
  // r66 = dyn base13(<sym i>)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L24(r66)
  // L24(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L24_;

D24_:;
  // deopt 96 [i5]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L255_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // c19 = `is.character`(i6)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args183);
  // goto L24(c19)
  // L24(c19)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_c19_;
  goto L24_;

L256_:;
  // sym14 = ldf anyNA
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base14 = ldf anyNA in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args184);
  // if guard14 then L257() else L258()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L257()
    goto L257_;
  } else {
  // L258()
    goto L258_;
  }

L257_:;
  // nm2 = ld nm
  Rsh_Fir_reg_nm2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L259() else D25()
  // L259()
  goto L259_;

L258_:;
  // r69 = dyn base14(<sym nm>)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L26(c20, r69)
  // L26(c20, r69)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L26_;

D25_:;
  // deopt 102 [c20, nm2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_nm2_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L259_:;
  // nm3 = force? nm2
  Rsh_Fir_reg_nm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm2_);
  // checkMissing(nm3)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_nm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r71 = dyn anyNA(nm3)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L260() else D26()
  // L260()
  goto L260_;

D26_:;
  // deopt 105 [c20, r71]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L260_:;
  // goto L26(c20, r71)
  // L26(c20, r71)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L26_;

L262_:;
  // sym15 = ldf seq_along
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base15 = ldf seq_along in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args188);
  // if guard15 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L263_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L265() else D27()
  // L265()
  goto L265_;

L264_:;
  // r72 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L28(r72)
  // L28(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L28_;

D27_:;
  // deopt 108 [x9]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L265_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // r74 = seq_along(x10)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args191);
  // goto L28(r74)
  // L28(r74)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r74_;
  goto L28_;

D28_:;
  // deopt 112 [r73, l, r73]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L266_:;
  // r75 = dyn names__(l, NULL, r73)
  SEXP Rsh_Fir_array_args192[3];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args192[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args192[2] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L267() else D29()
  // L267()
  goto L267_;

D29_:;
  // deopt 114 [r73, r75]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L267_:;
  // st x = r75
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // l1 = ld nm
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L268() else D30()
  // L268()
  goto L268_;

D30_:;
  // deopt 117 [r73, l1, r73]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(117, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L268_:;
  // r76 = dyn names__1(l1, NULL, r73)
  SEXP Rsh_Fir_array_args193[3];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args193[2] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L269() else D31()
  // L269()
  goto L269_;

D31_:;
  // deopt 119 [r73, r76]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L269_:;
  // st nm = r76
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // NextMethod = ldf NextMethod
  Rsh_Fir_reg_NextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L270() else D32()
  // L270()
  goto L270_;

D32_:;
  // deopt 122 []
  Rsh_Fir_deopt(122, 0, NULL, CCP, RHO);
  return R_NilValue;

L270_:;
  // r77 = dyn NextMethod("[")
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NextMethod, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L271() else D33()
  // L271()
  goto L271_;

D33_:;
  // deopt 124 [r77]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L271_:;
  // st y = r77
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // sym16 = ldf names
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base16 = ldf names in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args195);
  // if guard16 then L272() else L273()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L272()
    goto L272_;
  } else {
  // L273()
    goto L273_;
  }

L272_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L274() else D34()
  // L274()
  goto L274_;

L273_:;
  // r78 = dyn base16(<sym y>)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L29(r78)
  // L29(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L29_;

D34_:;
  // deopt 128 [y]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L274_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r80 = dyn names2(y1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L275() else D35()
  // L275()
  goto L275_;

D35_:;
  // deopt 131 [r80]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L275_:;
  // goto L29(r80)
  // L29(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L29_;

L276_:;
  // cols2 = ld cols
  Rsh_Fir_reg_cols2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L278() else D36()
  // L278()
  goto L278_;

L277_:;
  // r81 = dyn base17(<sym cols>)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L30(r81)
  // L30(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L30_;

D36_:;
  // deopt 135 [cols2]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_cols2_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L278_:;
  // cols3 = force? cols2
  Rsh_Fir_reg_cols3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols2_);
  // checkMissing(cols3)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_cols3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r83 = dyn anyNA1(cols3)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_cols3_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L279() else D37()
  // L279()
  goto L279_;

D37_:;
  // deopt 138 [r83]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L279_:;
  // goto L30(r83)
  // L30(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L30_;

L280_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L281() else D38()
  // L281()
  goto L281_;

D38_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L281_:;
  // r84 = dyn stop("undefined columns selected")
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L282() else D39()
  // L282()
  goto L282_;

D39_:;
  // deopt 142 [r84]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L282_:;
  // goto L32()
  // L32()
  goto L32_;

D40_:;
  // deopt 145 [nm4]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L284_:;
  // nm5 = force? nm4
  Rsh_Fir_reg_nm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm4_);
  // checkMissing(nm5)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_nm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(nm5)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args204);
  // if c31 then L285() else L286(nm5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L285()
    goto L285_;
  } else {
  // L286(nm5)
    Rsh_Fir_reg_nm7_ = Rsh_Fir_reg_nm5_;
    goto L286_;
  }

L285_:;
  // dr2 = tryDispatchBuiltin.1("[", nm5)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args205);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc1 then L287() else L286(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L287()
    goto L287_;
  } else {
  // L286(dr2)
    Rsh_Fir_reg_nm7_ = Rsh_Fir_reg_dr2_;
    goto L286_;
  }

L286_:;
  // cols4 = ld cols
  Rsh_Fir_reg_cols4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L288() else D41()
  // L288()
  goto L288_;

L287_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L33(dx2)
  // L33(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L33_;

D41_:;
  // deopt 147 [nm7, cols4]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_cols4_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L288_:;
  // cols5 = force? cols4
  Rsh_Fir_reg_cols5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols4_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r86 = dyn __1(nm7, cols5)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_cols5_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L33(r86)
  // L33(r86)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r86_;
  goto L33_;

D42_:;
  // deopt 151 [dx3, l2, dx3]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(151, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L289_:;
  // r87 = dyn names__2(l2, NULL, dx3)
  SEXP Rsh_Fir_array_args209[3];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args209[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__2_, 3, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L290() else D43()
  // L290()
  goto L290_;

D43_:;
  // deopt 153 [dx3, r87]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L290_:;
  // st y = r87
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // st cols = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L34()
  // L34()
  goto L34_;

D44_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L292_:;
  // r88 = dyn NextMethod1("[")
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NextMethod1_, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L293() else D45()
  // L293()
  goto L293_;

D45_:;
  // deopt 159 [r88]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L293_:;
  // st y = r88
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args211);
  // if guard18 then L294() else L295()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L294()
    goto L294_;
  } else {
  // L295()
    goto L295_;
  }

L294_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L296() else D46()
  // L296()
  goto L296_;

L295_:;
  // r89 = dyn base18(<sym y>)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L35(r89)
  // L35(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L35_;

D46_:;
  // deopt 163 [y2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L296_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r91 = dyn names3(y3)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L297() else D47()
  // L297()
  goto L297_;

D47_:;
  // deopt 166 [r91]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L297_:;
  // goto L35(r91)
  // L35(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L35_;

L298_:;
  // cols6 = ld cols
  Rsh_Fir_reg_cols6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L300() else D48()
  // L300()
  goto L300_;

L299_:;
  // r92 = dyn base19(<sym cols>)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L36(r92)
  // L36(r92)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L36_;

D48_:;
  // deopt 169 [cols6]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_cols6_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L300_:;
  // cols7 = force? cols6
  Rsh_Fir_reg_cols7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols6_);
  // checkMissing(cols7)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_cols7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // c32 = `==`(cols7, NULL)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_cols7_;
  Rsh_Fir_array_args217[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args217);
  // goto L36(c32)
  // L36(c32)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_c32_;
  goto L36_;

L301_:;
  // sym20 = ldf anyNA
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base20 = ldf anyNA in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args218);
  // if guard20 then L302() else L303()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L302()
    goto L302_;
  } else {
  // L303()
    goto L303_;
  }

L302_:;
  // cols8 = ld cols
  Rsh_Fir_reg_cols8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L304() else D49()
  // L304()
  goto L304_;

L303_:;
  // r95 = dyn base20(<sym cols>)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L38(c33, r95)
  // L38(c33, r95)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L38_;

D49_:;
  // deopt 175 [c33, cols8]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_cols8_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L304_:;
  // cols9 = force? cols8
  Rsh_Fir_reg_cols9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols8_);
  // checkMissing(cols9)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_cols9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // anyNA2 = ldf anyNA in base
  Rsh_Fir_reg_anyNA2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r97 = dyn anyNA2(cols9)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_cols9_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA2_, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L305() else D50()
  // L305()
  goto L305_;

D50_:;
  // deopt 178 [c33, r97]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L305_:;
  // goto L38(c33, r97)
  // L38(c33, r97)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L38_;

L307_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L308() else D51()
  // L308()
  goto L308_;

D51_:;
  // deopt 181 []
  Rsh_Fir_deopt(181, 0, NULL, CCP, RHO);
  return R_NilValue;

L308_:;
  // r98 = dyn stop1("undefined columns selected")
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L309() else D52()
  // L309()
  goto L309_;

D52_:;
  // deopt 183 [r98]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L309_:;
  // goto L34()
  // L34()
  goto L34_;

D53_:;
  // deopt 187 []
  Rsh_Fir_deopt(187, 0, NULL, CCP, RHO);
  return R_NilValue;

L311_:;
  // p4 = prom<V +>{
  //   cols10 = ld cols;
  //   cols11 = force? cols10;
  //   checkMissing(cols11);
  //   return cols11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_4, 0, NULL, CCP, RHO);
  // r100 = dyn anyDuplicated(p4)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L312() else D54()
  // L312()
  goto L312_;

D54_:;
  // deopt 189 [r100]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L312_:;
  // c43 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args225);
  // if c43 then L313() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L313()
    goto L313_;
  } else {
  // L40()
    goto L40_;
  }

L313_:;
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L314() else D55()
  // L314()
  goto L314_;

D55_:;
  // deopt 191 []
  Rsh_Fir_deopt(191, 0, NULL, CCP, RHO);
  return R_NilValue;

L314_:;
  // p5 = prom<V +>{
  //   cols12 = ld cols;
  //   cols13 = force? cols12;
  //   checkMissing(cols13);
  //   return cols13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_5, 0, NULL, CCP, RHO);
  // r102 = dyn make_unique(p5)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L315() else D56()
  // L315()
  goto L315_;

D56_:;
  // deopt 193 [r102]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L315_:;
  // l3 = ld y
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__3 = ldf `names<-`
  Rsh_Fir_reg_names__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L316() else D57()
  // L316()
  goto L316_;

D57_:;
  // deopt 195 [r102, l3, r102]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(195, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L316_:;
  // r103 = dyn names__3(l3, NULL, r102)
  SEXP Rsh_Fir_array_args228[3];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args228[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args228[2] = Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__3_, 3, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L317() else D58()
  // L317()
  goto L317_;

D58_:;
  // deopt 197 [r102, r103]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(197, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L317_:;
  // st y = r103
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r103_, RHO);
  (void)(Rsh_Fir_reg_r103_);
  // goto L41()
  // L41()
  goto L41_;

D59_:;
  // deopt 202 []
  Rsh_Fir_deopt(202, 0, NULL, CCP, RHO);
  return R_NilValue;

L319_:;
  // p6 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_6, 0, NULL, CCP, RHO);
  // r106 = dyn _row_names_info(p6, 0)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args230[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info, 2, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L320() else D60()
  // L320()
  goto L320_;

D60_:;
  // deopt 205 [r106]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L320_:;
  // l4 = ld y
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L321() else D61()
  // L321()
  goto L321_;

D61_:;
  // deopt 207 [r106, l4, r106]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(207, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L321_:;
  // r107 = dyn attr__(l4, NULL, "row.names", r106)
  SEXP Rsh_Fir_array_args231[4];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args231[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args231[3] = Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_array_arg_names61[4];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_array_arg_names61[3] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L322() else D62()
  // L322()
  goto L322_;

D62_:;
  // deopt 210 [r106, r107]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(210, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L322_:;
  // st y = r107
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r107_, RHO);
  (void)(Rsh_Fir_reg_r107_);
  // sym21 = ldf oldClass
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base21 = ldf oldClass in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args232);
  // if guard21 then L323() else L324()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L323()
    goto L323_;
  } else {
  // L324()
    goto L324_;
  }

L323_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L325() else D63()
  // L325()
  goto L325_;

L324_:;
  // r108 = dyn base21(<sym x>)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L42(r108)
  // L42(r108)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r108_;
  goto L42_;

D63_:;
  // deopt 214 [x13]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L325_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r110 = dyn oldClass(x14)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L326() else D64()
  // L326()
  goto L326_;

D64_:;
  // deopt 217 [r110]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L326_:;
  // goto L42(r110)
  // L42(r110)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r110_;
  goto L42_;

D65_:;
  // deopt 219 [r109, l5, r109]
  SEXP Rsh_Fir_array_deopt_stack53[3];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(219, 3, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L327_:;
  // r111 = dyn attr__1(l5, NULL, "class", r109)
  SEXP Rsh_Fir_array_args236[4];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args236[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args236[2] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args236[3] = Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_array_arg_names64[4];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_array_arg_names64[3] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L328() else D66()
  // L328()
  goto L328_;

D66_:;
  // deopt 222 [r109, r111]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(222, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L328_:;
  // st y = r111
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L329() else D67()
  // L329()
  goto L329_;

D67_:;
  // deopt 224 [y4]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L329_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y5
  return Rsh_Fir_reg_y5_;

L332_:;
  // missing4 = ldf missing in base
  Rsh_Fir_reg_missing4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r116 = dyn missing4(<sym i>)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing4_, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L44(r116)
  // L44(r116)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r116_;
  goto L44_;

L333_:;
  // r114 = dyn base22(<sym i>)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L44(r114)
  // L44(r114)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L44_;

L334_:;
  // drop1 = ld drop
  Rsh_Fir_reg_drop1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L335() else D68()
  // L335()
  goto L335_;

D68_:;
  // deopt 232 [drop1]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_drop1_;
  Rsh_Fir_deopt(232, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L335_:;
  // drop2 = force? drop1
  Rsh_Fir_reg_drop2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop1_);
  // checkMissing(drop2)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_drop2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // c45 = `as.logical`(drop2)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_drop2_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args241);
  // if c45 then L336() else L46(c45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L336()
    goto L336_;
  } else {
  // L46(c45)
    Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c45_;
    goto L46_;
  }

L336_:;
  // has_j = ld `has.j`
  Rsh_Fir_reg_has_j = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L337() else D69()
  // L337()
  goto L337_;

D69_:;
  // deopt 234 [c45, has_j]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_has_j;
  Rsh_Fir_deopt(234, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L337_:;
  // has_j1 = force? has_j
  Rsh_Fir_reg_has_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_j);
  // checkMissing(has_j1)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_has_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r117 = `!`(has_j1)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_has_j1_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args243);
  // c48 = `as.logical`(r117)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args244);
  // c49 = `&&`(c45, c48)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args245);
  // goto L46(c49)
  // L46(c49)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c49_;
  goto L46_;

L339_:;
  // sym23 = ldf length
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base23 = ldf length in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args246);
  // if guard23 then L340() else L341()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L340()
    goto L340_;
  } else {
  // L341()
    goto L341_;
  }

L340_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L342() else D70()
  // L342()
  goto L342_;

L341_:;
  // r118 = dyn base23(<sym x>)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L48(c51, r118)
  // L48(c51, r118)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r118_;
  goto L48_;

D70_:;
  // deopt 240 [c51, x15]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(240, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L342_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r120 = dyn length1(x16)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L343() else D71()
  // L343()
  goto L343_;

D71_:;
  // deopt 243 [c51, r120]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r120_;
  Rsh_Fir_deopt(243, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L343_:;
  // goto L48(c51, r120)
  // L48(c51, r120)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r120_;
  goto L48_;

L345_:;
  // sym24 = ldf `.subset2`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base24 = ldf `.subset2` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args250);
  // if guard24 then L346() else L347()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L346()
    goto L346_;
  } else {
  // L347()
    goto L347_;
  }

L346_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L348() else D72()
  // L348()
  goto L348_;

L347_:;
  // r122 = dyn base24(<sym x>, 1)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args251[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L50(r122)
  // L50(r122)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r122_;
  goto L50_;

D72_:;
  // deopt 249 [x17]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L348_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // _subset2 = ldf `.subset2` in base
  Rsh_Fir_reg__subset2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r124 = dyn _subset2(x18, 1)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args253[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset2_, 2, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L349() else D73()
  // L349()
  goto L349_;

D73_:;
  // deopt 253 [r124]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L349_:;
  // goto L50(r124)
  // L50(r124)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r124_;
  goto L50_;

L352_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L354() else D74()
  // L354()
  goto L354_;

L353_:;
  // r127 = dyn base25(<sym x>)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L52(r127)
  // L52(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L52_;

D74_:;
  // deopt 259 [x19]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L354_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r129 = dyn names4(x20)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args256, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L355() else D75()
  // L355()
  goto L355_;

D75_:;
  // deopt 262 [r129]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(262, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L355_:;
  // goto L52(r129)
  // L52(r129)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L52_;

L356_:;
  // nm8 = ld nm
  Rsh_Fir_reg_nm8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L358() else D76()
  // L358()
  goto L358_;

L357_:;
  // r130 = dyn base26(<sym nm>)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L53(r130)
  // L53(r130)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L53_;

D76_:;
  // deopt 265 [nm8]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_nm8_;
  Rsh_Fir_deopt(265, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L358_:;
  // nm9 = force? nm8
  Rsh_Fir_reg_nm9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm8_);
  // checkMissing(nm9)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_nm9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // c61 = `==`(nm9, NULL)
  SEXP Rsh_Fir_array_args259[2];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_nm9_;
  Rsh_Fir_array_args259[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args259);
  // goto L53(c61)
  // L53(c61)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_c61_;
  goto L53_;

L359_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L360() else D77()
  // L360()
  goto L360_;

D77_:;
  // deopt 269 []
  Rsh_Fir_deopt(269, 0, NULL, CCP, RHO);
  return R_NilValue;

L360_:;
  // r132 = dyn character1()
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L361() else D78()
  // L361()
  goto L361_;

D78_:;
  // deopt 270 [r132]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(270, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L361_:;
  // st nm = r132
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r132_, RHO);
  (void)(Rsh_Fir_reg_r132_);
  // goto L55()
  // L55()
  goto L55_;

D79_:;
  // deopt 274 [has_j2]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_has_j2_;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L363_:;
  // has_j3 = force? has_j2
  Rsh_Fir_reg_has_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_j2_);
  // checkMissing(has_j3)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_has_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c63 = `as.logical`(has_j3)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_has_j3_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args261);
  // if c63 then L364() else L56(c63)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L364()
    goto L364_;
  } else {
  // L56(c63)
    Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c63_;
    goto L56_;
  }

L364_:;
  // sym27 = ldf `is.character`
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base27 = ldf `is.character` in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args262);
  // if guard27 then L365() else L366()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L365()
    goto L365_;
  } else {
  // L366()
    goto L366_;
  }

L365_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L367() else D80()
  // L367()
  goto L367_;

L366_:;
  // r134 = dyn base27(<sym j>)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args263, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L57(c63, r134)
  // L57(c63, r134)
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r134_;
  goto L57_;

D80_:;
  // deopt 277 [c63, j1]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L367_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // c69 = `is.character`(j2)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args265);
  // goto L57(c63, c69)
  // L57(c63, c69)
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_c69_;
  goto L57_;

L369_:;
  // sym28 = ldf anyNA
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base28 = ldf anyNA in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args266[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args266);
  // if guard28 then L370() else L371()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L370()
    goto L370_;
  } else {
  // L371()
    goto L371_;
  }

L370_:;
  // nm10 = ld nm
  Rsh_Fir_reg_nm10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L372() else D81()
  // L372()
  goto L372_;

L371_:;
  // r137 = dyn base28(<sym nm>)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L59(c73, r137)
  // L59(c73, r137)
  Rsh_Fir_reg_c78_ = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r137_;
  goto L59_;

D81_:;
  // deopt 284 [c73, nm10]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_c73_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_nm10_;
  Rsh_Fir_deopt(284, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L372_:;
  // nm11 = force? nm10
  Rsh_Fir_reg_nm11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm10_);
  // checkMissing(nm11)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_nm11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty()));
  // anyNA3 = ldf anyNA in base
  Rsh_Fir_reg_anyNA3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r139 = dyn anyNA3(nm11)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_nm11_;
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA3_, 1, Rsh_Fir_array_args269, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L373() else D82()
  // L373()
  goto L373_;

D82_:;
  // deopt 287 [c73, r139]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_c73_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_r139_;
  Rsh_Fir_deopt(287, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L373_:;
  // goto L59(c73, r139)
  // L59(c73, r139)
  Rsh_Fir_reg_c78_ = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r139_;
  goto L59_;

L375_:;
  // sym29 = ldf seq_along
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base29 = ldf seq_along in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args270[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args270);
  // if guard29 then L376() else L377()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L376()
    goto L376_;
  } else {
  // L377()
    goto L377_;
  }

L376_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L378() else D83()
  // L378()
  goto L378_;

L377_:;
  // r140 = dyn base29(<sym x>)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L61(r140)
  // L61(r140)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L61_;

D83_:;
  // deopt 290 [x21]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L378_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // r142 = seq_along(x22)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args273);
  // goto L61(r142)
  // L61(r142)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r142_;
  goto L61_;

D84_:;
  // deopt 294 [r141, l6, r141]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(294, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L379_:;
  // r143 = dyn names__4(l6, NULL, r141)
  SEXP Rsh_Fir_array_args274[3];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args274[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args274[2] = Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_array_arg_names78[3];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_array_arg_names78[2] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__4_, 3, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names78, CCP, RHO);
  // check L380() else D85()
  // L380()
  goto L380_;

D85_:;
  // deopt 296 [r141, r143]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_r143_;
  Rsh_Fir_deopt(296, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L380_:;
  // st x = r143
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r143_, RHO);
  (void)(Rsh_Fir_reg_r143_);
  // l7 = ld nm
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names__5 = ldf `names<-`
  Rsh_Fir_reg_names__5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L381() else D86()
  // L381()
  goto L381_;

D86_:;
  // deopt 299 [r141, l7, r141]
  SEXP Rsh_Fir_array_deopt_stack73[3];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(299, 3, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L381_:;
  // r144 = dyn names__5(l7, NULL, r141)
  SEXP Rsh_Fir_array_args275[3];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args275[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args275[2] = Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_array_arg_names79[3];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__5_, 3, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L382() else D87()
  // L382()
  goto L382_;

D87_:;
  // deopt 301 [r141, r144]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(301, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L382_:;
  // st nm = r144
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r144_, RHO);
  (void)(Rsh_Fir_reg_r144_);
  // sym30 = ldf `.subset`
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base30 = ldf `.subset` in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args276);
  // if guard30 then L383() else L384()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L383()
    goto L383_;
  } else {
  // L384()
    goto L384_;
  }

L383_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L385() else D88()
  // L385()
  goto L385_;

L384_:;
  // r145 = dyn base30(<sym x>, <sym j>)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 2, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L62(r145)
  // L62(r145)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r145_;
  goto L62_;

D88_:;
  // deopt 305 [x23]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(305, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L385_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L386() else D89()
  // L386()
  goto L386_;

D89_:;
  // deopt 307 [j3]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(307, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L386_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty()));
  // _subset3 = ldf `.subset` in base
  Rsh_Fir_reg__subset3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r147 = dyn _subset3(x24, j4)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset3_, 2, Rsh_Fir_array_args280, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L387() else D90()
  // L387()
  goto L387_;

D90_:;
  // deopt 310 [r147]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_deopt(310, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L387_:;
  // goto L62(r147)
  // L62(r147)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r147_;
  goto L62_;

L388_:;
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L390() else D91()
  // L390()
  goto L390_;

L389_:;
  // r148 = dyn base31(<sym y>)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L63(r148)
  // L63(r148)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r148_;
  goto L63_;

D91_:;
  // deopt 314 [y6]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_deopt(314, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L390_:;
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // names5 = ldf names in base
  Rsh_Fir_reg_names5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r150 = dyn names5(y7)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names5_, 1, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L391() else D92()
  // L391()
  goto L391_;

D92_:;
  // deopt 317 [r150]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L391_:;
  // goto L63(r150)
  // L63(r150)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r150_;
  goto L63_;

L392_:;
  // cols14 = ld cols
  Rsh_Fir_reg_cols14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L394() else D93()
  // L394()
  goto L394_;

L393_:;
  // r151 = dyn base32(<sym cols>)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 1, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L64(r151)
  // L64(r151)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r151_;
  goto L64_;

D93_:;
  // deopt 321 [cols14]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_cols14_;
  Rsh_Fir_deopt(321, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L394_:;
  // cols15 = force? cols14
  Rsh_Fir_reg_cols15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols14_);
  // checkMissing(cols15)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_cols15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // anyNA4 = ldf anyNA in base
  Rsh_Fir_reg_anyNA4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r153 = dyn anyNA4(cols15)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_cols15_;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA4_, 1, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L395() else D94()
  // L395()
  goto L395_;

D94_:;
  // deopt 324 [r153]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L395_:;
  // goto L64(r153)
  // L64(r153)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r153_;
  goto L64_;

L396_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L397() else D95()
  // L397()
  goto L397_;

D95_:;
  // deopt 326 []
  Rsh_Fir_deopt(326, 0, NULL, CCP, RHO);
  return R_NilValue;

L397_:;
  // r154 = dyn stop2("undefined columns selected")
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args287, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L398() else D96()
  // L398()
  goto L398_;

D96_:;
  // deopt 328 [r154]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(328, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L398_:;
  // goto L66()
  // L66()
  goto L66_;

D97_:;
  // deopt 331 [nm12]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_nm12_;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L400_:;
  // nm13 = force? nm12
  Rsh_Fir_reg_nm13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm12_);
  // checkMissing(nm13)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_nm13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty()));
  // c84 = `is.object`(nm13)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_nm13_;
  Rsh_Fir_reg_c84_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args289);
  // if c84 then L401() else L402(nm13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c84_)) {
  // L401()
    goto L401_;
  } else {
  // L402(nm13)
    Rsh_Fir_reg_nm15_ = Rsh_Fir_reg_nm13_;
    goto L402_;
  }

L401_:;
  // dr4 = tryDispatchBuiltin.1("[", nm13)
  SEXP Rsh_Fir_array_args290[2];
  Rsh_Fir_array_args290[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args290[1] = Rsh_Fir_reg_nm13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args290);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // if dc2 then L403() else L402(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L403()
    goto L403_;
  } else {
  // L402(dr4)
    Rsh_Fir_reg_nm15_ = Rsh_Fir_reg_dr4_;
    goto L402_;
  }

L402_:;
  // cols16 = ld cols
  Rsh_Fir_reg_cols16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L404() else D98()
  // L404()
  goto L404_;

L403_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // goto L67(dx5)
  // L67(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L67_;

D98_:;
  // deopt 333 [nm15, cols16]
  SEXP Rsh_Fir_array_deopt_stack84[2];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_nm15_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_cols16_;
  Rsh_Fir_deopt(333, 2, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L404_:;
  // cols17 = force? cols16
  Rsh_Fir_reg_cols17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols16_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r156 = dyn __2(nm15, cols17)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_nm15_;
  Rsh_Fir_array_args293[1] = Rsh_Fir_reg_cols17_;
  SEXP Rsh_Fir_array_arg_names87[2];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_array_arg_names87[1] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L67(r156)
  // L67(r156)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r156_;
  goto L67_;

D99_:;
  // deopt 337 [dx6, l8, dx6]
  SEXP Rsh_Fir_array_deopt_stack85[3];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack85[2] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_deopt(337, 3, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L405_:;
  // r157 = dyn names__6(l8, NULL, dx6)
  SEXP Rsh_Fir_array_args294[3];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args294[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args294[2] = Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_array_arg_names88[3];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_array_arg_names88[2] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__6_, 3, Rsh_Fir_array_args294, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L406() else D100()
  // L406()
  goto L406_;

D100_:;
  // deopt 339 [dx6, r157]
  SEXP Rsh_Fir_array_deopt_stack86[2];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_r157_;
  Rsh_Fir_deopt(339, 2, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L406_:;
  // st y = r157
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r157_, RHO);
  (void)(Rsh_Fir_reg_r157_);
  // st cols = dx6
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L68()
  // L68()
  goto L68_;

D101_:;
  // deopt 342 [has_j4]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_has_j4_;
  Rsh_Fir_deopt(342, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L408_:;
  // has_j5 = force? has_j4
  Rsh_Fir_reg_has_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_j4_);
  // checkMissing(has_j5)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_has_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // c85 = `as.logical`(has_j5)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_has_j5_;
  Rsh_Fir_reg_c85_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args296);
  // if c85 then L409() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c85_)) {
  // L409()
    goto L409_;
  } else {
  // L69()
    goto L69_;
  }

L409_:;
  // sym33 = ldf `.subset`
  Rsh_Fir_reg_sym33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base33 = ldf `.subset` in base
  Rsh_Fir_reg_base33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard33 = `==`.4(sym33, base33)
  SEXP Rsh_Fir_array_args297[2];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_sym33_;
  Rsh_Fir_array_args297[1] = Rsh_Fir_reg_base33_;
  Rsh_Fir_reg_guard33_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args297);
  // if guard33 then L410() else L411()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard33_)) {
  // L410()
    goto L410_;
  } else {
  // L411()
    goto L411_;
  }

L410_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L412() else D102()
  // L412()
  goto L412_;

L411_:;
  // r158 = dyn base33(<sym x>, <sym j>)
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args298[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names89[2];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base33_, 2, Rsh_Fir_array_args298, Rsh_Fir_array_arg_names89, CCP, RHO);
  // goto L70(r158)
  // L70(r158)
  Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r158_;
  goto L70_;

D102_:;
  // deopt 346 [x25]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(346, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L412_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L413() else D103()
  // L413()
  goto L413_;

D103_:;
  // deopt 348 [j5]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_deopt(348, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L413_:;
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty()));
  // _subset4 = ldf `.subset` in base
  Rsh_Fir_reg__subset4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r160 = dyn _subset4(x26, j6)
  SEXP Rsh_Fir_array_args301[2];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_args301[1] = Rsh_Fir_reg_j6_;
  SEXP Rsh_Fir_array_arg_names90[2];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset4_, 2, Rsh_Fir_array_args301, Rsh_Fir_array_arg_names90, CCP, RHO);
  // check L414() else D104()
  // L414()
  goto L414_;

D104_:;
  // deopt 351 [r160]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_deopt(351, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L414_:;
  // goto L70(r160)
  // L70(r160)
  Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r160_;
  goto L70_;

D105_:;
  // deopt 352 [x27]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_deopt(352, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L416_:;
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty()));
  // goto L71(x28)
  // L71(x28)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_x28_;
  goto L71_;

L417_:;
  // y8 = ld y
  Rsh_Fir_reg_y8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L419() else D106()
  // L419()
  goto L419_;

L418_:;
  // r162 = dyn base34(<sym y>)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names91[1];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base34_, 1, Rsh_Fir_array_args303, Rsh_Fir_array_arg_names91, CCP, RHO);
  // goto L72(r162)
  // L72(r162)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r162_;
  goto L72_;

D106_:;
  // deopt 357 [y8]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_y8_;
  Rsh_Fir_deopt(357, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L419_:;
  // y9 = force? y8
  Rsh_Fir_reg_y9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y8_);
  // checkMissing(y9)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_y9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty()));
  // names6 = ldf names in base
  Rsh_Fir_reg_names6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r164 = dyn names6(y9)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_y9_;
  SEXP Rsh_Fir_array_arg_names92[1];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names6_, 1, Rsh_Fir_array_args305, Rsh_Fir_array_arg_names92, CCP, RHO);
  // check L420() else D107()
  // L420()
  goto L420_;

D107_:;
  // deopt 360 [r164]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L420_:;
  // goto L72(r164)
  // L72(r164)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r164_;
  goto L72_;

L421_:;
  // cols18 = ld cols
  Rsh_Fir_reg_cols18_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L423() else D108()
  // L423()
  goto L423_;

L422_:;
  // r165 = dyn base35(<sym cols>)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names93[1];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base35_, 1, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names93, CCP, RHO);
  // goto L73(r165)
  // L73(r165)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r165_;
  goto L73_;

D108_:;
  // deopt 364 [cols18]
  SEXP Rsh_Fir_array_deopt_stack94[1];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_cols18_;
  Rsh_Fir_deopt(364, 1, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L423_:;
  // cols19 = force? cols18
  Rsh_Fir_reg_cols19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols18_);
  // checkMissing(cols19)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_cols19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty()));
  // anyNA5 = ldf anyNA in base
  Rsh_Fir_reg_anyNA5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r167 = dyn anyNA5(cols19)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_cols19_;
  SEXP Rsh_Fir_array_arg_names94[1];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA5_, 1, Rsh_Fir_array_args308, Rsh_Fir_array_arg_names94, CCP, RHO);
  // check L424() else D109()
  // L424()
  goto L424_;

D109_:;
  // deopt 367 [r167]
  SEXP Rsh_Fir_array_deopt_stack95[1];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_r167_;
  Rsh_Fir_deopt(367, 1, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L424_:;
  // goto L73(r167)
  // L73(r167)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r167_;
  goto L73_;

L425_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L426() else D110()
  // L426()
  goto L426_;

D110_:;
  // deopt 369 []
  Rsh_Fir_deopt(369, 0, NULL, CCP, RHO);
  return R_NilValue;

L426_:;
  // r168 = dyn stop3("undefined columns selected")
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names95[1];
  Rsh_Fir_array_arg_names95[0] = R_MissingArg;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args309, Rsh_Fir_array_arg_names95, CCP, RHO);
  // check L427() else D111()
  // L427()
  goto L427_;

D111_:;
  // deopt 371 [r168]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_r168_;
  Rsh_Fir_deopt(371, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L427_:;
  // goto L68()
  // L68()
  goto L68_;

D112_:;
  // deopt 374 [drop3]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_drop3_;
  Rsh_Fir_deopt(374, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L429_:;
  // drop4 = force? drop3
  Rsh_Fir_reg_drop4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop3_);
  // checkMissing(drop4)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_drop4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // c87 = `as.logical`(drop4)
  SEXP Rsh_Fir_array_args311[1];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_drop4_;
  Rsh_Fir_reg_c87_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args311);
  // if c87 then L430() else L75(c87)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c87_)) {
  // L430()
    goto L430_;
  } else {
  // L75(c87)
    Rsh_Fir_reg_c89_ = Rsh_Fir_reg_c87_;
    goto L75_;
  }

L430_:;
  // sym36 = ldf length
  Rsh_Fir_reg_sym36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base36 = ldf length in base
  Rsh_Fir_reg_base36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard36 = `==`.4(sym36, base36)
  SEXP Rsh_Fir_array_args312[2];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_sym36_;
  Rsh_Fir_array_args312[1] = Rsh_Fir_reg_base36_;
  Rsh_Fir_reg_guard36_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args312);
  // if guard36 then L431() else L432()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard36_)) {
  // L431()
    goto L431_;
  } else {
  // L432()
    goto L432_;
  }

L431_:;
  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L433() else D113()
  // L433()
  goto L433_;

L432_:;
  // r169 = dyn base36(<sym y>)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names96[1];
  Rsh_Fir_array_arg_names96[0] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base36_, 1, Rsh_Fir_array_args313, Rsh_Fir_array_arg_names96, CCP, RHO);
  // goto L76(c87, r169)
  // L76(c87, r169)
  Rsh_Fir_reg_c92_ = Rsh_Fir_reg_c87_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r169_;
  goto L76_;

D113_:;
  // deopt 378 [c87, y10]
  SEXP Rsh_Fir_array_deopt_stack98[2];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_c87_;
  Rsh_Fir_array_deopt_stack98[1] = Rsh_Fir_reg_y10_;
  Rsh_Fir_deopt(378, 2, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L433_:;
  // y11 = force? y10
  Rsh_Fir_reg_y11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_y11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r171 = dyn length2(y11)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_array_arg_names97[1];
  Rsh_Fir_array_arg_names97[0] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args315, Rsh_Fir_array_arg_names97, CCP, RHO);
  // check L434() else D114()
  // L434()
  goto L434_;

D114_:;
  // deopt 381 [c87, r171]
  SEXP Rsh_Fir_array_deopt_stack99[2];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_c87_;
  Rsh_Fir_array_deopt_stack99[1] = Rsh_Fir_reg_r171_;
  Rsh_Fir_deopt(381, 2, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L434_:;
  // goto L76(c87, r171)
  // L76(c87, r171)
  Rsh_Fir_reg_c92_ = Rsh_Fir_reg_c87_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r171_;
  goto L76_;

L436_:;
  // sym37 = ldf `.subset2`
  Rsh_Fir_reg_sym37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base37 = ldf `.subset2` in base
  Rsh_Fir_reg_base37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard37 = `==`.4(sym37, base37)
  SEXP Rsh_Fir_array_args316[2];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_sym37_;
  Rsh_Fir_array_args316[1] = Rsh_Fir_reg_base37_;
  Rsh_Fir_reg_guard37_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args316);
  // if guard37 then L437() else L438()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard37_)) {
  // L437()
    goto L437_;
  } else {
  // L438()
    goto L438_;
  }

L437_:;
  // y12 = ld y
  Rsh_Fir_reg_y12_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L439() else D115()
  // L439()
  goto L439_;

L438_:;
  // r173 = dyn base37(<sym y>, 1)
  SEXP Rsh_Fir_array_args317[2];
  Rsh_Fir_array_args317[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args317[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names98[2];
  Rsh_Fir_array_arg_names98[0] = R_MissingArg;
  Rsh_Fir_array_arg_names98[1] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base37_, 2, Rsh_Fir_array_args317, Rsh_Fir_array_arg_names98, CCP, RHO);
  // goto L78(r173)
  // L78(r173)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r173_;
  goto L78_;

D115_:;
  // deopt 387 [y12]
  SEXP Rsh_Fir_array_deopt_stack100[1];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_y12_;
  Rsh_Fir_deopt(387, 1, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L439_:;
  // y13 = force? y12
  Rsh_Fir_reg_y13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y12_);
  // checkMissing(y13)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_y13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty()));
  // _subset5 = ldf `.subset2` in base
  Rsh_Fir_reg__subset5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r175 = dyn _subset5(y13, 1)
  SEXP Rsh_Fir_array_args319[2];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_array_args319[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names99[2];
  Rsh_Fir_array_arg_names99[0] = R_MissingArg;
  Rsh_Fir_array_arg_names99[1] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset5_, 2, Rsh_Fir_array_args319, Rsh_Fir_array_arg_names99, CCP, RHO);
  // check L440() else D116()
  // L440()
  goto L440_;

D116_:;
  // deopt 391 [r175]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(391, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L440_:;
  // goto L78(r175)
  // L78(r175)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r175_;
  goto L78_;

D117_:;
  // deopt 396 []
  Rsh_Fir_deopt(396, 0, NULL, CCP, RHO);
  return R_NilValue;

L443_:;
  // p7 = prom<V +>{
  //   cols20 = ld cols;
  //   cols21 = force? cols20;
  //   checkMissing(cols21);
  //   return cols21;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_7, 0, NULL, CCP, RHO);
  // r179 = dyn anyDuplicated1(p7)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names100[1];
  Rsh_Fir_array_arg_names100[0] = R_MissingArg;
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated1_, 1, Rsh_Fir_array_args321, Rsh_Fir_array_arg_names100, CCP, RHO);
  // check L444() else D118()
  // L444()
  goto L444_;

D118_:;
  // deopt 398 [r179]
  SEXP Rsh_Fir_array_deopt_stack102[1];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_deopt(398, 1, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L444_:;
  // c97 = `as.logical`(r179)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_reg_c97_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args322);
  // if c97 then L445() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c97_)) {
  // L445()
    goto L445_;
  } else {
  // L80()
    goto L80_;
  }

L445_:;
  // make_unique1 = ldf `make.unique`
  Rsh_Fir_reg_make_unique1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L446() else D119()
  // L446()
  goto L446_;

D119_:;
  // deopt 400 []
  Rsh_Fir_deopt(400, 0, NULL, CCP, RHO);
  return R_NilValue;

L446_:;
  // p8 = prom<V +>{
  //   cols22 = ld cols;
  //   cols23 = force? cols22;
  //   checkMissing(cols23);
  //   return cols23;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_8, 0, NULL, CCP, RHO);
  // r181 = dyn make_unique1(p8)
  SEXP Rsh_Fir_array_args324[1];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names101[1];
  Rsh_Fir_array_arg_names101[0] = R_MissingArg;
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique1_, 1, Rsh_Fir_array_args324, Rsh_Fir_array_arg_names101, CCP, RHO);
  // check L447() else D120()
  // L447()
  goto L447_;

D120_:;
  // deopt 402 [r181]
  SEXP Rsh_Fir_array_deopt_stack103[1];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_r181_;
  Rsh_Fir_deopt(402, 1, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L447_:;
  // l9 = ld y
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__7 = ldf `names<-`
  Rsh_Fir_reg_names__7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L448() else D121()
  // L448()
  goto L448_;

D121_:;
  // deopt 404 [r181, l9, r181]
  SEXP Rsh_Fir_array_deopt_stack104[3];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_r181_;
  Rsh_Fir_array_deopt_stack104[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack104[2] = Rsh_Fir_reg_r181_;
  Rsh_Fir_deopt(404, 3, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L448_:;
  // r182 = dyn names__7(l9, NULL, r181)
  SEXP Rsh_Fir_array_args325[3];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args325[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args325[2] = Rsh_Fir_reg_r181_;
  SEXP Rsh_Fir_array_arg_names102[3];
  Rsh_Fir_array_arg_names102[0] = R_MissingArg;
  Rsh_Fir_array_arg_names102[1] = R_MissingArg;
  Rsh_Fir_array_arg_names102[2] = R_MissingArg;
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__7_, 3, Rsh_Fir_array_args325, Rsh_Fir_array_arg_names102, CCP, RHO);
  // check L449() else D122()
  // L449()
  goto L449_;

D122_:;
  // deopt 406 [r181, r182]
  SEXP Rsh_Fir_array_deopt_stack105[2];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_Fir_reg_r181_;
  Rsh_Fir_array_deopt_stack105[1] = Rsh_Fir_reg_r182_;
  Rsh_Fir_deopt(406, 2, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L449_:;
  // st y = r182
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r182_, RHO);
  (void)(Rsh_Fir_reg_r182_);
  // goto L81()
  // L81()
  goto L81_;

D123_:;
  // deopt 411 []
  Rsh_Fir_deopt(411, 0, NULL, CCP, RHO);
  return R_NilValue;

L451_:;
  // p9 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   return x30;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_9, 0, NULL, CCP, RHO);
  // r185 = dyn _row_names_info1(p9, 2)
  SEXP Rsh_Fir_array_args327[2];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args327[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names103[2];
  Rsh_Fir_array_arg_names103[0] = R_MissingArg;
  Rsh_Fir_array_arg_names103[1] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info1_, 2, Rsh_Fir_array_args327, Rsh_Fir_array_arg_names103, CCP, RHO);
  // check L452() else D124()
  // L452()
  goto L452_;

D124_:;
  // deopt 414 [r185]
  SEXP Rsh_Fir_array_deopt_stack106[1];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_Fir_reg_r185_;
  Rsh_Fir_deopt(414, 1, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L452_:;
  // st nrow = r185
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r185_, RHO);
  (void)(Rsh_Fir_reg_r185_);
  // drop5 = ld drop
  Rsh_Fir_reg_drop5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L453() else D125()
  // L453()
  goto L453_;

D125_:;
  // deopt 416 [drop5]
  SEXP Rsh_Fir_array_deopt_stack107[1];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_drop5_;
  Rsh_Fir_deopt(416, 1, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L453_:;
  // drop6 = force? drop5
  Rsh_Fir_reg_drop6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop5_);
  // checkMissing(drop6)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_drop6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty()));
  // c98 = `as.logical`(drop6)
  SEXP Rsh_Fir_array_args329[1];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg_drop6_;
  Rsh_Fir_reg_c98_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args329);
  // if c98 then L454() else L82(c98)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c98_)) {
  // L454()
    goto L454_;
  } else {
  // L82(c98)
    Rsh_Fir_reg_c100_ = Rsh_Fir_reg_c98_;
    goto L82_;
  }

L454_:;
  // mdrop4 = ld mdrop
  Rsh_Fir_reg_mdrop4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L455() else D126()
  // L455()
  goto L455_;

D126_:;
  // deopt 418 [c98, mdrop4]
  SEXP Rsh_Fir_array_deopt_stack108[2];
  Rsh_Fir_array_deopt_stack108[0] = Rsh_Fir_reg_c98_;
  Rsh_Fir_array_deopt_stack108[1] = Rsh_Fir_reg_mdrop4_;
  Rsh_Fir_deopt(418, 2, Rsh_Fir_array_deopt_stack108, CCP, RHO);
  return R_NilValue;

L455_:;
  // mdrop5 = force? mdrop4
  Rsh_Fir_reg_mdrop5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdrop4_);
  // checkMissing(mdrop5)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_mdrop5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args330, Rsh_Fir_param_types_empty()));
  // r186 = `!`(mdrop5)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_mdrop5_;
  Rsh_Fir_reg_r186_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args331);
  // c101 = `as.logical`(r186)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_r186_;
  Rsh_Fir_reg_c101_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args332);
  // c102 = `&&`(c98, c101)
  SEXP Rsh_Fir_array_args333[2];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_c98_;
  Rsh_Fir_array_args333[1] = Rsh_Fir_reg_c101_;
  Rsh_Fir_reg_c102_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args333);
  // goto L82(c102)
  // L82(c102)
  Rsh_Fir_reg_c100_ = Rsh_Fir_reg_c102_;
  goto L82_;

L457_:;
  // nrow = ld nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L458() else D127()
  // L458()
  goto L458_;

D127_:;
  // deopt 422 [c104, nrow]
  SEXP Rsh_Fir_array_deopt_stack109[2];
  Rsh_Fir_array_deopt_stack109[0] = Rsh_Fir_reg_c104_;
  Rsh_Fir_array_deopt_stack109[1] = Rsh_Fir_reg_nrow;
  Rsh_Fir_deopt(422, 2, Rsh_Fir_array_deopt_stack109, CCP, RHO);
  return R_NilValue;

L458_:;
  // nrow1 = force? nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow);
  // checkMissing(nrow1)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_nrow1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty()));
  // r187 = `==`(nrow1, 1)
  SEXP Rsh_Fir_array_args335[2];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_nrow1_;
  Rsh_Fir_array_args335[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args335);
  // c107 = `as.logical`(r187)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_r187_;
  Rsh_Fir_reg_c107_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args336);
  // c108 = `&&`(c104, c107)
  SEXP Rsh_Fir_array_args337[2];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_c104_;
  Rsh_Fir_array_args337[1] = Rsh_Fir_reg_c107_;
  Rsh_Fir_reg_c108_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args337);
  // goto L83(c108)
  // L83(c108)
  Rsh_Fir_reg_c106_ = Rsh_Fir_reg_c108_;
  goto L83_;

L460_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L461() else D128()
  // L461()
  goto L461_;

D128_:;
  // deopt 428 []
  Rsh_Fir_deopt(428, 0, NULL, CCP, RHO);
  return R_NilValue;

L461_:;
  // p10 = prom<V +>{
  //   y14 = ld y;
  //   y15 = force? y14;
  //   checkMissing(y15);
  //   return y15;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_10, 0, NULL, CCP, RHO);
  // r189 = dyn structure[, class, `row.names`](p10, NULL, NULL)
  SEXP Rsh_Fir_array_args339[3];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args339[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args339[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names104[3];
  Rsh_Fir_array_arg_names104[0] = R_MissingArg;
  Rsh_Fir_array_arg_names104[1] = Rsh_const(CCP, 75);
  Rsh_Fir_array_arg_names104[2] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r189_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 3, Rsh_Fir_array_args339, Rsh_Fir_array_arg_names104, CCP, RHO);
  // check L462() else D129()
  // L462()
  goto L462_;

D129_:;
  // deopt 434 [r189]
  SEXP Rsh_Fir_array_deopt_stack110[1];
  Rsh_Fir_array_deopt_stack110[0] = Rsh_Fir_reg_r189_;
  Rsh_Fir_deopt(434, 1, Rsh_Fir_array_deopt_stack110, CCP, RHO);
  return R_NilValue;

L462_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r189
  return Rsh_Fir_reg_r189_;

L465_:;
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L467() else D130()
  // L467()
  goto L467_;

L466_:;
  // r192 = dyn base38(<sym x>)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names105[1];
  Rsh_Fir_array_arg_names105[0] = R_MissingArg;
  Rsh_Fir_reg_r192_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base38_, 1, Rsh_Fir_array_args340, Rsh_Fir_array_arg_names105, CCP, RHO);
  // goto L86(r192)
  // L86(r192)
  Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r192_;
  goto L86_;

D130_:;
  // deopt 438 [x31]
  SEXP Rsh_Fir_array_deopt_stack111[1];
  Rsh_Fir_array_deopt_stack111[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_deopt(438, 1, Rsh_Fir_array_deopt_stack111, CCP, RHO);
  return R_NilValue;

L467_:;
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args341[1];
  Rsh_Fir_array_args341[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args341, Rsh_Fir_param_types_empty()));
  // oldClass1 = ldf oldClass in base
  Rsh_Fir_reg_oldClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r194 = dyn oldClass1(x32)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_array_arg_names106[1];
  Rsh_Fir_array_arg_names106[0] = R_MissingArg;
  Rsh_Fir_reg_r194_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass1_, 1, Rsh_Fir_array_args342, Rsh_Fir_array_arg_names106, CCP, RHO);
  // check L468() else D131()
  // L468()
  goto L468_;

D131_:;
  // deopt 441 [r194]
  SEXP Rsh_Fir_array_deopt_stack112[1];
  Rsh_Fir_array_deopt_stack112[0] = Rsh_Fir_reg_r194_;
  Rsh_Fir_deopt(441, 1, Rsh_Fir_array_deopt_stack112, CCP, RHO);
  return R_NilValue;

L468_:;
  // goto L86(r194)
  // L86(r194)
  Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r194_;
  goto L86_;

D132_:;
  // deopt 443 [r193, l10, r193]
  SEXP Rsh_Fir_array_deopt_stack113[3];
  Rsh_Fir_array_deopt_stack113[0] = Rsh_Fir_reg_r193_;
  Rsh_Fir_array_deopt_stack113[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack113[2] = Rsh_Fir_reg_r193_;
  Rsh_Fir_deopt(443, 3, Rsh_Fir_array_deopt_stack113, CCP, RHO);
  return R_NilValue;

L469_:;
  // r195 = dyn attr__2(l10, NULL, "class", r193)
  SEXP Rsh_Fir_array_args343[4];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args343[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args343[2] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args343[3] = Rsh_Fir_reg_r193_;
  SEXP Rsh_Fir_array_arg_names107[4];
  Rsh_Fir_array_arg_names107[0] = R_MissingArg;
  Rsh_Fir_array_arg_names107[1] = R_MissingArg;
  Rsh_Fir_array_arg_names107[2] = R_MissingArg;
  Rsh_Fir_array_arg_names107[3] = R_MissingArg;
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names107, CCP, RHO);
  // check L470() else D133()
  // L470()
  goto L470_;

D133_:;
  // deopt 446 [r193, r195]
  SEXP Rsh_Fir_array_deopt_stack114[2];
  Rsh_Fir_array_deopt_stack114[0] = Rsh_Fir_reg_r193_;
  Rsh_Fir_array_deopt_stack114[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_deopt(446, 2, Rsh_Fir_array_deopt_stack114, CCP, RHO);
  return R_NilValue;

L470_:;
  // st y = r195
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r195_, RHO);
  (void)(Rsh_Fir_reg_r195_);
  // _row_names_info2 = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L471() else D134()
  // L471()
  goto L471_;

D134_:;
  // deopt 449 []
  Rsh_Fir_deopt(449, 0, NULL, CCP, RHO);
  return R_NilValue;

L471_:;
  // p11 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   return x34;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_11, 0, NULL, CCP, RHO);
  // r197 = dyn _row_names_info2(p11, 0)
  SEXP Rsh_Fir_array_args345[2];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args345[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names108[2];
  Rsh_Fir_array_arg_names108[0] = R_MissingArg;
  Rsh_Fir_array_arg_names108[1] = R_MissingArg;
  Rsh_Fir_reg_r197_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info2_, 2, Rsh_Fir_array_args345, Rsh_Fir_array_arg_names108, CCP, RHO);
  // check L472() else D135()
  // L472()
  goto L472_;

D135_:;
  // deopt 452 [r197]
  SEXP Rsh_Fir_array_deopt_stack115[1];
  Rsh_Fir_array_deopt_stack115[0] = Rsh_Fir_reg_r197_;
  Rsh_Fir_deopt(452, 1, Rsh_Fir_array_deopt_stack115, CCP, RHO);
  return R_NilValue;

L472_:;
  // l11 = ld y
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // attr__3 = ldf `attr<-`
  Rsh_Fir_reg_attr__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L473() else D136()
  // L473()
  goto L473_;

D136_:;
  // deopt 454 [r197, l11, r197]
  SEXP Rsh_Fir_array_deopt_stack116[3];
  Rsh_Fir_array_deopt_stack116[0] = Rsh_Fir_reg_r197_;
  Rsh_Fir_array_deopt_stack116[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack116[2] = Rsh_Fir_reg_r197_;
  Rsh_Fir_deopt(454, 3, Rsh_Fir_array_deopt_stack116, CCP, RHO);
  return R_NilValue;

L473_:;
  // r198 = dyn attr__3(l11, NULL, "row.names", r197)
  SEXP Rsh_Fir_array_args346[4];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args346[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args346[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args346[3] = Rsh_Fir_reg_r197_;
  SEXP Rsh_Fir_array_arg_names109[4];
  Rsh_Fir_array_arg_names109[0] = R_MissingArg;
  Rsh_Fir_array_arg_names109[1] = R_MissingArg;
  Rsh_Fir_array_arg_names109[2] = R_MissingArg;
  Rsh_Fir_array_arg_names109[3] = R_MissingArg;
  Rsh_Fir_reg_r198_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__3_, 4, Rsh_Fir_array_args346, Rsh_Fir_array_arg_names109, CCP, RHO);
  // check L474() else D137()
  // L474()
  goto L474_;

D137_:;
  // deopt 457 [r197, r198]
  SEXP Rsh_Fir_array_deopt_stack117[2];
  Rsh_Fir_array_deopt_stack117[0] = Rsh_Fir_reg_r197_;
  Rsh_Fir_array_deopt_stack117[1] = Rsh_Fir_reg_r198_;
  Rsh_Fir_deopt(457, 2, Rsh_Fir_array_deopt_stack117, CCP, RHO);
  return R_NilValue;

L474_:;
  // st y = r198
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r198_, RHO);
  (void)(Rsh_Fir_reg_r198_);
  // y16 = ld y
  Rsh_Fir_reg_y16_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L475() else D138()
  // L475()
  goto L475_;

D138_:;
  // deopt 459 [y16]
  SEXP Rsh_Fir_array_deopt_stack118[1];
  Rsh_Fir_array_deopt_stack118[0] = Rsh_Fir_reg_y16_;
  Rsh_Fir_deopt(459, 1, Rsh_Fir_array_deopt_stack118, CCP, RHO);
  return R_NilValue;

L475_:;
  // y17 = force? y16
  Rsh_Fir_reg_y17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y16_);
  // checkMissing(y17)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_Fir_reg_y17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args347, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y17
  return Rsh_Fir_reg_y17_;

D139_:;
  // deopt 464 [x35]
  SEXP Rsh_Fir_array_deopt_stack119[1];
  Rsh_Fir_array_deopt_stack119[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_deopt(464, 1, Rsh_Fir_array_deopt_stack119, CCP, RHO);
  return R_NilValue;

L478_:;
  // x36 = force? x35
  Rsh_Fir_reg_x36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x35_);
  // checkMissing(x36)
  SEXP Rsh_Fir_array_args348[1];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_x36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args348, Rsh_Fir_param_types_empty()));
  // st xx = x36
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_x36_, RHO);
  (void)(Rsh_Fir_reg_x36_);
  // sym39 = ldf names
  Rsh_Fir_reg_sym39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base39 = ldf names in base
  Rsh_Fir_reg_base39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard39 = `==`.4(sym39, base39)
  SEXP Rsh_Fir_array_args349[2];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_sym39_;
  Rsh_Fir_array_args349[1] = Rsh_Fir_reg_base39_;
  Rsh_Fir_reg_guard39_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args349);
  // if guard39 then L479() else L480()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard39_)) {
  // L479()
    goto L479_;
  } else {
  // L480()
    goto L480_;
  }

L479_:;
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L481() else D140()
  // L481()
  goto L481_;

L480_:;
  // r200 = dyn base39(<sym xx>)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names110[1];
  Rsh_Fir_array_arg_names110[0] = R_MissingArg;
  Rsh_Fir_reg_r200_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base39_, 1, Rsh_Fir_array_args350, Rsh_Fir_array_arg_names110, CCP, RHO);
  // goto L88(r200)
  // L88(r200)
  Rsh_Fir_reg_r201_ = Rsh_Fir_reg_r200_;
  goto L88_;

D140_:;
  // deopt 469 [xx]
  SEXP Rsh_Fir_array_deopt_stack120[1];
  Rsh_Fir_array_deopt_stack120[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(469, 1, Rsh_Fir_array_deopt_stack120, CCP, RHO);
  return R_NilValue;

L481_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args351[1];
  Rsh_Fir_array_args351[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args351, Rsh_Fir_param_types_empty()));
  // names7 = ldf names in base
  Rsh_Fir_reg_names7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r202 = dyn names7(xx1)
  SEXP Rsh_Fir_array_args352[1];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_array_arg_names111[1];
  Rsh_Fir_array_arg_names111[0] = R_MissingArg;
  Rsh_Fir_reg_r202_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names7_, 1, Rsh_Fir_array_args352, Rsh_Fir_array_arg_names111, CCP, RHO);
  // check L482() else D141()
  // L482()
  goto L482_;

D141_:;
  // deopt 472 [r202]
  SEXP Rsh_Fir_array_deopt_stack121[1];
  Rsh_Fir_array_deopt_stack121[0] = Rsh_Fir_reg_r202_;
  Rsh_Fir_deopt(472, 1, Rsh_Fir_array_deopt_stack121, CCP, RHO);
  return R_NilValue;

L482_:;
  // goto L88(r202)
  // L88(r202)
  Rsh_Fir_reg_r201_ = Rsh_Fir_reg_r202_;
  goto L88_;

L483_:;
  // sym41 = ldf length
  Rsh_Fir_reg_sym41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base41 = ldf length in base
  Rsh_Fir_reg_base41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard41 = `==`.4(sym41, base41)
  SEXP Rsh_Fir_array_args353[2];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_sym41_;
  Rsh_Fir_array_args353[1] = Rsh_Fir_reg_base41_;
  Rsh_Fir_reg_guard41_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args353);
  // if guard41 then L485() else L486()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard41_)) {
  // L485()
    goto L485_;
  } else {
  // L486()
    goto L486_;
  }

L484_:;
  // r203 = dyn base40("list", <lang length(x)>)
  SEXP Rsh_Fir_array_args354[2];
  Rsh_Fir_array_args354[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args354[1] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names112[2];
  Rsh_Fir_array_arg_names112[0] = R_MissingArg;
  Rsh_Fir_array_arg_names112[1] = R_MissingArg;
  Rsh_Fir_reg_r203_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base40_, 2, Rsh_Fir_array_args354, Rsh_Fir_array_arg_names112, CCP, RHO);
  // goto L89(r203)
  // L89(r203)
  Rsh_Fir_reg_r204_ = Rsh_Fir_reg_r203_;
  goto L89_;

L485_:;
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L487() else D142()
  // L487()
  goto L487_;

L486_:;
  // r205 = dyn base41(<sym x>)
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names113[1];
  Rsh_Fir_array_arg_names113[0] = R_MissingArg;
  Rsh_Fir_reg_r205_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base41_, 1, Rsh_Fir_array_args355, Rsh_Fir_array_arg_names113, CCP, RHO);
  // goto L90(r205)
  // L90(r205)
  Rsh_Fir_reg_r206_ = Rsh_Fir_reg_r205_;
  goto L90_;

D142_:;
  // deopt 479 [x37]
  SEXP Rsh_Fir_array_deopt_stack122[1];
  Rsh_Fir_array_deopt_stack122[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(479, 1, Rsh_Fir_array_deopt_stack122, CCP, RHO);
  return R_NilValue;

L487_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args356[1];
  Rsh_Fir_array_args356[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args356, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r207 = dyn length3(x38)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_array_arg_names114[1];
  Rsh_Fir_array_arg_names114[0] = R_MissingArg;
  Rsh_Fir_reg_r207_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args357, Rsh_Fir_array_arg_names114, CCP, RHO);
  // check L488() else D143()
  // L488()
  goto L488_;

D143_:;
  // deopt 482 [r207]
  SEXP Rsh_Fir_array_deopt_stack123[1];
  Rsh_Fir_array_deopt_stack123[0] = Rsh_Fir_reg_r207_;
  Rsh_Fir_deopt(482, 1, Rsh_Fir_array_deopt_stack123, CCP, RHO);
  return R_NilValue;

L488_:;
  // goto L90(r207)
  // L90(r207)
  Rsh_Fir_reg_r206_ = Rsh_Fir_reg_r207_;
  goto L90_;

D144_:;
  // deopt 484 [r208]
  SEXP Rsh_Fir_array_deopt_stack124[1];
  Rsh_Fir_array_deopt_stack124[0] = Rsh_Fir_reg_r208_;
  Rsh_Fir_deopt(484, 1, Rsh_Fir_array_deopt_stack124, CCP, RHO);
  return R_NilValue;

L489_:;
  // goto L89(r208)
  // L89(r208)
  Rsh_Fir_reg_r204_ = Rsh_Fir_reg_r208_;
  goto L89_;

L490_:;
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L492() else D145()
  // L492()
  goto L492_;

L491_:;
  // r209 = dyn base42(<lang copyDFattr(xx, x)>)
  SEXP Rsh_Fir_array_args358[1];
  Rsh_Fir_array_args358[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names115[1];
  Rsh_Fir_array_arg_names115[0] = R_MissingArg;
  Rsh_Fir_reg_r209_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base42_, 1, Rsh_Fir_array_args358, Rsh_Fir_array_arg_names115, CCP, RHO);
  // goto L91(r209)
  // L91(r209)
  Rsh_Fir_reg_r210_ = Rsh_Fir_reg_r209_;
  goto L91_;

D145_:;
  // deopt 488 [xx2]
  SEXP Rsh_Fir_array_deopt_stack125[1];
  Rsh_Fir_array_deopt_stack125[0] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_deopt(488, 1, Rsh_Fir_array_deopt_stack125, CCP, RHO);
  return R_NilValue;

L492_:;
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args359[1];
  Rsh_Fir_array_args359[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args359, Rsh_Fir_param_types_empty()));
  // x39 = ld x
  Rsh_Fir_reg_x39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L493() else D146()
  // L493()
  goto L493_;

D146_:;
  // deopt 490 [x39]
  SEXP Rsh_Fir_array_deopt_stack126[1];
  Rsh_Fir_array_deopt_stack126[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_deopt(490, 1, Rsh_Fir_array_deopt_stack126, CCP, RHO);
  return R_NilValue;

L493_:;
  // x40 = force? x39
  Rsh_Fir_reg_x40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x39_);
  // checkMissing(x40)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_x40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args360, Rsh_Fir_param_types_empty()));
  // copyDFattr = ldf copyDFattr in base
  Rsh_Fir_reg_copyDFattr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r211 = dyn copyDFattr(xx3, x40)
  SEXP Rsh_Fir_array_args361[2];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_xx3_;
  Rsh_Fir_array_args361[1] = Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_array_arg_names116[2];
  Rsh_Fir_array_arg_names116[0] = R_MissingArg;
  Rsh_Fir_array_arg_names116[1] = R_MissingArg;
  Rsh_Fir_reg_r211_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_copyDFattr, 2, Rsh_Fir_array_args361, Rsh_Fir_array_arg_names116, CCP, RHO);
  // check L494() else D147()
  // L494()
  goto L494_;

D147_:;
  // deopt 493 [r211]
  SEXP Rsh_Fir_array_deopt_stack127[1];
  Rsh_Fir_array_deopt_stack127[0] = Rsh_Fir_reg_r211_;
  Rsh_Fir_deopt(493, 1, Rsh_Fir_array_deopt_stack127, CCP, RHO);
  return R_NilValue;

L494_:;
  // goto L91(r211)
  // L91(r211)
  Rsh_Fir_reg_r210_ = Rsh_Fir_reg_r211_;
  goto L91_;

D148_:;
  // deopt 498 [NULL, l12, NULL]
  SEXP Rsh_Fir_array_deopt_stack128[3];
  Rsh_Fir_array_deopt_stack128[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack128[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack128[2] = Rsh_const(CCP, 38);
  Rsh_Fir_deopt(498, 3, Rsh_Fir_array_deopt_stack128, CCP, RHO);
  return R_NilValue;

L495_:;
  // r212 = dyn attr__4(l12, NULL, "row.names", NULL)
  SEXP Rsh_Fir_array_args362[4];
  Rsh_Fir_array_args362[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args362[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args362[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args362[3] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names117[4];
  Rsh_Fir_array_arg_names117[0] = R_MissingArg;
  Rsh_Fir_array_arg_names117[1] = R_MissingArg;
  Rsh_Fir_array_arg_names117[2] = R_MissingArg;
  Rsh_Fir_array_arg_names117[3] = R_MissingArg;
  Rsh_Fir_reg_r212_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__4_, 4, Rsh_Fir_array_args362, Rsh_Fir_array_arg_names117, CCP, RHO);
  // check L496() else D149()
  // L496()
  goto L496_;

D149_:;
  // deopt 501 [NULL, r212]
  SEXP Rsh_Fir_array_deopt_stack129[2];
  Rsh_Fir_array_deopt_stack129[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack129[1] = Rsh_Fir_reg_r212_;
  Rsh_Fir_deopt(501, 2, Rsh_Fir_array_deopt_stack129, CCP, RHO);
  return R_NilValue;

L496_:;
  // st x = r212
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r212_, RHO);
  (void)(Rsh_Fir_reg_r212_);
  // l13 = ld x
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // oldClass__ = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L497() else D150()
  // L497()
  goto L497_;

D150_:;
  // deopt 504 [NULL, l13, NULL]
  SEXP Rsh_Fir_array_deopt_stack130[3];
  Rsh_Fir_array_deopt_stack130[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack130[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack130[2] = Rsh_const(CCP, 38);
  Rsh_Fir_deopt(504, 3, Rsh_Fir_array_deopt_stack130, CCP, RHO);
  return R_NilValue;

L497_:;
  // r213 = dyn oldClass__(l13, NULL, NULL)
  SEXP Rsh_Fir_array_args363[3];
  Rsh_Fir_array_args363[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args363[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args363[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names118[3];
  Rsh_Fir_array_arg_names118[0] = R_MissingArg;
  Rsh_Fir_array_arg_names118[1] = R_MissingArg;
  Rsh_Fir_array_arg_names118[2] = R_MissingArg;
  Rsh_Fir_reg_r213_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__, 3, Rsh_Fir_array_args363, Rsh_Fir_array_arg_names118, CCP, RHO);
  // check L498() else D151()
  // L498()
  goto L498_;

D151_:;
  // deopt 506 [NULL, r213]
  SEXP Rsh_Fir_array_deopt_stack131[2];
  Rsh_Fir_array_deopt_stack131[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack131[1] = Rsh_Fir_reg_r213_;
  Rsh_Fir_deopt(506, 2, Rsh_Fir_array_deopt_stack131, CCP, RHO);
  return R_NilValue;

L498_:;
  // st x = r213
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r213_, RHO);
  (void)(Rsh_Fir_reg_r213_);
  // has_j6 = ld `has.j`
  Rsh_Fir_reg_has_j6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L499() else D152()
  // L499()
  goto L499_;

D152_:;
  // deopt 508 [has_j6]
  SEXP Rsh_Fir_array_deopt_stack132[1];
  Rsh_Fir_array_deopt_stack132[0] = Rsh_Fir_reg_has_j6_;
  Rsh_Fir_deopt(508, 1, Rsh_Fir_array_deopt_stack132, CCP, RHO);
  return R_NilValue;

L499_:;
  // has_j7 = force? has_j6
  Rsh_Fir_reg_has_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_j6_);
  // checkMissing(has_j7)
  SEXP Rsh_Fir_array_args364[1];
  Rsh_Fir_array_args364[0] = Rsh_Fir_reg_has_j7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args364, Rsh_Fir_param_types_empty()));
  // c111 = `as.logical`(has_j7)
  SEXP Rsh_Fir_array_args365[1];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_has_j7_;
  Rsh_Fir_reg_c111_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args365);
  // if c111 then L500() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c111_)) {
  // L500()
    goto L500_;
  } else {
  // L92()
    goto L92_;
  }

L500_:;
  // sym43 = ldf names
  Rsh_Fir_reg_sym43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base43 = ldf names in base
  Rsh_Fir_reg_base43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard43 = `==`.4(sym43, base43)
  SEXP Rsh_Fir_array_args366[2];
  Rsh_Fir_array_args366[0] = Rsh_Fir_reg_sym43_;
  Rsh_Fir_array_args366[1] = Rsh_Fir_reg_base43_;
  Rsh_Fir_reg_guard43_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args366);
  // if guard43 then L501() else L502()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard43_)) {
  // L501()
    goto L501_;
  } else {
  // L502()
    goto L502_;
  }

L501_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L503() else D153()
  // L503()
  goto L503_;

L502_:;
  // r214 = dyn base43(<sym x>)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names119[1];
  Rsh_Fir_array_arg_names119[0] = R_MissingArg;
  Rsh_Fir_reg_r214_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base43_, 1, Rsh_Fir_array_args367, Rsh_Fir_array_arg_names119, CCP, RHO);
  // goto L93(r214)
  // L93(r214)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r214_;
  goto L93_;

D153_:;
  // deopt 512 [x41]
  SEXP Rsh_Fir_array_deopt_stack133[1];
  Rsh_Fir_array_deopt_stack133[0] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(512, 1, Rsh_Fir_array_deopt_stack133, CCP, RHO);
  return R_NilValue;

L503_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args368[1];
  Rsh_Fir_array_args368[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args368, Rsh_Fir_param_types_empty()));
  // names8 = ldf names in base
  Rsh_Fir_reg_names8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r216 = dyn names8(x42)
  SEXP Rsh_Fir_array_args369[1];
  Rsh_Fir_array_args369[0] = Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_array_arg_names120[1];
  Rsh_Fir_array_arg_names120[0] = R_MissingArg;
  Rsh_Fir_reg_r216_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names8_, 1, Rsh_Fir_array_args369, Rsh_Fir_array_arg_names120, CCP, RHO);
  // check L504() else D154()
  // L504()
  goto L504_;

D154_:;
  // deopt 515 [r216]
  SEXP Rsh_Fir_array_deopt_stack134[1];
  Rsh_Fir_array_deopt_stack134[0] = Rsh_Fir_reg_r216_;
  Rsh_Fir_deopt(515, 1, Rsh_Fir_array_deopt_stack134, CCP, RHO);
  return R_NilValue;

L504_:;
  // goto L93(r216)
  // L93(r216)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r216_;
  goto L93_;

L505_:;
  // nm16 = ld nm
  Rsh_Fir_reg_nm16_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L507() else D155()
  // L507()
  goto L507_;

L506_:;
  // r217 = dyn base44(<sym nm>)
  SEXP Rsh_Fir_array_args370[1];
  Rsh_Fir_array_args370[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names121[1];
  Rsh_Fir_array_arg_names121[0] = R_MissingArg;
  Rsh_Fir_reg_r217_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base44_, 1, Rsh_Fir_array_args370, Rsh_Fir_array_arg_names121, CCP, RHO);
  // goto L94(r217)
  // L94(r217)
  Rsh_Fir_reg_r218_ = Rsh_Fir_reg_r217_;
  goto L94_;

D155_:;
  // deopt 518 [nm16]
  SEXP Rsh_Fir_array_deopt_stack135[1];
  Rsh_Fir_array_deopt_stack135[0] = Rsh_Fir_reg_nm16_;
  Rsh_Fir_deopt(518, 1, Rsh_Fir_array_deopt_stack135, CCP, RHO);
  return R_NilValue;

L507_:;
  // nm17 = force? nm16
  Rsh_Fir_reg_nm17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm16_);
  // checkMissing(nm17)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg_nm17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty()));
  // c112 = `==`(nm17, NULL)
  SEXP Rsh_Fir_array_args372[2];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_nm17_;
  Rsh_Fir_array_args372[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c112_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args372);
  // goto L94(c112)
  // L94(c112)
  Rsh_Fir_reg_r218_ = Rsh_Fir_reg_c112_;
  goto L94_;

L508_:;
  // character2 = ldf character
  Rsh_Fir_reg_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L509() else D156()
  // L509()
  goto L509_;

D156_:;
  // deopt 522 []
  Rsh_Fir_deopt(522, 0, NULL, CCP, RHO);
  return R_NilValue;

L509_:;
  // r219 = dyn character2()
  Rsh_Fir_reg_r219_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character2_, 0, NULL, NULL, CCP, RHO);
  // check L510() else D157()
  // L510()
  goto L510_;

D157_:;
  // deopt 523 [r219]
  SEXP Rsh_Fir_array_deopt_stack136[1];
  Rsh_Fir_array_deopt_stack136[0] = Rsh_Fir_reg_r219_;
  Rsh_Fir_deopt(523, 1, Rsh_Fir_array_deopt_stack136, CCP, RHO);
  return R_NilValue;

L510_:;
  // st nm = r219
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r219_, RHO);
  (void)(Rsh_Fir_reg_r219_);
  // goto L96()
  // L96()
  goto L96_;

L512_:;
  // j7 = ld j
  Rsh_Fir_reg_j7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L514() else D158()
  // L514()
  goto L514_;

L513_:;
  // r221 = dyn base45(<sym j>)
  SEXP Rsh_Fir_array_args373[1];
  Rsh_Fir_array_args373[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names122[1];
  Rsh_Fir_array_arg_names122[0] = R_MissingArg;
  Rsh_Fir_reg_r221_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base45_, 1, Rsh_Fir_array_args373, Rsh_Fir_array_arg_names122, CCP, RHO);
  // goto L97(r221)
  // L97(r221)
  Rsh_Fir_reg_r222_ = Rsh_Fir_reg_r221_;
  goto L97_;

D158_:;
  // deopt 528 [j7]
  SEXP Rsh_Fir_array_deopt_stack137[1];
  Rsh_Fir_array_deopt_stack137[0] = Rsh_Fir_reg_j7_;
  Rsh_Fir_deopt(528, 1, Rsh_Fir_array_deopt_stack137, CCP, RHO);
  return R_NilValue;

L514_:;
  // j8 = force? j7
  Rsh_Fir_reg_j8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j7_);
  // checkMissing(j8)
  SEXP Rsh_Fir_array_args374[1];
  Rsh_Fir_array_args374[0] = Rsh_Fir_reg_j8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args374, Rsh_Fir_param_types_empty()));
  // c114 = `is.character`(j8)
  SEXP Rsh_Fir_array_args375[1];
  Rsh_Fir_array_args375[0] = Rsh_Fir_reg_j8_;
  Rsh_Fir_reg_c114_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args375);
  // goto L97(c114)
  // L97(c114)
  Rsh_Fir_reg_r222_ = Rsh_Fir_reg_c114_;
  goto L97_;

L515_:;
  // sym46 = ldf anyNA
  Rsh_Fir_reg_sym46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base46 = ldf anyNA in base
  Rsh_Fir_reg_base46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard46 = `==`.4(sym46, base46)
  SEXP Rsh_Fir_array_args376[2];
  Rsh_Fir_array_args376[0] = Rsh_Fir_reg_sym46_;
  Rsh_Fir_array_args376[1] = Rsh_Fir_reg_base46_;
  Rsh_Fir_reg_guard46_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args376);
  // if guard46 then L516() else L517()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard46_)) {
  // L516()
    goto L516_;
  } else {
  // L517()
    goto L517_;
  }

L516_:;
  // nm18 = ld nm
  Rsh_Fir_reg_nm18_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L518() else D159()
  // L518()
  goto L518_;

L517_:;
  // r224 = dyn base46(<sym nm>)
  SEXP Rsh_Fir_array_args377[1];
  Rsh_Fir_array_args377[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names123[1];
  Rsh_Fir_array_arg_names123[0] = R_MissingArg;
  Rsh_Fir_reg_r224_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base46_, 1, Rsh_Fir_array_args377, Rsh_Fir_array_arg_names123, CCP, RHO);
  // goto L99(c115, r224)
  // L99(c115, r224)
  Rsh_Fir_reg_c120_ = Rsh_Fir_reg_c115_;
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r224_;
  goto L99_;

D159_:;
  // deopt 534 [c115, nm18]
  SEXP Rsh_Fir_array_deopt_stack138[2];
  Rsh_Fir_array_deopt_stack138[0] = Rsh_Fir_reg_c115_;
  Rsh_Fir_array_deopt_stack138[1] = Rsh_Fir_reg_nm18_;
  Rsh_Fir_deopt(534, 2, Rsh_Fir_array_deopt_stack138, CCP, RHO);
  return R_NilValue;

L518_:;
  // nm19 = force? nm18
  Rsh_Fir_reg_nm19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm18_);
  // checkMissing(nm19)
  SEXP Rsh_Fir_array_args378[1];
  Rsh_Fir_array_args378[0] = Rsh_Fir_reg_nm19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args378, Rsh_Fir_param_types_empty()));
  // anyNA6 = ldf anyNA in base
  Rsh_Fir_reg_anyNA6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r226 = dyn anyNA6(nm19)
  SEXP Rsh_Fir_array_args379[1];
  Rsh_Fir_array_args379[0] = Rsh_Fir_reg_nm19_;
  SEXP Rsh_Fir_array_arg_names124[1];
  Rsh_Fir_array_arg_names124[0] = R_MissingArg;
  Rsh_Fir_reg_r226_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA6_, 1, Rsh_Fir_array_args379, Rsh_Fir_array_arg_names124, CCP, RHO);
  // check L519() else D160()
  // L519()
  goto L519_;

D160_:;
  // deopt 537 [c115, r226]
  SEXP Rsh_Fir_array_deopt_stack139[2];
  Rsh_Fir_array_deopt_stack139[0] = Rsh_Fir_reg_c115_;
  Rsh_Fir_array_deopt_stack139[1] = Rsh_Fir_reg_r226_;
  Rsh_Fir_deopt(537, 2, Rsh_Fir_array_deopt_stack139, CCP, RHO);
  return R_NilValue;

L519_:;
  // goto L99(c115, r226)
  // L99(c115, r226)
  Rsh_Fir_reg_c120_ = Rsh_Fir_reg_c115_;
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r226_;
  goto L99_;

L521_:;
  // sym47 = ldf seq_along
  Rsh_Fir_reg_sym47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base47 = ldf seq_along in base
  Rsh_Fir_reg_base47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard47 = `==`.4(sym47, base47)
  SEXP Rsh_Fir_array_args380[2];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_sym47_;
  Rsh_Fir_array_args380[1] = Rsh_Fir_reg_base47_;
  Rsh_Fir_reg_guard47_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args380);
  // if guard47 then L522() else L523()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard47_)) {
  // L522()
    goto L522_;
  } else {
  // L523()
    goto L523_;
  }

L522_:;
  // x43 = ld x
  Rsh_Fir_reg_x43_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L524() else D161()
  // L524()
  goto L524_;

L523_:;
  // r227 = dyn base47(<sym x>)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names125[1];
  Rsh_Fir_array_arg_names125[0] = R_MissingArg;
  Rsh_Fir_reg_r227_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base47_, 1, Rsh_Fir_array_args381, Rsh_Fir_array_arg_names125, CCP, RHO);
  // goto L101(r227)
  // L101(r227)
  Rsh_Fir_reg_r228_ = Rsh_Fir_reg_r227_;
  goto L101_;

D161_:;
  // deopt 540 [x43]
  SEXP Rsh_Fir_array_deopt_stack140[1];
  Rsh_Fir_array_deopt_stack140[0] = Rsh_Fir_reg_x43_;
  Rsh_Fir_deopt(540, 1, Rsh_Fir_array_deopt_stack140, CCP, RHO);
  return R_NilValue;

L524_:;
  // x44 = force? x43
  Rsh_Fir_reg_x44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x43_);
  // checkMissing(x44)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_x44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args382, Rsh_Fir_param_types_empty()));
  // r229 = seq_along(x44)
  SEXP Rsh_Fir_array_args383[1];
  Rsh_Fir_array_args383[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_reg_r229_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args383);
  // goto L101(r229)
  // L101(r229)
  Rsh_Fir_reg_r228_ = Rsh_Fir_reg_r229_;
  goto L101_;

D162_:;
  // deopt 544 [r228, l14, r228]
  SEXP Rsh_Fir_array_deopt_stack141[3];
  Rsh_Fir_array_deopt_stack141[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_array_deopt_stack141[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack141[2] = Rsh_Fir_reg_r228_;
  Rsh_Fir_deopt(544, 3, Rsh_Fir_array_deopt_stack141, CCP, RHO);
  return R_NilValue;

L525_:;
  // r230 = dyn names__8(l14, NULL, r228)
  SEXP Rsh_Fir_array_args384[3];
  Rsh_Fir_array_args384[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args384[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args384[2] = Rsh_Fir_reg_r228_;
  SEXP Rsh_Fir_array_arg_names126[3];
  Rsh_Fir_array_arg_names126[0] = R_MissingArg;
  Rsh_Fir_array_arg_names126[1] = R_MissingArg;
  Rsh_Fir_array_arg_names126[2] = R_MissingArg;
  Rsh_Fir_reg_r230_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__8_, 3, Rsh_Fir_array_args384, Rsh_Fir_array_arg_names126, CCP, RHO);
  // check L526() else D163()
  // L526()
  goto L526_;

D163_:;
  // deopt 546 [r228, r230]
  SEXP Rsh_Fir_array_deopt_stack142[2];
  Rsh_Fir_array_deopt_stack142[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_array_deopt_stack142[1] = Rsh_Fir_reg_r230_;
  Rsh_Fir_deopt(546, 2, Rsh_Fir_array_deopt_stack142, CCP, RHO);
  return R_NilValue;

L526_:;
  // st x = r230
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r230_, RHO);
  (void)(Rsh_Fir_reg_r230_);
  // l15 = ld nm
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names__9 = ldf `names<-`
  Rsh_Fir_reg_names__9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L527() else D164()
  // L527()
  goto L527_;

D164_:;
  // deopt 549 [r228, l15, r228]
  SEXP Rsh_Fir_array_deopt_stack143[3];
  Rsh_Fir_array_deopt_stack143[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_array_deopt_stack143[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack143[2] = Rsh_Fir_reg_r228_;
  Rsh_Fir_deopt(549, 3, Rsh_Fir_array_deopt_stack143, CCP, RHO);
  return R_NilValue;

L527_:;
  // r231 = dyn names__9(l15, NULL, r228)
  SEXP Rsh_Fir_array_args385[3];
  Rsh_Fir_array_args385[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args385[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args385[2] = Rsh_Fir_reg_r228_;
  SEXP Rsh_Fir_array_arg_names127[3];
  Rsh_Fir_array_arg_names127[0] = R_MissingArg;
  Rsh_Fir_array_arg_names127[1] = R_MissingArg;
  Rsh_Fir_array_arg_names127[2] = R_MissingArg;
  Rsh_Fir_reg_r231_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__9_, 3, Rsh_Fir_array_args385, Rsh_Fir_array_arg_names127, CCP, RHO);
  // check L528() else D165()
  // L528()
  goto L528_;

D165_:;
  // deopt 551 [r228, r231]
  SEXP Rsh_Fir_array_deopt_stack144[2];
  Rsh_Fir_array_deopt_stack144[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_array_deopt_stack144[1] = Rsh_Fir_reg_r231_;
  Rsh_Fir_deopt(551, 2, Rsh_Fir_array_deopt_stack144, CCP, RHO);
  return R_NilValue;

L528_:;
  // st nm = r231
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r231_, RHO);
  (void)(Rsh_Fir_reg_r231_);
  // goto L102()
  // L102()
  goto L102_;

D166_:;
  // deopt 555 [x45]
  SEXP Rsh_Fir_array_deopt_stack145[1];
  Rsh_Fir_array_deopt_stack145[0] = Rsh_Fir_reg_x45_;
  Rsh_Fir_deopt(555, 1, Rsh_Fir_array_deopt_stack145, CCP, RHO);
  return R_NilValue;

L530_:;
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args386[1];
  Rsh_Fir_array_args386[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args386, Rsh_Fir_param_types_empty()));
  // c125 = `is.object`(x46)
  SEXP Rsh_Fir_array_args387[1];
  Rsh_Fir_array_args387[0] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_c125_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args387);
  // if c125 then L531() else L532(x46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c125_)) {
  // L531()
    goto L531_;
  } else {
  // L532(x46)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_x46_;
    goto L532_;
  }

L531_:;
  // dr6 = tryDispatchBuiltin.1("[", x46)
  SEXP Rsh_Fir_array_args388[2];
  Rsh_Fir_array_args388[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args388[1] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args388);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args389[1];
  Rsh_Fir_array_args389[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args389, Rsh_Fir_param_types_empty());
  // if dc3 then L533() else L532(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L533()
    goto L533_;
  } else {
  // L532(dr6)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_dr6_;
    goto L532_;
  }

L532_:;
  // j9 = ld j
  Rsh_Fir_reg_j9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L534() else D167()
  // L534()
  goto L534_;

L533_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args390[1];
  Rsh_Fir_array_args390[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args390, Rsh_Fir_param_types_empty());
  // goto L103(dx8)
  // L103(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L103_;

D167_:;
  // deopt 557 [x48, j9]
  SEXP Rsh_Fir_array_deopt_stack146[2];
  Rsh_Fir_array_deopt_stack146[0] = Rsh_Fir_reg_x48_;
  Rsh_Fir_array_deopt_stack146[1] = Rsh_Fir_reg_j9_;
  Rsh_Fir_deopt(557, 2, Rsh_Fir_array_deopt_stack146, CCP, RHO);
  return R_NilValue;

L534_:;
  // j10 = force? j9
  Rsh_Fir_reg_j10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j9_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r233 = dyn __3(x48, j10)
  SEXP Rsh_Fir_array_args391[2];
  Rsh_Fir_array_args391[0] = Rsh_Fir_reg_x48_;
  Rsh_Fir_array_args391[1] = Rsh_Fir_reg_j10_;
  SEXP Rsh_Fir_array_arg_names128[2];
  Rsh_Fir_array_arg_names128[0] = R_MissingArg;
  Rsh_Fir_array_arg_names128[1] = R_MissingArg;
  Rsh_Fir_reg_r233_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args391, Rsh_Fir_array_arg_names128, CCP, RHO);
  // goto L103(r233)
  // L103(r233)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r233_;
  goto L103_;

L535_:;
  // x49 = ld x
  Rsh_Fir_reg_x49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L537() else D168()
  // L537()
  goto L537_;

L536_:;
  // r234 = dyn base48(<sym x>)
  SEXP Rsh_Fir_array_args392[1];
  Rsh_Fir_array_args392[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names129[1];
  Rsh_Fir_array_arg_names129[0] = R_MissingArg;
  Rsh_Fir_reg_r234_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base48_, 1, Rsh_Fir_array_args392, Rsh_Fir_array_arg_names129, CCP, RHO);
  // goto L104(r234)
  // L104(r234)
  Rsh_Fir_reg_r235_ = Rsh_Fir_reg_r234_;
  goto L104_;

D168_:;
  // deopt 563 [x49]
  SEXP Rsh_Fir_array_deopt_stack147[1];
  Rsh_Fir_array_deopt_stack147[0] = Rsh_Fir_reg_x49_;
  Rsh_Fir_deopt(563, 1, Rsh_Fir_array_deopt_stack147, CCP, RHO);
  return R_NilValue;

L537_:;
  // x50 = force? x49
  Rsh_Fir_reg_x50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x49_);
  // checkMissing(x50)
  SEXP Rsh_Fir_array_args393[1];
  Rsh_Fir_array_args393[0] = Rsh_Fir_reg_x50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args393, Rsh_Fir_param_types_empty()));
  // names9 = ldf names in base
  Rsh_Fir_reg_names9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r236 = dyn names9(x50)
  SEXP Rsh_Fir_array_args394[1];
  Rsh_Fir_array_args394[0] = Rsh_Fir_reg_x50_;
  SEXP Rsh_Fir_array_arg_names130[1];
  Rsh_Fir_array_arg_names130[0] = R_MissingArg;
  Rsh_Fir_reg_r236_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names9_, 1, Rsh_Fir_array_args394, Rsh_Fir_array_arg_names130, CCP, RHO);
  // check L538() else D169()
  // L538()
  goto L538_;

D169_:;
  // deopt 566 [r236]
  SEXP Rsh_Fir_array_deopt_stack148[1];
  Rsh_Fir_array_deopt_stack148[0] = Rsh_Fir_reg_r236_;
  Rsh_Fir_deopt(566, 1, Rsh_Fir_array_deopt_stack148, CCP, RHO);
  return R_NilValue;

L538_:;
  // goto L104(r236)
  // L104(r236)
  Rsh_Fir_reg_r235_ = Rsh_Fir_reg_r236_;
  goto L104_;

D170_:;
  // deopt 568 [drop7]
  SEXP Rsh_Fir_array_deopt_stack149[1];
  Rsh_Fir_array_deopt_stack149[0] = Rsh_Fir_reg_drop7_;
  Rsh_Fir_deopt(568, 1, Rsh_Fir_array_deopt_stack149, CCP, RHO);
  return R_NilValue;

L539_:;
  // drop8 = force? drop7
  Rsh_Fir_reg_drop8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop7_);
  // checkMissing(drop8)
  SEXP Rsh_Fir_array_args395[1];
  Rsh_Fir_array_args395[0] = Rsh_Fir_reg_drop8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args395, Rsh_Fir_param_types_empty()));
  // c126 = `as.logical`(drop8)
  SEXP Rsh_Fir_array_args396[1];
  Rsh_Fir_array_args396[0] = Rsh_Fir_reg_drop8_;
  Rsh_Fir_reg_c126_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args396);
  // if c126 then L540() else L105(c126)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c126_)) {
  // L540()
    goto L540_;
  } else {
  // L105(c126)
    Rsh_Fir_reg_c128_ = Rsh_Fir_reg_c126_;
    goto L105_;
  }

L540_:;
  // sym49 = ldf length
  Rsh_Fir_reg_sym49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base49 = ldf length in base
  Rsh_Fir_reg_base49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard49 = `==`.4(sym49, base49)
  SEXP Rsh_Fir_array_args397[2];
  Rsh_Fir_array_args397[0] = Rsh_Fir_reg_sym49_;
  Rsh_Fir_array_args397[1] = Rsh_Fir_reg_base49_;
  Rsh_Fir_reg_guard49_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args397);
  // if guard49 then L541() else L542()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard49_)) {
  // L541()
    goto L541_;
  } else {
  // L542()
    goto L542_;
  }

L541_:;
  // x51 = ld x
  Rsh_Fir_reg_x51_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L543() else D171()
  // L543()
  goto L543_;

L542_:;
  // r237 = dyn base49(<sym x>)
  SEXP Rsh_Fir_array_args398[1];
  Rsh_Fir_array_args398[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names131[1];
  Rsh_Fir_array_arg_names131[0] = R_MissingArg;
  Rsh_Fir_reg_r237_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base49_, 1, Rsh_Fir_array_args398, Rsh_Fir_array_arg_names131, CCP, RHO);
  // goto L106(c126, r237)
  // L106(c126, r237)
  Rsh_Fir_reg_c131_ = Rsh_Fir_reg_c126_;
  Rsh_Fir_reg_r238_ = Rsh_Fir_reg_r237_;
  goto L106_;

D171_:;
  // deopt 572 [c126, x51]
  SEXP Rsh_Fir_array_deopt_stack150[2];
  Rsh_Fir_array_deopt_stack150[0] = Rsh_Fir_reg_c126_;
  Rsh_Fir_array_deopt_stack150[1] = Rsh_Fir_reg_x51_;
  Rsh_Fir_deopt(572, 2, Rsh_Fir_array_deopt_stack150, CCP, RHO);
  return R_NilValue;

L543_:;
  // x52 = force? x51
  Rsh_Fir_reg_x52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x51_);
  // checkMissing(x52)
  SEXP Rsh_Fir_array_args399[1];
  Rsh_Fir_array_args399[0] = Rsh_Fir_reg_x52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args399, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r239 = dyn length4(x52)
  SEXP Rsh_Fir_array_args400[1];
  Rsh_Fir_array_args400[0] = Rsh_Fir_reg_x52_;
  SEXP Rsh_Fir_array_arg_names132[1];
  Rsh_Fir_array_arg_names132[0] = R_MissingArg;
  Rsh_Fir_reg_r239_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args400, Rsh_Fir_array_arg_names132, CCP, RHO);
  // check L544() else D172()
  // L544()
  goto L544_;

D172_:;
  // deopt 575 [c126, r239]
  SEXP Rsh_Fir_array_deopt_stack151[2];
  Rsh_Fir_array_deopt_stack151[0] = Rsh_Fir_reg_c126_;
  Rsh_Fir_array_deopt_stack151[1] = Rsh_Fir_reg_r239_;
  Rsh_Fir_deopt(575, 2, Rsh_Fir_array_deopt_stack151, CCP, RHO);
  return R_NilValue;

L544_:;
  // goto L106(c126, r239)
  // L106(c126, r239)
  Rsh_Fir_reg_c131_ = Rsh_Fir_reg_c126_;
  Rsh_Fir_reg_r238_ = Rsh_Fir_reg_r239_;
  goto L106_;

L546_:;
  // sym50 = ldf `is.character`
  Rsh_Fir_reg_sym50_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base50 = ldf `is.character` in base
  Rsh_Fir_reg_base50_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard50 = `==`.4(sym50, base50)
  SEXP Rsh_Fir_array_args401[2];
  Rsh_Fir_array_args401[0] = Rsh_Fir_reg_sym50_;
  Rsh_Fir_array_args401[1] = Rsh_Fir_reg_base50_;
  Rsh_Fir_reg_guard50_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args401);
  // if guard50 then L547() else L548()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard50_)) {
  // L547()
    goto L547_;
  } else {
  // L548()
    goto L548_;
  }

L547_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L549() else D173()
  // L549()
  goto L549_;

L548_:;
  // r241 = dyn base50(<sym i>)
  SEXP Rsh_Fir_array_args402[1];
  Rsh_Fir_array_args402[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names133[1];
  Rsh_Fir_array_arg_names133[0] = R_MissingArg;
  Rsh_Fir_reg_r241_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base50_, 1, Rsh_Fir_array_args402, Rsh_Fir_array_arg_names133, CCP, RHO);
  // goto L108(r241)
  // L108(r241)
  Rsh_Fir_reg_r242_ = Rsh_Fir_reg_r241_;
  goto L108_;

D173_:;
  // deopt 580 [i7]
  SEXP Rsh_Fir_array_deopt_stack152[1];
  Rsh_Fir_array_deopt_stack152[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(580, 1, Rsh_Fir_array_deopt_stack152, CCP, RHO);
  return R_NilValue;

L549_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args403[1];
  Rsh_Fir_array_args403[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args403, Rsh_Fir_param_types_empty()));
  // c136 = `is.character`(i8)
  SEXP Rsh_Fir_array_args404[1];
  Rsh_Fir_array_args404[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c136_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args404);
  // goto L108(c136)
  // L108(c136)
  Rsh_Fir_reg_r242_ = Rsh_Fir_reg_c136_;
  goto L108_;

L550_:;
  // sym51 = ldf attr
  Rsh_Fir_reg_sym51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base51 = ldf attr in base
  Rsh_Fir_reg_base51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard51 = `==`.4(sym51, base51)
  SEXP Rsh_Fir_array_args405[2];
  Rsh_Fir_array_args405[0] = Rsh_Fir_reg_sym51_;
  Rsh_Fir_array_args405[1] = Rsh_Fir_reg_base51_;
  Rsh_Fir_reg_guard51_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args405);
  // if guard51 then L551() else L552()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard51_)) {
  // L551()
    goto L551_;
  } else {
  // L552()
    goto L552_;
  }

L551_:;
  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L553() else D174()
  // L553()
  goto L553_;

L552_:;
  // r243 = dyn base51(<sym xx>, "row.names")
  SEXP Rsh_Fir_array_args406[2];
  Rsh_Fir_array_args406[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args406[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names134[2];
  Rsh_Fir_array_arg_names134[0] = R_MissingArg;
  Rsh_Fir_array_arg_names134[1] = R_MissingArg;
  Rsh_Fir_reg_r243_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base51_, 2, Rsh_Fir_array_args406, Rsh_Fir_array_arg_names134, CCP, RHO);
  // goto L110(r243)
  // L110(r243)
  Rsh_Fir_reg_r244_ = Rsh_Fir_reg_r243_;
  goto L110_;

D174_:;
  // deopt 585 [xx4]
  SEXP Rsh_Fir_array_deopt_stack153[1];
  Rsh_Fir_array_deopt_stack153[0] = Rsh_Fir_reg_xx4_;
  Rsh_Fir_deopt(585, 1, Rsh_Fir_array_deopt_stack153, CCP, RHO);
  return R_NilValue;

L553_:;
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args407[1];
  Rsh_Fir_array_args407[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args407, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r245 = dyn attr(xx5, "row.names")
  SEXP Rsh_Fir_array_args408[2];
  Rsh_Fir_array_args408[0] = Rsh_Fir_reg_xx5_;
  Rsh_Fir_array_args408[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names135[2];
  Rsh_Fir_array_arg_names135[0] = R_MissingArg;
  Rsh_Fir_array_arg_names135[1] = R_MissingArg;
  Rsh_Fir_reg_r245_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args408, Rsh_Fir_array_arg_names135, CCP, RHO);
  // check L554() else D175()
  // L554()
  goto L554_;

D175_:;
  // deopt 589 [r245]
  SEXP Rsh_Fir_array_deopt_stack154[1];
  Rsh_Fir_array_deopt_stack154[0] = Rsh_Fir_reg_r245_;
  Rsh_Fir_deopt(589, 1, Rsh_Fir_array_deopt_stack154, CCP, RHO);
  return R_NilValue;

L554_:;
  // goto L110(r245)
  // L110(r245)
  Rsh_Fir_reg_r244_ = Rsh_Fir_reg_r245_;
  goto L110_;

D176_:;
  // deopt 592 []
  Rsh_Fir_deopt(592, 0, NULL, CCP, RHO);
  return R_NilValue;

L555_:;
  // p12 = prom<V +>{
  //   i9 = ld i;
  //   i10 = force? i9;
  //   checkMissing(i10);
  //   return i10;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   rows = ld rows;
  //   rows1 = force? rows;
  //   checkMissing(rows1);
  //   return rows1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_13, 0, NULL, CCP, RHO);
  // r248 = dyn pmatch[, , `duplicates.ok`](p12, p13, TRUE)
  SEXP Rsh_Fir_array_args411[3];
  Rsh_Fir_array_args411[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args411[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args411[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names136[3];
  Rsh_Fir_array_arg_names136[0] = R_MissingArg;
  Rsh_Fir_array_arg_names136[1] = R_MissingArg;
  Rsh_Fir_array_arg_names136[2] = Rsh_const(CCP, 81);
  Rsh_Fir_reg_r248_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 3, Rsh_Fir_array_args411, Rsh_Fir_array_arg_names136, CCP, RHO);
  // check L556() else D177()
  // L556()
  goto L556_;

D177_:;
  // deopt 597 [r248]
  SEXP Rsh_Fir_array_deopt_stack155[1];
  Rsh_Fir_array_deopt_stack155[0] = Rsh_Fir_reg_r248_;
  Rsh_Fir_deopt(597, 1, Rsh_Fir_array_deopt_stack155, CCP, RHO);
  return R_NilValue;

L556_:;
  // st i = r248
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r248_, RHO);
  (void)(Rsh_Fir_reg_r248_);
  // goto L111()
  // L111()
  goto L111_;

L558_:;
  // sym53 = ldf `.subset`
  Rsh_Fir_reg_sym53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base53 = ldf `.subset` in base
  Rsh_Fir_reg_base53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard53 = `==`.4(sym53, base53)
  SEXP Rsh_Fir_array_args412[2];
  Rsh_Fir_array_args412[0] = Rsh_Fir_reg_sym53_;
  Rsh_Fir_array_args412[1] = Rsh_Fir_reg_base53_;
  Rsh_Fir_reg_guard53_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args412);
  // if guard53 then L560() else L561()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard53_)) {
  // L560()
    goto L560_;
  } else {
  // L561()
    goto L561_;
  }

L559_:;
  // r250 = dyn base52(<lang .subset(xx, j)>, 1)
  SEXP Rsh_Fir_array_args413[2];
  Rsh_Fir_array_args413[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args413[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names137[2];
  Rsh_Fir_array_arg_names137[0] = R_MissingArg;
  Rsh_Fir_array_arg_names137[1] = R_MissingArg;
  Rsh_Fir_reg_r250_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base52_, 2, Rsh_Fir_array_args413, Rsh_Fir_array_arg_names137, CCP, RHO);
  // goto L112(r250)
  // L112(r250)
  Rsh_Fir_reg_r251_ = Rsh_Fir_reg_r250_;
  goto L112_;

L560_:;
  // xx6 = ld xx
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L562() else D178()
  // L562()
  goto L562_;

L561_:;
  // r252 = dyn base53(<sym xx>, <sym j>)
  SEXP Rsh_Fir_array_args414[2];
  Rsh_Fir_array_args414[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args414[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names138[2];
  Rsh_Fir_array_arg_names138[0] = R_MissingArg;
  Rsh_Fir_array_arg_names138[1] = R_MissingArg;
  Rsh_Fir_reg_r252_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base53_, 2, Rsh_Fir_array_args414, Rsh_Fir_array_arg_names138, CCP, RHO);
  // goto L113(r252)
  // L113(r252)
  Rsh_Fir_reg_r253_ = Rsh_Fir_reg_r252_;
  goto L113_;

D178_:;
  // deopt 605 [xx6]
  SEXP Rsh_Fir_array_deopt_stack156[1];
  Rsh_Fir_array_deopt_stack156[0] = Rsh_Fir_reg_xx6_;
  Rsh_Fir_deopt(605, 1, Rsh_Fir_array_deopt_stack156, CCP, RHO);
  return R_NilValue;

L562_:;
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args415[1];
  Rsh_Fir_array_args415[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args415, Rsh_Fir_param_types_empty()));
  // j11 = ld j
  Rsh_Fir_reg_j11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L563() else D179()
  // L563()
  goto L563_;

D179_:;
  // deopt 607 [j11]
  SEXP Rsh_Fir_array_deopt_stack157[1];
  Rsh_Fir_array_deopt_stack157[0] = Rsh_Fir_reg_j11_;
  Rsh_Fir_deopt(607, 1, Rsh_Fir_array_deopt_stack157, CCP, RHO);
  return R_NilValue;

L563_:;
  // j12 = force? j11
  Rsh_Fir_reg_j12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j11_);
  // checkMissing(j12)
  SEXP Rsh_Fir_array_args416[1];
  Rsh_Fir_array_args416[0] = Rsh_Fir_reg_j12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args416, Rsh_Fir_param_types_empty()));
  // _subset6 = ldf `.subset` in base
  Rsh_Fir_reg__subset6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r254 = dyn _subset6(xx7, j12)
  SEXP Rsh_Fir_array_args417[2];
  Rsh_Fir_array_args417[0] = Rsh_Fir_reg_xx7_;
  Rsh_Fir_array_args417[1] = Rsh_Fir_reg_j12_;
  SEXP Rsh_Fir_array_arg_names139[2];
  Rsh_Fir_array_arg_names139[0] = R_MissingArg;
  Rsh_Fir_array_arg_names139[1] = R_MissingArg;
  Rsh_Fir_reg_r254_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__subset6_, 2, Rsh_Fir_array_args417, Rsh_Fir_array_arg_names139, CCP, RHO);
  // check L564() else D180()
  // L564()
  goto L564_;

D180_:;
  // deopt 610 [r254]
  SEXP Rsh_Fir_array_deopt_stack158[1];
  Rsh_Fir_array_deopt_stack158[0] = Rsh_Fir_reg_r254_;
  Rsh_Fir_deopt(610, 1, Rsh_Fir_array_deopt_stack158, CCP, RHO);
  return R_NilValue;

L564_:;
  // goto L113(r254)
  // L113(r254)
  Rsh_Fir_reg_r253_ = Rsh_Fir_reg_r254_;
  goto L113_;

D181_:;
  // deopt 613 [r255]
  SEXP Rsh_Fir_array_deopt_stack159[1];
  Rsh_Fir_array_deopt_stack159[0] = Rsh_Fir_reg_r255_;
  Rsh_Fir_deopt(613, 1, Rsh_Fir_array_deopt_stack159, CCP, RHO);
  return R_NilValue;

L565_:;
  // goto L112(r255)
  // L112(r255)
  Rsh_Fir_reg_r251_ = Rsh_Fir_reg_r255_;
  goto L112_;

L566_:;
  // sym55 = ldf dim
  Rsh_Fir_reg_sym55_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base55 = ldf dim in base
  Rsh_Fir_reg_base55_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard55 = `==`.4(sym55, base55)
  SEXP Rsh_Fir_array_args418[2];
  Rsh_Fir_array_args418[0] = Rsh_Fir_reg_sym55_;
  Rsh_Fir_array_args418[1] = Rsh_Fir_reg_base55_;
  Rsh_Fir_reg_guard55_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args418);
  // if guard55 then L568() else L569()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard55_)) {
  // L568()
    goto L568_;
  } else {
  // L569()
    goto L569_;
  }

L567_:;
  // r256 = dyn base54(<lang dim(xj)>)
  SEXP Rsh_Fir_array_args419[1];
  Rsh_Fir_array_args419[0] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names140[1];
  Rsh_Fir_array_arg_names140[0] = R_MissingArg;
  Rsh_Fir_reg_r256_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base54_, 1, Rsh_Fir_array_args419, Rsh_Fir_array_arg_names140, CCP, RHO);
  // goto L114(r256)
  // L114(r256)
  Rsh_Fir_reg_r257_ = Rsh_Fir_reg_r256_;
  goto L114_;

L568_:;
  // xj = ld xj
  Rsh_Fir_reg_xj = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L570() else D182()
  // L570()
  goto L570_;

L569_:;
  // r258 = dyn base55(<sym xj>)
  SEXP Rsh_Fir_array_args420[1];
  Rsh_Fir_array_args420[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names141[1];
  Rsh_Fir_array_arg_names141[0] = R_MissingArg;
  Rsh_Fir_reg_r258_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base55_, 1, Rsh_Fir_array_args420, Rsh_Fir_array_arg_names141, CCP, RHO);
  // goto L115(r258)
  // L115(r258)
  Rsh_Fir_reg_r259_ = Rsh_Fir_reg_r258_;
  goto L115_;

D182_:;
  // deopt 619 [xj]
  SEXP Rsh_Fir_array_deopt_stack160[1];
  Rsh_Fir_array_deopt_stack160[0] = Rsh_Fir_reg_xj;
  Rsh_Fir_deopt(619, 1, Rsh_Fir_array_deopt_stack160, CCP, RHO);
  return R_NilValue;

L570_:;
  // xj1 = force? xj
  Rsh_Fir_reg_xj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj);
  // checkMissing(xj1)
  SEXP Rsh_Fir_array_args421[1];
  Rsh_Fir_array_args421[0] = Rsh_Fir_reg_xj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args421, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r260 = dyn dim(xj1)
  SEXP Rsh_Fir_array_args422[1];
  Rsh_Fir_array_args422[0] = Rsh_Fir_reg_xj1_;
  SEXP Rsh_Fir_array_arg_names142[1];
  Rsh_Fir_array_arg_names142[0] = R_MissingArg;
  Rsh_Fir_reg_r260_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args422, Rsh_Fir_array_arg_names142, CCP, RHO);
  // check L571() else D183()
  // L571()
  goto L571_;

D183_:;
  // deopt 622 [r260]
  SEXP Rsh_Fir_array_deopt_stack161[1];
  Rsh_Fir_array_deopt_stack161[0] = Rsh_Fir_reg_r260_;
  Rsh_Fir_deopt(622, 1, Rsh_Fir_array_deopt_stack161, CCP, RHO);
  return R_NilValue;

L571_:;
  // goto L115(r260)
  // L115(r260)
  Rsh_Fir_reg_r259_ = Rsh_Fir_reg_r260_;
  goto L115_;

D184_:;
  // deopt 624 [r261]
  SEXP Rsh_Fir_array_deopt_stack162[1];
  Rsh_Fir_array_deopt_stack162[0] = Rsh_Fir_reg_r261_;
  Rsh_Fir_deopt(624, 1, Rsh_Fir_array_deopt_stack162, CCP, RHO);
  return R_NilValue;

L572_:;
  // goto L114(r261)
  // L114(r261)
  Rsh_Fir_reg_r257_ = Rsh_Fir_reg_r261_;
  goto L114_;

L573_:;
  // xj2 = ld xj
  Rsh_Fir_reg_xj2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L574() else D185()
  // L574()
  goto L574_;

D185_:;
  // deopt 627 [xj2]
  SEXP Rsh_Fir_array_deopt_stack163[1];
  Rsh_Fir_array_deopt_stack163[0] = Rsh_Fir_reg_xj2_;
  Rsh_Fir_deopt(627, 1, Rsh_Fir_array_deopt_stack163, CCP, RHO);
  return R_NilValue;

L574_:;
  // xj3 = force? xj2
  Rsh_Fir_reg_xj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj2_);
  // checkMissing(xj3)
  SEXP Rsh_Fir_array_args423[1];
  Rsh_Fir_array_args423[0] = Rsh_Fir_reg_xj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args423, Rsh_Fir_param_types_empty()));
  // c139 = `is.object`(xj3)
  SEXP Rsh_Fir_array_args424[1];
  Rsh_Fir_array_args424[0] = Rsh_Fir_reg_xj3_;
  Rsh_Fir_reg_c139_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args424);
  // if c139 then L575() else L576(xj3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c139_)) {
  // L575()
    goto L575_;
  } else {
  // L576(xj3)
    Rsh_Fir_reg_xj5_ = Rsh_Fir_reg_xj3_;
    goto L576_;
  }

L575_:;
  // dr8 = tryDispatchBuiltin.1("[", xj3)
  SEXP Rsh_Fir_array_args425[2];
  Rsh_Fir_array_args425[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args425[1] = Rsh_Fir_reg_xj3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args425);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args426[1];
  Rsh_Fir_array_args426[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args426, Rsh_Fir_param_types_empty());
  // if dc4 then L577() else L576(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L577()
    goto L577_;
  } else {
  // L576(dr8)
    Rsh_Fir_reg_xj5_ = Rsh_Fir_reg_dr8_;
    goto L576_;
  }

L576_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L578() else D186()
  // L578()
  goto L578_;

L577_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args427[1];
  Rsh_Fir_array_args427[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args427, Rsh_Fir_param_types_empty());
  // goto L117(dx10)
  // L117(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L117_;

D186_:;
  // deopt 629 [xj5, i11]
  SEXP Rsh_Fir_array_deopt_stack164[2];
  Rsh_Fir_array_deopt_stack164[0] = Rsh_Fir_reg_xj5_;
  Rsh_Fir_array_deopt_stack164[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(629, 2, Rsh_Fir_array_deopt_stack164, CCP, RHO);
  return R_NilValue;

L578_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r263 = dyn __4(xj5, i12)
  SEXP Rsh_Fir_array_args428[2];
  Rsh_Fir_array_args428[0] = Rsh_Fir_reg_xj5_;
  Rsh_Fir_array_args428[1] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names143[2];
  Rsh_Fir_array_arg_names143[0] = R_MissingArg;
  Rsh_Fir_array_arg_names143[1] = R_MissingArg;
  Rsh_Fir_reg_r263_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args428, Rsh_Fir_array_arg_names143, CCP, RHO);
  // goto L117(r263)
  // L117(r263)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r263_;
  goto L117_;

D187_:;
  // deopt 632 [xj6]
  SEXP Rsh_Fir_array_deopt_stack165[1];
  Rsh_Fir_array_deopt_stack165[0] = Rsh_Fir_reg_xj6_;
  Rsh_Fir_deopt(632, 1, Rsh_Fir_array_deopt_stack165, CCP, RHO);
  return R_NilValue;

L580_:;
  // xj7 = force? xj6
  Rsh_Fir_reg_xj7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj6_);
  // checkMissing(xj7)
  SEXP Rsh_Fir_array_args429[1];
  Rsh_Fir_array_args429[0] = Rsh_Fir_reg_xj7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args429, Rsh_Fir_param_types_empty()));
  // c140 = `is.object`(xj7)
  SEXP Rsh_Fir_array_args430[1];
  Rsh_Fir_array_args430[0] = Rsh_Fir_reg_xj7_;
  Rsh_Fir_reg_c140_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args430);
  // if c140 then L581() else L582(xj7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c140_)) {
  // L581()
    goto L581_;
  } else {
  // L582(xj7)
    Rsh_Fir_reg_xj9_ = Rsh_Fir_reg_xj7_;
    goto L582_;
  }

L581_:;
  // dr10 = tryDispatchBuiltin.1("[", xj7)
  SEXP Rsh_Fir_array_args431[2];
  Rsh_Fir_array_args431[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args431[1] = Rsh_Fir_reg_xj7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args431);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args432[1];
  Rsh_Fir_array_args432[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args432, Rsh_Fir_param_types_empty());
  // if dc5 then L583() else L582(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L583()
    goto L583_;
  } else {
  // L582(dr10)
    Rsh_Fir_reg_xj9_ = Rsh_Fir_reg_dr10_;
    goto L582_;
  }

L582_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L584() else D188()
  // L584()
  goto L584_;

L583_:;
  // dx13 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args433[1];
  Rsh_Fir_array_args433[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args433, Rsh_Fir_param_types_empty());
  // goto L118(dx13)
  // L118(dx13)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx13_;
  goto L118_;

D188_:;
  // deopt 634 [xj9, i13]
  SEXP Rsh_Fir_array_deopt_stack166[2];
  Rsh_Fir_array_deopt_stack166[0] = Rsh_Fir_reg_xj9_;
  Rsh_Fir_array_deopt_stack166[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(634, 2, Rsh_Fir_array_deopt_stack166, CCP, RHO);
  return R_NilValue;

L584_:;
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r264 = dyn __5(xj7, i14, <missing>, FALSE)
  SEXP Rsh_Fir_array_args434[4];
  Rsh_Fir_array_args434[0] = Rsh_Fir_reg_xj7_;
  Rsh_Fir_array_args434[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args434[2] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args434[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names144[4];
  Rsh_Fir_array_arg_names144[0] = R_MissingArg;
  Rsh_Fir_array_arg_names144[1] = R_MissingArg;
  Rsh_Fir_array_arg_names144[2] = R_MissingArg;
  Rsh_Fir_array_arg_names144[3] = R_MissingArg;
  Rsh_Fir_reg_r264_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 4, Rsh_Fir_array_args434, Rsh_Fir_array_arg_names144, CCP, RHO);
  // goto L118(r264)
  // L118(r264)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r264_;
  goto L118_;

L587_:;
  // cols24 = ld cols
  Rsh_Fir_reg_cols24_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L589() else D189()
  // L589()
  goto L589_;

L588_:;
  // r267 = dyn base56(<sym cols>)
  SEXP Rsh_Fir_array_args435[1];
  Rsh_Fir_array_args435[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names145[1];
  Rsh_Fir_array_arg_names145[0] = R_MissingArg;
  Rsh_Fir_reg_r267_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base56_, 1, Rsh_Fir_array_args435, Rsh_Fir_array_arg_names145, CCP, RHO);
  // goto L120(r267)
  // L120(r267)
  Rsh_Fir_reg_r268_ = Rsh_Fir_reg_r267_;
  goto L120_;

D189_:;
  // deopt 646 [cols24]
  SEXP Rsh_Fir_array_deopt_stack167[1];
  Rsh_Fir_array_deopt_stack167[0] = Rsh_Fir_reg_cols24_;
  Rsh_Fir_deopt(646, 1, Rsh_Fir_array_deopt_stack167, CCP, RHO);
  return R_NilValue;

L589_:;
  // cols25 = force? cols24
  Rsh_Fir_reg_cols25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols24_);
  // checkMissing(cols25)
  SEXP Rsh_Fir_array_args436[1];
  Rsh_Fir_array_args436[0] = Rsh_Fir_reg_cols25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args436, Rsh_Fir_param_types_empty()));
  // anyNA7 = ldf anyNA in base
  Rsh_Fir_reg_anyNA7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r269 = dyn anyNA7(cols25)
  SEXP Rsh_Fir_array_args437[1];
  Rsh_Fir_array_args437[0] = Rsh_Fir_reg_cols25_;
  SEXP Rsh_Fir_array_arg_names146[1];
  Rsh_Fir_array_arg_names146[0] = R_MissingArg;
  Rsh_Fir_reg_r269_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA7_, 1, Rsh_Fir_array_args437, Rsh_Fir_array_arg_names146, CCP, RHO);
  // check L590() else D190()
  // L590()
  goto L590_;

D190_:;
  // deopt 649 [r269]
  SEXP Rsh_Fir_array_deopt_stack168[1];
  Rsh_Fir_array_deopt_stack168[0] = Rsh_Fir_reg_r269_;
  Rsh_Fir_deopt(649, 1, Rsh_Fir_array_deopt_stack168, CCP, RHO);
  return R_NilValue;

L590_:;
  // goto L120(r269)
  // L120(r269)
  Rsh_Fir_reg_r268_ = Rsh_Fir_reg_r269_;
  goto L120_;

L591_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L592() else D191()
  // L592()
  goto L592_;

D191_:;
  // deopt 651 []
  Rsh_Fir_deopt(651, 0, NULL, CCP, RHO);
  return R_NilValue;

L592_:;
  // r270 = dyn stop4("undefined columns selected")
  SEXP Rsh_Fir_array_args438[1];
  Rsh_Fir_array_args438[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names147[1];
  Rsh_Fir_array_arg_names147[0] = R_MissingArg;
  Rsh_Fir_reg_r270_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args438, Rsh_Fir_array_arg_names147, CCP, RHO);
  // check L593() else D192()
  // L593()
  goto L593_;

D192_:;
  // deopt 653 [r270]
  SEXP Rsh_Fir_array_deopt_stack169[1];
  Rsh_Fir_array_deopt_stack169[0] = Rsh_Fir_reg_r270_;
  Rsh_Fir_deopt(653, 1, Rsh_Fir_array_deopt_stack169, CCP, RHO);
  return R_NilValue;

L593_:;
  // goto L122()
  // L122()
  goto L122_;

L595_:;
  // sym58 = ldf names
  Rsh_Fir_reg_sym58_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base58 = ldf names in base
  Rsh_Fir_reg_base58_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard58 = `==`.4(sym58, base58)
  SEXP Rsh_Fir_array_args439[2];
  Rsh_Fir_array_args439[0] = Rsh_Fir_reg_sym58_;
  Rsh_Fir_array_args439[1] = Rsh_Fir_reg_base58_;
  Rsh_Fir_reg_guard58_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args439);
  // if guard58 then L597() else L598()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard58_)) {
  // L597()
    goto L597_;
  } else {
  // L598()
    goto L598_;
  }

L596_:;
  // r272 = dyn base57(<lang names(nm)>)
  SEXP Rsh_Fir_array_args440[1];
  Rsh_Fir_array_args440[0] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names148[1];
  Rsh_Fir_array_arg_names148[0] = R_MissingArg;
  Rsh_Fir_reg_r272_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base57_, 1, Rsh_Fir_array_args440, Rsh_Fir_array_arg_names148, CCP, RHO);
  // goto L123(r272)
  // L123(r272)
  Rsh_Fir_reg_r273_ = Rsh_Fir_reg_r272_;
  goto L123_;

L597_:;
  // nm20 = ld nm
  Rsh_Fir_reg_nm20_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L599() else D193()
  // L599()
  goto L599_;

L598_:;
  // r274 = dyn base58(<sym nm>)
  SEXP Rsh_Fir_array_args441[1];
  Rsh_Fir_array_args441[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names149[1];
  Rsh_Fir_array_arg_names149[0] = R_MissingArg;
  Rsh_Fir_reg_r274_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base58_, 1, Rsh_Fir_array_args441, Rsh_Fir_array_arg_names149, CCP, RHO);
  // goto L124(r274)
  // L124(r274)
  Rsh_Fir_reg_r275_ = Rsh_Fir_reg_r274_;
  goto L124_;

D193_:;
  // deopt 659 [nm20]
  SEXP Rsh_Fir_array_deopt_stack170[1];
  Rsh_Fir_array_deopt_stack170[0] = Rsh_Fir_reg_nm20_;
  Rsh_Fir_deopt(659, 1, Rsh_Fir_array_deopt_stack170, CCP, RHO);
  return R_NilValue;

L599_:;
  // nm21 = force? nm20
  Rsh_Fir_reg_nm21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm20_);
  // checkMissing(nm21)
  SEXP Rsh_Fir_array_args442[1];
  Rsh_Fir_array_args442[0] = Rsh_Fir_reg_nm21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args442, Rsh_Fir_param_types_empty()));
  // names10 = ldf names in base
  Rsh_Fir_reg_names10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r276 = dyn names10(nm21)
  SEXP Rsh_Fir_array_args443[1];
  Rsh_Fir_array_args443[0] = Rsh_Fir_reg_nm21_;
  SEXP Rsh_Fir_array_arg_names150[1];
  Rsh_Fir_array_arg_names150[0] = R_MissingArg;
  Rsh_Fir_reg_r276_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names10_, 1, Rsh_Fir_array_args443, Rsh_Fir_array_arg_names150, CCP, RHO);
  // check L600() else D194()
  // L600()
  goto L600_;

D194_:;
  // deopt 662 [r276]
  SEXP Rsh_Fir_array_deopt_stack171[1];
  Rsh_Fir_array_deopt_stack171[0] = Rsh_Fir_reg_r276_;
  Rsh_Fir_deopt(662, 1, Rsh_Fir_array_deopt_stack171, CCP, RHO);
  return R_NilValue;

L600_:;
  // goto L124(r276)
  // L124(r276)
  Rsh_Fir_reg_r275_ = Rsh_Fir_reg_r276_;
  goto L124_;

L601_:;
  // nm22 = ld nm
  Rsh_Fir_reg_nm22_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L602() else D195()
  // L602()
  goto L602_;

D195_:;
  // deopt 665 [nm22]
  SEXP Rsh_Fir_array_deopt_stack172[1];
  Rsh_Fir_array_deopt_stack172[0] = Rsh_Fir_reg_nm22_;
  Rsh_Fir_deopt(665, 1, Rsh_Fir_array_deopt_stack172, CCP, RHO);
  return R_NilValue;

L602_:;
  // nm23 = force? nm22
  Rsh_Fir_reg_nm23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm22_);
  // checkMissing(nm23)
  SEXP Rsh_Fir_array_args444[1];
  Rsh_Fir_array_args444[0] = Rsh_Fir_reg_nm23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args444, Rsh_Fir_param_types_empty()));
  // c144 = `is.object`(nm23)
  SEXP Rsh_Fir_array_args445[1];
  Rsh_Fir_array_args445[0] = Rsh_Fir_reg_nm23_;
  Rsh_Fir_reg_c144_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args445);
  // if c144 then L603() else L604(nm23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c144_)) {
  // L603()
    goto L603_;
  } else {
  // L604(nm23)
    Rsh_Fir_reg_nm25_ = Rsh_Fir_reg_nm23_;
    goto L604_;
  }

L603_:;
  // dr12 = tryDispatchBuiltin.1("[", nm23)
  SEXP Rsh_Fir_array_args446[2];
  Rsh_Fir_array_args446[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args446[1] = Rsh_Fir_reg_nm23_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args446);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args447[1];
  Rsh_Fir_array_args447[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args447, Rsh_Fir_param_types_empty());
  // if dc6 then L605() else L604(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L605()
    goto L605_;
  } else {
  // L604(dr12)
    Rsh_Fir_reg_nm25_ = Rsh_Fir_reg_dr12_;
    goto L604_;
  }

L604_:;
  // cols26 = ld cols
  Rsh_Fir_reg_cols26_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L606() else D196()
  // L606()
  goto L606_;

L605_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args448[1];
  Rsh_Fir_array_args448[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args448, Rsh_Fir_param_types_empty());
  // goto L126(dx14)
  // L126(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L126_;

D196_:;
  // deopt 667 [nm25, cols26]
  SEXP Rsh_Fir_array_deopt_stack173[2];
  Rsh_Fir_array_deopt_stack173[0] = Rsh_Fir_reg_nm25_;
  Rsh_Fir_array_deopt_stack173[1] = Rsh_Fir_reg_cols26_;
  Rsh_Fir_deopt(667, 2, Rsh_Fir_array_deopt_stack173, CCP, RHO);
  return R_NilValue;

L606_:;
  // cols27 = force? cols26
  Rsh_Fir_reg_cols27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols26_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r278 = dyn __6(nm25, cols27)
  SEXP Rsh_Fir_array_args449[2];
  Rsh_Fir_array_args449[0] = Rsh_Fir_reg_nm25_;
  Rsh_Fir_array_args449[1] = Rsh_Fir_reg_cols27_;
  SEXP Rsh_Fir_array_arg_names151[2];
  Rsh_Fir_array_arg_names151[0] = R_MissingArg;
  Rsh_Fir_array_arg_names151[1] = R_MissingArg;
  Rsh_Fir_reg_r278_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args449, Rsh_Fir_array_arg_names151, CCP, RHO);
  // goto L126(r278)
  // L126(r278)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r278_;
  goto L126_;

D197_:;
  // deopt 671 [dx15, l16, dx15]
  SEXP Rsh_Fir_array_deopt_stack174[3];
  Rsh_Fir_array_deopt_stack174[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack174[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack174[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_deopt(671, 3, Rsh_Fir_array_deopt_stack174, CCP, RHO);
  return R_NilValue;

L607_:;
  // r279 = dyn names__10(l16, NULL, dx15)
  SEXP Rsh_Fir_array_args450[3];
  Rsh_Fir_array_args450[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args450[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args450[2] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names152[3];
  Rsh_Fir_array_arg_names152[0] = R_MissingArg;
  Rsh_Fir_array_arg_names152[1] = R_MissingArg;
  Rsh_Fir_array_arg_names152[2] = R_MissingArg;
  Rsh_Fir_reg_r279_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__10_, 3, Rsh_Fir_array_args450, Rsh_Fir_array_arg_names152, CCP, RHO);
  // check L608() else D198()
  // L608()
  goto L608_;

D198_:;
  // deopt 673 [dx15, r279]
  SEXP Rsh_Fir_array_deopt_stack175[2];
  Rsh_Fir_array_deopt_stack175[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack175[1] = Rsh_Fir_reg_r279_;
  Rsh_Fir_deopt(673, 2, Rsh_Fir_array_deopt_stack175, CCP, RHO);
  return R_NilValue;

L608_:;
  // st x = r279
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r279_, RHO);
  (void)(Rsh_Fir_reg_r279_);
  // st cols = dx15
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L127()
  // L127()
  goto L127_;

D199_:;
  // deopt 679 []
  Rsh_Fir_deopt(679, 0, NULL, CCP, RHO);
  return R_NilValue;

L610_:;
  // p14 = prom<V +>{
  //   sym59 = ldf seq_along;
  //   base59 = ldf seq_along in base;
  //   guard59 = `==`.4(sym59, base59);
  //   if guard59 then L1() else L2();
  // L0(r281):
  //   return r281;
  // L1():
  //   xx8 = ld xx;
  //   xx9 = force? xx8;
  //   checkMissing(xx9);
  //   r282 = seq_along(xx9);
  //   goto L0(r282);
  // L2():
  //   r280 = dyn base59(<sym xx>);
  //   goto L0(r280);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   sym60 = ldf names;
  //   base60 = ldf names in base;
  //   guard60 = `==`.4(sym60, base60);
  //   if guard60 then L1() else L2();
  // L0(r285):
  //   return r285;
  // L1():
  //   xx10 = ld xx;
  //   xx11 = force? xx10;
  //   checkMissing(xx11);
  //   names11 = ldf names in base;
  //   r286 = dyn names11(xx11);
  //   goto L0(r286);
  // L2():
  //   r284 = dyn base60(<sym xx>);
  //   goto L0(r284);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_15, 0, NULL, CCP, RHO);
  // r288 = dyn structure1[, names](p14, p15)
  SEXP Rsh_Fir_array_args459[2];
  Rsh_Fir_array_args459[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args459[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names156[2];
  Rsh_Fir_array_arg_names156[0] = R_MissingArg;
  Rsh_Fir_array_arg_names156[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r288_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure1_, 2, Rsh_Fir_array_args459, Rsh_Fir_array_arg_names156, CCP, RHO);
  // check L611() else D200()
  // L611()
  goto L611_;

D200_:;
  // deopt 683 [r288]
  SEXP Rsh_Fir_array_deopt_stack176[1];
  Rsh_Fir_array_deopt_stack176[0] = Rsh_Fir_reg_r288_;
  Rsh_Fir_deopt(683, 1, Rsh_Fir_array_deopt_stack176, CCP, RHO);
  return R_NilValue;

L611_:;
  // st nxx = r288
  Rsh_Fir_store(Rsh_const(CCP, 87), Rsh_Fir_reg_r288_, RHO);
  (void)(Rsh_Fir_reg_r288_);
  // sym61 = ldf match
  Rsh_Fir_reg_sym61_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base61 = ldf match in base
  Rsh_Fir_reg_base61_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard61 = `==`.4(sym61, base61)
  SEXP Rsh_Fir_array_args460[2];
  Rsh_Fir_array_args460[0] = Rsh_Fir_reg_sym61_;
  Rsh_Fir_array_args460[1] = Rsh_Fir_reg_base61_;
  Rsh_Fir_reg_guard61_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args460);
  // if guard61 then L612() else L613()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard61_)) {
  // L612()
    goto L612_;
  } else {
  // L613()
    goto L613_;
  }

L612_:;
  // nxx = ld nxx
  Rsh_Fir_reg_nxx = Rsh_Fir_load(Rsh_const(CCP, 87), RHO);
  // check L614() else D201()
  // L614()
  goto L614_;

L613_:;
  // r289 = dyn base61(<lang `[`(nxx, j)>, <lang seq_along(xx)>)
  SEXP Rsh_Fir_array_args461[2];
  Rsh_Fir_array_args461[0] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args461[1] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names157[2];
  Rsh_Fir_array_arg_names157[0] = R_MissingArg;
  Rsh_Fir_array_arg_names157[1] = R_MissingArg;
  Rsh_Fir_reg_r289_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base61_, 2, Rsh_Fir_array_args461, Rsh_Fir_array_arg_names157, CCP, RHO);
  // goto L128(r289)
  // L128(r289)
  Rsh_Fir_reg_r290_ = Rsh_Fir_reg_r289_;
  goto L128_;

D201_:;
  // deopt 687 [nxx]
  SEXP Rsh_Fir_array_deopt_stack177[1];
  Rsh_Fir_array_deopt_stack177[0] = Rsh_Fir_reg_nxx;
  Rsh_Fir_deopt(687, 1, Rsh_Fir_array_deopt_stack177, CCP, RHO);
  return R_NilValue;

L614_:;
  // nxx1 = force? nxx
  Rsh_Fir_reg_nxx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nxx);
  // checkMissing(nxx1)
  SEXP Rsh_Fir_array_args462[1];
  Rsh_Fir_array_args462[0] = Rsh_Fir_reg_nxx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args462, Rsh_Fir_param_types_empty()));
  // c145 = `is.object`(nxx1)
  SEXP Rsh_Fir_array_args463[1];
  Rsh_Fir_array_args463[0] = Rsh_Fir_reg_nxx1_;
  Rsh_Fir_reg_c145_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args463);
  // if c145 then L615() else L616(nxx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c145_)) {
  // L615()
    goto L615_;
  } else {
  // L616(nxx1)
    Rsh_Fir_reg_nxx3_ = Rsh_Fir_reg_nxx1_;
    goto L616_;
  }

L615_:;
  // dr14 = tryDispatchBuiltin.1("[", nxx1)
  SEXP Rsh_Fir_array_args464[2];
  Rsh_Fir_array_args464[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args464[1] = Rsh_Fir_reg_nxx1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args464);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args465[1];
  Rsh_Fir_array_args465[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args465, Rsh_Fir_param_types_empty());
  // if dc7 then L617() else L616(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L617()
    goto L617_;
  } else {
  // L616(dr14)
    Rsh_Fir_reg_nxx3_ = Rsh_Fir_reg_dr14_;
    goto L616_;
  }

L616_:;
  // j13 = ld j
  Rsh_Fir_reg_j13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L618() else D202()
  // L618()
  goto L618_;

L617_:;
  // dx17 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args466[1];
  Rsh_Fir_array_args466[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args466, Rsh_Fir_param_types_empty());
  // goto L129(dx17)
  // L129(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L129_;

D202_:;
  // deopt 689 [nxx3, j13]
  SEXP Rsh_Fir_array_deopt_stack178[2];
  Rsh_Fir_array_deopt_stack178[0] = Rsh_Fir_reg_nxx3_;
  Rsh_Fir_array_deopt_stack178[1] = Rsh_Fir_reg_j13_;
  Rsh_Fir_deopt(689, 2, Rsh_Fir_array_deopt_stack178, CCP, RHO);
  return R_NilValue;

L618_:;
  // j14 = force? j13
  Rsh_Fir_reg_j14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j13_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r291 = dyn __7(nxx3, j14)
  SEXP Rsh_Fir_array_args467[2];
  Rsh_Fir_array_args467[0] = Rsh_Fir_reg_nxx3_;
  Rsh_Fir_array_args467[1] = Rsh_Fir_reg_j14_;
  SEXP Rsh_Fir_array_arg_names158[2];
  Rsh_Fir_array_arg_names158[0] = R_MissingArg;
  Rsh_Fir_array_arg_names158[1] = R_MissingArg;
  Rsh_Fir_reg_r291_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args467, Rsh_Fir_array_arg_names158, CCP, RHO);
  // goto L129(r291)
  // L129(r291)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r291_;
  goto L129_;

L619_:;
  // xx12 = ld xx
  Rsh_Fir_reg_xx12_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L621() else D203()
  // L621()
  goto L621_;

L620_:;
  // r292 = dyn base62(<sym xx>)
  SEXP Rsh_Fir_array_args468[1];
  Rsh_Fir_array_args468[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names159[1];
  Rsh_Fir_array_arg_names159[0] = R_MissingArg;
  Rsh_Fir_reg_r292_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base62_, 1, Rsh_Fir_array_args468, Rsh_Fir_array_arg_names159, CCP, RHO);
  // goto L130(r292)
  // L130(r292)
  Rsh_Fir_reg_r293_ = Rsh_Fir_reg_r292_;
  goto L130_;

D203_:;
  // deopt 693 [xx12]
  SEXP Rsh_Fir_array_deopt_stack179[1];
  Rsh_Fir_array_deopt_stack179[0] = Rsh_Fir_reg_xx12_;
  Rsh_Fir_deopt(693, 1, Rsh_Fir_array_deopt_stack179, CCP, RHO);
  return R_NilValue;

L621_:;
  // xx13 = force? xx12
  Rsh_Fir_reg_xx13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx12_);
  // checkMissing(xx13)
  SEXP Rsh_Fir_array_args469[1];
  Rsh_Fir_array_args469[0] = Rsh_Fir_reg_xx13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args469, Rsh_Fir_param_types_empty()));
  // r294 = seq_along(xx13)
  SEXP Rsh_Fir_array_args470[1];
  Rsh_Fir_array_args470[0] = Rsh_Fir_reg_xx13_;
  Rsh_Fir_reg_r294_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args470);
  // goto L130(r294)
  // L130(r294)
  Rsh_Fir_reg_r293_ = Rsh_Fir_reg_r294_;
  goto L130_;

D204_:;
  // deopt 699 [r295]
  SEXP Rsh_Fir_array_deopt_stack180[1];
  Rsh_Fir_array_deopt_stack180[0] = Rsh_Fir_reg_r295_;
  Rsh_Fir_deopt(699, 1, Rsh_Fir_array_deopt_stack180, CCP, RHO);
  return R_NilValue;

L622_:;
  // goto L128(r295)
  // L128(r295)
  Rsh_Fir_reg_r290_ = Rsh_Fir_reg_r295_;
  goto L128_;

L624_:;
  // x53 = ld x
  Rsh_Fir_reg_x53_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L626() else D205()
  // L626()
  goto L626_;

L625_:;
  // r297 = dyn base63(<sym x>)
  SEXP Rsh_Fir_array_args471[1];
  Rsh_Fir_array_args471[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names160[1];
  Rsh_Fir_array_arg_names160[0] = R_MissingArg;
  Rsh_Fir_reg_r297_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base63_, 1, Rsh_Fir_array_args471, Rsh_Fir_array_arg_names160, CCP, RHO);
  // goto L132(r297)
  // L132(r297)
  Rsh_Fir_reg_r298_ = Rsh_Fir_reg_r297_;
  goto L132_;

D205_:;
  // deopt 702 [x53]
  SEXP Rsh_Fir_array_deopt_stack181[1];
  Rsh_Fir_array_deopt_stack181[0] = Rsh_Fir_reg_x53_;
  Rsh_Fir_deopt(702, 1, Rsh_Fir_array_deopt_stack181, CCP, RHO);
  return R_NilValue;

L626_:;
  // x54 = force? x53
  Rsh_Fir_reg_x54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x53_);
  // checkMissing(x54)
  SEXP Rsh_Fir_array_args472[1];
  Rsh_Fir_array_args472[0] = Rsh_Fir_reg_x54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args472, Rsh_Fir_param_types_empty()));
  // r299 = seq_along(x54)
  SEXP Rsh_Fir_array_args473[1];
  Rsh_Fir_array_args473[0] = Rsh_Fir_reg_x54_;
  Rsh_Fir_reg_r299_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args473);
  // goto L132(r299)
  // L132(r299)
  Rsh_Fir_reg_r298_ = Rsh_Fir_reg_r299_;
  goto L132_;

L627_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L629() else D206()
  // L629()
  goto L629_;

L628_:;
  // r300 = dyn base64(<sym i>)
  SEXP Rsh_Fir_array_args474[1];
  Rsh_Fir_array_args474[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names161[1];
  Rsh_Fir_array_arg_names161[0] = R_MissingArg;
  Rsh_Fir_reg_r300_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base64_, 1, Rsh_Fir_array_args474, Rsh_Fir_array_arg_names161, CCP, RHO);
  // goto L133(r300)
  // L133(r300)
  Rsh_Fir_reg_r301_ = Rsh_Fir_reg_r300_;
  goto L133_;

D206_:;
  // deopt 710 [i15]
  SEXP Rsh_Fir_array_deopt_stack182[1];
  Rsh_Fir_array_deopt_stack182[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(710, 1, Rsh_Fir_array_deopt_stack182, CCP, RHO);
  return R_NilValue;

L629_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // checkMissing(i16)
  SEXP Rsh_Fir_array_args475[1];
  Rsh_Fir_array_args475[0] = Rsh_Fir_reg_i16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args475, Rsh_Fir_param_types_empty()));
  // c146 = `is.character`(i16)
  SEXP Rsh_Fir_array_args476[1];
  Rsh_Fir_array_args476[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_c146_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args476);
  // goto L133(c146)
  // L133(c146)
  Rsh_Fir_reg_r301_ = Rsh_Fir_reg_c146_;
  goto L133_;

L630_:;
  // sym65 = ldf attr
  Rsh_Fir_reg_sym65_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base65 = ldf attr in base
  Rsh_Fir_reg_base65_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard65 = `==`.4(sym65, base65)
  SEXP Rsh_Fir_array_args477[2];
  Rsh_Fir_array_args477[0] = Rsh_Fir_reg_sym65_;
  Rsh_Fir_array_args477[1] = Rsh_Fir_reg_base65_;
  Rsh_Fir_reg_guard65_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args477);
  // if guard65 then L631() else L632()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard65_)) {
  // L631()
    goto L631_;
  } else {
  // L632()
    goto L632_;
  }

L631_:;
  // xx14 = ld xx
  Rsh_Fir_reg_xx14_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L633() else D207()
  // L633()
  goto L633_;

L632_:;
  // r302 = dyn base65(<sym xx>, "row.names")
  SEXP Rsh_Fir_array_args478[2];
  Rsh_Fir_array_args478[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args478[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names162[2];
  Rsh_Fir_array_arg_names162[0] = R_MissingArg;
  Rsh_Fir_array_arg_names162[1] = R_MissingArg;
  Rsh_Fir_reg_r302_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base65_, 2, Rsh_Fir_array_args478, Rsh_Fir_array_arg_names162, CCP, RHO);
  // goto L135(r302)
  // L135(r302)
  Rsh_Fir_reg_r303_ = Rsh_Fir_reg_r302_;
  goto L135_;

D207_:;
  // deopt 715 [xx14]
  SEXP Rsh_Fir_array_deopt_stack183[1];
  Rsh_Fir_array_deopt_stack183[0] = Rsh_Fir_reg_xx14_;
  Rsh_Fir_deopt(715, 1, Rsh_Fir_array_deopt_stack183, CCP, RHO);
  return R_NilValue;

L633_:;
  // xx15 = force? xx14
  Rsh_Fir_reg_xx15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx14_);
  // checkMissing(xx15)
  SEXP Rsh_Fir_array_args479[1];
  Rsh_Fir_array_args479[0] = Rsh_Fir_reg_xx15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args479, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r304 = dyn attr1(xx15, "row.names")
  SEXP Rsh_Fir_array_args480[2];
  Rsh_Fir_array_args480[0] = Rsh_Fir_reg_xx15_;
  Rsh_Fir_array_args480[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names163[2];
  Rsh_Fir_array_arg_names163[0] = R_MissingArg;
  Rsh_Fir_array_arg_names163[1] = R_MissingArg;
  Rsh_Fir_reg_r304_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args480, Rsh_Fir_array_arg_names163, CCP, RHO);
  // check L634() else D208()
  // L634()
  goto L634_;

D208_:;
  // deopt 719 [r304]
  SEXP Rsh_Fir_array_deopt_stack184[1];
  Rsh_Fir_array_deopt_stack184[0] = Rsh_Fir_reg_r304_;
  Rsh_Fir_deopt(719, 1, Rsh_Fir_array_deopt_stack184, CCP, RHO);
  return R_NilValue;

L634_:;
  // goto L135(r304)
  // L135(r304)
  Rsh_Fir_reg_r303_ = Rsh_Fir_reg_r304_;
  goto L135_;

D209_:;
  // deopt 722 []
  Rsh_Fir_deopt(722, 0, NULL, CCP, RHO);
  return R_NilValue;

L635_:;
  // p16 = prom<V +>{
  //   i17 = ld i;
  //   i18 = force? i17;
  //   checkMissing(i18);
  //   return i18;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_16, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   rows2 = ld rows;
  //   rows3 = force? rows2;
  //   checkMissing(rows3);
  //   return rows3;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_17, 0, NULL, CCP, RHO);
  // r307 = dyn pmatch1[, , `duplicates.ok`](p16, p17, TRUE)
  SEXP Rsh_Fir_array_args483[3];
  Rsh_Fir_array_args483[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args483[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args483[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names164[3];
  Rsh_Fir_array_arg_names164[0] = R_MissingArg;
  Rsh_Fir_array_arg_names164[1] = R_MissingArg;
  Rsh_Fir_array_arg_names164[2] = Rsh_const(CCP, 81);
  Rsh_Fir_reg_r307_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 3, Rsh_Fir_array_args483, Rsh_Fir_array_arg_names164, CCP, RHO);
  // check L636() else D210()
  // L636()
  goto L636_;

D210_:;
  // deopt 727 [r307]
  SEXP Rsh_Fir_array_deopt_stack185[1];
  Rsh_Fir_array_deopt_stack185[0] = Rsh_Fir_reg_r307_;
  Rsh_Fir_deopt(727, 1, Rsh_Fir_array_deopt_stack185, CCP, RHO);
  return R_NilValue;

L636_:;
  // st i = r307
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r307_, RHO);
  (void)(Rsh_Fir_reg_r307_);
  // goto L136()
  // L136()
  goto L136_;

L638_:;
  // x55 = ld x
  Rsh_Fir_reg_x55_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L640() else D211()
  // L640()
  goto L640_;

L639_:;
  // r309 = dyn base66(<sym x>)
  SEXP Rsh_Fir_array_args484[1];
  Rsh_Fir_array_args484[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names165[1];
  Rsh_Fir_array_arg_names165[0] = R_MissingArg;
  Rsh_Fir_reg_r309_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base66_, 1, Rsh_Fir_array_args484, Rsh_Fir_array_arg_names165, CCP, RHO);
  // goto L137(r309)
  // L137(r309)
  Rsh_Fir_reg_r310_ = Rsh_Fir_reg_r309_;
  goto L137_;

D211_:;
  // deopt 732 [x55]
  SEXP Rsh_Fir_array_deopt_stack186[1];
  Rsh_Fir_array_deopt_stack186[0] = Rsh_Fir_reg_x55_;
  Rsh_Fir_deopt(732, 1, Rsh_Fir_array_deopt_stack186, CCP, RHO);
  return R_NilValue;

L640_:;
  // x56 = force? x55
  Rsh_Fir_reg_x56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x55_);
  // checkMissing(x56)
  SEXP Rsh_Fir_array_args485[1];
  Rsh_Fir_array_args485[0] = Rsh_Fir_reg_x56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args485, Rsh_Fir_param_types_empty()));
  // r311 = seq_along(x56)
  SEXP Rsh_Fir_array_args486[1];
  Rsh_Fir_array_args486[0] = Rsh_Fir_reg_x56_;
  Rsh_Fir_reg_r311_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args486);
  // goto L137(r311)
  // L137(r311)
  Rsh_Fir_reg_r310_ = Rsh_Fir_reg_r311_;
  goto L137_;

L641_:;
  // drop9 = ld drop
  Rsh_Fir_reg_drop9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L674() else D223()
  // L674()
  goto L674_;

D212_:;
  // deopt 735 [i21, xx16]
  SEXP Rsh_Fir_array_deopt_stack187[2];
  Rsh_Fir_array_deopt_stack187[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack187[1] = Rsh_Fir_reg_xx16_;
  Rsh_Fir_deopt(735, 2, Rsh_Fir_array_deopt_stack187, CCP, RHO);
  return R_NilValue;

L642_:;
  // xx17 = force? xx16
  Rsh_Fir_reg_xx17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx16_);
  // checkMissing(xx17)
  SEXP Rsh_Fir_array_args487[1];
  Rsh_Fir_array_args487[0] = Rsh_Fir_reg_xx17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args487, Rsh_Fir_param_types_empty()));
  // c149 = `is.object`(xx17)
  SEXP Rsh_Fir_array_args488[1];
  Rsh_Fir_array_args488[0] = Rsh_Fir_reg_xx17_;
  Rsh_Fir_reg_c149_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args488);
  // if c149 then L643() else L644(i21, xx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c149_)) {
  // L643()
    goto L643_;
  } else {
  // L644(i21, xx17)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_xx19_ = Rsh_Fir_reg_xx17_;
    goto L644_;
  }

L643_:;
  // dr16 = tryDispatchBuiltin.1("[[", xx17)
  SEXP Rsh_Fir_array_args489[2];
  Rsh_Fir_array_args489[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args489[1] = Rsh_Fir_reg_xx17_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args489);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args490[1];
  Rsh_Fir_array_args490[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args490, Rsh_Fir_param_types_empty());
  // if dc8 then L645() else L644(i21, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L645()
    goto L645_;
  } else {
  // L644(i21, dr16)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_xx19_ = Rsh_Fir_reg_dr16_;
    goto L644_;
  }

L644_:;
  // sxx = ld sxx
  Rsh_Fir_reg_sxx = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L646() else D213()
  // L646()
  goto L646_;

L645_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args491[1];
  Rsh_Fir_array_args491[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args491, Rsh_Fir_param_types_empty());
  // goto L139(i21, dx19)
  // L139(i21, dx19)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L139_;

D213_:;
  // deopt 737 [i25, xx19, sxx]
  SEXP Rsh_Fir_array_deopt_stack188[3];
  Rsh_Fir_array_deopt_stack188[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack188[1] = Rsh_Fir_reg_xx19_;
  Rsh_Fir_array_deopt_stack188[2] = Rsh_Fir_reg_sxx;
  Rsh_Fir_deopt(737, 3, Rsh_Fir_array_deopt_stack188, CCP, RHO);
  return R_NilValue;

L646_:;
  // sxx1 = force? sxx
  Rsh_Fir_reg_sxx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sxx);
  // checkMissing(sxx1)
  SEXP Rsh_Fir_array_args492[1];
  Rsh_Fir_array_args492[0] = Rsh_Fir_reg_sxx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args492, Rsh_Fir_param_types_empty()));
  // c150 = `is.object`(sxx1)
  SEXP Rsh_Fir_array_args493[1];
  Rsh_Fir_array_args493[0] = Rsh_Fir_reg_sxx1_;
  Rsh_Fir_reg_c150_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args493);
  // if c150 then L647() else L648(i25, xx19, sxx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c150_)) {
  // L647()
    goto L647_;
  } else {
  // L648(i25, xx19, sxx1)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_xx21_ = Rsh_Fir_reg_xx19_;
    Rsh_Fir_reg_sxx3_ = Rsh_Fir_reg_sxx1_;
    goto L648_;
  }

L647_:;
  // dr18 = tryDispatchBuiltin.1("[", sxx1)
  SEXP Rsh_Fir_array_args494[2];
  Rsh_Fir_array_args494[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args494[1] = Rsh_Fir_reg_sxx1_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args494);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args495[1];
  Rsh_Fir_array_args495[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args495, Rsh_Fir_param_types_empty());
  // if dc9 then L649() else L648(i25, xx19, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L649()
    goto L649_;
  } else {
  // L648(i25, xx19, dr18)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_xx21_ = Rsh_Fir_reg_xx19_;
    Rsh_Fir_reg_sxx3_ = Rsh_Fir_reg_dr18_;
    goto L648_;
  }

L648_:;
  // j15 = ld j
  Rsh_Fir_reg_j15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L650() else D214()
  // L650()
  goto L650_;

L649_:;
  // dx21 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args496[1];
  Rsh_Fir_array_args496[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args496, Rsh_Fir_param_types_empty());
  // goto L140(i25, xx19, dx21)
  // L140(i25, xx19, dx21)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_xx23_ = Rsh_Fir_reg_xx19_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L140_;

D214_:;
  // deopt 739 [i29, xx21, sxx3, j15]
  SEXP Rsh_Fir_array_deopt_stack189[4];
  Rsh_Fir_array_deopt_stack189[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack189[1] = Rsh_Fir_reg_xx21_;
  Rsh_Fir_array_deopt_stack189[2] = Rsh_Fir_reg_sxx3_;
  Rsh_Fir_array_deopt_stack189[3] = Rsh_Fir_reg_j15_;
  Rsh_Fir_deopt(739, 4, Rsh_Fir_array_deopt_stack189, CCP, RHO);
  return R_NilValue;

L650_:;
  // j16 = force? j15
  Rsh_Fir_reg_j16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j15_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r312 = dyn __8(sxx3, j16)
  SEXP Rsh_Fir_array_args497[2];
  Rsh_Fir_array_args497[0] = Rsh_Fir_reg_sxx3_;
  Rsh_Fir_array_args497[1] = Rsh_Fir_reg_j16_;
  SEXP Rsh_Fir_array_arg_names166[2];
  Rsh_Fir_array_arg_names166[0] = R_MissingArg;
  Rsh_Fir_array_arg_names166[1] = R_MissingArg;
  Rsh_Fir_reg_r312_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args497, Rsh_Fir_array_arg_names166, CCP, RHO);
  // goto L140(i29, xx21, r312)
  // L140(i29, xx21, r312)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_xx23_ = Rsh_Fir_reg_xx21_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r312_;
  goto L140_;

L651_:;
  // sym68 = ldf dim
  Rsh_Fir_reg_sym68_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base68 = ldf dim in base
  Rsh_Fir_reg_base68_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard68 = `==`.4(sym68, base68)
  SEXP Rsh_Fir_array_args498[2];
  Rsh_Fir_array_args498[0] = Rsh_Fir_reg_sym68_;
  Rsh_Fir_array_args498[1] = Rsh_Fir_reg_base68_;
  Rsh_Fir_reg_guard68_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args498);
  // if guard68 then L653() else L654()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard68_)) {
  // L653()
    goto L653_;
  } else {
  // L654()
    goto L654_;
  }

L652_:;
  // r314 = dyn base67(<lang dim(xj)>)
  SEXP Rsh_Fir_array_args499[1];
  Rsh_Fir_array_args499[0] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names167[1];
  Rsh_Fir_array_arg_names167[0] = R_MissingArg;
  Rsh_Fir_reg_r314_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base67_, 1, Rsh_Fir_array_args499, Rsh_Fir_array_arg_names167, CCP, RHO);
  // goto L141(i27, r314)
  // L141(i27, r314)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r315_ = Rsh_Fir_reg_r314_;
  goto L141_;

L653_:;
  // xj10 = ld xj
  Rsh_Fir_reg_xj10_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L655() else D215()
  // L655()
  goto L655_;

L654_:;
  // r316 = dyn base68(<sym xj>)
  SEXP Rsh_Fir_array_args500[1];
  Rsh_Fir_array_args500[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names168[1];
  Rsh_Fir_array_arg_names168[0] = R_MissingArg;
  Rsh_Fir_reg_r316_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base68_, 1, Rsh_Fir_array_args500, Rsh_Fir_array_arg_names168, CCP, RHO);
  // goto L142(i27, r316)
  // L142(i27, r316)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r317_ = Rsh_Fir_reg_r316_;
  goto L142_;

D215_:;
  // deopt 748 [i27, xj10]
  SEXP Rsh_Fir_array_deopt_stack190[2];
  Rsh_Fir_array_deopt_stack190[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack190[1] = Rsh_Fir_reg_xj10_;
  Rsh_Fir_deopt(748, 2, Rsh_Fir_array_deopt_stack190, CCP, RHO);
  return R_NilValue;

L655_:;
  // xj11 = force? xj10
  Rsh_Fir_reg_xj11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj10_);
  // checkMissing(xj11)
  SEXP Rsh_Fir_array_args501[1];
  Rsh_Fir_array_args501[0] = Rsh_Fir_reg_xj11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args501, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r318 = dyn dim1(xj11)
  SEXP Rsh_Fir_array_args502[1];
  Rsh_Fir_array_args502[0] = Rsh_Fir_reg_xj11_;
  SEXP Rsh_Fir_array_arg_names169[1];
  Rsh_Fir_array_arg_names169[0] = R_MissingArg;
  Rsh_Fir_reg_r318_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args502, Rsh_Fir_array_arg_names169, CCP, RHO);
  // check L656() else D216()
  // L656()
  goto L656_;

D216_:;
  // deopt 751 [i27, r318]
  SEXP Rsh_Fir_array_deopt_stack191[2];
  Rsh_Fir_array_deopt_stack191[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack191[1] = Rsh_Fir_reg_r318_;
  Rsh_Fir_deopt(751, 2, Rsh_Fir_array_deopt_stack191, CCP, RHO);
  return R_NilValue;

L656_:;
  // goto L142(i27, r318)
  // L142(i27, r318)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r317_ = Rsh_Fir_reg_r318_;
  goto L142_;

D217_:;
  // deopt 753 [i37, r319]
  SEXP Rsh_Fir_array_deopt_stack192[2];
  Rsh_Fir_array_deopt_stack192[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack192[1] = Rsh_Fir_reg_r319_;
  Rsh_Fir_deopt(753, 2, Rsh_Fir_array_deopt_stack192, CCP, RHO);
  return R_NilValue;

L657_:;
  // goto L141(i37, r319)
  // L141(i37, r319)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_r315_ = Rsh_Fir_reg_r319_;
  goto L141_;

L658_:;
  // xj12 = ld xj
  Rsh_Fir_reg_xj12_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L659() else D218()
  // L659()
  goto L659_;

D218_:;
  // deopt 756 [i34, xj12]
  SEXP Rsh_Fir_array_deopt_stack193[2];
  Rsh_Fir_array_deopt_stack193[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack193[1] = Rsh_Fir_reg_xj12_;
  Rsh_Fir_deopt(756, 2, Rsh_Fir_array_deopt_stack193, CCP, RHO);
  return R_NilValue;

L659_:;
  // xj13 = force? xj12
  Rsh_Fir_reg_xj13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj12_);
  // checkMissing(xj13)
  SEXP Rsh_Fir_array_args503[1];
  Rsh_Fir_array_args503[0] = Rsh_Fir_reg_xj13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args503, Rsh_Fir_param_types_empty()));
  // c152 = `is.object`(xj13)
  SEXP Rsh_Fir_array_args504[1];
  Rsh_Fir_array_args504[0] = Rsh_Fir_reg_xj13_;
  Rsh_Fir_reg_c152_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args504);
  // if c152 then L660() else L661(i34, xj13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c152_)) {
  // L660()
    goto L660_;
  } else {
  // L661(i34, xj13)
    Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_xj15_ = Rsh_Fir_reg_xj13_;
    goto L661_;
  }

L660_:;
  // dr20 = tryDispatchBuiltin.1("[", xj13)
  SEXP Rsh_Fir_array_args505[2];
  Rsh_Fir_array_args505[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args505[1] = Rsh_Fir_reg_xj13_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args505);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args506[1];
  Rsh_Fir_array_args506[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args506, Rsh_Fir_param_types_empty());
  // if dc10 then L662() else L661(i34, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L662()
    goto L662_;
  } else {
  // L661(i34, dr20)
    Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_xj15_ = Rsh_Fir_reg_dr20_;
    goto L661_;
  }

L661_:;
  // i44 = ld i
  Rsh_Fir_reg_i44_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L663() else D219()
  // L663()
  goto L663_;

L662_:;
  // dx23 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args507[1];
  Rsh_Fir_array_args507[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args507, Rsh_Fir_param_types_empty());
  // goto L144(i34, dx23)
  // L144(i34, dx23)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L144_;

D219_:;
  // deopt 758 [i41, xj15, i44]
  SEXP Rsh_Fir_array_deopt_stack194[3];
  Rsh_Fir_array_deopt_stack194[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack194[1] = Rsh_Fir_reg_xj15_;
  Rsh_Fir_array_deopt_stack194[2] = Rsh_Fir_reg_i44_;
  Rsh_Fir_deopt(758, 3, Rsh_Fir_array_deopt_stack194, CCP, RHO);
  return R_NilValue;

L663_:;
  // i45 = force? i44
  Rsh_Fir_reg_i45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i44_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r321 = dyn __10(xj15, i45)
  SEXP Rsh_Fir_array_args508[2];
  Rsh_Fir_array_args508[0] = Rsh_Fir_reg_xj15_;
  Rsh_Fir_array_args508[1] = Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_array_arg_names170[2];
  Rsh_Fir_array_arg_names170[0] = R_MissingArg;
  Rsh_Fir_array_arg_names170[1] = R_MissingArg;
  Rsh_Fir_reg_r321_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args508, Rsh_Fir_array_arg_names170, CCP, RHO);
  // goto L144(i41, r321)
  // L144(i41, r321)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r321_;
  goto L144_;

D220_:;
  // deopt 761 [i34, xj16]
  SEXP Rsh_Fir_array_deopt_stack195[2];
  Rsh_Fir_array_deopt_stack195[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack195[1] = Rsh_Fir_reg_xj16_;
  Rsh_Fir_deopt(761, 2, Rsh_Fir_array_deopt_stack195, CCP, RHO);
  return R_NilValue;

L665_:;
  // xj17 = force? xj16
  Rsh_Fir_reg_xj17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj16_);
  // checkMissing(xj17)
  SEXP Rsh_Fir_array_args509[1];
  Rsh_Fir_array_args509[0] = Rsh_Fir_reg_xj17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args509, Rsh_Fir_param_types_empty()));
  // c153 = `is.object`(xj17)
  SEXP Rsh_Fir_array_args510[1];
  Rsh_Fir_array_args510[0] = Rsh_Fir_reg_xj17_;
  Rsh_Fir_reg_c153_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args510);
  // if c153 then L666() else L667(i34, xj17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c153_)) {
  // L666()
    goto L666_;
  } else {
  // L667(i34, xj17)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_xj19_ = Rsh_Fir_reg_xj17_;
    goto L667_;
  }

L666_:;
  // dr22 = tryDispatchBuiltin.1("[", xj17)
  SEXP Rsh_Fir_array_args511[2];
  Rsh_Fir_array_args511[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args511[1] = Rsh_Fir_reg_xj17_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args511);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args512[1];
  Rsh_Fir_array_args512[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args512, Rsh_Fir_param_types_empty());
  // if dc11 then L668() else L667(i34, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L668()
    goto L668_;
  } else {
  // L667(i34, dr22)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_xj19_ = Rsh_Fir_reg_dr22_;
    goto L667_;
  }

L667_:;
  // i50 = ld i
  Rsh_Fir_reg_i50_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L669() else D221()
  // L669()
  goto L669_;

L668_:;
  // dx26 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args513[1];
  Rsh_Fir_array_args513[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args513, Rsh_Fir_param_types_empty());
  // goto L145(i34, dx26)
  // L145(i34, dx26)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx26_;
  goto L145_;

D221_:;
  // deopt 763 [i48, xj19, i50]
  SEXP Rsh_Fir_array_deopt_stack196[3];
  Rsh_Fir_array_deopt_stack196[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack196[1] = Rsh_Fir_reg_xj19_;
  Rsh_Fir_array_deopt_stack196[2] = Rsh_Fir_reg_i50_;
  Rsh_Fir_deopt(763, 3, Rsh_Fir_array_deopt_stack196, CCP, RHO);
  return R_NilValue;

L669_:;
  // i51 = force? i50
  Rsh_Fir_reg_i51_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i50_);
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r322 = dyn __11(xj17, i51, <missing>, FALSE)
  SEXP Rsh_Fir_array_args514[4];
  Rsh_Fir_array_args514[0] = Rsh_Fir_reg_xj17_;
  Rsh_Fir_array_args514[1] = Rsh_Fir_reg_i51_;
  Rsh_Fir_array_args514[2] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args514[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names171[4];
  Rsh_Fir_array_arg_names171[0] = R_MissingArg;
  Rsh_Fir_array_arg_names171[1] = R_MissingArg;
  Rsh_Fir_array_arg_names171[2] = R_MissingArg;
  Rsh_Fir_array_arg_names171[3] = R_MissingArg;
  Rsh_Fir_reg_r322_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 4, Rsh_Fir_array_args514, Rsh_Fir_array_arg_names171, CCP, RHO);
  // goto L145(i48, r322)
  // L145(i48, r322)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r322_;
  goto L145_;

L670_:;
  // dr24 = tryDispatchBuiltin.0("[[<-", l18, dx25)
  SEXP Rsh_Fir_array_args515[3];
  Rsh_Fir_array_args515[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args515[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args515[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args515);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args516[1];
  Rsh_Fir_array_args516[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args516, Rsh_Fir_param_types_empty());
  // if dc12 then L672() else L671(i46, dx25, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L672()
    goto L672_;
  } else {
  // L671(i46, dx25, dr24)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr24_;
    goto L671_;
  }

L671_:;
  // j17 = ld j
  Rsh_Fir_reg_j17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L673() else D222()
  // L673()
  goto L673_;

L672_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args517[1];
  Rsh_Fir_array_args517[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args517, Rsh_Fir_param_types_empty());
  // goto L146(i46, dx30)
  // L146(i46, dx30)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx30_;
  goto L146_;

D222_:;
  // deopt 771 [i53, dx28, l20, dx25, j17]
  SEXP Rsh_Fir_array_deopt_stack197[5];
  Rsh_Fir_array_deopt_stack197[0] = Rsh_Fir_reg_i53_;
  Rsh_Fir_array_deopt_stack197[1] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_deopt_stack197[2] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack197[3] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack197[4] = Rsh_Fir_reg_j17_;
  Rsh_Fir_deopt(771, 5, Rsh_Fir_array_deopt_stack197, CCP, RHO);
  return R_NilValue;

L673_:;
  // j18 = force? j17
  Rsh_Fir_reg_j18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j17_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r323 = dyn ____(l20, dx25, j18)
  SEXP Rsh_Fir_array_args518[3];
  Rsh_Fir_array_args518[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args518[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args518[2] = Rsh_Fir_reg_j18_;
  SEXP Rsh_Fir_array_arg_names172[3];
  Rsh_Fir_array_arg_names172[0] = R_MissingArg;
  Rsh_Fir_array_arg_names172[1] = R_MissingArg;
  Rsh_Fir_array_arg_names172[2] = R_MissingArg;
  Rsh_Fir_reg_r323_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args518, Rsh_Fir_array_arg_names172, CCP, RHO);
  // goto L146(i53, r323)
  // L146(i53, r323)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i53_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r323_;
  goto L146_;

D223_:;
  // deopt 778 [drop9]
  SEXP Rsh_Fir_array_deopt_stack198[1];
  Rsh_Fir_array_deopt_stack198[0] = Rsh_Fir_reg_drop9_;
  Rsh_Fir_deopt(778, 1, Rsh_Fir_array_deopt_stack198, CCP, RHO);
  return R_NilValue;

L674_:;
  // drop10 = force? drop9
  Rsh_Fir_reg_drop10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop9_);
  // checkMissing(drop10)
  SEXP Rsh_Fir_array_args519[1];
  Rsh_Fir_array_args519[0] = Rsh_Fir_reg_drop10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args519, Rsh_Fir_param_types_empty()));
  // c155 = `as.logical`(drop10)
  SEXP Rsh_Fir_array_args520[1];
  Rsh_Fir_array_args520[0] = Rsh_Fir_reg_drop10_;
  Rsh_Fir_reg_c155_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args520);
  // if c155 then L675() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c155_)) {
  // L675()
    goto L675_;
  } else {
  // L148()
    goto L148_;
  }

L675_:;
  // sym69 = ldf length
  Rsh_Fir_reg_sym69_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base69 = ldf length in base
  Rsh_Fir_reg_base69_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard69 = `==`.4(sym69, base69)
  SEXP Rsh_Fir_array_args521[2];
  Rsh_Fir_array_args521[0] = Rsh_Fir_reg_sym69_;
  Rsh_Fir_array_args521[1] = Rsh_Fir_reg_base69_;
  Rsh_Fir_reg_guard69_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args521);
  // if guard69 then L676() else L677()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard69_)) {
  // L676()
    goto L676_;
  } else {
  // L677()
    goto L677_;
  }

L676_:;
  // x58 = ld x
  Rsh_Fir_reg_x58_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L678() else D224()
  // L678()
  goto L678_;

L677_:;
  // r324 = dyn base69(<sym x>)
  SEXP Rsh_Fir_array_args522[1];
  Rsh_Fir_array_args522[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names173[1];
  Rsh_Fir_array_arg_names173[0] = R_MissingArg;
  Rsh_Fir_reg_r324_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base69_, 1, Rsh_Fir_array_args522, Rsh_Fir_array_arg_names173, CCP, RHO);
  // goto L149(r324)
  // L149(r324)
  Rsh_Fir_reg_r325_ = Rsh_Fir_reg_r324_;
  goto L149_;

D224_:;
  // deopt 782 [x58]
  SEXP Rsh_Fir_array_deopt_stack199[1];
  Rsh_Fir_array_deopt_stack199[0] = Rsh_Fir_reg_x58_;
  Rsh_Fir_deopt(782, 1, Rsh_Fir_array_deopt_stack199, CCP, RHO);
  return R_NilValue;

L678_:;
  // x59 = force? x58
  Rsh_Fir_reg_x59_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x58_);
  // checkMissing(x59)
  SEXP Rsh_Fir_array_args523[1];
  Rsh_Fir_array_args523[0] = Rsh_Fir_reg_x59_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args523, Rsh_Fir_param_types_empty()));
  // length7 = ldf length in base
  Rsh_Fir_reg_length7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r326 = dyn length7(x59)
  SEXP Rsh_Fir_array_args524[1];
  Rsh_Fir_array_args524[0] = Rsh_Fir_reg_x59_;
  SEXP Rsh_Fir_array_arg_names174[1];
  Rsh_Fir_array_arg_names174[0] = R_MissingArg;
  Rsh_Fir_reg_r326_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length7_, 1, Rsh_Fir_array_args524, Rsh_Fir_array_arg_names174, CCP, RHO);
  // check L679() else D225()
  // L679()
  goto L679_;

D225_:;
  // deopt 785 [r326]
  SEXP Rsh_Fir_array_deopt_stack200[1];
  Rsh_Fir_array_deopt_stack200[0] = Rsh_Fir_reg_r326_;
  Rsh_Fir_deopt(785, 1, Rsh_Fir_array_deopt_stack200, CCP, RHO);
  return R_NilValue;

L679_:;
  // goto L149(r326)
  // L149(r326)
  Rsh_Fir_reg_r325_ = Rsh_Fir_reg_r326_;
  goto L149_;

D226_:;
  // deopt 787 [n]
  SEXP Rsh_Fir_array_deopt_stack201[1];
  Rsh_Fir_array_deopt_stack201[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(787, 1, Rsh_Fir_array_deopt_stack201, CCP, RHO);
  return R_NilValue;

L680_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args525[1];
  Rsh_Fir_array_args525[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args525, Rsh_Fir_param_types_empty()));
  // r327 = `==`(n1, 1)
  SEXP Rsh_Fir_array_args526[2];
  Rsh_Fir_array_args526[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args526[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r327_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args526);
  // c156 = `as.logical`(r327)
  SEXP Rsh_Fir_array_args527[1];
  Rsh_Fir_array_args527[0] = Rsh_Fir_reg_r327_;
  Rsh_Fir_reg_c156_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args527);
  // if c156 then L681() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c156_)) {
  // L681()
    goto L681_;
  } else {
  // L150()
    goto L150_;
  }

L681_:;
  // x60 = ld x
  Rsh_Fir_reg_x60_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L682() else D227()
  // L682()
  goto L682_;

D227_:;
  // deopt 791 [x60]
  SEXP Rsh_Fir_array_deopt_stack202[1];
  Rsh_Fir_array_deopt_stack202[0] = Rsh_Fir_reg_x60_;
  Rsh_Fir_deopt(791, 1, Rsh_Fir_array_deopt_stack202, CCP, RHO);
  return R_NilValue;

L682_:;
  // x61 = force? x60
  Rsh_Fir_reg_x61_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x60_);
  // checkMissing(x61)
  SEXP Rsh_Fir_array_args528[1];
  Rsh_Fir_array_args528[0] = Rsh_Fir_reg_x61_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args528, Rsh_Fir_param_types_empty()));
  // c157 = `is.object`(x61)
  SEXP Rsh_Fir_array_args529[1];
  Rsh_Fir_array_args529[0] = Rsh_Fir_reg_x61_;
  Rsh_Fir_reg_c157_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args529);
  // if c157 then L683() else L684(x61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c157_)) {
  // L683()
    goto L683_;
  } else {
  // L684(x61)
    Rsh_Fir_reg_x63_ = Rsh_Fir_reg_x61_;
    goto L684_;
  }

L683_:;
  // dr26 = tryDispatchBuiltin.1("[[", x61)
  SEXP Rsh_Fir_array_args530[2];
  Rsh_Fir_array_args530[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args530[1] = Rsh_Fir_reg_x61_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args530);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args531[1];
  Rsh_Fir_array_args531[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args531, Rsh_Fir_param_types_empty());
  // if dc13 then L685() else L684(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L685()
    goto L685_;
  } else {
  // L684(dr26)
    Rsh_Fir_reg_x63_ = Rsh_Fir_reg_dr26_;
    goto L684_;
  }

L684_:;
  // __12 = ldf `[[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r328 = dyn __12(x63, 1)
  SEXP Rsh_Fir_array_args532[2];
  Rsh_Fir_array_args532[0] = Rsh_Fir_reg_x63_;
  Rsh_Fir_array_args532[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names175[2];
  Rsh_Fir_array_arg_names175[0] = R_MissingArg;
  Rsh_Fir_array_arg_names175[1] = R_MissingArg;
  Rsh_Fir_reg_r328_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args532, Rsh_Fir_array_arg_names175, CCP, RHO);
  // goto L151(r328)
  // L151(r328)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r328_;
  goto L151_;

L685_:;
  // dx33 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args533[1];
  Rsh_Fir_array_args533[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args533, Rsh_Fir_param_types_empty());
  // goto L151(dx33)
  // L151(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L151_;

D228_:;
  // deopt 799 [n2]
  SEXP Rsh_Fir_array_deopt_stack203[1];
  Rsh_Fir_array_deopt_stack203[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(799, 1, Rsh_Fir_array_deopt_stack203, CCP, RHO);
  return R_NilValue;

L688_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args534[1];
  Rsh_Fir_array_args534[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args534, Rsh_Fir_param_types_empty()));
  // r331 = `>`(n3, 1)
  SEXP Rsh_Fir_array_args535[2];
  Rsh_Fir_array_args535[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args535[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r331_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args535);
  // c158 = `as.logical`(r331)
  SEXP Rsh_Fir_array_args536[1];
  Rsh_Fir_array_args536[0] = Rsh_Fir_reg_r331_;
  Rsh_Fir_reg_c158_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args536);
  // if c158 then L689() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c158_)) {
  // L689()
    goto L689_;
  } else {
  // L153()
    goto L153_;
  }

L689_:;
  // x64 = ld x
  Rsh_Fir_reg_x64_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L690() else D229()
  // L690()
  goto L690_;

D229_:;
  // deopt 803 [x64]
  SEXP Rsh_Fir_array_deopt_stack204[1];
  Rsh_Fir_array_deopt_stack204[0] = Rsh_Fir_reg_x64_;
  Rsh_Fir_deopt(803, 1, Rsh_Fir_array_deopt_stack204, CCP, RHO);
  return R_NilValue;

L690_:;
  // x65 = force? x64
  Rsh_Fir_reg_x65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x64_);
  // checkMissing(x65)
  SEXP Rsh_Fir_array_args537[1];
  Rsh_Fir_array_args537[0] = Rsh_Fir_reg_x65_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args537, Rsh_Fir_param_types_empty()));
  // c159 = `is.object`(x65)
  SEXP Rsh_Fir_array_args538[1];
  Rsh_Fir_array_args538[0] = Rsh_Fir_reg_x65_;
  Rsh_Fir_reg_c159_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args538);
  // if c159 then L691() else L692(x65)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c159_)) {
  // L691()
    goto L691_;
  } else {
  // L692(x65)
    Rsh_Fir_reg_x67_ = Rsh_Fir_reg_x65_;
    goto L692_;
  }

L691_:;
  // dr28 = tryDispatchBuiltin.1("[[", x65)
  SEXP Rsh_Fir_array_args539[2];
  Rsh_Fir_array_args539[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args539[1] = Rsh_Fir_reg_x65_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args539);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args540[1];
  Rsh_Fir_array_args540[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args540, Rsh_Fir_param_types_empty());
  // if dc14 then L693() else L692(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L693()
    goto L693_;
  } else {
  // L692(dr28)
    Rsh_Fir_reg_x67_ = Rsh_Fir_reg_dr28_;
    goto L692_;
  }

L692_:;
  // __13 = ldf `[[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r332 = dyn __13(x67, 1)
  SEXP Rsh_Fir_array_args541[2];
  Rsh_Fir_array_args541[0] = Rsh_Fir_reg_x67_;
  Rsh_Fir_array_args541[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names176[2];
  Rsh_Fir_array_arg_names176[0] = R_MissingArg;
  Rsh_Fir_array_arg_names176[1] = R_MissingArg;
  Rsh_Fir_reg_r332_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args541, Rsh_Fir_array_arg_names176, CCP, RHO);
  // goto L154(r332)
  // L154(r332)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r332_;
  goto L154_;

L693_:;
  // dx35 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args542[1];
  Rsh_Fir_array_args542[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args542, Rsh_Fir_param_types_empty());
  // goto L154(dx35)
  // L154(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L154_;

L694_:;
  // sym71 = ldf dim
  Rsh_Fir_reg_sym71_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base71 = ldf dim in base
  Rsh_Fir_reg_base71_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard71 = `==`.4(sym71, base71)
  SEXP Rsh_Fir_array_args543[2];
  Rsh_Fir_array_args543[0] = Rsh_Fir_reg_sym71_;
  Rsh_Fir_array_args543[1] = Rsh_Fir_reg_base71_;
  Rsh_Fir_reg_guard71_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args543);
  // if guard71 then L696() else L697()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard71_)) {
  // L696()
    goto L696_;
  } else {
  // L697()
    goto L697_;
  }

L695_:;
  // r333 = dyn base70(<lang dim(xj)>)
  SEXP Rsh_Fir_array_args544[1];
  Rsh_Fir_array_args544[0] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names177[1];
  Rsh_Fir_array_arg_names177[0] = R_MissingArg;
  Rsh_Fir_reg_r333_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base70_, 1, Rsh_Fir_array_args544, Rsh_Fir_array_arg_names177, CCP, RHO);
  // goto L155(r333)
  // L155(r333)
  Rsh_Fir_reg_r334_ = Rsh_Fir_reg_r333_;
  goto L155_;

L696_:;
  // xj20 = ld xj
  Rsh_Fir_reg_xj20_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L698() else D230()
  // L698()
  goto L698_;

L697_:;
  // r335 = dyn base71(<sym xj>)
  SEXP Rsh_Fir_array_args545[1];
  Rsh_Fir_array_args545[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names178[1];
  Rsh_Fir_array_arg_names178[0] = R_MissingArg;
  Rsh_Fir_reg_r335_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base71_, 1, Rsh_Fir_array_args545, Rsh_Fir_array_arg_names178, CCP, RHO);
  // goto L156(r335)
  // L156(r335)
  Rsh_Fir_reg_r336_ = Rsh_Fir_reg_r335_;
  goto L156_;

D230_:;
  // deopt 813 [xj20]
  SEXP Rsh_Fir_array_deopt_stack205[1];
  Rsh_Fir_array_deopt_stack205[0] = Rsh_Fir_reg_xj20_;
  Rsh_Fir_deopt(813, 1, Rsh_Fir_array_deopt_stack205, CCP, RHO);
  return R_NilValue;

L698_:;
  // xj21 = force? xj20
  Rsh_Fir_reg_xj21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj20_);
  // checkMissing(xj21)
  SEXP Rsh_Fir_array_args546[1];
  Rsh_Fir_array_args546[0] = Rsh_Fir_reg_xj21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args546, Rsh_Fir_param_types_empty()));
  // dim2 = ldf dim in base
  Rsh_Fir_reg_dim2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r337 = dyn dim2(xj21)
  SEXP Rsh_Fir_array_args547[1];
  Rsh_Fir_array_args547[0] = Rsh_Fir_reg_xj21_;
  SEXP Rsh_Fir_array_arg_names179[1];
  Rsh_Fir_array_arg_names179[0] = R_MissingArg;
  Rsh_Fir_reg_r337_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim2_, 1, Rsh_Fir_array_args547, Rsh_Fir_array_arg_names179, CCP, RHO);
  // check L699() else D231()
  // L699()
  goto L699_;

D231_:;
  // deopt 816 [r337]
  SEXP Rsh_Fir_array_deopt_stack206[1];
  Rsh_Fir_array_deopt_stack206[0] = Rsh_Fir_reg_r337_;
  Rsh_Fir_deopt(816, 1, Rsh_Fir_array_deopt_stack206, CCP, RHO);
  return R_NilValue;

L699_:;
  // goto L156(r337)
  // L156(r337)
  Rsh_Fir_reg_r336_ = Rsh_Fir_reg_r337_;
  goto L156_;

D232_:;
  // deopt 818 [r338]
  SEXP Rsh_Fir_array_deopt_stack207[1];
  Rsh_Fir_array_deopt_stack207[0] = Rsh_Fir_reg_r338_;
  Rsh_Fir_deopt(818, 1, Rsh_Fir_array_deopt_stack207, CCP, RHO);
  return R_NilValue;

L700_:;
  // goto L155(r338)
  // L155(r338)
  Rsh_Fir_reg_r334_ = Rsh_Fir_reg_r338_;
  goto L155_;

L701_:;
  // sym72 = ldf dim
  Rsh_Fir_reg_sym72_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base72 = ldf dim in base
  Rsh_Fir_reg_base72_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard72 = `==`.4(sym72, base72)
  SEXP Rsh_Fir_array_args548[2];
  Rsh_Fir_array_args548[0] = Rsh_Fir_reg_sym72_;
  Rsh_Fir_array_args548[1] = Rsh_Fir_reg_base72_;
  Rsh_Fir_reg_guard72_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args548);
  // if guard72 then L702() else L703()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard72_)) {
  // L702()
    goto L702_;
  } else {
  // L703()
    goto L703_;
  }

L702_:;
  // xj22 = ld xj
  Rsh_Fir_reg_xj22_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L704() else D233()
  // L704()
  goto L704_;

L703_:;
  // r340 = dyn base72(<sym xj>)
  SEXP Rsh_Fir_array_args549[1];
  Rsh_Fir_array_args549[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names180[1];
  Rsh_Fir_array_arg_names180[0] = R_MissingArg;
  Rsh_Fir_reg_r340_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base72_, 1, Rsh_Fir_array_args549, Rsh_Fir_array_arg_names180, CCP, RHO);
  // goto L158(r340)
  // L158(r340)
  Rsh_Fir_reg_r341_ = Rsh_Fir_reg_r340_;
  goto L158_;

D233_:;
  // deopt 823 [xj22]
  SEXP Rsh_Fir_array_deopt_stack208[1];
  Rsh_Fir_array_deopt_stack208[0] = Rsh_Fir_reg_xj22_;
  Rsh_Fir_deopt(823, 1, Rsh_Fir_array_deopt_stack208, CCP, RHO);
  return R_NilValue;

L704_:;
  // xj23 = force? xj22
  Rsh_Fir_reg_xj23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj22_);
  // checkMissing(xj23)
  SEXP Rsh_Fir_array_args550[1];
  Rsh_Fir_array_args550[0] = Rsh_Fir_reg_xj23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args550, Rsh_Fir_param_types_empty()));
  // dim3 = ldf dim in base
  Rsh_Fir_reg_dim3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r342 = dyn dim3(xj23)
  SEXP Rsh_Fir_array_args551[1];
  Rsh_Fir_array_args551[0] = Rsh_Fir_reg_xj23_;
  SEXP Rsh_Fir_array_arg_names181[1];
  Rsh_Fir_array_arg_names181[0] = R_MissingArg;
  Rsh_Fir_reg_r342_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim3_, 1, Rsh_Fir_array_args551, Rsh_Fir_array_arg_names181, CCP, RHO);
  // check L705() else D234()
  // L705()
  goto L705_;

D234_:;
  // deopt 826 [r342]
  SEXP Rsh_Fir_array_deopt_stack209[1];
  Rsh_Fir_array_deopt_stack209[0] = Rsh_Fir_reg_r342_;
  Rsh_Fir_deopt(826, 1, Rsh_Fir_array_deopt_stack209, CCP, RHO);
  return R_NilValue;

L705_:;
  // goto L158(r342)
  // L158(r342)
  Rsh_Fir_reg_r341_ = Rsh_Fir_reg_r342_;
  goto L158_;

L706_:;
  // dr30 = tryDispatchBuiltin.1("[", r341)
  SEXP Rsh_Fir_array_args552[2];
  Rsh_Fir_array_args552[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args552[1] = Rsh_Fir_reg_r341_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args552);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args553[1];
  Rsh_Fir_array_args553[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args553, Rsh_Fir_param_types_empty());
  // if dc15 then L708() else L707(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L708()
    goto L708_;
  } else {
  // L707(dr30)
    Rsh_Fir_reg_r344_ = Rsh_Fir_reg_dr30_;
    goto L707_;
  }

L707_:;
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r345 = dyn __14(r344, 1)
  SEXP Rsh_Fir_array_args554[2];
  Rsh_Fir_array_args554[0] = Rsh_Fir_reg_r344_;
  Rsh_Fir_array_args554[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names182[2];
  Rsh_Fir_array_arg_names182[0] = R_MissingArg;
  Rsh_Fir_array_arg_names182[1] = R_MissingArg;
  Rsh_Fir_reg_r345_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args554, Rsh_Fir_array_arg_names182, CCP, RHO);
  // goto L159(r345)
  // L159(r345)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r345_;
  goto L159_;

L708_:;
  // dx37 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args555[1];
  Rsh_Fir_array_args555[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args555, Rsh_Fir_param_types_empty());
  // goto L159(dx37)
  // L159(dx37)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx37_;
  goto L159_;

L710_:;
  // xj24 = ld xj
  Rsh_Fir_reg_xj24_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L712() else D235()
  // L712()
  goto L712_;

L711_:;
  // r346 = dyn base73(<sym xj>)
  SEXP Rsh_Fir_array_args556[1];
  Rsh_Fir_array_args556[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names183[1];
  Rsh_Fir_array_arg_names183[0] = R_MissingArg;
  Rsh_Fir_reg_r346_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base73_, 1, Rsh_Fir_array_args556, Rsh_Fir_array_arg_names183, CCP, RHO);
  // goto L160(r346)
  // L160(r346)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r346_;
  goto L160_;

D235_:;
  // deopt 832 [xj24]
  SEXP Rsh_Fir_array_deopt_stack210[1];
  Rsh_Fir_array_deopt_stack210[0] = Rsh_Fir_reg_xj24_;
  Rsh_Fir_deopt(832, 1, Rsh_Fir_array_deopt_stack210, CCP, RHO);
  return R_NilValue;

L712_:;
  // xj25 = force? xj24
  Rsh_Fir_reg_xj25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj24_);
  // checkMissing(xj25)
  SEXP Rsh_Fir_array_args557[1];
  Rsh_Fir_array_args557[0] = Rsh_Fir_reg_xj25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args557, Rsh_Fir_param_types_empty()));
  // length9 = ldf length in base
  Rsh_Fir_reg_length9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r347 = dyn length9(xj25)
  SEXP Rsh_Fir_array_args558[1];
  Rsh_Fir_array_args558[0] = Rsh_Fir_reg_xj25_;
  SEXP Rsh_Fir_array_arg_names184[1];
  Rsh_Fir_array_arg_names184[0] = R_MissingArg;
  Rsh_Fir_reg_r347_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length9_, 1, Rsh_Fir_array_args558, Rsh_Fir_array_arg_names184, CCP, RHO);
  // check L713() else D236()
  // L713()
  goto L713_;

D236_:;
  // deopt 835 [r347]
  SEXP Rsh_Fir_array_deopt_stack211[1];
  Rsh_Fir_array_deopt_stack211[0] = Rsh_Fir_reg_r347_;
  Rsh_Fir_deopt(835, 1, Rsh_Fir_array_deopt_stack211, CCP, RHO);
  return R_NilValue;

L713_:;
  // goto L160(r347)
  // L160(r347)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r347_;
  goto L160_;

D237_:;
  // deopt 837 [mdrop6]
  SEXP Rsh_Fir_array_deopt_stack212[1];
  Rsh_Fir_array_deopt_stack212[0] = Rsh_Fir_reg_mdrop6_;
  Rsh_Fir_deopt(837, 1, Rsh_Fir_array_deopt_stack212, CCP, RHO);
  return R_NilValue;

L714_:;
  // mdrop7 = force? mdrop6
  Rsh_Fir_reg_mdrop7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdrop6_);
  // checkMissing(mdrop7)
  SEXP Rsh_Fir_array_args559[1];
  Rsh_Fir_array_args559[0] = Rsh_Fir_reg_mdrop7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args559, Rsh_Fir_param_types_empty()));
  // r348 = `!`(mdrop7)
  SEXP Rsh_Fir_array_args560[1];
  Rsh_Fir_array_args560[0] = Rsh_Fir_reg_mdrop7_;
  Rsh_Fir_reg_r348_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args560);
  // c162 = `as.logical`(r348)
  SEXP Rsh_Fir_array_args561[1];
  Rsh_Fir_array_args561[0] = Rsh_Fir_reg_r348_;
  Rsh_Fir_reg_c162_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args561);
  // if c162 then L715() else L161(c162)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c162_)) {
  // L715()
    goto L715_;
  } else {
  // L161(c162)
    Rsh_Fir_reg_c164_ = Rsh_Fir_reg_c162_;
    goto L161_;
  }

L715_:;
  // nrow2 = ld nrow
  Rsh_Fir_reg_nrow2_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L716() else D238()
  // L716()
  goto L716_;

D238_:;
  // deopt 840 [c162, nrow2]
  SEXP Rsh_Fir_array_deopt_stack213[2];
  Rsh_Fir_array_deopt_stack213[0] = Rsh_Fir_reg_c162_;
  Rsh_Fir_array_deopt_stack213[1] = Rsh_Fir_reg_nrow2_;
  Rsh_Fir_deopt(840, 2, Rsh_Fir_array_deopt_stack213, CCP, RHO);
  return R_NilValue;

L716_:;
  // nrow3 = force? nrow2
  Rsh_Fir_reg_nrow3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow2_);
  // checkMissing(nrow3)
  SEXP Rsh_Fir_array_args562[1];
  Rsh_Fir_array_args562[0] = Rsh_Fir_reg_nrow3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args562, Rsh_Fir_param_types_empty()));
  // r349 = `==`(nrow3, 1)
  SEXP Rsh_Fir_array_args563[2];
  Rsh_Fir_array_args563[0] = Rsh_Fir_reg_nrow3_;
  Rsh_Fir_array_args563[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r349_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args563);
  // c165 = `as.logical`(r349)
  SEXP Rsh_Fir_array_args564[1];
  Rsh_Fir_array_args564[0] = Rsh_Fir_reg_r349_;
  Rsh_Fir_reg_c165_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args564);
  // c166 = `&&`(c162, c165)
  SEXP Rsh_Fir_array_args565[2];
  Rsh_Fir_array_args565[0] = Rsh_Fir_reg_c162_;
  Rsh_Fir_array_args565[1] = Rsh_Fir_reg_c165_;
  Rsh_Fir_reg_c166_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args565);
  // goto L161(c166)
  // L161(c166)
  Rsh_Fir_reg_c164_ = Rsh_Fir_reg_c166_;
  goto L161_;

D239_:;
  // deopt 851 [drop11]
  SEXP Rsh_Fir_array_deopt_stack214[1];
  Rsh_Fir_array_deopt_stack214[0] = Rsh_Fir_reg_drop11_;
  Rsh_Fir_deopt(851, 1, Rsh_Fir_array_deopt_stack214, CCP, RHO);
  return R_NilValue;

L720_:;
  // drop12 = force? drop11
  Rsh_Fir_reg_drop12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop11_);
  // checkMissing(drop12)
  SEXP Rsh_Fir_array_args566[1];
  Rsh_Fir_array_args566[0] = Rsh_Fir_reg_drop12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args566, Rsh_Fir_param_types_empty()));
  // r350 = `!`(drop12)
  SEXP Rsh_Fir_array_args567[1];
  Rsh_Fir_array_args567[0] = Rsh_Fir_reg_drop12_;
  Rsh_Fir_reg_r350_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args567);
  // c170 = `as.logical`(r350)
  SEXP Rsh_Fir_array_args568[1];
  Rsh_Fir_array_args568[0] = Rsh_Fir_reg_r350_;
  Rsh_Fir_reg_c170_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args568);
  // if c170 then L721() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c170_)) {
  // L721()
    goto L721_;
  } else {
  // L164()
    goto L164_;
  }

L721_:;
  // sym74 = ldf `is.null`
  Rsh_Fir_reg_sym74_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base74 = ldf `is.null` in base
  Rsh_Fir_reg_base74_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard74 = `==`.4(sym74, base74)
  SEXP Rsh_Fir_array_args569[2];
  Rsh_Fir_array_args569[0] = Rsh_Fir_reg_sym74_;
  Rsh_Fir_array_args569[1] = Rsh_Fir_reg_base74_;
  Rsh_Fir_reg_guard74_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args569);
  // if guard74 then L722() else L723()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard74_)) {
  // L722()
    goto L722_;
  } else {
  // L723()
    goto L723_;
  }

L722_:;
  // rows4 = ld rows
  Rsh_Fir_reg_rows4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L724() else D240()
  // L724()
  goto L724_;

L723_:;
  // r351 = dyn base74(<sym rows>)
  SEXP Rsh_Fir_array_args570[1];
  Rsh_Fir_array_args570[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names185[1];
  Rsh_Fir_array_arg_names185[0] = R_MissingArg;
  Rsh_Fir_reg_r351_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base74_, 1, Rsh_Fir_array_args570, Rsh_Fir_array_arg_names185, CCP, RHO);
  // goto L165(r351)
  // L165(r351)
  Rsh_Fir_reg_r352_ = Rsh_Fir_reg_r351_;
  goto L165_;

D240_:;
  // deopt 855 [rows4]
  SEXP Rsh_Fir_array_deopt_stack215[1];
  Rsh_Fir_array_deopt_stack215[0] = Rsh_Fir_reg_rows4_;
  Rsh_Fir_deopt(855, 1, Rsh_Fir_array_deopt_stack215, CCP, RHO);
  return R_NilValue;

L724_:;
  // rows5 = force? rows4
  Rsh_Fir_reg_rows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows4_);
  // checkMissing(rows5)
  SEXP Rsh_Fir_array_args571[1];
  Rsh_Fir_array_args571[0] = Rsh_Fir_reg_rows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args571, Rsh_Fir_param_types_empty()));
  // c171 = `==`(rows5, NULL)
  SEXP Rsh_Fir_array_args572[2];
  Rsh_Fir_array_args572[0] = Rsh_Fir_reg_rows5_;
  Rsh_Fir_array_args572[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c171_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args572);
  // goto L165(c171)
  // L165(c171)
  Rsh_Fir_reg_r352_ = Rsh_Fir_reg_c171_;
  goto L165_;

L725_:;
  // sym75 = ldf attr
  Rsh_Fir_reg_sym75_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base75 = ldf attr in base
  Rsh_Fir_reg_base75_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard75 = `==`.4(sym75, base75)
  SEXP Rsh_Fir_array_args573[2];
  Rsh_Fir_array_args573[0] = Rsh_Fir_reg_sym75_;
  Rsh_Fir_array_args573[1] = Rsh_Fir_reg_base75_;
  Rsh_Fir_reg_guard75_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args573);
  // if guard75 then L726() else L727()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard75_)) {
  // L726()
    goto L726_;
  } else {
  // L727()
    goto L727_;
  }

L726_:;
  // xx24 = ld xx
  Rsh_Fir_reg_xx24_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L728() else D241()
  // L728()
  goto L728_;

L727_:;
  // r353 = dyn base75(<sym xx>, "row.names")
  SEXP Rsh_Fir_array_args574[2];
  Rsh_Fir_array_args574[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args574[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names186[2];
  Rsh_Fir_array_arg_names186[0] = R_MissingArg;
  Rsh_Fir_array_arg_names186[1] = R_MissingArg;
  Rsh_Fir_reg_r353_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base75_, 2, Rsh_Fir_array_args574, Rsh_Fir_array_arg_names186, CCP, RHO);
  // goto L167(r353)
  // L167(r353)
  Rsh_Fir_reg_r354_ = Rsh_Fir_reg_r353_;
  goto L167_;

D241_:;
  // deopt 860 [xx24]
  SEXP Rsh_Fir_array_deopt_stack216[1];
  Rsh_Fir_array_deopt_stack216[0] = Rsh_Fir_reg_xx24_;
  Rsh_Fir_deopt(860, 1, Rsh_Fir_array_deopt_stack216, CCP, RHO);
  return R_NilValue;

L728_:;
  // xx25 = force? xx24
  Rsh_Fir_reg_xx25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx24_);
  // checkMissing(xx25)
  SEXP Rsh_Fir_array_args575[1];
  Rsh_Fir_array_args575[0] = Rsh_Fir_reg_xx25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args575, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r355 = dyn attr2(xx25, "row.names")
  SEXP Rsh_Fir_array_args576[2];
  Rsh_Fir_array_args576[0] = Rsh_Fir_reg_xx25_;
  Rsh_Fir_array_args576[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names187[2];
  Rsh_Fir_array_arg_names187[0] = R_MissingArg;
  Rsh_Fir_array_arg_names187[1] = R_MissingArg;
  Rsh_Fir_reg_r355_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args576, Rsh_Fir_array_arg_names187, CCP, RHO);
  // check L729() else D242()
  // L729()
  goto L729_;

D242_:;
  // deopt 864 [r355]
  SEXP Rsh_Fir_array_deopt_stack217[1];
  Rsh_Fir_array_deopt_stack217[0] = Rsh_Fir_reg_r355_;
  Rsh_Fir_deopt(864, 1, Rsh_Fir_array_deopt_stack217, CCP, RHO);
  return R_NilValue;

L729_:;
  // goto L167(r355)
  // L167(r355)
  Rsh_Fir_reg_r354_ = Rsh_Fir_reg_r355_;
  goto L167_;

D243_:;
  // deopt 868 [rows6]
  SEXP Rsh_Fir_array_deopt_stack218[1];
  Rsh_Fir_array_deopt_stack218[0] = Rsh_Fir_reg_rows6_;
  Rsh_Fir_deopt(868, 1, Rsh_Fir_array_deopt_stack218, CCP, RHO);
  return R_NilValue;

L731_:;
  // rows7 = force? rows6
  Rsh_Fir_reg_rows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows6_);
  // checkMissing(rows7)
  SEXP Rsh_Fir_array_args577[1];
  Rsh_Fir_array_args577[0] = Rsh_Fir_reg_rows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args577, Rsh_Fir_param_types_empty()));
  // c173 = `is.object`(rows7)
  SEXP Rsh_Fir_array_args578[1];
  Rsh_Fir_array_args578[0] = Rsh_Fir_reg_rows7_;
  Rsh_Fir_reg_c173_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args578);
  // if c173 then L732() else L733(rows7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c173_)) {
  // L732()
    goto L732_;
  } else {
  // L733(rows7)
    Rsh_Fir_reg_rows9_ = Rsh_Fir_reg_rows7_;
    goto L733_;
  }

L732_:;
  // dr32 = tryDispatchBuiltin.1("[", rows7)
  SEXP Rsh_Fir_array_args579[2];
  Rsh_Fir_array_args579[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args579[1] = Rsh_Fir_reg_rows7_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args579);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args580[1];
  Rsh_Fir_array_args580[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args580, Rsh_Fir_param_types_empty());
  // if dc16 then L734() else L733(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L734()
    goto L734_;
  } else {
  // L733(dr32)
    Rsh_Fir_reg_rows9_ = Rsh_Fir_reg_dr32_;
    goto L733_;
  }

L733_:;
  // i56 = ld i
  Rsh_Fir_reg_i56_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L735() else D244()
  // L735()
  goto L735_;

L734_:;
  // dx40 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args581[1];
  Rsh_Fir_array_args581[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args581, Rsh_Fir_param_types_empty());
  // goto L169(dx40)
  // L169(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L169_;

D244_:;
  // deopt 870 [rows9, i56]
  SEXP Rsh_Fir_array_deopt_stack219[2];
  Rsh_Fir_array_deopt_stack219[0] = Rsh_Fir_reg_rows9_;
  Rsh_Fir_array_deopt_stack219[1] = Rsh_Fir_reg_i56_;
  Rsh_Fir_deopt(870, 2, Rsh_Fir_array_deopt_stack219, CCP, RHO);
  return R_NilValue;

L735_:;
  // i57 = force? i56
  Rsh_Fir_reg_i57_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i56_);
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r357 = dyn __15(rows9, i57)
  SEXP Rsh_Fir_array_args582[2];
  Rsh_Fir_array_args582[0] = Rsh_Fir_reg_rows9_;
  Rsh_Fir_array_args582[1] = Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_array_arg_names188[2];
  Rsh_Fir_array_arg_names188[0] = R_MissingArg;
  Rsh_Fir_array_arg_names188[1] = R_MissingArg;
  Rsh_Fir_reg_r357_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args582, Rsh_Fir_array_arg_names188, CCP, RHO);
  // goto L169(r357)
  // L169(r357)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r357_;
  goto L169_;

L736_:;
  // rows10 = ld rows
  Rsh_Fir_reg_rows10_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L738() else D245()
  // L738()
  goto L738_;

L737_:;
  // r358 = dyn base76(<sym rows>)
  SEXP Rsh_Fir_array_args583[1];
  Rsh_Fir_array_args583[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names189[1];
  Rsh_Fir_array_arg_names189[0] = R_MissingArg;
  Rsh_Fir_reg_r358_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base76_, 1, Rsh_Fir_array_args583, Rsh_Fir_array_arg_names189, CCP, RHO);
  // goto L170(r358)
  // L170(r358)
  Rsh_Fir_reg_r359_ = Rsh_Fir_reg_r358_;
  goto L170_;

D245_:;
  // deopt 876 [rows10]
  SEXP Rsh_Fir_array_deopt_stack220[1];
  Rsh_Fir_array_deopt_stack220[0] = Rsh_Fir_reg_rows10_;
  Rsh_Fir_deopt(876, 1, Rsh_Fir_array_deopt_stack220, CCP, RHO);
  return R_NilValue;

L738_:;
  // rows11 = force? rows10
  Rsh_Fir_reg_rows11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows10_);
  // checkMissing(rows11)
  SEXP Rsh_Fir_array_args584[1];
  Rsh_Fir_array_args584[0] = Rsh_Fir_reg_rows11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args584, Rsh_Fir_param_types_empty()));
  // anyNA8 = ldf anyNA in base
  Rsh_Fir_reg_anyNA8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r360 = dyn anyNA8(rows11)
  SEXP Rsh_Fir_array_args585[1];
  Rsh_Fir_array_args585[0] = Rsh_Fir_reg_rows11_;
  SEXP Rsh_Fir_array_arg_names190[1];
  Rsh_Fir_array_arg_names190[0] = R_MissingArg;
  Rsh_Fir_reg_r360_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA8_, 1, Rsh_Fir_array_args585, Rsh_Fir_array_arg_names190, CCP, RHO);
  // check L739() else D246()
  // L739()
  goto L739_;

D246_:;
  // deopt 879 [r360]
  SEXP Rsh_Fir_array_deopt_stack221[1];
  Rsh_Fir_array_deopt_stack221[0] = Rsh_Fir_reg_r360_;
  Rsh_Fir_deopt(879, 1, Rsh_Fir_array_deopt_stack221, CCP, RHO);
  return R_NilValue;

L739_:;
  // goto L170(r360)
  // L170(r360)
  Rsh_Fir_reg_r359_ = Rsh_Fir_reg_r360_;
  goto L170_;

D247_:;
  // deopt 881 [r359]
  SEXP Rsh_Fir_array_deopt_stack222[1];
  Rsh_Fir_array_deopt_stack222[0] = Rsh_Fir_reg_r359_;
  Rsh_Fir_deopt(881, 1, Rsh_Fir_array_deopt_stack222, CCP, RHO);
  return R_NilValue;

L740_:;
  // p18 = prom<V +>{
  //   rows12 = ld rows;
  //   rows13 = force? rows12;
  //   checkMissing(rows13);
  //   return rows13;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_18, 0, NULL, CCP, RHO);
  // r362 = dyn anyDuplicated2(p18)
  SEXP Rsh_Fir_array_args587[1];
  Rsh_Fir_array_args587[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names191[1];
  Rsh_Fir_array_arg_names191[0] = R_MissingArg;
  Rsh_Fir_reg_r362_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated2_, 1, Rsh_Fir_array_args587, Rsh_Fir_array_arg_names191, CCP, RHO);
  // check L741() else D248()
  // L741()
  goto L741_;

D248_:;
  // deopt 883 [r359, r362]
  SEXP Rsh_Fir_array_deopt_stack223[2];
  Rsh_Fir_array_deopt_stack223[0] = Rsh_Fir_reg_r359_;
  Rsh_Fir_array_deopt_stack223[1] = Rsh_Fir_reg_r362_;
  Rsh_Fir_deopt(883, 2, Rsh_Fir_array_deopt_stack223, CCP, RHO);
  return R_NilValue;

L741_:;
  // st dup = r362
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r362_, RHO);
  (void)(Rsh_Fir_reg_r362_);
  // r363 = `||`(r359, r362)
  SEXP Rsh_Fir_array_args588[2];
  Rsh_Fir_array_args588[0] = Rsh_Fir_reg_r359_;
  Rsh_Fir_array_args588[1] = Rsh_Fir_reg_r362_;
  Rsh_Fir_reg_r363_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args588);
  // c174 = `as.logical`(r363)
  SEXP Rsh_Fir_array_args589[1];
  Rsh_Fir_array_args589[0] = Rsh_Fir_reg_r363_;
  Rsh_Fir_reg_c174_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args589);
  // if c174 then L742() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c174_)) {
  // L742()
    goto L742_;
  } else {
  // L171()
    goto L171_;
  }

L742_:;
  // dup = ld dup
  Rsh_Fir_reg_dup = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L743() else D249()
  // L743()
  goto L743_;

D249_:;
  // deopt 886 [dup]
  SEXP Rsh_Fir_array_deopt_stack224[1];
  Rsh_Fir_array_deopt_stack224[0] = Rsh_Fir_reg_dup;
  Rsh_Fir_deopt(886, 1, Rsh_Fir_array_deopt_stack224, CCP, RHO);
  return R_NilValue;

L743_:;
  // dup1 = force? dup
  Rsh_Fir_reg_dup1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dup);
  // checkMissing(dup1)
  SEXP Rsh_Fir_array_args590[1];
  Rsh_Fir_array_args590[0] = Rsh_Fir_reg_dup1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args590, Rsh_Fir_param_types_empty()));
  // r364 = `!`(dup1)
  SEXP Rsh_Fir_array_args591[1];
  Rsh_Fir_array_args591[0] = Rsh_Fir_reg_dup1_;
  Rsh_Fir_reg_r364_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args591);
  // c175 = `as.logical`(r364)
  SEXP Rsh_Fir_array_args592[1];
  Rsh_Fir_array_args592[0] = Rsh_Fir_reg_r364_;
  Rsh_Fir_reg_c175_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args592);
  // if c175 then L744() else L172(c175)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c175_)) {
  // L744()
    goto L744_;
  } else {
  // L172(c175)
    Rsh_Fir_reg_c177_ = Rsh_Fir_reg_c175_;
    goto L172_;
  }

L744_:;
  // sym77 = ldf `is.character`
  Rsh_Fir_reg_sym77_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base77 = ldf `is.character` in base
  Rsh_Fir_reg_base77_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard77 = `==`.4(sym77, base77)
  SEXP Rsh_Fir_array_args593[2];
  Rsh_Fir_array_args593[0] = Rsh_Fir_reg_sym77_;
  Rsh_Fir_array_args593[1] = Rsh_Fir_reg_base77_;
  Rsh_Fir_reg_guard77_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args593);
  // if guard77 then L745() else L746()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard77_)) {
  // L745()
    goto L745_;
  } else {
  // L746()
    goto L746_;
  }

L745_:;
  // rows14 = ld rows
  Rsh_Fir_reg_rows14_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L747() else D250()
  // L747()
  goto L747_;

L746_:;
  // r365 = dyn base77(<sym rows>)
  SEXP Rsh_Fir_array_args594[1];
  Rsh_Fir_array_args594[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names192[1];
  Rsh_Fir_array_arg_names192[0] = R_MissingArg;
  Rsh_Fir_reg_r365_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base77_, 1, Rsh_Fir_array_args594, Rsh_Fir_array_arg_names192, CCP, RHO);
  // goto L173(c175, r365)
  // L173(c175, r365)
  Rsh_Fir_reg_c180_ = Rsh_Fir_reg_c175_;
  Rsh_Fir_reg_r366_ = Rsh_Fir_reg_r365_;
  goto L173_;

D250_:;
  // deopt 890 [c175, rows14]
  SEXP Rsh_Fir_array_deopt_stack225[2];
  Rsh_Fir_array_deopt_stack225[0] = Rsh_Fir_reg_c175_;
  Rsh_Fir_array_deopt_stack225[1] = Rsh_Fir_reg_rows14_;
  Rsh_Fir_deopt(890, 2, Rsh_Fir_array_deopt_stack225, CCP, RHO);
  return R_NilValue;

L747_:;
  // rows15 = force? rows14
  Rsh_Fir_reg_rows15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows14_);
  // checkMissing(rows15)
  SEXP Rsh_Fir_array_args595[1];
  Rsh_Fir_array_args595[0] = Rsh_Fir_reg_rows15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args595, Rsh_Fir_param_types_empty()));
  // c181 = `is.character`(rows15)
  SEXP Rsh_Fir_array_args596[1];
  Rsh_Fir_array_args596[0] = Rsh_Fir_reg_rows15_;
  Rsh_Fir_reg_c181_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args596);
  // goto L173(c175, c181)
  // L173(c175, c181)
  Rsh_Fir_reg_c180_ = Rsh_Fir_reg_c175_;
  Rsh_Fir_reg_r366_ = Rsh_Fir_reg_c181_;
  goto L173_;

L749_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L750() else D251()
  // L750()
  goto L750_;

D251_:;
  // deopt 895 []
  Rsh_Fir_deopt(895, 0, NULL, CCP, RHO);
  return R_NilValue;

L750_:;
  // p19 = prom<V +>{
  //   rows16 = ld rows;
  //   rows17 = force? rows16;
  //   checkMissing(rows17);
  //   return rows17;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_19, 0, NULL, CCP, RHO);
  // r368 = dyn _in_1("NA", p19)
  SEXP Rsh_Fir_array_args598[2];
  Rsh_Fir_array_args598[0] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args598[1] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names193[2];
  Rsh_Fir_array_arg_names193[0] = R_MissingArg;
  Rsh_Fir_array_arg_names193[1] = R_MissingArg;
  Rsh_Fir_reg_r368_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args598, Rsh_Fir_array_arg_names193, CCP, RHO);
  // check L751() else D252()
  // L751()
  goto L751_;

D252_:;
  // deopt 898 [r368]
  SEXP Rsh_Fir_array_deopt_stack226[1];
  Rsh_Fir_array_deopt_stack226[0] = Rsh_Fir_reg_r368_;
  Rsh_Fir_deopt(898, 1, Rsh_Fir_array_deopt_stack226, CCP, RHO);
  return R_NilValue;

L751_:;
  // st dup = r368
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r368_, RHO);
  (void)(Rsh_Fir_reg_r368_);
  // goto L175()
  // L175()
  goto L175_;

D253_:;
  // deopt 902 [ina]
  SEXP Rsh_Fir_array_deopt_stack227[1];
  Rsh_Fir_array_deopt_stack227[0] = Rsh_Fir_reg_ina;
  Rsh_Fir_deopt(902, 1, Rsh_Fir_array_deopt_stack227, CCP, RHO);
  return R_NilValue;

L753_:;
  // ina1 = force? ina
  Rsh_Fir_reg_ina1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ina);
  // checkMissing(ina1)
  SEXP Rsh_Fir_array_args599[1];
  Rsh_Fir_array_args599[0] = Rsh_Fir_reg_ina1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args599, Rsh_Fir_param_types_empty()));
  // c186 = `as.logical`(ina1)
  SEXP Rsh_Fir_array_args600[1];
  Rsh_Fir_array_args600[0] = Rsh_Fir_reg_ina1_;
  Rsh_Fir_reg_c186_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args600);
  // if c186 then L754() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c186_)) {
  // L754()
    goto L754_;
  } else {
  // L176()
    goto L176_;
  }

L754_:;
  // l21 = ld rows
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // c187 = `is.object`(l21)
  SEXP Rsh_Fir_array_args601[1];
  Rsh_Fir_array_args601[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c187_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args601);
  // if c187 then L755() else L756("NA", l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c187_)) {
  // L755()
    goto L755_;
  } else {
  // L756("NA", l21)
    Rsh_Fir_reg_r371_ = Rsh_const(CCP, 93);
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L756_;
  }

L755_:;
  // dr34 = tryDispatchBuiltin.0("[<-", l21, "NA")
  SEXP Rsh_Fir_array_args602[3];
  Rsh_Fir_array_args602[0] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args602[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args602[2] = Rsh_const(CCP, 93);
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args602);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args603[1];
  Rsh_Fir_array_args603[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args603, Rsh_Fir_param_types_empty());
  // if dc17 then L757() else L756("NA", dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L757()
    goto L757_;
  } else {
  // L756("NA", dr34)
    Rsh_Fir_reg_r371_ = Rsh_const(CCP, 93);
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr34_;
    goto L756_;
  }

L756_:;
  // sym78 = ldf `is.na`
  Rsh_Fir_reg_sym78_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base78 = ldf `is.na` in base
  Rsh_Fir_reg_base78_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard78 = `==`.4(sym78, base78)
  SEXP Rsh_Fir_array_args604[2];
  Rsh_Fir_array_args604[0] = Rsh_Fir_reg_sym78_;
  Rsh_Fir_array_args604[1] = Rsh_Fir_reg_base78_;
  Rsh_Fir_reg_guard78_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args604);
  // if guard78 then L758() else L759()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard78_)) {
  // L758()
    goto L758_;
  } else {
  // L759()
    goto L759_;
  }

L757_:;
  // dx42 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args605[1];
  Rsh_Fir_array_args605[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args605, Rsh_Fir_param_types_empty());
  // goto L177("NA", dx42)
  // L177("NA", dx42)
  Rsh_Fir_reg_r373_ = Rsh_const(CCP, 93);
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L177_;

L758_:;
  // rows18 = ld rows
  Rsh_Fir_reg_rows18_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L760() else D254()
  // L760()
  goto L760_;

L759_:;
  // r378 = dyn base78(<sym rows>)
  SEXP Rsh_Fir_array_args606[1];
  Rsh_Fir_array_args606[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names194[1];
  Rsh_Fir_array_arg_names194[0] = R_MissingArg;
  Rsh_Fir_reg_r378_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base78_, 1, Rsh_Fir_array_args606, Rsh_Fir_array_arg_names194, CCP, RHO);
  // goto L178(r371, l23, "NA", r378)
  // L178(r371, l23, "NA", r378)
  Rsh_Fir_reg_r379_ = Rsh_Fir_reg_r371_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_r380_ = Rsh_const(CCP, 93);
  Rsh_Fir_reg_r381_ = Rsh_Fir_reg_r378_;
  goto L178_;

D254_:;
  // deopt 909 [r371, l23, "NA", rows18]
  SEXP Rsh_Fir_array_deopt_stack228[4];
  Rsh_Fir_array_deopt_stack228[0] = Rsh_Fir_reg_r371_;
  Rsh_Fir_array_deopt_stack228[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack228[2] = Rsh_const(CCP, 93);
  Rsh_Fir_array_deopt_stack228[3] = Rsh_Fir_reg_rows18_;
  Rsh_Fir_deopt(909, 4, Rsh_Fir_array_deopt_stack228, CCP, RHO);
  return R_NilValue;

L760_:;
  // rows19 = force? rows18
  Rsh_Fir_reg_rows19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows18_);
  // checkMissing(rows19)
  SEXP Rsh_Fir_array_args607[1];
  Rsh_Fir_array_args607[0] = Rsh_Fir_reg_rows19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args607, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // r382 = dyn is_na(rows19)
  SEXP Rsh_Fir_array_args608[1];
  Rsh_Fir_array_args608[0] = Rsh_Fir_reg_rows19_;
  SEXP Rsh_Fir_array_arg_names195[1];
  Rsh_Fir_array_arg_names195[0] = R_MissingArg;
  Rsh_Fir_reg_r382_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args608, Rsh_Fir_array_arg_names195, CCP, RHO);
  // check L761() else D255()
  // L761()
  goto L761_;

D255_:;
  // deopt 912 [r371, l23, "NA", r382]
  SEXP Rsh_Fir_array_deopt_stack229[4];
  Rsh_Fir_array_deopt_stack229[0] = Rsh_Fir_reg_r371_;
  Rsh_Fir_array_deopt_stack229[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack229[2] = Rsh_const(CCP, 93);
  Rsh_Fir_array_deopt_stack229[3] = Rsh_Fir_reg_r382_;
  Rsh_Fir_deopt(912, 4, Rsh_Fir_array_deopt_stack229, CCP, RHO);
  return R_NilValue;

L761_:;
  // goto L178(r371, l23, "NA", r382)
  // L178(r371, l23, "NA", r382)
  Rsh_Fir_reg_r379_ = Rsh_Fir_reg_r371_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_r380_ = Rsh_const(CCP, 93);
  Rsh_Fir_reg_r381_ = Rsh_Fir_reg_r382_;
  goto L178_;

D256_:;
  // deopt 917 [dup2]
  SEXP Rsh_Fir_array_deopt_stack230[1];
  Rsh_Fir_array_deopt_stack230[0] = Rsh_Fir_reg_dup2_;
  Rsh_Fir_deopt(917, 1, Rsh_Fir_array_deopt_stack230, CCP, RHO);
  return R_NilValue;

L763_:;
  // dup3 = force? dup2
  Rsh_Fir_reg_dup3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dup2_);
  // checkMissing(dup3)
  SEXP Rsh_Fir_array_args609[1];
  Rsh_Fir_array_args609[0] = Rsh_Fir_reg_dup3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args609, Rsh_Fir_param_types_empty()));
  // c188 = `as.logical`(dup3)
  SEXP Rsh_Fir_array_args610[1];
  Rsh_Fir_array_args610[0] = Rsh_Fir_reg_dup3_;
  Rsh_Fir_reg_c188_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args610);
  // if c188 then L764() else L180()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c188_)) {
  // L764()
    goto L764_;
  } else {
  // L180()
    goto L180_;
  }

L764_:;
  // make_unique2 = ldf `make.unique`
  Rsh_Fir_reg_make_unique2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L765() else D257()
  // L765()
  goto L765_;

D257_:;
  // deopt 920 []
  Rsh_Fir_deopt(920, 0, NULL, CCP, RHO);
  return R_NilValue;

L765_:;
  // p20 = prom<V +>{
  //   sym79 = ldf `as.character`;
  //   base79 = ldf `as.character` in base;
  //   guard79 = `==`.4(sym79, base79);
  //   if guard79 then L1() else L2();
  // L0(r386):
  //   return r386;
  // L1():
  //   rows20 = ld rows;
  //   rows21 = force? rows20;
  //   checkMissing(rows21);
  //   as_character = ldf `as.character` in base;
  //   r387 = dyn as_character(rows21);
  //   goto L0(r387);
  // L2():
  //   r385 = dyn base79(<sym rows>);
  //   goto L0(r385);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_20, 0, NULL, CCP, RHO);
  // r389 = dyn make_unique2(p20)
  SEXP Rsh_Fir_array_args615[1];
  Rsh_Fir_array_args615[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names198[1];
  Rsh_Fir_array_arg_names198[0] = R_MissingArg;
  Rsh_Fir_reg_r389_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique2_, 1, Rsh_Fir_array_args615, Rsh_Fir_array_arg_names198, CCP, RHO);
  // check L766() else D258()
  // L766()
  goto L766_;

D258_:;
  // deopt 922 [r389]
  SEXP Rsh_Fir_array_deopt_stack231[1];
  Rsh_Fir_array_deopt_stack231[0] = Rsh_Fir_reg_r389_;
  Rsh_Fir_deopt(922, 1, Rsh_Fir_array_deopt_stack231, CCP, RHO);
  return R_NilValue;

L766_:;
  // st rows = r389
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r389_, RHO);
  (void)(Rsh_Fir_reg_r389_);
  // goto L181(r389)
  // L181(r389)
  Rsh_Fir_reg_r390_ = Rsh_Fir_reg_r389_;
  goto L181_;

D259_:;
  // deopt 928 [has_j8]
  SEXP Rsh_Fir_array_deopt_stack232[1];
  Rsh_Fir_array_deopt_stack232[0] = Rsh_Fir_reg_has_j8_;
  Rsh_Fir_deopt(928, 1, Rsh_Fir_array_deopt_stack232, CCP, RHO);
  return R_NilValue;

L769_:;
  // has_j9 = force? has_j8
  Rsh_Fir_reg_has_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_j8_);
  // checkMissing(has_j9)
  SEXP Rsh_Fir_array_args616[1];
  Rsh_Fir_array_args616[0] = Rsh_Fir_reg_has_j9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args616, Rsh_Fir_param_types_empty()));
  // c189 = `as.logical`(has_j9)
  SEXP Rsh_Fir_array_args617[1];
  Rsh_Fir_array_args617[0] = Rsh_Fir_reg_has_j9_;
  Rsh_Fir_reg_c189_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args617);
  // if c189 then L770() else L183(c189)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c189_)) {
  // L770()
    goto L770_;
  } else {
  // L183(c189)
    Rsh_Fir_reg_c191_ = Rsh_Fir_reg_c189_;
    goto L183_;
  }

L770_:;
  // anyDuplicated3 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L771() else D260()
  // L771()
  goto L771_;

D260_:;
  // deopt 931 [c189]
  SEXP Rsh_Fir_array_deopt_stack233[1];
  Rsh_Fir_array_deopt_stack233[0] = Rsh_Fir_reg_c189_;
  Rsh_Fir_deopt(931, 1, Rsh_Fir_array_deopt_stack233, CCP, RHO);
  return R_NilValue;

L771_:;
  // p21 = prom<V +>{
  //   sym80 = ldf names;
  //   base80 = ldf names in base;
  //   guard80 = `==`.4(sym80, base80);
  //   if guard80 then L1() else L2();
  // L0(r393):
  //   st nm = r393;
  //   setInvisible.0();
  //   return r393;
  // L1():
  //   x68 = ld x;
  //   x69 = force? x68;
  //   checkMissing(x69);
  //   names12 = ldf names in base;
  //   r394 = dyn names12(x69);
  //   goto L0(r394);
  // L2():
  //   r392 = dyn base80(<sym x>);
  //   goto L0(r392);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_21, 0, NULL, CCP, RHO);
  // r396 = dyn anyDuplicated3(p21)
  SEXP Rsh_Fir_array_args622[1];
  Rsh_Fir_array_args622[0] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names201[1];
  Rsh_Fir_array_arg_names201[0] = R_MissingArg;
  Rsh_Fir_reg_r396_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated3_, 1, Rsh_Fir_array_args622, Rsh_Fir_array_arg_names201, CCP, RHO);
  // check L772() else D261()
  // L772()
  goto L772_;

D261_:;
  // deopt 933 [c189, r396]
  SEXP Rsh_Fir_array_deopt_stack234[2];
  Rsh_Fir_array_deopt_stack234[0] = Rsh_Fir_reg_c189_;
  Rsh_Fir_array_deopt_stack234[1] = Rsh_Fir_reg_r396_;
  Rsh_Fir_deopt(933, 2, Rsh_Fir_array_deopt_stack234, CCP, RHO);
  return R_NilValue;

L772_:;
  // c192 = `as.logical`(r396)
  SEXP Rsh_Fir_array_args623[1];
  Rsh_Fir_array_args623[0] = Rsh_Fir_reg_r396_;
  Rsh_Fir_reg_c192_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args623);
  // c193 = `&&`(c189, c192)
  SEXP Rsh_Fir_array_args624[2];
  Rsh_Fir_array_args624[0] = Rsh_Fir_reg_c189_;
  Rsh_Fir_array_args624[1] = Rsh_Fir_reg_c192_;
  Rsh_Fir_reg_c193_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args624);
  // goto L183(c193)
  // L183(c193)
  Rsh_Fir_reg_c191_ = Rsh_Fir_reg_c193_;
  goto L183_;

L774_:;
  // make_unique3 = ldf `make.unique`
  Rsh_Fir_reg_make_unique3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L775() else D262()
  // L775()
  goto L775_;

D262_:;
  // deopt 936 []
  Rsh_Fir_deopt(936, 0, NULL, CCP, RHO);
  return R_NilValue;

L775_:;
  // p22 = prom<V +>{
  //   nm26 = ld nm;
  //   nm27 = force? nm26;
  //   checkMissing(nm27);
  //   return nm27;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1821424213_22, 0, NULL, CCP, RHO);
  // r398 = dyn make_unique3(p22)
  SEXP Rsh_Fir_array_args626[1];
  Rsh_Fir_array_args626[0] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names202[1];
  Rsh_Fir_array_arg_names202[0] = R_MissingArg;
  Rsh_Fir_reg_r398_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique3_, 1, Rsh_Fir_array_args626, Rsh_Fir_array_arg_names202, CCP, RHO);
  // check L776() else D263()
  // L776()
  goto L776_;

D263_:;
  // deopt 938 [r398]
  SEXP Rsh_Fir_array_deopt_stack235[1];
  Rsh_Fir_array_deopt_stack235[0] = Rsh_Fir_reg_r398_;
  Rsh_Fir_deopt(938, 1, Rsh_Fir_array_deopt_stack235, CCP, RHO);
  return R_NilValue;

L776_:;
  // l27 = ld x
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__11 = ldf `names<-`
  Rsh_Fir_reg_names__11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L777() else D264()
  // L777()
  goto L777_;

D264_:;
  // deopt 940 [r398, l27, r398]
  SEXP Rsh_Fir_array_deopt_stack236[3];
  Rsh_Fir_array_deopt_stack236[0] = Rsh_Fir_reg_r398_;
  Rsh_Fir_array_deopt_stack236[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_deopt_stack236[2] = Rsh_Fir_reg_r398_;
  Rsh_Fir_deopt(940, 3, Rsh_Fir_array_deopt_stack236, CCP, RHO);
  return R_NilValue;

L777_:;
  // r399 = dyn names__11(l27, NULL, r398)
  SEXP Rsh_Fir_array_args627[3];
  Rsh_Fir_array_args627[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args627[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args627[2] = Rsh_Fir_reg_r398_;
  SEXP Rsh_Fir_array_arg_names203[3];
  Rsh_Fir_array_arg_names203[0] = R_MissingArg;
  Rsh_Fir_array_arg_names203[1] = R_MissingArg;
  Rsh_Fir_array_arg_names203[2] = R_MissingArg;
  Rsh_Fir_reg_r399_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__11_, 3, Rsh_Fir_array_args627, Rsh_Fir_array_arg_names203, CCP, RHO);
  // check L778() else D265()
  // L778()
  goto L778_;

D265_:;
  // deopt 942 [r398, r399]
  SEXP Rsh_Fir_array_deopt_stack237[2];
  Rsh_Fir_array_deopt_stack237[0] = Rsh_Fir_reg_r398_;
  Rsh_Fir_array_deopt_stack237[1] = Rsh_Fir_reg_r399_;
  Rsh_Fir_deopt(942, 2, Rsh_Fir_array_deopt_stack237, CCP, RHO);
  return R_NilValue;

L778_:;
  // st x = r399
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r399_, RHO);
  (void)(Rsh_Fir_reg_r399_);
  // goto L185()
  // L185()
  goto L185_;

L780_:;
  // rows22 = ld rows
  Rsh_Fir_reg_rows22_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L782() else D266()
  // L782()
  goto L782_;

L781_:;
  // r401 = dyn base81(<sym rows>)
  SEXP Rsh_Fir_array_args628[1];
  Rsh_Fir_array_args628[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names204[1];
  Rsh_Fir_array_arg_names204[0] = R_MissingArg;
  Rsh_Fir_reg_r401_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base81_, 1, Rsh_Fir_array_args628, Rsh_Fir_array_arg_names204, CCP, RHO);
  // goto L186(r401)
  // L186(r401)
  Rsh_Fir_reg_r402_ = Rsh_Fir_reg_r401_;
  goto L186_;

D266_:;
  // deopt 947 [rows22]
  SEXP Rsh_Fir_array_deopt_stack238[1];
  Rsh_Fir_array_deopt_stack238[0] = Rsh_Fir_reg_rows22_;
  Rsh_Fir_deopt(947, 1, Rsh_Fir_array_deopt_stack238, CCP, RHO);
  return R_NilValue;

L782_:;
  // rows23 = force? rows22
  Rsh_Fir_reg_rows23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows22_);
  // checkMissing(rows23)
  SEXP Rsh_Fir_array_args629[1];
  Rsh_Fir_array_args629[0] = Rsh_Fir_reg_rows23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args629, Rsh_Fir_param_types_empty()));
  // c196 = `==`(rows23, NULL)
  SEXP Rsh_Fir_array_args630[2];
  Rsh_Fir_array_args630[0] = Rsh_Fir_reg_rows23_;
  Rsh_Fir_array_args630[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_c196_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args630);
  // goto L186(c196)
  // L186(c196)
  Rsh_Fir_reg_r402_ = Rsh_Fir_reg_c196_;
  goto L186_;

L783_:;
  // sym82 = ldf attr
  Rsh_Fir_reg_sym82_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base82 = ldf attr in base
  Rsh_Fir_reg_base82_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard82 = `==`.4(sym82, base82)
  SEXP Rsh_Fir_array_args631[2];
  Rsh_Fir_array_args631[0] = Rsh_Fir_reg_sym82_;
  Rsh_Fir_array_args631[1] = Rsh_Fir_reg_base82_;
  Rsh_Fir_reg_guard82_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args631);
  // if guard82 then L784() else L785()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard82_)) {
  // L784()
    goto L784_;
  } else {
  // L785()
    goto L785_;
  }

L784_:;
  // xx26 = ld xx
  Rsh_Fir_reg_xx26_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L786() else D267()
  // L786()
  goto L786_;

L785_:;
  // r403 = dyn base82(<sym xx>, "row.names")
  SEXP Rsh_Fir_array_args632[2];
  Rsh_Fir_array_args632[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args632[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names205[2];
  Rsh_Fir_array_arg_names205[0] = R_MissingArg;
  Rsh_Fir_array_arg_names205[1] = R_MissingArg;
  Rsh_Fir_reg_r403_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base82_, 2, Rsh_Fir_array_args632, Rsh_Fir_array_arg_names205, CCP, RHO);
  // goto L188(r403)
  // L188(r403)
  Rsh_Fir_reg_r404_ = Rsh_Fir_reg_r403_;
  goto L188_;

D267_:;
  // deopt 952 [xx26]
  SEXP Rsh_Fir_array_deopt_stack239[1];
  Rsh_Fir_array_deopt_stack239[0] = Rsh_Fir_reg_xx26_;
  Rsh_Fir_deopt(952, 1, Rsh_Fir_array_deopt_stack239, CCP, RHO);
  return R_NilValue;

L786_:;
  // xx27 = force? xx26
  Rsh_Fir_reg_xx27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx26_);
  // checkMissing(xx27)
  SEXP Rsh_Fir_array_args633[1];
  Rsh_Fir_array_args633[0] = Rsh_Fir_reg_xx27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args633, Rsh_Fir_param_types_empty()));
  // attr3 = ldf attr in base
  Rsh_Fir_reg_attr3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r405 = dyn attr3(xx27, "row.names")
  SEXP Rsh_Fir_array_args634[2];
  Rsh_Fir_array_args634[0] = Rsh_Fir_reg_xx27_;
  Rsh_Fir_array_args634[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names206[2];
  Rsh_Fir_array_arg_names206[0] = R_MissingArg;
  Rsh_Fir_array_arg_names206[1] = R_MissingArg;
  Rsh_Fir_reg_r405_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr3_, 2, Rsh_Fir_array_args634, Rsh_Fir_array_arg_names206, CCP, RHO);
  // check L787() else D268()
  // L787()
  goto L787_;

D268_:;
  // deopt 956 [r405]
  SEXP Rsh_Fir_array_deopt_stack240[1];
  Rsh_Fir_array_deopt_stack240[0] = Rsh_Fir_reg_r405_;
  Rsh_Fir_deopt(956, 1, Rsh_Fir_array_deopt_stack240, CCP, RHO);
  return R_NilValue;

L787_:;
  // goto L188(r405)
  // L188(r405)
  Rsh_Fir_reg_r404_ = Rsh_Fir_reg_r405_;
  goto L188_;

L788_:;
  // dr36 = tryDispatchBuiltin.1("[", r404)
  SEXP Rsh_Fir_array_args635[2];
  Rsh_Fir_array_args635[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args635[1] = Rsh_Fir_reg_r404_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args635);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args636[1];
  Rsh_Fir_array_args636[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args636, Rsh_Fir_param_types_empty());
  // if dc18 then L790() else L789(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L790()
    goto L790_;
  } else {
  // L789(dr36)
    Rsh_Fir_reg_r407_ = Rsh_Fir_reg_dr36_;
    goto L789_;
  }

L789_:;
  // i58 = ld i
  Rsh_Fir_reg_i58_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L791() else D269()
  // L791()
  goto L791_;

L790_:;
  // dx44 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args637[1];
  Rsh_Fir_array_args637[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args637, Rsh_Fir_param_types_empty());
  // goto L189(dx44)
  // L189(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L189_;

D269_:;
  // deopt 957 [r407, i58]
  SEXP Rsh_Fir_array_deopt_stack241[2];
  Rsh_Fir_array_deopt_stack241[0] = Rsh_Fir_reg_r407_;
  Rsh_Fir_array_deopt_stack241[1] = Rsh_Fir_reg_i58_;
  Rsh_Fir_deopt(957, 2, Rsh_Fir_array_deopt_stack241, CCP, RHO);
  return R_NilValue;

L791_:;
  // i59 = force? i58
  Rsh_Fir_reg_i59_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i58_);
  // __16 = ldf `[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r408 = dyn __16(r407, i59)
  SEXP Rsh_Fir_array_args638[2];
  Rsh_Fir_array_args638[0] = Rsh_Fir_reg_r407_;
  Rsh_Fir_array_args638[1] = Rsh_Fir_reg_i59_;
  SEXP Rsh_Fir_array_arg_names207[2];
  Rsh_Fir_array_arg_names207[0] = R_MissingArg;
  Rsh_Fir_array_arg_names207[1] = R_MissingArg;
  Rsh_Fir_reg_r408_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args638, Rsh_Fir_array_arg_names207, CCP, RHO);
  // goto L189(r408)
  // L189(r408)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r408_;
  goto L189_;

D270_:;
  // deopt 963 [rows24]
  SEXP Rsh_Fir_array_deopt_stack242[1];
  Rsh_Fir_array_deopt_stack242[0] = Rsh_Fir_reg_rows24_;
  Rsh_Fir_deopt(963, 1, Rsh_Fir_array_deopt_stack242, CCP, RHO);
  return R_NilValue;

L793_:;
  // rows25 = force? rows24
  Rsh_Fir_reg_rows25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows24_);
  // checkMissing(rows25)
  SEXP Rsh_Fir_array_args639[1];
  Rsh_Fir_array_args639[0] = Rsh_Fir_reg_rows25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args639, Rsh_Fir_param_types_empty()));
  // l28 = ld x
  Rsh_Fir_reg_l28_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__5 = ldf `attr<-`
  Rsh_Fir_reg_attr__5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L794() else D271()
  // L794()
  goto L794_;

D271_:;
  // deopt 966 [rows25, l28, rows25]
  SEXP Rsh_Fir_array_deopt_stack243[3];
  Rsh_Fir_array_deopt_stack243[0] = Rsh_Fir_reg_rows25_;
  Rsh_Fir_array_deopt_stack243[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack243[2] = Rsh_Fir_reg_rows25_;
  Rsh_Fir_deopt(966, 3, Rsh_Fir_array_deopt_stack243, CCP, RHO);
  return R_NilValue;

L794_:;
  // r409 = dyn attr__5(l28, NULL, "row.names", rows25)
  SEXP Rsh_Fir_array_args640[4];
  Rsh_Fir_array_args640[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args640[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args640[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args640[3] = Rsh_Fir_reg_rows25_;
  SEXP Rsh_Fir_array_arg_names208[4];
  Rsh_Fir_array_arg_names208[0] = R_MissingArg;
  Rsh_Fir_array_arg_names208[1] = R_MissingArg;
  Rsh_Fir_array_arg_names208[2] = R_MissingArg;
  Rsh_Fir_array_arg_names208[3] = R_MissingArg;
  Rsh_Fir_reg_r409_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__5_, 4, Rsh_Fir_array_args640, Rsh_Fir_array_arg_names208, CCP, RHO);
  // check L795() else D272()
  // L795()
  goto L795_;

D272_:;
  // deopt 969 [rows25, r409]
  SEXP Rsh_Fir_array_deopt_stack244[2];
  Rsh_Fir_array_deopt_stack244[0] = Rsh_Fir_reg_rows25_;
  Rsh_Fir_array_deopt_stack244[1] = Rsh_Fir_reg_r409_;
  Rsh_Fir_deopt(969, 2, Rsh_Fir_array_deopt_stack244, CCP, RHO);
  return R_NilValue;

L795_:;
  // st x = r409
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r409_, RHO);
  (void)(Rsh_Fir_reg_r409_);
  // sym83 = ldf oldClass
  Rsh_Fir_reg_sym83_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base83 = ldf oldClass in base
  Rsh_Fir_reg_base83_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard83 = `==`.4(sym83, base83)
  SEXP Rsh_Fir_array_args641[2];
  Rsh_Fir_array_args641[0] = Rsh_Fir_reg_sym83_;
  Rsh_Fir_array_args641[1] = Rsh_Fir_reg_base83_;
  Rsh_Fir_reg_guard83_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args641);
  // if guard83 then L796() else L797()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard83_)) {
  // L796()
    goto L796_;
  } else {
  // L797()
    goto L797_;
  }

L796_:;
  // xx28 = ld xx
  Rsh_Fir_reg_xx28_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L798() else D273()
  // L798()
  goto L798_;

L797_:;
  // r410 = dyn base83(<sym xx>)
  SEXP Rsh_Fir_array_args642[1];
  Rsh_Fir_array_args642[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names209[1];
  Rsh_Fir_array_arg_names209[0] = R_MissingArg;
  Rsh_Fir_reg_r410_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base83_, 1, Rsh_Fir_array_args642, Rsh_Fir_array_arg_names209, CCP, RHO);
  // goto L191(r410)
  // L191(r410)
  Rsh_Fir_reg_r411_ = Rsh_Fir_reg_r410_;
  goto L191_;

D273_:;
  // deopt 973 [xx28]
  SEXP Rsh_Fir_array_deopt_stack245[1];
  Rsh_Fir_array_deopt_stack245[0] = Rsh_Fir_reg_xx28_;
  Rsh_Fir_deopt(973, 1, Rsh_Fir_array_deopt_stack245, CCP, RHO);
  return R_NilValue;

L798_:;
  // xx29 = force? xx28
  Rsh_Fir_reg_xx29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx28_);
  // checkMissing(xx29)
  SEXP Rsh_Fir_array_args643[1];
  Rsh_Fir_array_args643[0] = Rsh_Fir_reg_xx29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args643, Rsh_Fir_param_types_empty()));
  // oldClass2 = ldf oldClass in base
  Rsh_Fir_reg_oldClass2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r412 = dyn oldClass2(xx29)
  SEXP Rsh_Fir_array_args644[1];
  Rsh_Fir_array_args644[0] = Rsh_Fir_reg_xx29_;
  SEXP Rsh_Fir_array_arg_names210[1];
  Rsh_Fir_array_arg_names210[0] = R_MissingArg;
  Rsh_Fir_reg_r412_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass2_, 1, Rsh_Fir_array_args644, Rsh_Fir_array_arg_names210, CCP, RHO);
  // check L799() else D274()
  // L799()
  goto L799_;

D274_:;
  // deopt 976 [r412]
  SEXP Rsh_Fir_array_deopt_stack246[1];
  Rsh_Fir_array_deopt_stack246[0] = Rsh_Fir_reg_r412_;
  Rsh_Fir_deopt(976, 1, Rsh_Fir_array_deopt_stack246, CCP, RHO);
  return R_NilValue;

L799_:;
  // goto L191(r412)
  // L191(r412)
  Rsh_Fir_reg_r411_ = Rsh_Fir_reg_r412_;
  goto L191_;

D275_:;
  // deopt 978 [r411, l29, r411]
  SEXP Rsh_Fir_array_deopt_stack247[3];
  Rsh_Fir_array_deopt_stack247[0] = Rsh_Fir_reg_r411_;
  Rsh_Fir_array_deopt_stack247[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_deopt_stack247[2] = Rsh_Fir_reg_r411_;
  Rsh_Fir_deopt(978, 3, Rsh_Fir_array_deopt_stack247, CCP, RHO);
  return R_NilValue;

L800_:;
  // r413 = dyn oldClass__1(l29, NULL, r411)
  SEXP Rsh_Fir_array_args645[3];
  Rsh_Fir_array_args645[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args645[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args645[2] = Rsh_Fir_reg_r411_;
  SEXP Rsh_Fir_array_arg_names211[3];
  Rsh_Fir_array_arg_names211[0] = R_MissingArg;
  Rsh_Fir_array_arg_names211[1] = R_MissingArg;
  Rsh_Fir_array_arg_names211[2] = R_MissingArg;
  Rsh_Fir_reg_r413_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__1_, 3, Rsh_Fir_array_args645, Rsh_Fir_array_arg_names211, CCP, RHO);
  // check L801() else D276()
  // L801()
  goto L801_;

D276_:;
  // deopt 980 [r411, r413]
  SEXP Rsh_Fir_array_deopt_stack248[2];
  Rsh_Fir_array_deopt_stack248[0] = Rsh_Fir_reg_r411_;
  Rsh_Fir_array_deopt_stack248[1] = Rsh_Fir_reg_r413_;
  Rsh_Fir_deopt(980, 2, Rsh_Fir_array_deopt_stack248, CCP, RHO);
  return R_NilValue;

L801_:;
  // st x = r413
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r413_, RHO);
  (void)(Rsh_Fir_reg_r413_);
  // goto L192()
  // L192()
  goto L192_;

D277_:;
  // deopt 984 [x70]
  SEXP Rsh_Fir_array_deopt_stack249[1];
  Rsh_Fir_array_deopt_stack249[0] = Rsh_Fir_reg_x70_;
  Rsh_Fir_deopt(984, 1, Rsh_Fir_array_deopt_stack249, CCP, RHO);
  return R_NilValue;

L803_:;
  // x71 = force? x70
  Rsh_Fir_reg_x71_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x70_);
  // checkMissing(x71)
  SEXP Rsh_Fir_array_args646[1];
  Rsh_Fir_array_args646[0] = Rsh_Fir_reg_x71_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args646, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x71
  return Rsh_Fir_reg_x71_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_cols;
  SEXP Rsh_Fir_reg_cols1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c then L5() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // r6 = `==`(r4, 1.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args4);
  // return r6
  return Rsh_Fir_reg_r6_;

L3_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn missing(<sym i>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L4_:;
  // r = dyn base(<sym i>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L5_:;
  // return TRUE
  return Rsh_const(CCP, 7);

L7_:;
  // cols = ld cols
  Rsh_Fir_reg_cols = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cols1 = force? cols
  Rsh_Fir_reg_cols1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols);
  // checkMissing(cols1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_cols1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn length(cols1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_cols1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L8_:;
  // r3 = dyn base1(<sym cols>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // r24 = dyn sys_call()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r25 = dyn names(r24)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r22 = dyn base6(<lang sys.call()>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args145);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r29 = dyn c1("", "drop")
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base7("", "drop")
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cols10_;
  SEXP Rsh_Fir_reg_cols11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // cols10 = ld cols
  Rsh_Fir_reg_cols10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cols11 = force? cols10
  Rsh_Fir_reg_cols11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols10_);
  // checkMissing(cols11)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_cols11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // return cols11
  return Rsh_Fir_reg_cols11_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cols12_;
  SEXP Rsh_Fir_reg_cols13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // cols12 = ld cols
  Rsh_Fir_reg_cols12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cols13 = force? cols12
  Rsh_Fir_reg_cols13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols12_);
  // checkMissing(cols13)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_cols13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // return cols13
  return Rsh_Fir_reg_cols13_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cols20_;
  SEXP Rsh_Fir_reg_cols21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // cols20 = ld cols
  Rsh_Fir_reg_cols20_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cols21 = force? cols20
  Rsh_Fir_reg_cols21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols20_);
  // checkMissing(cols21)
  SEXP Rsh_Fir_array_args320[1];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_cols21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty()));
  // return cols21
  return Rsh_Fir_reg_cols21_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cols22_;
  SEXP Rsh_Fir_reg_cols23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // cols22 = ld cols
  Rsh_Fir_reg_cols22_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cols23 = force? cols22
  Rsh_Fir_reg_cols23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cols22_);
  // checkMissing(cols23)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_cols23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty()));
  // return cols23
  return Rsh_Fir_reg_cols23_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args326, Rsh_Fir_param_types_empty()));
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y14_;
  SEXP Rsh_Fir_reg_y15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // y14 = ld y
  Rsh_Fir_reg_y14_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // y15 = force? y14
  Rsh_Fir_reg_y15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y14_);
  // checkMissing(y15)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_y15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty()));
  // return y15
  return Rsh_Fir_reg_y15_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args344[1];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty()));
  // return x34
  return Rsh_Fir_reg_x34_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args409[1];
  Rsh_Fir_array_args409[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args409, Rsh_Fir_param_types_empty()));
  // return i10
  return Rsh_Fir_reg_i10_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rows;
  SEXP Rsh_Fir_reg_rows1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // rows = ld rows
  Rsh_Fir_reg_rows = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // rows1 = force? rows
  Rsh_Fir_reg_rows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows);
  // checkMissing(rows1)
  SEXP Rsh_Fir_array_args410[1];
  Rsh_Fir_array_args410[0] = Rsh_Fir_reg_rows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args410, Rsh_Fir_param_types_empty()));
  // return rows1
  return Rsh_Fir_reg_rows1_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym59_;
  SEXP Rsh_Fir_reg_base59_;
  SEXP Rsh_Fir_reg_guard59_;
  SEXP Rsh_Fir_reg_r280_;
  SEXP Rsh_Fir_reg_r281_;
  SEXP Rsh_Fir_reg_xx8_;
  SEXP Rsh_Fir_reg_xx9_;
  SEXP Rsh_Fir_reg_r282_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym59 = ldf seq_along
  Rsh_Fir_reg_sym59_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base59 = ldf seq_along in base
  Rsh_Fir_reg_base59_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard59 = `==`.4(sym59, base59)
  SEXP Rsh_Fir_array_args451[2];
  Rsh_Fir_array_args451[0] = Rsh_Fir_reg_sym59_;
  Rsh_Fir_array_args451[1] = Rsh_Fir_reg_base59_;
  Rsh_Fir_reg_guard59_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args451);
  // if guard59 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard59_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r281
  return Rsh_Fir_reg_r281_;

L1_:;
  // xx8 = ld xx
  Rsh_Fir_reg_xx8_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // xx9 = force? xx8
  Rsh_Fir_reg_xx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx8_);
  // checkMissing(xx9)
  SEXP Rsh_Fir_array_args452[1];
  Rsh_Fir_array_args452[0] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args452, Rsh_Fir_param_types_empty()));
  // r282 = seq_along(xx9)
  SEXP Rsh_Fir_array_args453[1];
  Rsh_Fir_array_args453[0] = Rsh_Fir_reg_xx9_;
  Rsh_Fir_reg_r282_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args453);
  // goto L0(r282)
  // L0(r282)
  Rsh_Fir_reg_r281_ = Rsh_Fir_reg_r282_;
  goto L0_;

L2_:;
  // r280 = dyn base59(<sym xx>)
  SEXP Rsh_Fir_array_args454[1];
  Rsh_Fir_array_args454[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names153[1];
  Rsh_Fir_array_arg_names153[0] = R_MissingArg;
  Rsh_Fir_reg_r280_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base59_, 1, Rsh_Fir_array_args454, Rsh_Fir_array_arg_names153, CCP, RHO);
  // goto L0(r280)
  // L0(r280)
  Rsh_Fir_reg_r281_ = Rsh_Fir_reg_r280_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym60_;
  SEXP Rsh_Fir_reg_base60_;
  SEXP Rsh_Fir_reg_guard60_;
  SEXP Rsh_Fir_reg_r284_;
  SEXP Rsh_Fir_reg_r285_;
  SEXP Rsh_Fir_reg_xx10_;
  SEXP Rsh_Fir_reg_xx11_;
  SEXP Rsh_Fir_reg_names11_;
  SEXP Rsh_Fir_reg_r286_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym60 = ldf names
  Rsh_Fir_reg_sym60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base60 = ldf names in base
  Rsh_Fir_reg_base60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard60 = `==`.4(sym60, base60)
  SEXP Rsh_Fir_array_args455[2];
  Rsh_Fir_array_args455[0] = Rsh_Fir_reg_sym60_;
  Rsh_Fir_array_args455[1] = Rsh_Fir_reg_base60_;
  Rsh_Fir_reg_guard60_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args455);
  // if guard60 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard60_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r285
  return Rsh_Fir_reg_r285_;

L1_:;
  // xx10 = ld xx
  Rsh_Fir_reg_xx10_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // xx11 = force? xx10
  Rsh_Fir_reg_xx11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx10_);
  // checkMissing(xx11)
  SEXP Rsh_Fir_array_args456[1];
  Rsh_Fir_array_args456[0] = Rsh_Fir_reg_xx11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args456, Rsh_Fir_param_types_empty()));
  // names11 = ldf names in base
  Rsh_Fir_reg_names11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r286 = dyn names11(xx11)
  SEXP Rsh_Fir_array_args457[1];
  Rsh_Fir_array_args457[0] = Rsh_Fir_reg_xx11_;
  SEXP Rsh_Fir_array_arg_names154[1];
  Rsh_Fir_array_arg_names154[0] = R_MissingArg;
  Rsh_Fir_reg_r286_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names11_, 1, Rsh_Fir_array_args457, Rsh_Fir_array_arg_names154, CCP, RHO);
  // goto L0(r286)
  // L0(r286)
  Rsh_Fir_reg_r285_ = Rsh_Fir_reg_r286_;
  goto L0_;

L2_:;
  // r284 = dyn base60(<sym xx>)
  SEXP Rsh_Fir_array_args458[1];
  Rsh_Fir_array_args458[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names155[1];
  Rsh_Fir_array_arg_names155[0] = R_MissingArg;
  Rsh_Fir_reg_r284_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base60_, 1, Rsh_Fir_array_args458, Rsh_Fir_array_arg_names155, CCP, RHO);
  // goto L0(r284)
  // L0(r284)
  Rsh_Fir_reg_r285_ = Rsh_Fir_reg_r284_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_i18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // i17 = ld i
  Rsh_Fir_reg_i17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i18 = force? i17
  Rsh_Fir_reg_i18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i17_);
  // checkMissing(i18)
  SEXP Rsh_Fir_array_args481[1];
  Rsh_Fir_array_args481[0] = Rsh_Fir_reg_i18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args481, Rsh_Fir_param_types_empty()));
  // return i18
  return Rsh_Fir_reg_i18_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rows2_;
  SEXP Rsh_Fir_reg_rows3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // rows2 = ld rows
  Rsh_Fir_reg_rows2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // rows3 = force? rows2
  Rsh_Fir_reg_rows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows2_);
  // checkMissing(rows3)
  SEXP Rsh_Fir_array_args482[1];
  Rsh_Fir_array_args482[0] = Rsh_Fir_reg_rows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args482, Rsh_Fir_param_types_empty()));
  // return rows3
  return Rsh_Fir_reg_rows3_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rows12_;
  SEXP Rsh_Fir_reg_rows13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // rows12 = ld rows
  Rsh_Fir_reg_rows12_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // rows13 = force? rows12
  Rsh_Fir_reg_rows13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows12_);
  // checkMissing(rows13)
  SEXP Rsh_Fir_array_args586[1];
  Rsh_Fir_array_args586[0] = Rsh_Fir_reg_rows13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args586, Rsh_Fir_param_types_empty()));
  // return rows13
  return Rsh_Fir_reg_rows13_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rows16_;
  SEXP Rsh_Fir_reg_rows17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // rows16 = ld rows
  Rsh_Fir_reg_rows16_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // rows17 = force? rows16
  Rsh_Fir_reg_rows17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows16_);
  // checkMissing(rows17)
  SEXP Rsh_Fir_array_args597[1];
  Rsh_Fir_array_args597[0] = Rsh_Fir_reg_rows17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args597, Rsh_Fir_param_types_empty()));
  // return rows17
  return Rsh_Fir_reg_rows17_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym79_;
  SEXP Rsh_Fir_reg_base79_;
  SEXP Rsh_Fir_reg_guard79_;
  SEXP Rsh_Fir_reg_r385_;
  SEXP Rsh_Fir_reg_r386_;
  SEXP Rsh_Fir_reg_rows20_;
  SEXP Rsh_Fir_reg_rows21_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r387_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym79 = ldf `as.character`
  Rsh_Fir_reg_sym79_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 96), RHO);
  // base79 = ldf `as.character` in base
  Rsh_Fir_reg_base79_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 96), RHO);
  // guard79 = `==`.4(sym79, base79)
  SEXP Rsh_Fir_array_args611[2];
  Rsh_Fir_array_args611[0] = Rsh_Fir_reg_sym79_;
  Rsh_Fir_array_args611[1] = Rsh_Fir_reg_base79_;
  Rsh_Fir_reg_guard79_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args611);
  // if guard79 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard79_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r386
  return Rsh_Fir_reg_r386_;

L1_:;
  // rows20 = ld rows
  Rsh_Fir_reg_rows20_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // rows21 = force? rows20
  Rsh_Fir_reg_rows21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows20_);
  // checkMissing(rows21)
  SEXP Rsh_Fir_array_args612[1];
  Rsh_Fir_array_args612[0] = Rsh_Fir_reg_rows21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args612, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 96), RHO);
  // r387 = dyn as_character(rows21)
  SEXP Rsh_Fir_array_args613[1];
  Rsh_Fir_array_args613[0] = Rsh_Fir_reg_rows21_;
  SEXP Rsh_Fir_array_arg_names196[1];
  Rsh_Fir_array_arg_names196[0] = R_MissingArg;
  Rsh_Fir_reg_r387_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args613, Rsh_Fir_array_arg_names196, CCP, RHO);
  // goto L0(r387)
  // L0(r387)
  Rsh_Fir_reg_r386_ = Rsh_Fir_reg_r387_;
  goto L0_;

L2_:;
  // r385 = dyn base79(<sym rows>)
  SEXP Rsh_Fir_array_args614[1];
  Rsh_Fir_array_args614[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names197[1];
  Rsh_Fir_array_arg_names197[0] = R_MissingArg;
  Rsh_Fir_reg_r385_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base79_, 1, Rsh_Fir_array_args614, Rsh_Fir_array_arg_names197, CCP, RHO);
  // goto L0(r385)
  // L0(r385)
  Rsh_Fir_reg_r386_ = Rsh_Fir_reg_r385_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym80_;
  SEXP Rsh_Fir_reg_base80_;
  SEXP Rsh_Fir_reg_guard80_;
  SEXP Rsh_Fir_reg_r392_;
  SEXP Rsh_Fir_reg_r393_;
  SEXP Rsh_Fir_reg_x68_;
  SEXP Rsh_Fir_reg_x69_;
  SEXP Rsh_Fir_reg_names12_;
  SEXP Rsh_Fir_reg_r394_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // sym80 = ldf names
  Rsh_Fir_reg_sym80_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base80 = ldf names in base
  Rsh_Fir_reg_base80_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard80 = `==`.4(sym80, base80)
  SEXP Rsh_Fir_array_args618[2];
  Rsh_Fir_array_args618[0] = Rsh_Fir_reg_sym80_;
  Rsh_Fir_array_args618[1] = Rsh_Fir_reg_base80_;
  Rsh_Fir_reg_guard80_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args618);
  // if guard80 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard80_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st nm = r393
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r393_, RHO);
  (void)(Rsh_Fir_reg_r393_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // return r393
  return Rsh_Fir_reg_r393_;

L1_:;
  // x68 = ld x
  Rsh_Fir_reg_x68_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x69 = force? x68
  Rsh_Fir_reg_x69_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x68_);
  // checkMissing(x69)
  SEXP Rsh_Fir_array_args619[1];
  Rsh_Fir_array_args619[0] = Rsh_Fir_reg_x69_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args619, Rsh_Fir_param_types_empty()));
  // names12 = ldf names in base
  Rsh_Fir_reg_names12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r394 = dyn names12(x69)
  SEXP Rsh_Fir_array_args620[1];
  Rsh_Fir_array_args620[0] = Rsh_Fir_reg_x69_;
  SEXP Rsh_Fir_array_arg_names199[1];
  Rsh_Fir_array_arg_names199[0] = R_MissingArg;
  Rsh_Fir_reg_r394_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names12_, 1, Rsh_Fir_array_args620, Rsh_Fir_array_arg_names199, CCP, RHO);
  // goto L0(r394)
  // L0(r394)
  Rsh_Fir_reg_r393_ = Rsh_Fir_reg_r394_;
  goto L0_;

L2_:;
  // r392 = dyn base80(<sym x>)
  SEXP Rsh_Fir_array_args621[1];
  Rsh_Fir_array_args621[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names200[1];
  Rsh_Fir_array_arg_names200[0] = R_MissingArg;
  Rsh_Fir_reg_r392_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base80_, 1, Rsh_Fir_array_args621, Rsh_Fir_array_arg_names200, CCP, RHO);
  // goto L0(r392)
  // L0(r392)
  Rsh_Fir_reg_r393_ = Rsh_Fir_reg_r392_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1821424213_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nm26_;
  SEXP Rsh_Fir_reg_nm27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1821424213/0: expected 0, got %d", NCAPTURES);

  // nm26 = ld nm
  Rsh_Fir_reg_nm26_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nm27 = force? nm26
  Rsh_Fir_reg_nm27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm26_);
  // checkMissing(nm27)
  SEXP Rsh_Fir_array_args625[1];
  Rsh_Fir_array_args625[0] = Rsh_Fir_reg_nm27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args625, Rsh_Fir_param_types_empty()));
  // return nm27
  return Rsh_Fir_reg_nm27_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
