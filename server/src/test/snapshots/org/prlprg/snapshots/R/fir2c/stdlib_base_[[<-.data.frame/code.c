#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner650999460_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner650999460
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner650999460_, RHO, CCP);
  // st `[[<-.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner650999460 dynamic dispatch ([x, i, j, value])

  return Rsh_Fir_user_version_inner650999460_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner650999460 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner650999460/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_oldClass;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg__row_names_info;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_is_atomic;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_value5_;
  SEXP Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_NROW;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_N;
  SEXP Rsh_Fir_reg_N1_;
  SEXP Rsh_Fir_reg_nrows;
  SEXP Rsh_Fir_reg_nrows1_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_N6_;
  SEXP Rsh_Fir_reg_N7_;
  SEXP Rsh_Fir_reg_nrows4_;
  SEXP Rsh_Fir_reg_nrows5_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_N8_;
  SEXP Rsh_Fir_reg_N9_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_nrows6_;
  SEXP Rsh_Fir_reg_nrows7_;
  SEXP Rsh_Fir_reg_N10_;
  SEXP Rsh_Fir_reg_N11_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_value9_;
  SEXP Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_value11_;
  SEXP Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_nc6_;
  SEXP Rsh_Fir_reg_nc7_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_make_unique;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_names__2_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_cl;
  SEXP Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_class__1_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_rows;
  SEXP Rsh_Fir_reg_rows1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_ii;
  SEXP Rsh_Fir_reg_ii1_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_nrows10_;
  SEXP Rsh_Fir_reg_nrows11_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_new_rows;
  SEXP Rsh_Fir_reg_new_rows1_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_new_rows2_;
  SEXP Rsh_Fir_reg_new_rows3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_reg_ii2_;
  SEXP Rsh_Fir_reg_ii3_;
  SEXP Rsh_Fir_reg_sym26_;
  SEXP Rsh_Fir_reg_base26_;
  SEXP Rsh_Fir_reg_guard26_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_r155_;
  SEXP Rsh_Fir_reg_all1_;
  SEXP Rsh_Fir_reg_r156_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_sym27_;
  SEXP Rsh_Fir_reg_base27_;
  SEXP Rsh_Fir_reg_guard27_;
  SEXP Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_r158_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_nrows12_;
  SEXP Rsh_Fir_reg_nrows13_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_c66_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_nrows14_;
  SEXP Rsh_Fir_reg_nrows15_;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_nn;
  SEXP Rsh_Fir_reg_nn1_;
  SEXP Rsh_Fir_reg_r163_;
  SEXP Rsh_Fir_reg_sym28_;
  SEXP Rsh_Fir_reg_base28_;
  SEXP Rsh_Fir_reg_guard28_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_value17_;
  SEXP Rsh_Fir_reg_value18_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r166_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_sym29_;
  SEXP Rsh_Fir_reg_base29_;
  SEXP Rsh_Fir_reg_guard29_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_r168_;
  SEXP Rsh_Fir_reg_value19_;
  SEXP Rsh_Fir_reg_value20_;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_c77_;
  SEXP Rsh_Fir_reg_c79_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_c81_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_sym30_;
  SEXP Rsh_Fir_reg_base30_;
  SEXP Rsh_Fir_reg_guard30_;
  SEXP Rsh_Fir_reg_r173_;
  SEXP Rsh_Fir_reg_c84_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_r174_;
  SEXP Rsh_Fir_reg_nrr;
  SEXP Rsh_Fir_reg_nrr1_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r175_;
  SEXP Rsh_Fir_reg_r176_;
  SEXP Rsh_Fir_reg_c85_;
  SEXP Rsh_Fir_reg_c86_;
  SEXP Rsh_Fir_reg_c88_;
  SEXP Rsh_Fir_reg_sym31_;
  SEXP Rsh_Fir_reg_base31_;
  SEXP Rsh_Fir_reg_guard31_;
  SEXP Rsh_Fir_reg_r177_;
  SEXP Rsh_Fir_reg_r178_;
  SEXP Rsh_Fir_reg_value21_;
  SEXP Rsh_Fir_reg_value22_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r179_;
  SEXP Rsh_Fir_reg_c89_;
  SEXP Rsh_Fir_reg_r181_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_sym32_;
  SEXP Rsh_Fir_reg_base32_;
  SEXP Rsh_Fir_reg_guard32_;
  SEXP Rsh_Fir_reg_r184_;
  SEXP Rsh_Fir_reg_r185_;
  SEXP Rsh_Fir_reg_r186_;
  SEXP Rsh_Fir_reg_nrr2_;
  SEXP Rsh_Fir_reg_nrr3_;
  SEXP Rsh_Fir_reg_r187_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r188_;
  SEXP Rsh_Fir_reg_duplicated;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r190_;
  SEXP Rsh_Fir_reg_sym33_;
  SEXP Rsh_Fir_reg_base33_;
  SEXP Rsh_Fir_reg_guard33_;
  SEXP Rsh_Fir_reg_r193_;
  SEXP Rsh_Fir_reg_r194_;
  SEXP Rsh_Fir_reg_r195_;
  SEXP Rsh_Fir_reg_new_rows6_;
  SEXP Rsh_Fir_reg_new_rows7_;
  SEXP Rsh_Fir_reg_rows2_;
  SEXP Rsh_Fir_reg_rows3_;
  SEXP Rsh_Fir_reg_match1_;
  SEXP Rsh_Fir_reg_r196_;
  SEXP Rsh_Fir_reg_r197_;
  SEXP Rsh_Fir_reg_sym34_;
  SEXP Rsh_Fir_reg_base34_;
  SEXP Rsh_Fir_reg_guard34_;
  SEXP Rsh_Fir_reg_r198_;
  SEXP Rsh_Fir_reg_r199_;
  SEXP Rsh_Fir_reg_repl;
  SEXP Rsh_Fir_reg_repl1_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r200_;
  SEXP Rsh_Fir_reg_c90_;
  SEXP Rsh_Fir_reg_nrr4_;
  SEXP Rsh_Fir_reg_nrr5_;
  SEXP Rsh_Fir_reg_c91_;
  SEXP Rsh_Fir_reg_nrr7_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_repl2_;
  SEXP Rsh_Fir_reg_repl3_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r201_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_c92_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_repl4_;
  SEXP Rsh_Fir_reg_repl5_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r202_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_nrr8_;
  SEXP Rsh_Fir_reg_nrr9_;
  SEXP Rsh_Fir_reg_xpdrows_data_frame;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r206_;
  SEXP Rsh_Fir_reg_sym35_;
  SEXP Rsh_Fir_reg_base35_;
  SEXP Rsh_Fir_reg_guard35_;
  SEXP Rsh_Fir_reg_r207_;
  SEXP Rsh_Fir_reg_r208_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_attr2_;
  SEXP Rsh_Fir_reg_r209_;
  SEXP Rsh_Fir_reg_sym36_;
  SEXP Rsh_Fir_reg_base36_;
  SEXP Rsh_Fir_reg_guard36_;
  SEXP Rsh_Fir_reg_r210_;
  SEXP Rsh_Fir_reg_r211_;
  SEXP Rsh_Fir_reg_rows6_;
  SEXP Rsh_Fir_reg_rows7_;
  SEXP Rsh_Fir_reg_length6_;
  SEXP Rsh_Fir_reg_r212_;
  SEXP Rsh_Fir_reg_sym37_;
  SEXP Rsh_Fir_reg_base37_;
  SEXP Rsh_Fir_reg_guard37_;
  SEXP Rsh_Fir_reg_r214_;
  SEXP Rsh_Fir_reg_r215_;
  SEXP Rsh_Fir_reg_nrows16_;
  SEXP Rsh_Fir_reg_nrows17_;
  SEXP Rsh_Fir_reg_r216_;
  SEXP Rsh_Fir_reg_c93_;
  SEXP Rsh_Fir_reg_r218_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r219_;
  SEXP Rsh_Fir_reg_sym38_;
  SEXP Rsh_Fir_reg_base38_;
  SEXP Rsh_Fir_reg_guard38_;
  SEXP Rsh_Fir_reg_r220_;
  SEXP Rsh_Fir_reg_r221_;
  SEXP Rsh_Fir_reg_iseq;
  SEXP Rsh_Fir_reg_iseq1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r222_;
  SEXP Rsh_Fir_reg_c94_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r223_;
  SEXP Rsh_Fir_reg_sym39_;
  SEXP Rsh_Fir_reg_base39_;
  SEXP Rsh_Fir_reg_guard39_;
  SEXP Rsh_Fir_reg_r225_;
  SEXP Rsh_Fir_reg_r226_;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_c95_;
  SEXP Rsh_Fir_reg_c96_;
  SEXP Rsh_Fir_reg__in_1_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r228_;
  SEXP Rsh_Fir_reg_c97_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r229_;
  SEXP Rsh_Fir_reg_sym40_;
  SEXP Rsh_Fir_reg_base40_;
  SEXP Rsh_Fir_reg_guard40_;
  SEXP Rsh_Fir_reg_r231_;
  SEXP Rsh_Fir_reg_r232_;
  SEXP Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_reg_j6_;
  SEXP Rsh_Fir_reg_sym41_;
  SEXP Rsh_Fir_reg_base41_;
  SEXP Rsh_Fir_reg_guard41_;
  SEXP Rsh_Fir_reg_r233_;
  SEXP Rsh_Fir_reg_r234_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_reg_r235_;
  SEXP Rsh_Fir_reg_match2_;
  SEXP Rsh_Fir_reg_r236_;
  SEXP Rsh_Fir_reg_sym42_;
  SEXP Rsh_Fir_reg_base42_;
  SEXP Rsh_Fir_reg_guard42_;
  SEXP Rsh_Fir_reg_r237_;
  SEXP Rsh_Fir_reg_r238_;
  SEXP Rsh_Fir_reg_jseq;
  SEXP Rsh_Fir_reg_jseq1_;
  SEXP Rsh_Fir_reg_anyNA1_;
  SEXP Rsh_Fir_reg_r239_;
  SEXP Rsh_Fir_reg_c98_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r247_;
  SEXP Rsh_Fir_reg_r248_;
  SEXP Rsh_Fir_reg_sym44_;
  SEXP Rsh_Fir_reg_base44_;
  SEXP Rsh_Fir_reg_guard44_;
  SEXP Rsh_Fir_reg_r250_;
  SEXP Rsh_Fir_reg_r251_;
  SEXP Rsh_Fir_reg_j14_;
  SEXP Rsh_Fir_reg_j15_;
  SEXP Rsh_Fir_reg_c100_;
  SEXP Rsh_Fir_reg_c101_;
  SEXP Rsh_Fir_reg_c102_;
  SEXP Rsh_Fir_reg_sym45_;
  SEXP Rsh_Fir_reg_base45_;
  SEXP Rsh_Fir_reg_guard45_;
  SEXP Rsh_Fir_reg_r252_;
  SEXP Rsh_Fir_reg_c106_;
  SEXP Rsh_Fir_reg_r253_;
  SEXP Rsh_Fir_reg_j16_;
  SEXP Rsh_Fir_reg_j17_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r254_;
  SEXP Rsh_Fir_reg_r255_;
  SEXP Rsh_Fir_reg_c107_;
  SEXP Rsh_Fir_reg_c108_;
  SEXP Rsh_Fir_reg_c110_;
  SEXP Rsh_Fir_reg_sym46_;
  SEXP Rsh_Fir_reg_base46_;
  SEXP Rsh_Fir_reg_guard46_;
  SEXP Rsh_Fir_reg_r256_;
  SEXP Rsh_Fir_reg_r257_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_r258_;
  SEXP Rsh_Fir_reg_c111_;
  SEXP Rsh_Fir_reg_r260_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg_j18_;
  SEXP Rsh_Fir_reg_j19_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r261_;
  SEXP Rsh_Fir_reg_j20_;
  SEXP Rsh_Fir_reg_j21_;
  SEXP Rsh_Fir_reg_sym47_;
  SEXP Rsh_Fir_reg_base47_;
  SEXP Rsh_Fir_reg_guard47_;
  SEXP Rsh_Fir_reg_r262_;
  SEXP Rsh_Fir_reg_r263_;
  SEXP Rsh_Fir_reg_jseq4_;
  SEXP Rsh_Fir_reg_jseq5_;
  SEXP Rsh_Fir_reg_max1_;
  SEXP Rsh_Fir_reg_r264_;
  SEXP Rsh_Fir_reg_nvars;
  SEXP Rsh_Fir_reg_nvars1_;
  SEXP Rsh_Fir_reg_r265_;
  SEXP Rsh_Fir_reg_c112_;
  SEXP Rsh_Fir_reg_stop6_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r271_;
  SEXP Rsh_Fir_reg_sym48_;
  SEXP Rsh_Fir_reg_base48_;
  SEXP Rsh_Fir_reg_guard48_;
  SEXP Rsh_Fir_reg_r272_;
  SEXP Rsh_Fir_reg_r273_;
  SEXP Rsh_Fir_reg_iseq2_;
  SEXP Rsh_Fir_reg_iseq3_;
  SEXP Rsh_Fir_reg_length7_;
  SEXP Rsh_Fir_reg_r274_;
  SEXP Rsh_Fir_reg_r275_;
  SEXP Rsh_Fir_reg_c114_;
  SEXP Rsh_Fir_reg_c115_;
  SEXP Rsh_Fir_reg_sym49_;
  SEXP Rsh_Fir_reg_base49_;
  SEXP Rsh_Fir_reg_guard49_;
  SEXP Rsh_Fir_reg_r276_;
  SEXP Rsh_Fir_reg_c119_;
  SEXP Rsh_Fir_reg_r277_;
  SEXP Rsh_Fir_reg_jseq12_;
  SEXP Rsh_Fir_reg_jseq13_;
  SEXP Rsh_Fir_reg_length8_;
  SEXP Rsh_Fir_reg_r278_;
  SEXP Rsh_Fir_reg_r279_;
  SEXP Rsh_Fir_reg_c120_;
  SEXP Rsh_Fir_reg_c121_;
  SEXP Rsh_Fir_reg_c123_;
  SEXP Rsh_Fir_reg_stop7_;
  SEXP Rsh_Fir_reg_r280_;
  SEXP Rsh_Fir_reg_value23_;
  SEXP Rsh_Fir_reg_value24_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_c124_;
  SEXP Rsh_Fir_reg_value27_;
  SEXP Rsh_Fir_reg_l21_;
  SEXP Rsh_Fir_reg_value28_;
  SEXP Rsh_Fir_reg_l22_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_reg_value31_;
  SEXP Rsh_Fir_reg_l24_;
  SEXP Rsh_Fir_reg_value32_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg_jseq14_;
  SEXP Rsh_Fir_reg_jseq15_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r282_;
  SEXP Rsh_Fir_reg_c125_;
  SEXP Rsh_Fir_reg_value34_;
  SEXP Rsh_Fir_reg_l26_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg_value36_;
  SEXP Rsh_Fir_reg_l28_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_iseq4_;
  SEXP Rsh_Fir_reg_iseq5_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r283_;
  SEXP Rsh_Fir_reg_c126_;
  SEXP Rsh_Fir_reg_value38_;
  SEXP Rsh_Fir_reg_l30_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_reg_jseq16_;
  SEXP Rsh_Fir_reg_jseq17_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r284_;
  SEXP Rsh_Fir_reg_cl2_;
  SEXP Rsh_Fir_reg_cl3_;
  SEXP Rsh_Fir_reg_l31_;
  SEXP Rsh_Fir_reg_class__2_;
  SEXP Rsh_Fir_reg_r285_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_value = PARAMS[3];

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
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf all
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf all in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L0_:;
  // r13 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args1);
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c1 then L117() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L117()
    goto L117_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym3 = ldf oldClass
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf oldClass in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L3_:;
  // st cl = r17
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L125() else D7()
  // L125()
  goto L125_;

L4_:;
  // c2 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c2 then L133() else L5(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L133()
    goto L133_;
  } else {
  // L5(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L5_;
  }

L5_:;
  // c15 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c15 then L141() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L141()
    goto L141_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r30 = `!`(r26)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c12 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // c13 = `&&`(c7, c12)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args8);
  // goto L5(c13)
  // L5(c13)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c13_;
  goto L5_;

L7_:;
  // c11 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args9);
  // goto L6(c10, c11)
  // L6(c10, c11)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c11_;
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym7 = ldf nargs
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base7 = ldf nargs in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard7 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L10_:;
  // r36 = `<`(r34, 4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args11);
  // c16 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c16 then L148() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L148()
    goto L148_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // sym17 = ldf missing
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base17 = ldf missing in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard17 then L237() else L238()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L237()
    goto L237_;
  } else {
  // L238()
    goto L238_;
  }

L12_:;
  // st nc = r38
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard9 then L153() else L154()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L153()
    goto L153_;
  } else {
  // L154()
    goto L154_;
  }

L13_:;
  // r42 = `!`(r41)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args15);
  // c18 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c18 then L156() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L156()
    goto L156_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L26()
  // L26()
  goto L26_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // N6 = ld N
  Rsh_Fir_reg_N6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L165() else D27()
  // L165()
  goto L165_;

L17_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_r78_ = Rsh_const(CCP, 9);
  goto L25_;

L18_:;
  // c27 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c27 then L174() else L19(c27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L174()
    goto L174_;
  } else {
  // L19(c27)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c27_;
    goto L19_;
  }

L19_:;
  // c39 = `as.logical`(c29)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c39 then L183() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L183()
    goto L183_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r65 = `<=`(r60, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args19);
  // c36 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // c37 = `&&`(c32, c36)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args21);
  // goto L19(c37)
  // L19(c37)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c37_;
  goto L19_;

L21_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r64 = dyn length1(r62)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L181() else D35()
  // L181()
  goto L181_;

L22_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L187() else D36()
  // L187()
  goto L187_;

L23_:;
  // st value = r67
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // goto L24(r67)
  // L24(r67)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
  goto L24_;

L24_:;
  // goto L25(r69)
  // L25(r69)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r69_;
  goto L25_;

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L191() else D38()
  // L191()
  goto L191_;

L27_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard13 then L196() else L197()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L196()
    goto L196_;
  } else {
  // L197()
    goto L197_;
  }

L28_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L200() else D42()
  // L200()
  goto L200_;

L29_:;
  // goto L36()
  // L36()
  goto L36_;

L30_:;
  // st nc = r86
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // sym15 = ldf names
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base15 = ldf names in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard15 then L206() else L207()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L206()
    goto L206_;
  } else {
  // L207()
    goto L207_;
  }

L31_:;
  // c42 = `is.object`(r89)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args25);
  // if c42 then L210() else L211(r89)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L210()
    goto L210_;
  } else {
  // L211(r89)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r89_;
    goto L211_;
  }

L32_:;
  // r94 = `==`(dx3, "")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args26);
  // c43 = `as.logical`(r94)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c43 then L214() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L214()
    goto L214_;
  } else {
  // L33()
    goto L33_;
  }

L33_:;
  // goto L35()
  // L35()
  goto L35_;

L34_:;
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L223() else D53()
  // L223()
  goto L223_;

L35_:;
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L226() else D55()
  // L226()
  goto L226_;

L36_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L231() else D59()
  // L231()
  goto L231_;

L38_:;
  // c45 = `as.logical`(r118)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c45 then L39(c45) else L239()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L39(c45)
    Rsh_Fir_reg_c46_ = Rsh_Fir_reg_c45_;
    goto L39_;
  } else {
  // L239()
    goto L239_;
  }

L39_:;
  // c54 = `as.logical`(c46)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c54 then L243() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L243()
    goto L243_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // c51 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // c52 = `||`(c50, c51)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args31);
  // goto L39(c52)
  // L39(c52)
  Rsh_Fir_reg_c46_ = Rsh_Fir_reg_c52_;
  goto L39_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // sym19 = ldf attr
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base19 = ldf attr in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard19 then L247() else L248()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L247()
    goto L247_;
  } else {
  // L248()
    goto L248_;
  }

L43_:;
  // st rows = r126
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r126_, RHO);
  (void)(Rsh_Fir_reg_r126_);
  // sym20 = ldf length
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base20 = ldf length in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard20 then L251() else L252()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L251()
    goto L251_;
  } else {
  // L252()
    goto L252_;
  }

L44_:;
  // st nvars = r129
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // sym21 = ldf `is.character`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base21 = ldf `is.character` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard21 then L255() else L256()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L255()
    goto L255_;
  } else {
  // L256()
    goto L256_;
  }

L45_:;
  // st n = r132
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r132_, RHO);
  (void)(Rsh_Fir_reg_r132_);
  // c56 = `as.logical`(r132)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c56 then L258() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L258()
    goto L258_;
  } else {
  // L46()
    goto L46_;
  }

L46_:;
  // goto L55()
  // L55()
  goto L55_;

L47_:;
  // st ii = r134
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r134_, RHO);
  (void)(Rsh_Fir_reg_r134_);
  // sym23 = ldf sum
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base23 = ldf sum in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard23 then L264() else L265()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L264()
    goto L264_;
  } else {
  // L265()
    goto L265_;
  }

L48_:;
  // st n = r137
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r137_, RHO);
  (void)(Rsh_Fir_reg_r137_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L271() else D76()
  // L271()
  goto L271_;

L49_:;
  // st `new.rows` = r139
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r139_, RHO);
  (void)(Rsh_Fir_reg_r139_);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r141 = dyn sum(r139)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L270() else D75()
  // L270()
  goto L270_;

L50_:;
  // goto L54()
  // L54()
  goto L54_;

L51_:;
  // l12 = ld ii
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // c58 = `is.object`(l12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args38);
  // if c58 then L278() else L279(r144, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L278()
    goto L278_;
  } else {
  // L279(r144, l12)
    Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r144_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L279_;
  }

L52_:;
  // st ii = dx7
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L282() else D81()
  // L282()
  goto L282_;

L53_:;
  // st `new.rows` = dx9
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L54()
  // L54()
  goto L54_;

L54_:;
  // ii2 = ld ii
  Rsh_Fir_reg_ii2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L288() else D83()
  // L288()
  goto L288_;

L55_:;
  // sym26 = ldf all
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base26 = ldf all in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard26 then L290() else L291()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L290()
    goto L290_;
  } else {
  // L291()
    goto L291_;
  }

L56_:;
  // c60 = `as.logical`(r154)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c60 then L294() else L57(c60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L294()
    goto L294_;
  } else {
  // L57(c60)
    Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c60_;
    goto L57_;
  }

L57_:;
  // c69 = `as.logical`(c62)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c62_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c69 then L301() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L301()
    goto L301_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // st nn = r158
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r158_, RHO);
  (void)(Rsh_Fir_reg_r158_);
  // nrows12 = ld nrows
  Rsh_Fir_reg_nrows12_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L299() else D88()
  // L299()
  goto L299_;

L59_:;
  // goto L80()
  // L80()
  goto L80_;

L60_:;
  // goto L77()
  // L77()
  goto L77_;

L61_:;
  // c71 = `as.logical`(r165)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c71 then L310() else L62(c71)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L310()
    goto L310_;
  } else {
  // L62(c71)
    Rsh_Fir_reg_c73_ = Rsh_Fir_reg_c71_;
    goto L62_;
  }

L62_:;
  // c88 = `as.logical`(c73)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c88_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c88 then L323() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c88_)) {
  // L323()
    goto L323_;
  } else {
  // L66()
    goto L66_;
  }

L63_:;
  // c77 = `is.object`(r168)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r168_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c77 then L315() else L316(c76, r168)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c77_)) {
  // L315()
    goto L315_;
  } else {
  // L316(c76, r168)
    Rsh_Fir_reg_c79_ = Rsh_Fir_reg_c76_;
    Rsh_Fir_reg_r171_ = Rsh_Fir_reg_r168_;
    goto L316_;
  }

L64_:;
  // sym30 = ldf length
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base30 = ldf length in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard30 then L318() else L319()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L318()
    goto L318_;
  } else {
  // L319()
    goto L319_;
  }

L65_:;
  // r176 = `>=`(dx15, r174)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r174_;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args46);
  // c85 = `as.logical`(r176)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r176_;
  Rsh_Fir_reg_c85_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // c86 = `&&`(c84, c85)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c84_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c85_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args48);
  // goto L62(c86)
  // L62(c86)
  Rsh_Fir_reg_c73_ = Rsh_Fir_reg_c86_;
  goto L62_;

L66_:;
  // nrr8 = ld nrr
  Rsh_Fir_reg_nrr8_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L357() else D111()
  // L357()
  goto L357_;

L67_:;
  // c89 = `is.object`(r178)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r178_;
  Rsh_Fir_reg_c89_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args49);
  // if c89 then L328() else L329(r178)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c89_)) {
  // L328()
    goto L328_;
  } else {
  // L329(r178)
    Rsh_Fir_reg_r181_ = Rsh_Fir_reg_r178_;
    goto L329_;
  }

L68_:;
  // st `new.rows` = dx17
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L334() else D101()
  // L334()
  goto L334_;

L69_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r188 = dyn __4(r185, r186)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r185_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r186_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r188_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L68(r188)
  // L68(r188)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r188_;
  goto L68_;

L70_:;
  // r197 = `||`(r194, r195)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r194_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_reg_r197_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args51);
  // st repl = r197
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r197_, RHO);
  (void)(Rsh_Fir_reg_r197_);
  // sym34 = ldf any
  Rsh_Fir_reg_sym34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base34 = ldf any in base
  Rsh_Fir_reg_base34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard34 = `==`.4(sym34, base34)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym34_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base34_;
  Rsh_Fir_reg_guard34_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard34 then L341() else L342()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard34_)) {
  // L341()
    goto L341_;
  } else {
  // L342()
    goto L342_;
  }

L71_:;
  // c90 = `as.logical`(r199)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r199_;
  Rsh_Fir_reg_c90_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // if c90 then L345() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c90_)) {
  // L345()
    goto L345_;
  } else {
  // L72()
    goto L72_;
  }

L72_:;
  // goto L75(NULL)
  // L75(NULL)
  Rsh_Fir_reg_dx26_ = Rsh_const(CCP, 9);
  goto L75_;

L73_:;
  // l15 = ld `new.rows`
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // c92 = `is.object`(l15)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c92_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args54);
  // if c92 then L351() else L352(dx19, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c92_)) {
  // L351()
    goto L351_;
  } else {
  // L352(dx19, l15)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L352_;
  }

L74_:;
  // st `new.rows` = dx25
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // goto L75(dx24)
  // L75(dx24)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
  goto L75_;

L75_:;
  // goto L76(dx26)
  // L76(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L76_;

L76_:;
  // goto L77()
  // L77()
  goto L77_;

L77_:;
  // xpdrows_data_frame = ldf `xpdrows.data.frame`
  Rsh_Fir_reg_xpdrows_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L359() else D112()
  // L359()
  goto L359_;

L78_:;
  // st rows = r208
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r208_, RHO);
  (void)(Rsh_Fir_reg_r208_);
  // sym36 = ldf length
  Rsh_Fir_reg_sym36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base36 = ldf length in base
  Rsh_Fir_reg_base36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard36 = `==`.4(sym36, base36)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym36_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base36_;
  Rsh_Fir_reg_guard36_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard36 then L365() else L366()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard36_)) {
  // L365()
    goto L365_;
  } else {
  // L366()
    goto L366_;
  }

L79_:;
  // st nrows = r211
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r211_, RHO);
  (void)(Rsh_Fir_reg_r211_);
  // goto L80()
  // L80()
  goto L80_;

L80_:;
  // sym37 = ldf seq_len
  Rsh_Fir_reg_sym37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base37 = ldf seq_len in base
  Rsh_Fir_reg_base37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard37 = `==`.4(sym37, base37)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym37_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base37_;
  Rsh_Fir_reg_guard37_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard37 then L370() else L371()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard37_)) {
  // L370()
    goto L370_;
  } else {
  // L371()
    goto L371_;
  }

L81_:;
  // c93 = `is.object`(r215)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r215_;
  Rsh_Fir_reg_c93_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c93 then L373() else L374(r215)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c93_)) {
  // L373()
    goto L373_;
  } else {
  // L374(r215)
    Rsh_Fir_reg_r218_ = Rsh_Fir_reg_r215_;
    goto L374_;
  }

L82_:;
  // st iseq = dx30
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx30_, RHO);
  (void)(Rsh_Fir_reg_dx30_);
  // sym38 = ldf anyNA
  Rsh_Fir_reg_sym38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base38 = ldf anyNA in base
  Rsh_Fir_reg_base38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard38 = `==`.4(sym38, base38)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym38_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base38_;
  Rsh_Fir_reg_guard38_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard38 then L377() else L378()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard38_)) {
  // L377()
    goto L377_;
  } else {
  // L378()
    goto L378_;
  }

L83_:;
  // c94 = `as.logical`(r221)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r221_;
  Rsh_Fir_reg_c94_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // if c94 then L381() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c94_)) {
  // L381()
    goto L381_;
  } else {
  // L84()
    goto L84_;
  }

L84_:;
  // goto L85()
  // L85()
  goto L85_;

L85_:;
  // sym39 = ldf `is.character`
  Rsh_Fir_reg_sym39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base39 = ldf `is.character` in base
  Rsh_Fir_reg_base39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard39 = `==`.4(sym39, base39)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym39_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base39_;
  Rsh_Fir_reg_guard39_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard39 then L385() else L386()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard39_)) {
  // L385()
    goto L385_;
  } else {
  // L386()
    goto L386_;
  }

L86_:;
  // c96 = `as.logical`(r226)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r226_;
  Rsh_Fir_reg_c96_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c96 then L388() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c96_)) {
  // L388()
    goto L388_;
  } else {
  // L87()
    goto L87_;
  }

L87_:;
  // sym44 = ldf `is.logical`
  Rsh_Fir_reg_sym44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base44 = ldf `is.logical` in base
  Rsh_Fir_reg_base44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard44 = `==`.4(sym44, base44)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym44_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base44_;
  Rsh_Fir_reg_guard44_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard44 then L412() else L413()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard44_)) {
  // L412()
    goto L412_;
  } else {
  // L413()
    goto L413_;
  }

L88_:;
  // goto L89()
  // L89()
  goto L89_;

L89_:;
  // sym40 = ldf match
  Rsh_Fir_reg_sym40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base40 = ldf match in base
  Rsh_Fir_reg_base40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard40 = `==`.4(sym40, base40)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym40_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base40_;
  Rsh_Fir_reg_guard40_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard40 then L395() else L396()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard40_)) {
  // L395()
    goto L395_;
  } else {
  // L396()
    goto L396_;
  }

L90_:;
  // st jseq = r232
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r232_, RHO);
  (void)(Rsh_Fir_reg_r232_);
  // sym42 = ldf anyNA
  Rsh_Fir_reg_sym42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base42 = ldf anyNA in base
  Rsh_Fir_reg_base42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard42 = `==`.4(sym42, base42)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym42_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base42_;
  Rsh_Fir_reg_guard42_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard42 then L403() else L404()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard42_)) {
  // L403()
    goto L403_;
  } else {
  // L404()
    goto L404_;
  }

L91_:;
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r236 = dyn match2(j6, r234, NA_INT, NULL)
  SEXP Rsh_Fir_array_args65[4];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_j6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r234_;
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args65[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r236_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L402() else D132()
  // L402()
  goto L402_;

L92_:;
  // c98 = `as.logical`(r238)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r238_;
  Rsh_Fir_reg_c98_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c98 then L407() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c98_)) {
  // L407()
    goto L407_;
  } else {
  // L93()
    goto L93_;
  }

L93_:;
  // goto L94(NULL)
  // L94(NULL)
  Rsh_Fir_reg_r248_ = Rsh_const(CCP, 9);
  goto L94_;

L94_:;
  // goto L95()
  // L95()
  goto L95_;

L95_:;
  // sym48 = ldf length
  Rsh_Fir_reg_sym48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base48 = ldf length in base
  Rsh_Fir_reg_base48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard48 = `==`.4(sym48, base48)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym48_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base48_;
  Rsh_Fir_reg_guard48_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard48 then L440() else L441()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard48_)) {
  // L440()
    goto L440_;
  } else {
  // L441()
    goto L441_;
  }

L96_:;
  // c101 = `as.logical`(r251)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r251_;
  Rsh_Fir_reg_c101_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c101 then L97(c101) else L415()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c101_)) {
  // L97(c101)
    Rsh_Fir_reg_c102_ = Rsh_Fir_reg_c101_;
    goto L97_;
  } else {
  // L415()
    goto L415_;
  }

L97_:;
  // c110 = `as.logical`(c102)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_c102_;
  Rsh_Fir_reg_c110_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c110 then L421() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c110_)) {
  // L421()
    goto L421_;
  } else {
  // L99()
    goto L99_;
  }

L98_:;
  // r255 = `<`(r253, 0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r253_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r255_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args70);
  // c107 = `as.logical`(r255)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r255_;
  Rsh_Fir_reg_c107_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // c108 = `||`(c106, c107)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_c106_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_c107_;
  Rsh_Fir_reg_c108_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args72);
  // goto L97(c108)
  // L97(c108)
  Rsh_Fir_reg_c102_ = Rsh_Fir_reg_c108_;
  goto L97_;

L99_:;
  // j20 = ld j
  Rsh_Fir_reg_j20_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L430() else D142()
  // L430()
  goto L430_;

L100_:;
  // c111 = `is.object`(r257)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r257_;
  Rsh_Fir_reg_c111_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args73);
  // if c111 then L425() else L426(r257)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c111_)) {
  // L425()
    goto L425_;
  } else {
  // L426(r257)
    Rsh_Fir_reg_r260_ = Rsh_Fir_reg_r257_;
    goto L426_;
  }

L101_:;
  // st jseq = dx34
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx34_, RHO);
  (void)(Rsh_Fir_reg_dx34_);
  // goto L95()
  // L95()
  goto L95_;

L102_:;
  // nvars = ld nvars
  Rsh_Fir_reg_nvars = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L435() else D145()
  // L435()
  goto L435_;

L103_:;
  // goto L95()
  // L95()
  goto L95_;

L104_:;
  // r275 = `>`(r273, 1)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r273_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r275_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args74);
  // c114 = `as.logical`(r275)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r275_;
  Rsh_Fir_reg_c114_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c114 then L105(c114) else L444()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c114_)) {
  // L105(c114)
    Rsh_Fir_reg_c115_ = Rsh_Fir_reg_c114_;
    goto L105_;
  } else {
  // L444()
    goto L444_;
  }

L105_:;
  // c123 = `as.logical`(c115)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_c115_;
  Rsh_Fir_reg_c123_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c123 then L450() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c123_)) {
  // L450()
    goto L450_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // r279 = `>`(r277, 1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r277_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r279_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args77);
  // c120 = `as.logical`(r279)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r279_;
  Rsh_Fir_reg_c120_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // c121 = `||`(c119, c120)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_c119_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_c120_;
  Rsh_Fir_reg_c121_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args79);
  // goto L105(c121)
  // L105(c121)
  Rsh_Fir_reg_c115_ = Rsh_Fir_reg_c121_;
  goto L105_;

L107_:;
  // goto L108()
  // L108()
  goto L108_;

L108_:;
  // value23 = ld value
  Rsh_Fir_reg_value23_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L454() else D154()
  // L454()
  goto L454_;

L109_:;
  // c125 = `is.object`(dx38)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_c125_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args80);
  // if c125 then L459() else L460(value31, l24, dx38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c125_)) {
  // L459()
    goto L459_;
  } else {
  // L460(value31, l24, dx38)
    Rsh_Fir_reg_value34_ = Rsh_Fir_reg_value31_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx38_;
    goto L460_;
  }

L110_:;
  // c126 = `is.object`(l28)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_reg_c126_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args81);
  // if c126 then L463() else L464(value36, l28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c126_)) {
  // L463()
    goto L463_;
  } else {
  // L464(value36, l28)
    Rsh_Fir_reg_value38_ = Rsh_Fir_reg_value36_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l28_;
    goto L464_;
  }

L111_:;
  // st x = dx44
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx44_, RHO);
  (void)(Rsh_Fir_reg_dx44_);
  // cl2 = ld cl
  Rsh_Fir_reg_cl2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L467() else D158()
  // L467()
  goto L467_;

L112_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L114() else D0()
  // L114()
  goto L114_;

L113_:;
  // r = dyn base(<lang `%in%`(names(sys.call()), c("", "value"))>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // p = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   sys_call = ldf `sys.call`;
  //   r4 = dyn sys_call();
  //   names = ldf names in base;
  //   r5 = dyn names(r4);
  //   goto L0(r5);
  // L2():
  //   r2 = dyn base1(<lang sys.call()>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c = ldf c in base;
  //   r9 = dyn c("", "value");
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base2("", "value");
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_1, 0, NULL, CCP, RHO);
  // r11 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L115() else D1()
  // L115()
  goto L115_;

D1_:;
  // deopt 6 [r11]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L115_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r12 = dyn all(r11)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L116() else D2()
  // L116()
  goto L116_;

D2_:;
  // deopt 8 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r12_;
  goto L0_;

L117_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L118() else D3()
  // L118()
  goto L118_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L118_:;
  // r14 = dyn warning("named arguments are discouraged")
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L119() else D4()
  // L119()
  goto L119_;

D4_:;
  // deopt 13 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L2()
  // L2()
  goto L2_;

L121_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L123() else D5()
  // L123()
  goto L123_;

L122_:;
  // r16 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r16)
  // L3(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L3_;

D5_:;
  // deopt 18 [x1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L123_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r18 = dyn oldClass(x2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L124() else D6()
  // L124()
  goto L124_;

D6_:;
  // deopt 21 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L3_;

D7_:;
  // deopt 26 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L125_:;
  // r19 = dyn class__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L126() else D8()
  // L126()
  goto L126_;

D8_:;
  // deopt 28 [NULL, r19]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L126_:;
  // st x = r19
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // _row_names_info = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L127() else D9()
  // L127()
  goto L127_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L127_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_2, 0, NULL, CCP, RHO);
  // r21 = dyn _row_names_info(p2, 2)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L128() else D10()
  // L128()
  goto L128_;

D10_:;
  // deopt 34 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L128_:;
  // st nrows = r21
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym4 = ldf `is.atomic`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base4 = ldf `is.atomic` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard4 then L129() else L130()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L129()
    goto L129_;
  } else {
  // L130()
    goto L130_;
  }

L129_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L131() else D11()
  // L131()
  goto L131_;

L130_:;
  // r22 = dyn base4(<sym value>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L4_;

D11_:;
  // deopt 38 [value1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L131_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r24 = dyn is_atomic(value2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L132() else D12()
  // L132()
  goto L132_;

D12_:;
  // deopt 41 [r24]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L4_;

L133_:;
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard5 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L134_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard6 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L135_:;
  // r25 = dyn base5(<lang names(value)>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(c2, r25)
  // L6(c2, r25)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L6_;

L136_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L138() else D13()
  // L138()
  goto L138_;

L137_:;
  // r27 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L7(c2, r27)
  // L7(c2, r27)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L7_;

D13_:;
  // deopt 45 [c2, value3]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L138_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r29 = dyn names1(value4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L139() else D14()
  // L139()
  goto L139_;

D14_:;
  // deopt 48 [c2, r29]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L139_:;
  // goto L7(c2, r29)
  // L7(c2, r29)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L7_;

L141_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L142() else D15()
  // L142()
  goto L142_;

D15_:;
  // deopt 55 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L142_:;
  // r31 = dyn names__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args108[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L143() else D16()
  // L143()
  goto L143_;

D16_:;
  // deopt 57 [NULL, r31]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L143_:;
  // st value = r31
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L9()
  // L9()
  goto L9_;

L145_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r35 = dyn nargs()
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L147() else D17()
  // L147()
  goto L147_;

L146_:;
  // r33 = dyn base7()
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 0, NULL, NULL, CCP, RHO);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D17_:;
  // deopt 64 [r35]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L10_;

L148_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard8 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L149_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L151() else D18()
  // L151()
  goto L151_;

L150_:;
  // r37 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L12_;

D18_:;
  // deopt 69 [x5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L151_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r39 = dyn length(x6)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L152() else D19()
  // L152()
  goto L152_;

D19_:;
  // deopt 72 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L152_:;
  // goto L12(r39)
  // L12(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L12_;

L153_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L155() else D20()
  // L155()
  goto L155_;

L154_:;
  // r40 = dyn base9(<sym value>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L13_;

D20_:;
  // deopt 75 [value5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L155_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c17 = `==`(value6, NULL)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args115);
  // goto L13(c17)
  // L13(c17)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c17_;
  goto L13_;

L156_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L157() else D21()
  // L157()
  goto L157_;

D21_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L157_:;
  // p3 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_3, 0, NULL, CCP, RHO);
  // r44 = dyn NROW(p3)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L158() else D22()
  // L158()
  goto L158_;

D22_:;
  // deopt 82 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L158_:;
  // st N = r44
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L159() else D23()
  // L159()
  goto L159_;

D23_:;
  // deopt 84 [N]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L159_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L160() else D24()
  // L160()
  goto L160_;

D24_:;
  // deopt 85 [N1, nrows]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_N1_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L160_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r45 = `>`(N1, nrows1)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_N1_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args120);
  // c19 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c19 then L161() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L161()
    goto L161_;
  } else {
  // L15()
    goto L15_;
  }

L161_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L162() else D25()
  // L162()
  goto L162_;

D25_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // p8 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p5 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p4 = prom<V +>{
  //       N2 = ld N;
  //       N3 = force? N2;
  //       checkMissing(N3);
  //       return N3;
  //     };
  //     r47 = dyn ngettext(p4, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //     return r47;
  //   };
  //   p6 = prom<V +>{
  //     N4 = ld N;
  //     N5 = force? N4;
  //     checkMissing(N5);
  //     return N5;
  //   };
  //   p7 = prom<V +>{
  //     nrows2 = ld nrows;
  //     nrows3 = force? nrows2;
  //     checkMissing(nrows3);
  //     return nrows3;
  //   };
  //   r51 = dyn sprintf(p5, p6, p7);
  //   return r51;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_4, 0, NULL, CCP, RHO);
  // r53 = dyn stop[, domain](p8, NA_LGL)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L163() else D26()
  // L163()
  goto L163_;

D26_:;
  // deopt 93 [r53]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L163_:;
  // goto L16()
  // L16()
  goto L16_;

D27_:;
  // deopt 96 [N6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_N6_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L165_:;
  // N7 = force? N6
  Rsh_Fir_reg_N7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N6_);
  // checkMissing(N7)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_N7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // nrows4 = ld nrows
  Rsh_Fir_reg_nrows4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L166() else D28()
  // L166()
  goto L166_;

D28_:;
  // deopt 97 [N7, nrows4]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_N7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_nrows4_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L166_:;
  // nrows5 = force? nrows4
  Rsh_Fir_reg_nrows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows4_);
  // checkMissing(nrows5)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_nrows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // r55 = `<`(N7, nrows5)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_N7_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_nrows5_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args130);
  // c20 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c20 then L167() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L167()
    goto L167_;
  } else {
  // L17()
    goto L17_;
  }

L167_:;
  // N8 = ld N
  Rsh_Fir_reg_N8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L168() else D29()
  // L168()
  goto L168_;

D29_:;
  // deopt 100 [N8]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_N8_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L168_:;
  // N9 = force? N8
  Rsh_Fir_reg_N9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N8_);
  // checkMissing(N9)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_N9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r56 = `>`(N9, 0)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args133);
  // c21 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args134);
  // if c21 then L169() else L18(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L169()
    goto L169_;
  } else {
  // L18(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L18_;
  }

L169_:;
  // nrows6 = ld nrows
  Rsh_Fir_reg_nrows6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L170() else D30()
  // L170()
  goto L170_;

D30_:;
  // deopt 105 [c21, nrows6]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nrows6_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L170_:;
  // nrows7 = force? nrows6
  Rsh_Fir_reg_nrows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows6_);
  // checkMissing(nrows7)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_nrows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // N10 = ld N
  Rsh_Fir_reg_N10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L171() else D31()
  // L171()
  goto L171_;

D31_:;
  // deopt 107 [c21, N10]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_N10_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L171_:;
  // N11 = force? N10
  Rsh_Fir_reg_N11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N10_);
  // checkMissing(N11)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_N11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r57 = dyn __(nrows7, N11)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_nrows7_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_N11_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L172() else D32()
  // L172()
  goto L172_;

D32_:;
  // deopt 110 [c21, r57]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L172_:;
  // r58 = `==`(r57, 0)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args138);
  // c24 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args139);
  // c25 = `&&`(c21, c24)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args140);
  // goto L18(c25)
  // L18(c25)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c25_;
  goto L18_;

L174_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard10 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L175_:;
  // sym11 = ldf dim
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base11 = ldf dim in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard11 then L177() else L178()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L177()
    goto L177_;
  } else {
  // L178()
    goto L178_;
  }

L176_:;
  // r59 = dyn base10(<lang dim(value)>)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L20(c27, r59)
  // L20(c27, r59)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L20_;

L177_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L179() else D33()
  // L179()
  goto L179_;

L178_:;
  // r61 = dyn base11(<sym value>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L21(c27, r61)
  // L21(c27, r61)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L21_;

D33_:;
  // deopt 118 [c27, value9]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L179_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r63 = dyn dim(value10)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L180() else D34()
  // L180()
  goto L180_;

D34_:;
  // deopt 121 [c27, r63]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L180_:;
  // goto L21(c27, r63)
  // L21(c27, r63)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L21_;

D35_:;
  // deopt 123 [c35, r64]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L181_:;
  // goto L20(c35, r64)
  // L20(c35, r64)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r64_;
  goto L20_;

L183_:;
  // sym12 = ldf rep
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base12 = ldf rep in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args147);
  // if guard12 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L184_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r68 = dyn rep(<sym value>, <sym nrows>)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L23(r68)
  // L23(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L23_;

L185_:;
  // r66 = dyn base12[, `length.out`](<sym value>, <sym nrows>)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L23(r66)
  // L23(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L23_;

D36_:;
  // deopt 132 []
  Rsh_Fir_deopt(132, 0, NULL, CCP, RHO);
  return R_NilValue;

L187_:;
  // p13 = prom<V +>{
  //   sprintf1 = ldf sprintf;
  //   p10 = prom<V +>{
  //     ngettext1 = ldf ngettext;
  //     p9 = prom<V +>{
  //       N12 = ld N;
  //       N13 = force? N12;
  //       checkMissing(N13);
  //       return N13;
  //     };
  //     r71 = dyn ngettext1(p9, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //     return r71;
  //   };
  //   p11 = prom<V +>{
  //     N14 = ld N;
  //     N15 = force? N14;
  //     checkMissing(N15);
  //     return N15;
  //   };
  //   p12 = prom<V +>{
  //     nrows8 = ld nrows;
  //     nrows9 = force? nrows8;
  //     checkMissing(nrows9);
  //     return nrows9;
  //   };
  //   r75 = dyn sprintf1(p10, p11, p12);
  //   return r75;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_9, 0, NULL, CCP, RHO);
  // r77 = dyn stop1[, domain](p13, NA_LGL)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L188() else D37()
  // L188()
  goto L188_;

D37_:;
  // deopt 136 [r77]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L24(r77)
  // L24(r77)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r77_;
  goto L24_;

D38_:;
  // deopt 141 [value11]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L191_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c40 = `is.object`(l2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args157);
  // if c40 then L192() else L193(value12, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L192()
    goto L192_;
  } else {
  // L193(value12, l2)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_value12_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L193_;
  }

L192_:;
  // dr = tryDispatchBuiltin.0("[[<-", l2, value12)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_value12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args158);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if dc then L194() else L193(value12, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L194()
    goto L194_;
  } else {
  // L193(value12, dr)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_value12_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr;
    goto L193_;
  }

L193_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L195() else D39()
  // L195()
  goto L195_;

L194_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // goto L27(dx)
  // L27(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L27_;

D39_:;
  // deopt 144 [value14, l4, value12, i1]
  SEXP Rsh_Fir_array_deopt_stack33[4];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(144, 4, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L195_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r80 = dyn ____(l4, value12, i2)
  SEXP Rsh_Fir_array_args161[3];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_args161[2] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L27(r80)
  // L27(r80)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r80_;
  goto L27_;

L196_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L198() else D40()
  // L198()
  goto L198_;

L197_:;
  // r81 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L28(r81)
  // L28(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L28_;

D40_:;
  // deopt 150 [x7]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L198_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r83 = dyn length2(x8)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L199() else D41()
  // L199()
  goto L199_;

D41_:;
  // deopt 153 [r83]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L199_:;
  // goto L28(r83)
  // L28(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L28_;

D42_:;
  // deopt 153 [r82, nc]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L200_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // r84 = `>`(r82, nc1)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args166);
  // c41 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args167);
  // if c41 then L201() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L201()
    goto L201_;
  } else {
  // L29()
    goto L29_;
  }

L201_:;
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args168);
  // if guard14 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L202_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L204() else D43()
  // L204()
  goto L204_;

L203_:;
  // r85 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L30(r85)
  // L30(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L30_;

D43_:;
  // deopt 158 [x9]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L204_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r87 = dyn length3(x10)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L205() else D44()
  // L205()
  goto L205_;

D44_:;
  // deopt 161 [r87]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L205_:;
  // goto L30(r87)
  // L30(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L30_;

L206_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L208() else D45()
  // L208()
  goto L208_;

L207_:;
  // r88 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L31(r88)
  // L31(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L31_;

D45_:;
  // deopt 165 [x11]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L208_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r90 = dyn names2(x12)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L209() else D46()
  // L209()
  goto L209_;

D46_:;
  // deopt 168 [r90]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L209_:;
  // goto L31(r90)
  // L31(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L31_;

L210_:;
  // dr2 = tryDispatchBuiltin.1("[", r89)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc1 then L212() else L211(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L212()
    goto L212_;
  } else {
  // L211(dr2)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_dr2_;
    goto L211_;
  }

L211_:;
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L213() else D47()
  // L213()
  goto L213_;

L212_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L32(dx2)
  // L32(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L32_;

D47_:;
  // deopt 169 [r92, nc2]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_nc2_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L213_:;
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r93 = dyn __1(r92, nc3)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L32(r93)
  // L32(r93)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r93_;
  goto L32_;

L214_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // check L215() else D48()
  // L215()
  goto L215_;

D48_:;
  // deopt 175 []
  Rsh_Fir_deopt(175, 0, NULL, CCP, RHO);
  return R_NilValue;

L215_:;
  // p14 = prom<V +>{
  //   nc4 = ld nc;
  //   nc5 = force? nc4;
  //   checkMissing(nc5);
  //   return nc5;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_14, 0, NULL, CCP, RHO);
  // r96 = dyn paste0("V", p14)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L216() else D49()
  // L216()
  goto L216_;

D49_:;
  // deopt 178 [r96]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L216_:;
  // l5 = ld x
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names3 = ldf names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L217() else D50()
  // L217()
  goto L217_;

D50_:;
  // deopt 180 [r96, l5, r96]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(180, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L217_:;
  // r97 = dyn names3(r96, NULL)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L218() else D51()
  // L218()
  goto L218_;

D51_:;
  // deopt 182 [r96, l5, r96, r97]
  SEXP Rsh_Fir_array_deopt_stack44[4];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(182, 4, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L218_:;
  // c44 = `is.object`(r97)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args182);
  // if c44 then L219() else L220(r96, l5, r97)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L219()
    goto L219_;
  } else {
  // L220(r96, l5, r97)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r96_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r97_;
    goto L220_;
  }

L219_:;
  // dr4 = tryDispatchBuiltin.0("[<-", r97, r96)
  SEXP Rsh_Fir_array_args183[3];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_array_args183[2] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args183);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc2 then L221() else L220(r96, l5, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L221()
    goto L221_;
  } else {
  // L220(r96, l5, dr4)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r96_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r101_ = Rsh_Fir_reg_dr4_;
    goto L220_;
  }

L220_:;
  // nc6 = ld nc
  Rsh_Fir_reg_nc6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L222() else D52()
  // L222()
  goto L222_;

L221_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L34(r96, l5, dx4)
  // L34(r96, l5, dx4)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L34_;

D52_:;
  // deopt 184 [r100, l7, r101, r96, nc6]
  SEXP Rsh_Fir_array_deopt_stack45[5];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_deopt_stack45[4] = Rsh_Fir_reg_nc6_;
  Rsh_Fir_deopt(184, 5, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L222_:;
  // nc7 = force? nc6
  Rsh_Fir_reg_nc7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc6_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r104 = dyn ___(r101, r96, nc7)
  SEXP Rsh_Fir_array_args186[3];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_args186[2] = Rsh_Fir_reg_nc7_;
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L34(r100, l7, r104)
  // L34(r100, l7, r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r104_;
  goto L34_;

D53_:;
  // deopt 187 [r103, l9, dx5]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_deopt(187, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L223_:;
  // r105 = dyn names__1(l9, NULL, dx5)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args187[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args187[2] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L224() else D54()
  // L224()
  goto L224_;

D54_:;
  // deopt 189 [r103, r105]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(189, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L224_:;
  // st x = r105
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // goto L35()
  // L35()
  goto L35_;

D55_:;
  // deopt 194 []
  Rsh_Fir_deopt(194, 0, NULL, CCP, RHO);
  return R_NilValue;

L226_:;
  // p15 = prom<V +>{
  //   sym16 = ldf names;
  //   base16 = ldf names in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r108):
  //   return r108;
  // L1():
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   names4 = ldf names in base;
  //   r109 = dyn names4(x14);
  //   goto L0(r109);
  // L2():
  //   r107 = dyn base16(<sym x>);
  //   goto L0(r107);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_15, 0, NULL, CCP, RHO);
  // r111 = dyn make_unique(p15)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 1, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L227() else D56()
  // L227()
  goto L227_;

D56_:;
  // deopt 196 [r111]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L227_:;
  // l10 = ld x
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__2 = ldf `names<-`
  Rsh_Fir_reg_names__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L228() else D57()
  // L228()
  goto L228_;

D57_:;
  // deopt 198 [r111, l10, r111]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(198, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L228_:;
  // r112 = dyn names__2(l10, NULL, r111)
  SEXP Rsh_Fir_array_args193[3];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args193[2] = Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__2_, 3, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L229() else D58()
  // L229()
  goto L229_;

D58_:;
  // deopt 200 [r111, r112]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(200, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L229_:;
  // st x = r112
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L36()
  // L36()
  goto L36_;

D59_:;
  // deopt 204 [cl]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L231_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // l11 = ld x
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L232() else D60()
  // L232()
  goto L232_;

D60_:;
  // deopt 207 [cl1, l11, cl1]
  SEXP Rsh_Fir_array_deopt_stack52[3];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_deopt(207, 3, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L232_:;
  // r114 = dyn class__1(l11, NULL, cl1)
  SEXP Rsh_Fir_array_args195[3];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args195[2] = Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L233() else D61()
  // L233()
  goto L233_;

D61_:;
  // deopt 209 [cl1, r114]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L233_:;
  // st x = r114
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r114_, RHO);
  (void)(Rsh_Fir_reg_r114_);
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L234() else D62()
  // L234()
  goto L234_;

D62_:;
  // deopt 211 [x15]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L234_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x16
  return Rsh_Fir_reg_x16_;

L237_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r119 = dyn missing(<sym i>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L38(r119)
  // L38(r119)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r119_;
  goto L38_;

L238_:;
  // r117 = dyn base17(<sym i>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L38(r117)
  // L38(r117)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L38_;

L239_:;
  // sym18 = ldf missing
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base18 = ldf missing in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard18 then L240() else L241()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L240()
    goto L240_;
  } else {
  // L241()
    goto L241_;
  }

L240_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r122 = dyn missing1(<sym j>)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L40(c45, r122)
  // L40(c45, r122)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r122_;
  goto L40_;

L241_:;
  // r120 = dyn base18(<sym j>)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L40(c45, r120)
  // L40(c45, r120)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L40_;

L243_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L244() else D63()
  // L244()
  goto L244_;

D63_:;
  // deopt 224 []
  Rsh_Fir_deopt(224, 0, NULL, CCP, RHO);
  return R_NilValue;

L244_:;
  // r123 = dyn stop2("only valid calls are x[[j]] <- value or x[[i,j]] <- value")
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L245() else D64()
  // L245()
  goto L245_;

D64_:;
  // deopt 226 [r123]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L42()
  // L42()
  goto L42_;

L247_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L249() else D65()
  // L249()
  goto L249_;

L248_:;
  // r125 = dyn base19(<sym x>, "row.names")
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args203[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L43(r125)
  // L43(r125)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r125_;
  goto L43_;

D65_:;
  // deopt 231 [x17]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(231, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L249_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r127 = dyn attr(x18, "row.names")
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L250() else D66()
  // L250()
  goto L250_;

D66_:;
  // deopt 235 [r127]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L250_:;
  // goto L43(r127)
  // L43(r127)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r127_;
  goto L43_;

L251_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L253() else D67()
  // L253()
  goto L253_;

L252_:;
  // r128 = dyn base20(<sym x>)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L44(r128)
  // L44(r128)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L44_;

D67_:;
  // deopt 239 [x19]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L253_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r130 = dyn length4(x20)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L254() else D68()
  // L254()
  goto L254_;

D68_:;
  // deopt 242 [r130]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L254_:;
  // goto L44(r130)
  // L44(r130)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r130_;
  goto L44_;

L255_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L257() else D69()
  // L257()
  goto L257_;

L256_:;
  // r131 = dyn base21(<sym i>)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L45(r131)
  // L45(r131)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r131_;
  goto L45_;

D69_:;
  // deopt 245 [i3]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L257_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // c55 = `is.character`(i4)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args211);
  // goto L45(c55)
  // L45(c55)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_c55_;
  goto L45_;

L258_:;
  // sym22 = ldf match
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base22 = ldf match in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args212);
  // if guard22 then L259() else L260()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L259()
    goto L259_;
  } else {
  // L260()
    goto L260_;
  }

L259_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L261() else D70()
  // L261()
  goto L261_;

L260_:;
  // r133 = dyn base22(<sym i>, <sym rows>)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args213[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L47(r133)
  // L47(r133)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r133_;
  goto L47_;

D70_:;
  // deopt 251 [i5]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L261_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // rows = ld rows
  Rsh_Fir_reg_rows = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L262() else D71()
  // L262()
  goto L262_;

D71_:;
  // deopt 253 [rows]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_rows;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L262_:;
  // rows1 = force? rows
  Rsh_Fir_reg_rows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows);
  // checkMissing(rows1)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_rows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r135 = dyn match(i6, rows1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args216[4];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_rows1_;
  Rsh_Fir_array_args216[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args216[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names66[4];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_array_arg_names66[3] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L263() else D72()
  // L263()
  goto L263_;

D72_:;
  // deopt 258 [r135]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L263_:;
  // goto L47(r135)
  // L47(r135)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r135_;
  goto L47_;

L264_:;
  // sym24 = ldf `is.na`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base24 = ldf `is.na` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args217);
  // if guard24 then L266() else L267()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L266()
    goto L266_;
  } else {
  // L267()
    goto L267_;
  }

L265_:;
  // r136 = dyn base23(<lang `<-`(new.rows, is.na(ii))>)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L48(r136)
  // L48(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L48_;

L266_:;
  // ii = ld ii
  Rsh_Fir_reg_ii = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L268() else D73()
  // L268()
  goto L268_;

L267_:;
  // r138 = dyn base24(<sym ii>)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L49(r138)
  // L49(r138)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r138_;
  goto L49_;

D73_:;
  // deopt 264 [ii]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_ii;
  Rsh_Fir_deopt(264, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L268_:;
  // ii1 = force? ii
  Rsh_Fir_reg_ii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii);
  // checkMissing(ii1)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_ii1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r140 = dyn is_na(ii1)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_ii1_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L269() else D74()
  // L269()
  goto L269_;

D74_:;
  // deopt 267 [r140]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L269_:;
  // goto L49(r140)
  // L49(r140)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r140_;
  goto L49_;

D75_:;
  // deopt 270 [r141]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(270, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L270_:;
  // goto L48(r141)
  // L48(r141)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r141_;
  goto L48_;

D76_:;
  // deopt 272 [n]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L271_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // r142 = `>`(n1, 0)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args223[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args223);
  // c57 = `as.logical`(r142)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_r142_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args224);
  // if c57 then L272() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L272()
    goto L272_;
  } else {
  // L50()
    goto L50_;
  }

L272_:;
  // sym25 = ldf `seq.int`
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // base25 = ldf `seq.int` in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args225);
  // if guard25 then L273() else L274()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L273()
    goto L273_;
  } else {
  // L274()
    goto L274_;
  }

L273_:;
  // nrows10 = ld nrows
  Rsh_Fir_reg_nrows10_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L275() else D77()
  // L275()
  goto L275_;

L274_:;
  // r143 = dyn base25[from, `length.out`](<lang `+`(nrows, 1)>, <sym n>)
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args226[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_arg_names70[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 2, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L51(r143)
  // L51(r143)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r143_;
  goto L51_;

D77_:;
  // deopt 278 [nrows10]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_nrows10_;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L275_:;
  // nrows11 = force? nrows10
  Rsh_Fir_reg_nrows11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows10_);
  // checkMissing(nrows11)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_nrows11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // r145 = `+`(nrows11, 1)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_nrows11_;
  Rsh_Fir_array_args228[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args228);
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L276() else D78()
  // L276()
  goto L276_;

D78_:;
  // deopt 283 [n2]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L276_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r146 = dyn seq_int(r145, n3)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L277() else D79()
  // L277()
  goto L277_;

D79_:;
  // deopt 287 [r146]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L277_:;
  // goto L51(r146)
  // L51(r146)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r146_;
  goto L51_;

L278_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l12, r144)
  SEXP Rsh_Fir_array_args231[3];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args231[2] = Rsh_Fir_reg_r144_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args231);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // if dc3 then L280() else L279(r144, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L280()
    goto L280_;
  } else {
  // L279(r144, dr6)
    Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r144_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr6_;
    goto L279_;
  }

L279_:;
  // new_rows = ld `new.rows`
  Rsh_Fir_reg_new_rows = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L281() else D80()
  // L281()
  goto L281_;

L280_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L52(dx6)
  // L52(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L52_;

D80_:;
  // deopt 289 [r148, l14, r144, new_rows]
  SEXP Rsh_Fir_array_deopt_stack71[4];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_r144_;
  Rsh_Fir_array_deopt_stack71[3] = Rsh_Fir_reg_new_rows;
  Rsh_Fir_deopt(289, 4, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L281_:;
  // new_rows1 = force? new_rows
  Rsh_Fir_reg_new_rows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r151 = dyn ___1(l14, r144, new_rows1)
  SEXP Rsh_Fir_array_args234[3];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_r144_;
  Rsh_Fir_array_args234[2] = Rsh_Fir_reg_new_rows1_;
  SEXP Rsh_Fir_array_arg_names72[3];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_array_arg_names72[2] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L52(r151)
  // L52(r151)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r151_;
  goto L52_;

D81_:;
  // deopt 293 [i7]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(293, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L282_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty()));
  // c59 = `is.object`(i8)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args236);
  // if c59 then L283() else L284(i8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L283()
    goto L283_;
  } else {
  // L284(i8)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    goto L284_;
  }

L283_:;
  // dr8 = tryDispatchBuiltin.1("[", i8)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args237);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // if dc4 then L285() else L284(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L285()
    goto L285_;
  } else {
  // L284(dr8)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_dr8_;
    goto L284_;
  }

L284_:;
  // new_rows2 = ld `new.rows`
  Rsh_Fir_reg_new_rows2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L286() else D82()
  // L286()
  goto L286_;

L285_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // goto L53(dx8)
  // L53(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L53_;

D82_:;
  // deopt 295 [i10, new_rows2]
  SEXP Rsh_Fir_array_deopt_stack73[2];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_new_rows2_;
  Rsh_Fir_deopt(295, 2, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L286_:;
  // new_rows3 = force? new_rows2
  Rsh_Fir_reg_new_rows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r152 = dyn __2(i10, new_rows3)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_new_rows3_;
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L53(r152)
  // L53(r152)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r152_;
  goto L53_;

D83_:;
  // deopt 301 [ii2]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_ii2_;
  Rsh_Fir_deopt(301, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L288_:;
  // ii3 = force? ii2
  Rsh_Fir_reg_ii3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii2_);
  // checkMissing(ii3)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_ii3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // st i = ii3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ii3_, RHO);
  (void)(Rsh_Fir_reg_ii3_);
  // goto L55()
  // L55()
  goto L55_;

L290_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L292() else D84()
  // L292()
  goto L292_;

L291_:;
  // r153 = dyn base26(<lang `>=`(i, 0)>)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args242, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L56(r153)
  // L56(r153)
  Rsh_Fir_reg_r154_ = Rsh_Fir_reg_r153_;
  goto L56_;

D84_:;
  // deopt 308 [i11]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(308, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L292_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_i12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty()));
  // r155 = `>=`(i12, 0)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_args244[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args244);
  // all1 = ldf all in base
  Rsh_Fir_reg_all1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r156 = dyn all1(r155)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_r155_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all1_, 1, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L293() else D85()
  // L293()
  goto L293_;

D85_:;
  // deopt 313 [r156]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r156_;
  Rsh_Fir_deopt(313, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L293_:;
  // goto L56(r156)
  // L56(r156)
  Rsh_Fir_reg_r154_ = Rsh_Fir_reg_r156_;
  goto L56_;

L294_:;
  // sym27 = ldf max
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // base27 = ldf max in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args246);
  // if guard27 then L295() else L296()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L295()
    goto L295_;
  } else {
  // L296()
    goto L296_;
  }

L295_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L297() else D86()
  // L297()
  goto L297_;

L296_:;
  // r157 = dyn base27(<sym i>)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L58(c60, r157)
  // L58(c60, r157)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c60_;
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L58_;

D86_:;
  // deopt 316 [c60, i13]
  SEXP Rsh_Fir_array_deopt_stack77[2];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(316, 2, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L297_:;
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // checkMissing(i14)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_i14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // r159 = dyn max(i14)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L298() else D87()
  // L298()
  goto L298_;

D87_:;
  // deopt 319 [c60, r159]
  SEXP Rsh_Fir_array_deopt_stack78[2];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(319, 2, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L298_:;
  // goto L58(c60, r159)
  // L58(c60, r159)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c60_;
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r159_;
  goto L58_;

D88_:;
  // deopt 320 [c65, r158, nrows12]
  SEXP Rsh_Fir_array_deopt_stack79[3];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_r158_;
  Rsh_Fir_array_deopt_stack79[2] = Rsh_Fir_reg_nrows12_;
  Rsh_Fir_deopt(320, 3, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L299_:;
  // nrows13 = force? nrows12
  Rsh_Fir_reg_nrows13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows12_);
  // checkMissing(nrows13)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_nrows13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // r160 = `>`(r158, nrows13)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_nrows13_;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args251);
  // c66 = `as.logical`(r160)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args252);
  // c67 = `&&`(c65, c66)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_c66_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args253);
  // goto L57(c67)
  // L57(c67)
  Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c67_;
  goto L57_;

L301_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L302() else D89()
  // L302()
  goto L302_;

D89_:;
  // deopt 324 [n4]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L302_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty()));
  // r161 = `==`(n5, 0)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args255[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args255);
  // c70 = `as.logical`(r161)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args256);
  // if c70 then L303() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L303()
    goto L303_;
  } else {
  // L60()
    goto L60_;
  }

L303_:;
  // nrows14 = ld nrows
  Rsh_Fir_reg_nrows14_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L304() else D90()
  // L304()
  goto L304_;

D90_:;
  // deopt 328 [nrows14]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_nrows14_;
  Rsh_Fir_deopt(328, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L304_:;
  // nrows15 = force? nrows14
  Rsh_Fir_reg_nrows15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows14_);
  // checkMissing(nrows15)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_nrows15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // r162 = `+`(nrows15, 1)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_nrows15_;
  Rsh_Fir_array_args258[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args258);
  // nn = ld nn
  Rsh_Fir_reg_nn = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L305() else D91()
  // L305()
  goto L305_;

D91_:;
  // deopt 331 [r162, nn]
  SEXP Rsh_Fir_array_deopt_stack82[2];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_nn;
  Rsh_Fir_deopt(331, 2, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L305_:;
  // nn1 = force? nn
  Rsh_Fir_reg_nn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn);
  // checkMissing(nn1)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_nn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // r163 = `:`(r162, nn1)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_args260[1] = Rsh_Fir_reg_nn1_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args260);
  // st nrr = r163
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r163_, RHO);
  (void)(Rsh_Fir_reg_r163_);
  // sym28 = ldf inherits
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base28 = ldf inherits in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args261);
  // if guard28 then L306() else L307()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L306()
    goto L306_;
  } else {
  // L307()
    goto L307_;
  }

L306_:;
  // value17 = ld value
  Rsh_Fir_reg_value17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L308() else D92()
  // L308()
  goto L308_;

L307_:;
  // r164 = dyn base28(<sym value>, "data.frame")
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args262[1] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 2, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L61(r164)
  // L61(r164)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r164_;
  goto L61_;

D92_:;
  // deopt 337 [value17]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_value17_;
  Rsh_Fir_deopt(337, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L308_:;
  // value18 = force? value17
  Rsh_Fir_reg_value18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value17_);
  // checkMissing(value18)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_value18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // r166 = dyn inherits(value18, "data.frame", FALSE)
  SEXP Rsh_Fir_array_args264[3];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_array_args264[1] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args264[2] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names79[3];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args264, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L309() else D93()
  // L309()
  goto L309_;

D93_:;
  // deopt 342 [r166]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(342, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L309_:;
  // goto L61(r166)
  // L61(r166)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r166_;
  goto L61_;

L310_:;
  // sym29 = ldf dim
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base29 = ldf dim in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args265);
  // if guard29 then L311() else L312()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L311()
    goto L311_;
  } else {
  // L312()
    goto L312_;
  }

L311_:;
  // value19 = ld value
  Rsh_Fir_reg_value19_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L313() else D94()
  // L313()
  goto L313_;

L312_:;
  // r167 = dyn base29(<sym value>)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args266, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L63(c71, r167)
  // L63(c71, r167)
  Rsh_Fir_reg_c76_ = Rsh_Fir_reg_c71_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r167_;
  goto L63_;

D94_:;
  // deopt 345 [c71, value19]
  SEXP Rsh_Fir_array_deopt_stack85[2];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_c71_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_value19_;
  Rsh_Fir_deopt(345, 2, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L313_:;
  // value20 = force? value19
  Rsh_Fir_reg_value20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value19_);
  // checkMissing(value20)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_value20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r169 = dyn dim1(value20)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_value20_;
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L314() else D95()
  // L314()
  goto L314_;

D95_:;
  // deopt 348 [c71, r169]
  SEXP Rsh_Fir_array_deopt_stack86[2];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_c71_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_r169_;
  Rsh_Fir_deopt(348, 2, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L314_:;
  // goto L63(c71, r169)
  // L63(c71, r169)
  Rsh_Fir_reg_c76_ = Rsh_Fir_reg_c71_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r169_;
  goto L63_;

L315_:;
  // dr10 = tryDispatchBuiltin.1("[", r168)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_r168_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args269);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // if dc5 then L317() else L316(c76, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L317()
    goto L317_;
  } else {
  // L316(c76, dr10)
    Rsh_Fir_reg_c79_ = Rsh_Fir_reg_c76_;
    Rsh_Fir_reg_r171_ = Rsh_Fir_reg_dr10_;
    goto L316_;
  }

L316_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r172 = dyn __3(r171, 1)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_array_args271[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L64(c79, r172)
  // L64(c79, r172)
  Rsh_Fir_reg_c81_ = Rsh_Fir_reg_c79_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r172_;
  goto L64_;

L317_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // goto L64(c76, dx11)
  // L64(c76, dx11)
  Rsh_Fir_reg_c81_ = Rsh_Fir_reg_c76_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L64_;

L318_:;
  // nrr = ld nrr
  Rsh_Fir_reg_nrr = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L320() else D96()
  // L320()
  goto L320_;

L319_:;
  // r173 = dyn base30(<sym nrr>)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 1, Rsh_Fir_array_args273, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L65(c81, dx12, r173)
  // L65(c81, dx12, r173)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c81_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r173_;
  goto L65_;

D96_:;
  // deopt 353 [c81, dx12, nrr]
  SEXP Rsh_Fir_array_deopt_stack87[3];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_c81_;
  Rsh_Fir_array_deopt_stack87[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack87[2] = Rsh_Fir_reg_nrr;
  Rsh_Fir_deopt(353, 3, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L320_:;
  // nrr1 = force? nrr
  Rsh_Fir_reg_nrr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrr);
  // checkMissing(nrr1)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_nrr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r175 = dyn length5(nrr1)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_nrr1_;
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L321() else D97()
  // L321()
  goto L321_;

D97_:;
  // deopt 356 [c81, dx12, r175]
  SEXP Rsh_Fir_array_deopt_stack88[3];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_c81_;
  Rsh_Fir_array_deopt_stack88[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack88[2] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(356, 3, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L321_:;
  // goto L65(c81, dx12, r175)
  // L65(c81, dx12, r175)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c81_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r175_;
  goto L65_;

L323_:;
  // sym31 = ldf attr
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base31 = ldf attr in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args276);
  // if guard31 then L324() else L325()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L324()
    goto L324_;
  } else {
  // L325()
    goto L325_;
  }

L324_:;
  // value21 = ld value
  Rsh_Fir_reg_value21_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L326() else D98()
  // L326()
  goto L326_;

L325_:;
  // r177 = dyn base31(<sym value>, "row.names")
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names85[2];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_reg_r177_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 2, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L67(r177)
  // L67(r177)
  Rsh_Fir_reg_r178_ = Rsh_Fir_reg_r177_;
  goto L67_;

D98_:;
  // deopt 361 [value21]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_value21_;
  Rsh_Fir_deopt(361, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L326_:;
  // value22 = force? value21
  Rsh_Fir_reg_value22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value21_);
  // checkMissing(value22)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_value22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r179 = dyn attr1(value22, "row.names")
  SEXP Rsh_Fir_array_args279[2];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_array_args279[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names86[2];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_array_arg_names86[1] = R_MissingArg;
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L327() else D99()
  // L327()
  goto L327_;

D99_:;
  // deopt 365 [r179]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_deopt(365, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L327_:;
  // goto L67(r179)
  // L67(r179)
  Rsh_Fir_reg_r178_ = Rsh_Fir_reg_r179_;
  goto L67_;

L328_:;
  // dr12 = tryDispatchBuiltin.1("[", r178)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_r178_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args280);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // if dc6 then L330() else L329(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L330()
    goto L330_;
  } else {
  // L329(dr12)
    Rsh_Fir_reg_r181_ = Rsh_Fir_reg_dr12_;
    goto L329_;
  }

L329_:;
  // sym32 = ldf seq_len
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base32 = ldf seq_len in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args282[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args282);
  // if guard32 then L331() else L332()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L331()
    goto L331_;
  } else {
  // L332()
    goto L332_;
  }

L330_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty());
  // goto L68(dx16)
  // L68(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L68_;

L331_:;
  // nrr2 = ld nrr
  Rsh_Fir_reg_nrr2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L333() else D100()
  // L333()
  goto L333_;

L332_:;
  // r184 = dyn base32(<sym nrr>)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r184_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 1, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L69(r181, r184)
  // L69(r181, r184)
  Rsh_Fir_reg_r185_ = Rsh_Fir_reg_r181_;
  Rsh_Fir_reg_r186_ = Rsh_Fir_reg_r184_;
  goto L69_;

D100_:;
  // deopt 367 [r181, nrr2]
  SEXP Rsh_Fir_array_deopt_stack91[2];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_r181_;
  Rsh_Fir_array_deopt_stack91[1] = Rsh_Fir_reg_nrr2_;
  Rsh_Fir_deopt(367, 2, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L333_:;
  // nrr3 = force? nrr2
  Rsh_Fir_reg_nrr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrr2_);
  // checkMissing(nrr3)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_nrr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // r187 = seq_len(nrr3)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_nrr3_;
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args286);
  // goto L69(r181, r187)
  // L69(r181, r187)
  Rsh_Fir_reg_r185_ = Rsh_Fir_reg_r181_;
  Rsh_Fir_reg_r186_ = Rsh_Fir_reg_r187_;
  goto L69_;

D101_:;
  // deopt 373 []
  Rsh_Fir_deopt(373, 0, NULL, CCP, RHO);
  return R_NilValue;

L334_:;
  // p16 = prom<V +>{
  //   new_rows4 = ld `new.rows`;
  //   new_rows5 = force? new_rows4;
  //   checkMissing(new_rows5);
  //   return new_rows5;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_16, 0, NULL, CCP, RHO);
  // r190 = dyn duplicated(p16)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names88[1];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_reg_r190_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L335() else D102()
  // L335()
  goto L335_;

D102_:;
  // deopt 375 [r190]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_r190_;
  Rsh_Fir_deopt(375, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L335_:;
  // sym33 = ldf match
  Rsh_Fir_reg_sym33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base33 = ldf match in base
  Rsh_Fir_reg_base33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard33 = `==`.4(sym33, base33)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_sym33_;
  Rsh_Fir_array_args289[1] = Rsh_Fir_reg_base33_;
  Rsh_Fir_reg_guard33_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args289);
  // if guard33 then L336() else L337()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard33_)) {
  // L336()
    goto L336_;
  } else {
  // L337()
    goto L337_;
  }

L336_:;
  // new_rows6 = ld `new.rows`
  Rsh_Fir_reg_new_rows6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L338() else D103()
  // L338()
  goto L338_;

L337_:;
  // r193 = dyn base33(<sym new.rows>, <sym rows>, 0)
  SEXP Rsh_Fir_array_args290[3];
  Rsh_Fir_array_args290[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args290[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args290[2] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names89[3];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_array_arg_names89[2] = R_MissingArg;
  Rsh_Fir_reg_r193_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base33_, 3, Rsh_Fir_array_args290, Rsh_Fir_array_arg_names89, CCP, RHO);
  // goto L70(r190, r193)
  // L70(r190, r193)
  Rsh_Fir_reg_r194_ = Rsh_Fir_reg_r190_;
  Rsh_Fir_reg_r195_ = Rsh_Fir_reg_r193_;
  goto L70_;

D103_:;
  // deopt 377 [r190, new_rows6]
  SEXP Rsh_Fir_array_deopt_stack93[2];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_r190_;
  Rsh_Fir_array_deopt_stack93[1] = Rsh_Fir_reg_new_rows6_;
  Rsh_Fir_deopt(377, 2, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L338_:;
  // new_rows7 = force? new_rows6
  Rsh_Fir_reg_new_rows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows6_);
  // checkMissing(new_rows7)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_new_rows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty()));
  // rows2 = ld rows
  Rsh_Fir_reg_rows2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L339() else D104()
  // L339()
  goto L339_;

D104_:;
  // deopt 379 [r190, rows2]
  SEXP Rsh_Fir_array_deopt_stack94[2];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_r190_;
  Rsh_Fir_array_deopt_stack94[1] = Rsh_Fir_reg_rows2_;
  Rsh_Fir_deopt(379, 2, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L339_:;
  // rows3 = force? rows2
  Rsh_Fir_reg_rows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows2_);
  // checkMissing(rows3)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_rows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r196 = dyn match1(new_rows7, rows3, 0, NULL)
  SEXP Rsh_Fir_array_args293[4];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_new_rows7_;
  Rsh_Fir_array_args293[1] = Rsh_Fir_reg_rows3_;
  Rsh_Fir_array_args293[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args293[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names90[4];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_array_arg_names90[2] = R_MissingArg;
  Rsh_Fir_array_arg_names90[3] = R_MissingArg;
  Rsh_Fir_reg_r196_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names90, CCP, RHO);
  // check L340() else D105()
  // L340()
  goto L340_;

D105_:;
  // deopt 384 [r190, r196]
  SEXP Rsh_Fir_array_deopt_stack95[2];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_r190_;
  Rsh_Fir_array_deopt_stack95[1] = Rsh_Fir_reg_r196_;
  Rsh_Fir_deopt(384, 2, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L340_:;
  // goto L70(r190, r196)
  // L70(r190, r196)
  Rsh_Fir_reg_r194_ = Rsh_Fir_reg_r190_;
  Rsh_Fir_reg_r195_ = Rsh_Fir_reg_r196_;
  goto L70_;

L341_:;
  // repl = ld repl
  Rsh_Fir_reg_repl = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L343() else D106()
  // L343()
  goto L343_;

L342_:;
  // r198 = dyn base34(<sym repl>)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names91[1];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_reg_r198_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base34_, 1, Rsh_Fir_array_args294, Rsh_Fir_array_arg_names91, CCP, RHO);
  // goto L71(r198)
  // L71(r198)
  Rsh_Fir_reg_r199_ = Rsh_Fir_reg_r198_;
  goto L71_;

D106_:;
  // deopt 389 [repl]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_repl;
  Rsh_Fir_deopt(389, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L343_:;
  // repl1 = force? repl
  Rsh_Fir_reg_repl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repl);
  // checkMissing(repl1)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_repl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r200 = dyn any(repl1)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_repl1_;
  SEXP Rsh_Fir_array_arg_names92[1];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_reg_r200_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names92, CCP, RHO);
  // check L344() else D107()
  // L344()
  goto L344_;

D107_:;
  // deopt 392 [r200]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_r200_;
  Rsh_Fir_deopt(392, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L344_:;
  // goto L71(r200)
  // L71(r200)
  Rsh_Fir_reg_r199_ = Rsh_Fir_reg_r200_;
  goto L71_;

L345_:;
  // nrr4 = ld nrr
  Rsh_Fir_reg_nrr4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L346() else D108()
  // L346()
  goto L346_;

D108_:;
  // deopt 393 [nrr4]
  SEXP Rsh_Fir_array_deopt_stack98[1];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_nrr4_;
  Rsh_Fir_deopt(393, 1, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L346_:;
  // nrr5 = force? nrr4
  Rsh_Fir_reg_nrr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrr4_);
  // checkMissing(nrr5)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_nrr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // c91 = `is.object`(nrr5)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_nrr5_;
  Rsh_Fir_reg_c91_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args298);
  // if c91 then L347() else L348(nrr5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c91_)) {
  // L347()
    goto L347_;
  } else {
  // L348(nrr5)
    Rsh_Fir_reg_nrr7_ = Rsh_Fir_reg_nrr5_;
    goto L348_;
  }

L347_:;
  // dr14 = tryDispatchBuiltin.1("[", nrr5)
  SEXP Rsh_Fir_array_args299[2];
  Rsh_Fir_array_args299[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args299[1] = Rsh_Fir_reg_nrr5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args299);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty());
  // if dc7 then L349() else L348(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L349()
    goto L349_;
  } else {
  // L348(dr14)
    Rsh_Fir_reg_nrr7_ = Rsh_Fir_reg_dr14_;
    goto L348_;
  }

L348_:;
  // repl2 = ld repl
  Rsh_Fir_reg_repl2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L350() else D109()
  // L350()
  goto L350_;

L349_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty());
  // goto L73(dx18)
  // L73(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L73_;

D109_:;
  // deopt 395 [nrr7, repl2]
  SEXP Rsh_Fir_array_deopt_stack99[2];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_nrr7_;
  Rsh_Fir_array_deopt_stack99[1] = Rsh_Fir_reg_repl2_;
  Rsh_Fir_deopt(395, 2, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L350_:;
  // repl3 = force? repl2
  Rsh_Fir_reg_repl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repl2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r201 = dyn __5(nrr7, repl3)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_nrr7_;
  Rsh_Fir_array_args302[1] = Rsh_Fir_reg_repl3_;
  SEXP Rsh_Fir_array_arg_names93[2];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_array_arg_names93[1] = R_MissingArg;
  Rsh_Fir_reg_r201_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names93, CCP, RHO);
  // goto L73(r201)
  // L73(r201)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r201_;
  goto L73_;

L351_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l15, dx19)
  SEXP Rsh_Fir_array_args303[3];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args303[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args303[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args303);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty());
  // if dc8 then L353() else L352(dx19, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L353()
    goto L353_;
  } else {
  // L352(dx19, dr16)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr16_;
    goto L352_;
  }

L352_:;
  // repl4 = ld repl
  Rsh_Fir_reg_repl4_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L354() else D110()
  // L354()
  goto L354_;

L353_:;
  // dx23 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty());
  // goto L74(dx19, dx23)
  // L74(dx19, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L74_;

D110_:;
  // deopt 399 [dx21, l17, dx19, repl4]
  SEXP Rsh_Fir_array_deopt_stack100[4];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack100[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack100[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack100[3] = Rsh_Fir_reg_repl4_;
  Rsh_Fir_deopt(399, 4, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L354_:;
  // repl5 = force? repl4
  Rsh_Fir_reg_repl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repl4_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r202 = dyn ___2(l17, dx19, repl5)
  SEXP Rsh_Fir_array_args306[3];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args306[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args306[2] = Rsh_Fir_reg_repl5_;
  SEXP Rsh_Fir_array_arg_names94[3];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_array_arg_names94[1] = R_MissingArg;
  Rsh_Fir_array_arg_names94[2] = R_MissingArg;
  Rsh_Fir_reg_r202_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names94, CCP, RHO);
  // goto L74(dx21, r202)
  // L74(dx21, r202)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r202_;
  goto L74_;

D111_:;
  // deopt 405 [nrr8]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_nrr8_;
  Rsh_Fir_deopt(405, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L357_:;
  // nrr9 = force? nrr8
  Rsh_Fir_reg_nrr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrr8_);
  // checkMissing(nrr9)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_nrr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty()));
  // st `new.rows` = nrr9
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_nrr9_, RHO);
  (void)(Rsh_Fir_reg_nrr9_);
  // goto L76(nrr9)
  // L76(nrr9)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_nrr9_;
  goto L76_;

D112_:;
  // deopt 411 []
  Rsh_Fir_deopt(411, 0, NULL, CCP, RHO);
  return R_NilValue;

L359_:;
  // p17 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   return x22;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   rows4 = ld rows;
  //   rows5 = force? rows4;
  //   checkMissing(rows5);
  //   return rows5;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_18, 0, NULL, CCP, RHO);
  // p19 = prom<V +>{
  //   new_rows8 = ld `new.rows`;
  //   new_rows9 = force? new_rows8;
  //   checkMissing(new_rows9);
  //   return new_rows9;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_19, 0, NULL, CCP, RHO);
  // r206 = dyn xpdrows_data_frame(p17, p18, p19)
  SEXP Rsh_Fir_array_args311[3];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args311[2] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names95[3];
  Rsh_Fir_array_arg_names95[0] = R_MissingArg;
  Rsh_Fir_array_arg_names95[1] = R_MissingArg;
  Rsh_Fir_array_arg_names95[2] = R_MissingArg;
  Rsh_Fir_reg_r206_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xpdrows_data_frame, 3, Rsh_Fir_array_args311, Rsh_Fir_array_arg_names95, CCP, RHO);
  // check L360() else D113()
  // L360()
  goto L360_;

D113_:;
  // deopt 415 [r206]
  SEXP Rsh_Fir_array_deopt_stack102[1];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_r206_;
  Rsh_Fir_deopt(415, 1, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L360_:;
  // st x = r206
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r206_, RHO);
  (void)(Rsh_Fir_reg_r206_);
  // sym35 = ldf attr
  Rsh_Fir_reg_sym35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base35 = ldf attr in base
  Rsh_Fir_reg_base35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard35 = `==`.4(sym35, base35)
  SEXP Rsh_Fir_array_args312[2];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_sym35_;
  Rsh_Fir_array_args312[1] = Rsh_Fir_reg_base35_;
  Rsh_Fir_reg_guard35_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args312);
  // if guard35 then L361() else L362()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard35_)) {
  // L361()
    goto L361_;
  } else {
  // L362()
    goto L362_;
  }

L361_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L363() else D114()
  // L363()
  goto L363_;

L362_:;
  // r207 = dyn base35(<sym x>, "row.names")
  SEXP Rsh_Fir_array_args313[2];
  Rsh_Fir_array_args313[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args313[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names96[2];
  Rsh_Fir_array_arg_names96[0] = R_MissingArg;
  Rsh_Fir_array_arg_names96[1] = R_MissingArg;
  Rsh_Fir_reg_r207_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base35_, 2, Rsh_Fir_array_args313, Rsh_Fir_array_arg_names96, CCP, RHO);
  // goto L78(r207)
  // L78(r207)
  Rsh_Fir_reg_r208_ = Rsh_Fir_reg_r207_;
  goto L78_;

D114_:;
  // deopt 419 [x23]
  SEXP Rsh_Fir_array_deopt_stack103[1];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(419, 1, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L363_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r209 = dyn attr2(x24, "row.names")
  SEXP Rsh_Fir_array_args315[2];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args315[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names97[2];
  Rsh_Fir_array_arg_names97[0] = R_MissingArg;
  Rsh_Fir_array_arg_names97[1] = R_MissingArg;
  Rsh_Fir_reg_r209_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args315, Rsh_Fir_array_arg_names97, CCP, RHO);
  // check L364() else D115()
  // L364()
  goto L364_;

D115_:;
  // deopt 423 [r209]
  SEXP Rsh_Fir_array_deopt_stack104[1];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_r209_;
  Rsh_Fir_deopt(423, 1, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L364_:;
  // goto L78(r209)
  // L78(r209)
  Rsh_Fir_reg_r208_ = Rsh_Fir_reg_r209_;
  goto L78_;

L365_:;
  // rows6 = ld rows
  Rsh_Fir_reg_rows6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L367() else D116()
  // L367()
  goto L367_;

L366_:;
  // r210 = dyn base36(<sym rows>)
  SEXP Rsh_Fir_array_args316[1];
  Rsh_Fir_array_args316[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names98[1];
  Rsh_Fir_array_arg_names98[0] = R_MissingArg;
  Rsh_Fir_reg_r210_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base36_, 1, Rsh_Fir_array_args316, Rsh_Fir_array_arg_names98, CCP, RHO);
  // goto L79(r210)
  // L79(r210)
  Rsh_Fir_reg_r211_ = Rsh_Fir_reg_r210_;
  goto L79_;

D116_:;
  // deopt 427 [rows6]
  SEXP Rsh_Fir_array_deopt_stack105[1];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_Fir_reg_rows6_;
  Rsh_Fir_deopt(427, 1, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L367_:;
  // rows7 = force? rows6
  Rsh_Fir_reg_rows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows6_);
  // checkMissing(rows7)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_rows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r212 = dyn length6(rows7)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_rows7_;
  SEXP Rsh_Fir_array_arg_names99[1];
  Rsh_Fir_array_arg_names99[0] = R_MissingArg;
  Rsh_Fir_reg_r212_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args318, Rsh_Fir_array_arg_names99, CCP, RHO);
  // check L368() else D117()
  // L368()
  goto L368_;

D117_:;
  // deopt 430 [r212]
  SEXP Rsh_Fir_array_deopt_stack106[1];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_Fir_reg_r212_;
  Rsh_Fir_deopt(430, 1, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L368_:;
  // goto L79(r212)
  // L79(r212)
  Rsh_Fir_reg_r211_ = Rsh_Fir_reg_r212_;
  goto L79_;

L370_:;
  // nrows16 = ld nrows
  Rsh_Fir_reg_nrows16_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L372() else D118()
  // L372()
  goto L372_;

L371_:;
  // r214 = dyn base37(<sym nrows>)
  SEXP Rsh_Fir_array_args319[1];
  Rsh_Fir_array_args319[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names100[1];
  Rsh_Fir_array_arg_names100[0] = R_MissingArg;
  Rsh_Fir_reg_r214_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base37_, 1, Rsh_Fir_array_args319, Rsh_Fir_array_arg_names100, CCP, RHO);
  // goto L81(r214)
  // L81(r214)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r214_;
  goto L81_;

D118_:;
  // deopt 435 [nrows16]
  SEXP Rsh_Fir_array_deopt_stack107[1];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_nrows16_;
  Rsh_Fir_deopt(435, 1, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L372_:;
  // nrows17 = force? nrows16
  Rsh_Fir_reg_nrows17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows16_);
  // checkMissing(nrows17)
  SEXP Rsh_Fir_array_args320[1];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_nrows17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty()));
  // r216 = seq_len(nrows17)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_nrows17_;
  Rsh_Fir_reg_r216_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args321);
  // goto L81(r216)
  // L81(r216)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r216_;
  goto L81_;

L373_:;
  // dr18 = tryDispatchBuiltin.1("[", r215)
  SEXP Rsh_Fir_array_args322[2];
  Rsh_Fir_array_args322[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args322[1] = Rsh_Fir_reg_r215_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args322);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty());
  // if dc9 then L375() else L374(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L375()
    goto L375_;
  } else {
  // L374(dr18)
    Rsh_Fir_reg_r218_ = Rsh_Fir_reg_dr18_;
    goto L374_;
  }

L374_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L376() else D119()
  // L376()
  goto L376_;

L375_:;
  // dx29 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args324[1];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args324, Rsh_Fir_param_types_empty());
  // goto L82(dx29)
  // L82(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L82_;

D119_:;
  // deopt 438 [r218, i15]
  SEXP Rsh_Fir_array_deopt_stack108[2];
  Rsh_Fir_array_deopt_stack108[0] = Rsh_Fir_reg_r218_;
  Rsh_Fir_array_deopt_stack108[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(438, 2, Rsh_Fir_array_deopt_stack108, CCP, RHO);
  return R_NilValue;

L376_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r219 = dyn __6(r218, i16)
  SEXP Rsh_Fir_array_args325[2];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_r218_;
  Rsh_Fir_array_args325[1] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names101[2];
  Rsh_Fir_array_arg_names101[0] = R_MissingArg;
  Rsh_Fir_array_arg_names101[1] = R_MissingArg;
  Rsh_Fir_reg_r219_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args325, Rsh_Fir_array_arg_names101, CCP, RHO);
  // goto L82(r219)
  // L82(r219)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r219_;
  goto L82_;

L377_:;
  // iseq = ld iseq
  Rsh_Fir_reg_iseq = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L379() else D120()
  // L379()
  goto L379_;

L378_:;
  // r220 = dyn base38(<sym iseq>)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names102[1];
  Rsh_Fir_array_arg_names102[0] = R_MissingArg;
  Rsh_Fir_reg_r220_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base38_, 1, Rsh_Fir_array_args326, Rsh_Fir_array_arg_names102, CCP, RHO);
  // goto L83(r220)
  // L83(r220)
  Rsh_Fir_reg_r221_ = Rsh_Fir_reg_r220_;
  goto L83_;

D120_:;
  // deopt 444 [iseq]
  SEXP Rsh_Fir_array_deopt_stack109[1];
  Rsh_Fir_array_deopt_stack109[0] = Rsh_Fir_reg_iseq;
  Rsh_Fir_deopt(444, 1, Rsh_Fir_array_deopt_stack109, CCP, RHO);
  return R_NilValue;

L379_:;
  // iseq1 = force? iseq
  Rsh_Fir_reg_iseq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq);
  // checkMissing(iseq1)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_iseq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args327, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r222 = dyn anyNA(iseq1)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_iseq1_;
  SEXP Rsh_Fir_array_arg_names103[1];
  Rsh_Fir_array_arg_names103[0] = R_MissingArg;
  Rsh_Fir_reg_r222_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args328, Rsh_Fir_array_arg_names103, CCP, RHO);
  // check L380() else D121()
  // L380()
  goto L380_;

D121_:;
  // deopt 447 [r222]
  SEXP Rsh_Fir_array_deopt_stack110[1];
  Rsh_Fir_array_deopt_stack110[0] = Rsh_Fir_reg_r222_;
  Rsh_Fir_deopt(447, 1, Rsh_Fir_array_deopt_stack110, CCP, RHO);
  return R_NilValue;

L380_:;
  // goto L83(r222)
  // L83(r222)
  Rsh_Fir_reg_r221_ = Rsh_Fir_reg_r222_;
  goto L83_;

L381_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L382() else D122()
  // L382()
  goto L382_;

D122_:;
  // deopt 449 []
  Rsh_Fir_deopt(449, 0, NULL, CCP, RHO);
  return R_NilValue;

L382_:;
  // r223 = dyn stop3("non-existent rows not allowed")
  SEXP Rsh_Fir_array_args329[1];
  Rsh_Fir_array_args329[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names104[1];
  Rsh_Fir_array_arg_names104[0] = R_MissingArg;
  Rsh_Fir_reg_r223_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args329, Rsh_Fir_array_arg_names104, CCP, RHO);
  // check L383() else D123()
  // L383()
  goto L383_;

D123_:;
  // deopt 451 [r223]
  SEXP Rsh_Fir_array_deopt_stack111[1];
  Rsh_Fir_array_deopt_stack111[0] = Rsh_Fir_reg_r223_;
  Rsh_Fir_deopt(451, 1, Rsh_Fir_array_deopt_stack111, CCP, RHO);
  return R_NilValue;

L383_:;
  // goto L85()
  // L85()
  goto L85_;

L385_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L387() else D124()
  // L387()
  goto L387_;

L386_:;
  // r225 = dyn base39(<sym j>)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names105[1];
  Rsh_Fir_array_arg_names105[0] = R_MissingArg;
  Rsh_Fir_reg_r225_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base39_, 1, Rsh_Fir_array_args330, Rsh_Fir_array_arg_names105, CCP, RHO);
  // goto L86(r225)
  // L86(r225)
  Rsh_Fir_reg_r226_ = Rsh_Fir_reg_r225_;
  goto L86_;

D124_:;
  // deopt 455 [j1]
  SEXP Rsh_Fir_array_deopt_stack112[1];
  Rsh_Fir_array_deopt_stack112[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(455, 1, Rsh_Fir_array_deopt_stack112, CCP, RHO);
  return R_NilValue;

L387_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args331, Rsh_Fir_param_types_empty()));
  // c95 = `is.character`(j2)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_c95_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args332);
  // goto L86(c95)
  // L86(c95)
  Rsh_Fir_reg_r226_ = Rsh_Fir_reg_c95_;
  goto L86_;

L388_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L389() else D125()
  // L389()
  goto L389_;

D125_:;
  // deopt 459 []
  Rsh_Fir_deopt(459, 0, NULL, CCP, RHO);
  return R_NilValue;

L389_:;
  // p20 = prom<V +>{
  //   j3 = ld j;
  //   j4 = force? j3;
  //   checkMissing(j4);
  //   return j4;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_20, 0, NULL, CCP, RHO);
  // r228 = dyn _in_1("", p20)
  SEXP Rsh_Fir_array_args334[2];
  Rsh_Fir_array_args334[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args334[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names106[2];
  Rsh_Fir_array_arg_names106[0] = R_MissingArg;
  Rsh_Fir_array_arg_names106[1] = R_MissingArg;
  Rsh_Fir_reg_r228_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args334, Rsh_Fir_array_arg_names106, CCP, RHO);
  // check L390() else D126()
  // L390()
  goto L390_;

D126_:;
  // deopt 462 [r228]
  SEXP Rsh_Fir_array_deopt_stack113[1];
  Rsh_Fir_array_deopt_stack113[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_deopt(462, 1, Rsh_Fir_array_deopt_stack113, CCP, RHO);
  return R_NilValue;

L390_:;
  // c97 = `as.logical`(r228)
  SEXP Rsh_Fir_array_args335[1];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_r228_;
  Rsh_Fir_reg_c97_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args335);
  // if c97 then L391() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c97_)) {
  // L391()
    goto L391_;
  } else {
  // L88()
    goto L88_;
  }

L391_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L392() else D127()
  // L392()
  goto L392_;

D127_:;
  // deopt 464 []
  Rsh_Fir_deopt(464, 0, NULL, CCP, RHO);
  return R_NilValue;

L392_:;
  // r229 = dyn stop4("column name \"\" cannot match any column")
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names107[1];
  Rsh_Fir_array_arg_names107[0] = R_MissingArg;
  Rsh_Fir_reg_r229_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args336, Rsh_Fir_array_arg_names107, CCP, RHO);
  // check L393() else D128()
  // L393()
  goto L393_;

D128_:;
  // deopt 466 [r229]
  SEXP Rsh_Fir_array_deopt_stack114[1];
  Rsh_Fir_array_deopt_stack114[0] = Rsh_Fir_reg_r229_;
  Rsh_Fir_deopt(466, 1, Rsh_Fir_array_deopt_stack114, CCP, RHO);
  return R_NilValue;

L393_:;
  // goto L89()
  // L89()
  goto L89_;

L395_:;
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L397() else D129()
  // L397()
  goto L397_;

L396_:;
  // r231 = dyn base40(<sym j>, <lang names(x)>)
  SEXP Rsh_Fir_array_args337[2];
  Rsh_Fir_array_args337[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args337[1] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names108[2];
  Rsh_Fir_array_arg_names108[0] = R_MissingArg;
  Rsh_Fir_array_arg_names108[1] = R_MissingArg;
  Rsh_Fir_reg_r231_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base40_, 2, Rsh_Fir_array_args337, Rsh_Fir_array_arg_names108, CCP, RHO);
  // goto L90(r231)
  // L90(r231)
  Rsh_Fir_reg_r232_ = Rsh_Fir_reg_r231_;
  goto L90_;

D129_:;
  // deopt 471 [j5]
  SEXP Rsh_Fir_array_deopt_stack115[1];
  Rsh_Fir_array_deopt_stack115[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_deopt(471, 1, Rsh_Fir_array_deopt_stack115, CCP, RHO);
  return R_NilValue;

L397_:;
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty()));
  // sym41 = ldf names
  Rsh_Fir_reg_sym41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base41 = ldf names in base
  Rsh_Fir_reg_base41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard41 = `==`.4(sym41, base41)
  SEXP Rsh_Fir_array_args339[2];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_sym41_;
  Rsh_Fir_array_args339[1] = Rsh_Fir_reg_base41_;
  Rsh_Fir_reg_guard41_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args339);
  // if guard41 then L398() else L399()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard41_)) {
  // L398()
    goto L398_;
  } else {
  // L399()
    goto L399_;
  }

L398_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L400() else D130()
  // L400()
  goto L400_;

L399_:;
  // r233 = dyn base41(<sym x>)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names109[1];
  Rsh_Fir_array_arg_names109[0] = R_MissingArg;
  Rsh_Fir_reg_r233_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base41_, 1, Rsh_Fir_array_args340, Rsh_Fir_array_arg_names109, CCP, RHO);
  // goto L91(r233)
  // L91(r233)
  Rsh_Fir_reg_r234_ = Rsh_Fir_reg_r233_;
  goto L91_;

D130_:;
  // deopt 475 [x25]
  SEXP Rsh_Fir_array_deopt_stack116[1];
  Rsh_Fir_array_deopt_stack116[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(475, 1, Rsh_Fir_array_deopt_stack116, CCP, RHO);
  return R_NilValue;

L400_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args341[1];
  Rsh_Fir_array_args341[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args341, Rsh_Fir_param_types_empty()));
  // names5 = ldf names in base
  Rsh_Fir_reg_names5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r235 = dyn names5(x26)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_array_arg_names110[1];
  Rsh_Fir_array_arg_names110[0] = R_MissingArg;
  Rsh_Fir_reg_r235_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names5_, 1, Rsh_Fir_array_args342, Rsh_Fir_array_arg_names110, CCP, RHO);
  // check L401() else D131()
  // L401()
  goto L401_;

D131_:;
  // deopt 478 [r235]
  SEXP Rsh_Fir_array_deopt_stack117[1];
  Rsh_Fir_array_deopt_stack117[0] = Rsh_Fir_reg_r235_;
  Rsh_Fir_deopt(478, 1, Rsh_Fir_array_deopt_stack117, CCP, RHO);
  return R_NilValue;

L401_:;
  // goto L91(r235)
  // L91(r235)
  Rsh_Fir_reg_r234_ = Rsh_Fir_reg_r235_;
  goto L91_;

D132_:;
  // deopt 482 [r236]
  SEXP Rsh_Fir_array_deopt_stack118[1];
  Rsh_Fir_array_deopt_stack118[0] = Rsh_Fir_reg_r236_;
  Rsh_Fir_deopt(482, 1, Rsh_Fir_array_deopt_stack118, CCP, RHO);
  return R_NilValue;

L402_:;
  // goto L90(r236)
  // L90(r236)
  Rsh_Fir_reg_r232_ = Rsh_Fir_reg_r236_;
  goto L90_;

L403_:;
  // jseq = ld jseq
  Rsh_Fir_reg_jseq = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L405() else D133()
  // L405()
  goto L405_;

L404_:;
  // r237 = dyn base42(<sym jseq>)
  SEXP Rsh_Fir_array_args343[1];
  Rsh_Fir_array_args343[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names111[1];
  Rsh_Fir_array_arg_names111[0] = R_MissingArg;
  Rsh_Fir_reg_r237_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base42_, 1, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names111, CCP, RHO);
  // goto L92(r237)
  // L92(r237)
  Rsh_Fir_reg_r238_ = Rsh_Fir_reg_r237_;
  goto L92_;

D133_:;
  // deopt 486 [jseq]
  SEXP Rsh_Fir_array_deopt_stack119[1];
  Rsh_Fir_array_deopt_stack119[0] = Rsh_Fir_reg_jseq;
  Rsh_Fir_deopt(486, 1, Rsh_Fir_array_deopt_stack119, CCP, RHO);
  return R_NilValue;

L405_:;
  // jseq1 = force? jseq
  Rsh_Fir_reg_jseq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq);
  // checkMissing(jseq1)
  SEXP Rsh_Fir_array_args344[1];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_jseq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r239 = dyn anyNA1(jseq1)
  SEXP Rsh_Fir_array_args345[1];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_jseq1_;
  SEXP Rsh_Fir_array_arg_names112[1];
  Rsh_Fir_array_arg_names112[0] = R_MissingArg;
  Rsh_Fir_reg_r239_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args345, Rsh_Fir_array_arg_names112, CCP, RHO);
  // check L406() else D134()
  // L406()
  goto L406_;

D134_:;
  // deopt 489 [r239]
  SEXP Rsh_Fir_array_deopt_stack120[1];
  Rsh_Fir_array_deopt_stack120[0] = Rsh_Fir_reg_r239_;
  Rsh_Fir_deopt(489, 1, Rsh_Fir_array_deopt_stack120, CCP, RHO);
  return R_NilValue;

L406_:;
  // goto L92(r239)
  // L92(r239)
  Rsh_Fir_reg_r238_ = Rsh_Fir_reg_r239_;
  goto L92_;

L407_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L408() else D135()
  // L408()
  goto L408_;

D135_:;
  // deopt 491 []
  Rsh_Fir_deopt(491, 0, NULL, CCP, RHO);
  return R_NilValue;

L408_:;
  // p22 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p21 = prom<V +>{
  //     j7 = ld j;
  //     j8 = force? j7;
  //     checkMissing(j8);
  //     c99 = `is.object`(j8);
  //     if c99 then L2() else L3(j8);
  //   L0(dx32):
  //     return dx32;
  //   L2():
  //     dr20 = tryDispatchBuiltin.1("[", j8);
  //     dc10 = getTryDispatchBuiltinDispatched(dr20);
  //     if dc10 then L4() else L3(dr20);
  //   L3(j10):
  //     sym43 = ldf `is.na`;
  //     base43 = ldf `is.na` in base;
  //     guard43 = `==`.4(sym43, base43);
  //     if guard43 then L5() else L6();
  //   L1(j13, r241):
  //     __7 = ldf `[` in base;
  //     r243 = dyn __7(j13, r241);
  //     goto L0(r243);
  //   L4():
  //     dx31 = getTryDispatchBuiltinValue(dr20);
  //     goto L0(dx31);
  //   L5():
  //     jseq2 = ld jseq;
  //     jseq3 = force? jseq2;
  //     checkMissing(jseq3);
  //     is_na1 = ldf `is.na` in base;
  //     r242 = dyn is_na1(jseq3);
  //     goto L1(j10, r242);
  //   L6():
  //     r240 = dyn base43(<sym jseq>);
  //     goto L1(j10, r240);
  //   };
  //   r245 = dyn gettextf("replacing element in non-existent column: %s", p21);
  //   return r245;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_21, 0, NULL, CCP, RHO);
  // r247 = dyn stop5[, domain](p22, NA_LGL)
  SEXP Rsh_Fir_array_args357[2];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args357[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names117[2];
  Rsh_Fir_array_arg_names117[0] = R_MissingArg;
  Rsh_Fir_array_arg_names117[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r247_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 2, Rsh_Fir_array_args357, Rsh_Fir_array_arg_names117, CCP, RHO);
  // check L409() else D136()
  // L409()
  goto L409_;

D136_:;
  // deopt 495 [r247]
  SEXP Rsh_Fir_array_deopt_stack121[1];
  Rsh_Fir_array_deopt_stack121[0] = Rsh_Fir_reg_r247_;
  Rsh_Fir_deopt(495, 1, Rsh_Fir_array_deopt_stack121, CCP, RHO);
  return R_NilValue;

L409_:;
  // goto L94(r247)
  // L94(r247)
  Rsh_Fir_reg_r248_ = Rsh_Fir_reg_r247_;
  goto L94_;

L412_:;
  // j14 = ld j
  Rsh_Fir_reg_j14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L414() else D137()
  // L414()
  goto L414_;

L413_:;
  // r250 = dyn base44(<sym j>)
  SEXP Rsh_Fir_array_args358[1];
  Rsh_Fir_array_args358[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names118[1];
  Rsh_Fir_array_arg_names118[0] = R_MissingArg;
  Rsh_Fir_reg_r250_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base44_, 1, Rsh_Fir_array_args358, Rsh_Fir_array_arg_names118, CCP, RHO);
  // goto L96(r250)
  // L96(r250)
  Rsh_Fir_reg_r251_ = Rsh_Fir_reg_r250_;
  goto L96_;

D137_:;
  // deopt 499 [j14]
  SEXP Rsh_Fir_array_deopt_stack122[1];
  Rsh_Fir_array_deopt_stack122[0] = Rsh_Fir_reg_j14_;
  Rsh_Fir_deopt(499, 1, Rsh_Fir_array_deopt_stack122, CCP, RHO);
  return R_NilValue;

L414_:;
  // j15 = force? j14
  Rsh_Fir_reg_j15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j14_);
  // checkMissing(j15)
  SEXP Rsh_Fir_array_args359[1];
  Rsh_Fir_array_args359[0] = Rsh_Fir_reg_j15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args359, Rsh_Fir_param_types_empty()));
  // c100 = `is.logical`(j15)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_j15_;
  Rsh_Fir_reg_c100_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args360);
  // goto L96(c100)
  // L96(c100)
  Rsh_Fir_reg_r251_ = Rsh_Fir_reg_c100_;
  goto L96_;

L415_:;
  // sym45 = ldf min
  Rsh_Fir_reg_sym45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base45 = ldf min in base
  Rsh_Fir_reg_base45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard45 = `==`.4(sym45, base45)
  SEXP Rsh_Fir_array_args361[2];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_sym45_;
  Rsh_Fir_array_args361[1] = Rsh_Fir_reg_base45_;
  Rsh_Fir_reg_guard45_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args361);
  // if guard45 then L416() else L417()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard45_)) {
  // L416()
    goto L416_;
  } else {
  // L417()
    goto L417_;
  }

L416_:;
  // j16 = ld j
  Rsh_Fir_reg_j16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L418() else D138()
  // L418()
  goto L418_;

L417_:;
  // r252 = dyn base45(<sym j>)
  SEXP Rsh_Fir_array_args362[1];
  Rsh_Fir_array_args362[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names119[1];
  Rsh_Fir_array_arg_names119[0] = R_MissingArg;
  Rsh_Fir_reg_r252_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base45_, 1, Rsh_Fir_array_args362, Rsh_Fir_array_arg_names119, CCP, RHO);
  // goto L98(c101, r252)
  // L98(c101, r252)
  Rsh_Fir_reg_c106_ = Rsh_Fir_reg_c101_;
  Rsh_Fir_reg_r253_ = Rsh_Fir_reg_r252_;
  goto L98_;

D138_:;
  // deopt 504 [c101, j16]
  SEXP Rsh_Fir_array_deopt_stack123[2];
  Rsh_Fir_array_deopt_stack123[0] = Rsh_Fir_reg_c101_;
  Rsh_Fir_array_deopt_stack123[1] = Rsh_Fir_reg_j16_;
  Rsh_Fir_deopt(504, 2, Rsh_Fir_array_deopt_stack123, CCP, RHO);
  return R_NilValue;

L418_:;
  // j17 = force? j16
  Rsh_Fir_reg_j17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j16_);
  // checkMissing(j17)
  SEXP Rsh_Fir_array_args363[1];
  Rsh_Fir_array_args363[0] = Rsh_Fir_reg_j17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args363, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // r254 = dyn min(j17)
  SEXP Rsh_Fir_array_args364[1];
  Rsh_Fir_array_args364[0] = Rsh_Fir_reg_j17_;
  SEXP Rsh_Fir_array_arg_names120[1];
  Rsh_Fir_array_arg_names120[0] = R_MissingArg;
  Rsh_Fir_reg_r254_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args364, Rsh_Fir_array_arg_names120, CCP, RHO);
  // check L419() else D139()
  // L419()
  goto L419_;

D139_:;
  // deopt 507 [c101, r254]
  SEXP Rsh_Fir_array_deopt_stack124[2];
  Rsh_Fir_array_deopt_stack124[0] = Rsh_Fir_reg_c101_;
  Rsh_Fir_array_deopt_stack124[1] = Rsh_Fir_reg_r254_;
  Rsh_Fir_deopt(507, 2, Rsh_Fir_array_deopt_stack124, CCP, RHO);
  return R_NilValue;

L419_:;
  // goto L98(c101, r254)
  // L98(c101, r254)
  Rsh_Fir_reg_c106_ = Rsh_Fir_reg_c101_;
  Rsh_Fir_reg_r253_ = Rsh_Fir_reg_r254_;
  goto L98_;

L421_:;
  // sym46 = ldf seq_along
  Rsh_Fir_reg_sym46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 96), RHO);
  // base46 = ldf seq_along in base
  Rsh_Fir_reg_base46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 96), RHO);
  // guard46 = `==`.4(sym46, base46)
  SEXP Rsh_Fir_array_args365[2];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_sym46_;
  Rsh_Fir_array_args365[1] = Rsh_Fir_reg_base46_;
  Rsh_Fir_reg_guard46_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args365);
  // if guard46 then L422() else L423()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard46_)) {
  // L422()
    goto L422_;
  } else {
  // L423()
    goto L423_;
  }

L422_:;
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L424() else D140()
  // L424()
  goto L424_;

L423_:;
  // r256 = dyn base46(<sym x>)
  SEXP Rsh_Fir_array_args366[1];
  Rsh_Fir_array_args366[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names121[1];
  Rsh_Fir_array_arg_names121[0] = R_MissingArg;
  Rsh_Fir_reg_r256_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base46_, 1, Rsh_Fir_array_args366, Rsh_Fir_array_arg_names121, CCP, RHO);
  // goto L100(r256)
  // L100(r256)
  Rsh_Fir_reg_r257_ = Rsh_Fir_reg_r256_;
  goto L100_;

D140_:;
  // deopt 512 [x27]
  SEXP Rsh_Fir_array_deopt_stack125[1];
  Rsh_Fir_array_deopt_stack125[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_deopt(512, 1, Rsh_Fir_array_deopt_stack125, CCP, RHO);
  return R_NilValue;

L424_:;
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args367, Rsh_Fir_param_types_empty()));
  // r258 = seq_along(x28)
  SEXP Rsh_Fir_array_args368[1];
  Rsh_Fir_array_args368[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_r258_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args368);
  // goto L100(r258)
  // L100(r258)
  Rsh_Fir_reg_r257_ = Rsh_Fir_reg_r258_;
  goto L100_;

L425_:;
  // dr22 = tryDispatchBuiltin.1("[", r257)
  SEXP Rsh_Fir_array_args369[2];
  Rsh_Fir_array_args369[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args369[1] = Rsh_Fir_reg_r257_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args369);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args370[1];
  Rsh_Fir_array_args370[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args370, Rsh_Fir_param_types_empty());
  // if dc11 then L427() else L426(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L427()
    goto L427_;
  } else {
  // L426(dr22)
    Rsh_Fir_reg_r260_ = Rsh_Fir_reg_dr22_;
    goto L426_;
  }

L426_:;
  // j18 = ld j
  Rsh_Fir_reg_j18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L428() else D141()
  // L428()
  goto L428_;

L427_:;
  // dx33 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty());
  // goto L101(dx33)
  // L101(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L101_;

D141_:;
  // deopt 515 [r260, j18]
  SEXP Rsh_Fir_array_deopt_stack126[2];
  Rsh_Fir_array_deopt_stack126[0] = Rsh_Fir_reg_r260_;
  Rsh_Fir_array_deopt_stack126[1] = Rsh_Fir_reg_j18_;
  Rsh_Fir_deopt(515, 2, Rsh_Fir_array_deopt_stack126, CCP, RHO);
  return R_NilValue;

L428_:;
  // j19 = force? j18
  Rsh_Fir_reg_j19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j18_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r261 = dyn __8(r260, j19)
  SEXP Rsh_Fir_array_args372[2];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_r260_;
  Rsh_Fir_array_args372[1] = Rsh_Fir_reg_j19_;
  SEXP Rsh_Fir_array_arg_names122[2];
  Rsh_Fir_array_arg_names122[0] = R_MissingArg;
  Rsh_Fir_array_arg_names122[1] = R_MissingArg;
  Rsh_Fir_reg_r261_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args372, Rsh_Fir_array_arg_names122, CCP, RHO);
  // goto L101(r261)
  // L101(r261)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r261_;
  goto L101_;

D142_:;
  // deopt 519 [j20]
  SEXP Rsh_Fir_array_deopt_stack127[1];
  Rsh_Fir_array_deopt_stack127[0] = Rsh_Fir_reg_j20_;
  Rsh_Fir_deopt(519, 1, Rsh_Fir_array_deopt_stack127, CCP, RHO);
  return R_NilValue;

L430_:;
  // j21 = force? j20
  Rsh_Fir_reg_j21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j20_);
  // checkMissing(j21)
  SEXP Rsh_Fir_array_args373[1];
  Rsh_Fir_array_args373[0] = Rsh_Fir_reg_j21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args373, Rsh_Fir_param_types_empty()));
  // st jseq = j21
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_j21_, RHO);
  (void)(Rsh_Fir_reg_j21_);
  // sym47 = ldf max
  Rsh_Fir_reg_sym47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // base47 = ldf max in base
  Rsh_Fir_reg_base47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // guard47 = `==`.4(sym47, base47)
  SEXP Rsh_Fir_array_args374[2];
  Rsh_Fir_array_args374[0] = Rsh_Fir_reg_sym47_;
  Rsh_Fir_array_args374[1] = Rsh_Fir_reg_base47_;
  Rsh_Fir_reg_guard47_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args374);
  // if guard47 then L431() else L432()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard47_)) {
  // L431()
    goto L431_;
  } else {
  // L432()
    goto L432_;
  }

L431_:;
  // jseq4 = ld jseq
  Rsh_Fir_reg_jseq4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L433() else D143()
  // L433()
  goto L433_;

L432_:;
  // r262 = dyn base47(<sym jseq>)
  SEXP Rsh_Fir_array_args375[1];
  Rsh_Fir_array_args375[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names123[1];
  Rsh_Fir_array_arg_names123[0] = R_MissingArg;
  Rsh_Fir_reg_r262_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base47_, 1, Rsh_Fir_array_args375, Rsh_Fir_array_arg_names123, CCP, RHO);
  // goto L102(r262)
  // L102(r262)
  Rsh_Fir_reg_r263_ = Rsh_Fir_reg_r262_;
  goto L102_;

D143_:;
  // deopt 524 [jseq4]
  SEXP Rsh_Fir_array_deopt_stack128[1];
  Rsh_Fir_array_deopt_stack128[0] = Rsh_Fir_reg_jseq4_;
  Rsh_Fir_deopt(524, 1, Rsh_Fir_array_deopt_stack128, CCP, RHO);
  return R_NilValue;

L433_:;
  // jseq5 = force? jseq4
  Rsh_Fir_reg_jseq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq4_);
  // checkMissing(jseq5)
  SEXP Rsh_Fir_array_args376[1];
  Rsh_Fir_array_args376[0] = Rsh_Fir_reg_jseq5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args376, Rsh_Fir_param_types_empty()));
  // max1 = ldf max in base
  Rsh_Fir_reg_max1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // r264 = dyn max1(jseq5)
  SEXP Rsh_Fir_array_args377[1];
  Rsh_Fir_array_args377[0] = Rsh_Fir_reg_jseq5_;
  SEXP Rsh_Fir_array_arg_names124[1];
  Rsh_Fir_array_arg_names124[0] = R_MissingArg;
  Rsh_Fir_reg_r264_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max1_, 1, Rsh_Fir_array_args377, Rsh_Fir_array_arg_names124, CCP, RHO);
  // check L434() else D144()
  // L434()
  goto L434_;

D144_:;
  // deopt 527 [r264]
  SEXP Rsh_Fir_array_deopt_stack129[1];
  Rsh_Fir_array_deopt_stack129[0] = Rsh_Fir_reg_r264_;
  Rsh_Fir_deopt(527, 1, Rsh_Fir_array_deopt_stack129, CCP, RHO);
  return R_NilValue;

L434_:;
  // goto L102(r264)
  // L102(r264)
  Rsh_Fir_reg_r263_ = Rsh_Fir_reg_r264_;
  goto L102_;

D145_:;
  // deopt 527 [r263, nvars]
  SEXP Rsh_Fir_array_deopt_stack130[2];
  Rsh_Fir_array_deopt_stack130[0] = Rsh_Fir_reg_r263_;
  Rsh_Fir_array_deopt_stack130[1] = Rsh_Fir_reg_nvars;
  Rsh_Fir_deopt(527, 2, Rsh_Fir_array_deopt_stack130, CCP, RHO);
  return R_NilValue;

L435_:;
  // nvars1 = force? nvars
  Rsh_Fir_reg_nvars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nvars);
  // checkMissing(nvars1)
  SEXP Rsh_Fir_array_args378[1];
  Rsh_Fir_array_args378[0] = Rsh_Fir_reg_nvars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args378, Rsh_Fir_param_types_empty()));
  // r265 = `>`(r263, nvars1)
  SEXP Rsh_Fir_array_args379[2];
  Rsh_Fir_array_args379[0] = Rsh_Fir_reg_r263_;
  Rsh_Fir_array_args379[1] = Rsh_Fir_reg_nvars1_;
  Rsh_Fir_reg_r265_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args379);
  // c112 = `as.logical`(r265)
  SEXP Rsh_Fir_array_args380[1];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_r265_;
  Rsh_Fir_reg_c112_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args380);
  // if c112 then L436() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c112_)) {
  // L436()
    goto L436_;
  } else {
  // L103()
    goto L103_;
  }

L436_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L437() else D146()
  // L437()
  goto L437_;

D146_:;
  // deopt 531 []
  Rsh_Fir_deopt(531, 0, NULL, CCP, RHO);
  return R_NilValue;

L437_:;
  // p24 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p23 = prom<V +>{
  //     jseq6 = ld jseq;
  //     jseq7 = force? jseq6;
  //     checkMissing(jseq7);
  //     c113 = `is.object`(jseq7);
  //     if c113 then L1() else L2(jseq7);
  //   L0(dx36):
  //     return dx36;
  //   L1():
  //     dr24 = tryDispatchBuiltin.1("[", jseq7);
  //     dc12 = getTryDispatchBuiltinDispatched(dr24);
  //     if dc12 then L3() else L2(dr24);
  //   L2(jseq9):
  //     jseq10 = ld jseq;
  //     jseq11 = force? jseq10;
  //     checkMissing(jseq11);
  //     nvars2 = ld nvars;
  //     nvars3 = force? nvars2;
  //     checkMissing(nvars3);
  //     r266 = `>`(jseq11, nvars3);
  //     __9 = ldf `[` in base;
  //     r267 = dyn __9(jseq9, r266);
  //     goto L0(r267);
  //   L3():
  //     dx35 = getTryDispatchBuiltinValue(dr24);
  //     goto L0(dx35);
  //   };
  //   r269 = dyn gettextf1("replacing element in non-existent column: %s", p23);
  //   return r269;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_23, 0, NULL, CCP, RHO);
  // r271 = dyn stop6[, domain](p24, NA_LGL)
  SEXP Rsh_Fir_array_args391[2];
  Rsh_Fir_array_args391[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args391[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names127[2];
  Rsh_Fir_array_arg_names127[0] = R_MissingArg;
  Rsh_Fir_array_arg_names127[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r271_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 2, Rsh_Fir_array_args391, Rsh_Fir_array_arg_names127, CCP, RHO);
  // check L438() else D147()
  // L438()
  goto L438_;

D147_:;
  // deopt 535 [r271]
  SEXP Rsh_Fir_array_deopt_stack131[1];
  Rsh_Fir_array_deopt_stack131[0] = Rsh_Fir_reg_r271_;
  Rsh_Fir_deopt(535, 1, Rsh_Fir_array_deopt_stack131, CCP, RHO);
  return R_NilValue;

L438_:;
  // goto L95()
  // L95()
  goto L95_;

L440_:;
  // iseq2 = ld iseq
  Rsh_Fir_reg_iseq2_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L442() else D148()
  // L442()
  goto L442_;

L441_:;
  // r272 = dyn base48(<sym iseq>)
  SEXP Rsh_Fir_array_args392[1];
  Rsh_Fir_array_args392[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names128[1];
  Rsh_Fir_array_arg_names128[0] = R_MissingArg;
  Rsh_Fir_reg_r272_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base48_, 1, Rsh_Fir_array_args392, Rsh_Fir_array_arg_names128, CCP, RHO);
  // goto L104(r272)
  // L104(r272)
  Rsh_Fir_reg_r273_ = Rsh_Fir_reg_r272_;
  goto L104_;

D148_:;
  // deopt 540 [iseq2]
  SEXP Rsh_Fir_array_deopt_stack132[1];
  Rsh_Fir_array_deopt_stack132[0] = Rsh_Fir_reg_iseq2_;
  Rsh_Fir_deopt(540, 1, Rsh_Fir_array_deopt_stack132, CCP, RHO);
  return R_NilValue;

L442_:;
  // iseq3 = force? iseq2
  Rsh_Fir_reg_iseq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq2_);
  // checkMissing(iseq3)
  SEXP Rsh_Fir_array_args393[1];
  Rsh_Fir_array_args393[0] = Rsh_Fir_reg_iseq3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args393, Rsh_Fir_param_types_empty()));
  // length7 = ldf length in base
  Rsh_Fir_reg_length7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r274 = dyn length7(iseq3)
  SEXP Rsh_Fir_array_args394[1];
  Rsh_Fir_array_args394[0] = Rsh_Fir_reg_iseq3_;
  SEXP Rsh_Fir_array_arg_names129[1];
  Rsh_Fir_array_arg_names129[0] = R_MissingArg;
  Rsh_Fir_reg_r274_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length7_, 1, Rsh_Fir_array_args394, Rsh_Fir_array_arg_names129, CCP, RHO);
  // check L443() else D149()
  // L443()
  goto L443_;

D149_:;
  // deopt 543 [r274]
  SEXP Rsh_Fir_array_deopt_stack133[1];
  Rsh_Fir_array_deopt_stack133[0] = Rsh_Fir_reg_r274_;
  Rsh_Fir_deopt(543, 1, Rsh_Fir_array_deopt_stack133, CCP, RHO);
  return R_NilValue;

L443_:;
  // goto L104(r274)
  // L104(r274)
  Rsh_Fir_reg_r273_ = Rsh_Fir_reg_r274_;
  goto L104_;

L444_:;
  // sym49 = ldf length
  Rsh_Fir_reg_sym49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base49 = ldf length in base
  Rsh_Fir_reg_base49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard49 = `==`.4(sym49, base49)
  SEXP Rsh_Fir_array_args395[2];
  Rsh_Fir_array_args395[0] = Rsh_Fir_reg_sym49_;
  Rsh_Fir_array_args395[1] = Rsh_Fir_reg_base49_;
  Rsh_Fir_reg_guard49_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args395);
  // if guard49 then L445() else L446()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard49_)) {
  // L445()
    goto L445_;
  } else {
  // L446()
    goto L446_;
  }

L445_:;
  // jseq12 = ld jseq
  Rsh_Fir_reg_jseq12_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L447() else D150()
  // L447()
  goto L447_;

L446_:;
  // r276 = dyn base49(<sym jseq>)
  SEXP Rsh_Fir_array_args396[1];
  Rsh_Fir_array_args396[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names130[1];
  Rsh_Fir_array_arg_names130[0] = R_MissingArg;
  Rsh_Fir_reg_r276_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base49_, 1, Rsh_Fir_array_args396, Rsh_Fir_array_arg_names130, CCP, RHO);
  // goto L106(c114, r276)
  // L106(c114, r276)
  Rsh_Fir_reg_c119_ = Rsh_Fir_reg_c114_;
  Rsh_Fir_reg_r277_ = Rsh_Fir_reg_r276_;
  goto L106_;

D150_:;
  // deopt 548 [c114, jseq12]
  SEXP Rsh_Fir_array_deopt_stack134[2];
  Rsh_Fir_array_deopt_stack134[0] = Rsh_Fir_reg_c114_;
  Rsh_Fir_array_deopt_stack134[1] = Rsh_Fir_reg_jseq12_;
  Rsh_Fir_deopt(548, 2, Rsh_Fir_array_deopt_stack134, CCP, RHO);
  return R_NilValue;

L447_:;
  // jseq13 = force? jseq12
  Rsh_Fir_reg_jseq13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq12_);
  // checkMissing(jseq13)
  SEXP Rsh_Fir_array_args397[1];
  Rsh_Fir_array_args397[0] = Rsh_Fir_reg_jseq13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args397, Rsh_Fir_param_types_empty()));
  // length8 = ldf length in base
  Rsh_Fir_reg_length8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r278 = dyn length8(jseq13)
  SEXP Rsh_Fir_array_args398[1];
  Rsh_Fir_array_args398[0] = Rsh_Fir_reg_jseq13_;
  SEXP Rsh_Fir_array_arg_names131[1];
  Rsh_Fir_array_arg_names131[0] = R_MissingArg;
  Rsh_Fir_reg_r278_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length8_, 1, Rsh_Fir_array_args398, Rsh_Fir_array_arg_names131, CCP, RHO);
  // check L448() else D151()
  // L448()
  goto L448_;

D151_:;
  // deopt 551 [c114, r278]
  SEXP Rsh_Fir_array_deopt_stack135[2];
  Rsh_Fir_array_deopt_stack135[0] = Rsh_Fir_reg_c114_;
  Rsh_Fir_array_deopt_stack135[1] = Rsh_Fir_reg_r278_;
  Rsh_Fir_deopt(551, 2, Rsh_Fir_array_deopt_stack135, CCP, RHO);
  return R_NilValue;

L448_:;
  // goto L106(c114, r278)
  // L106(c114, r278)
  Rsh_Fir_reg_c119_ = Rsh_Fir_reg_c114_;
  Rsh_Fir_reg_r277_ = Rsh_Fir_reg_r278_;
  goto L106_;

L450_:;
  // stop7 = ldf stop
  Rsh_Fir_reg_stop7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L451() else D152()
  // L451()
  goto L451_;

D152_:;
  // deopt 556 []
  Rsh_Fir_deopt(556, 0, NULL, CCP, RHO);
  return R_NilValue;

L451_:;
  // r280 = dyn stop7("only a single element should be replaced")
  SEXP Rsh_Fir_array_args399[1];
  Rsh_Fir_array_args399[0] = Rsh_const(CCP, 97);
  SEXP Rsh_Fir_array_arg_names132[1];
  Rsh_Fir_array_arg_names132[0] = R_MissingArg;
  Rsh_Fir_reg_r280_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop7_, 1, Rsh_Fir_array_args399, Rsh_Fir_array_arg_names132, CCP, RHO);
  // check L452() else D153()
  // L452()
  goto L452_;

D153_:;
  // deopt 558 [r280]
  SEXP Rsh_Fir_array_deopt_stack136[1];
  Rsh_Fir_array_deopt_stack136[0] = Rsh_Fir_reg_r280_;
  Rsh_Fir_deopt(558, 1, Rsh_Fir_array_deopt_stack136, CCP, RHO);
  return R_NilValue;

L452_:;
  // goto L108()
  // L108()
  goto L108_;

D154_:;
  // deopt 561 [value23]
  SEXP Rsh_Fir_array_deopt_stack137[1];
  Rsh_Fir_array_deopt_stack137[0] = Rsh_Fir_reg_value23_;
  Rsh_Fir_deopt(561, 1, Rsh_Fir_array_deopt_stack137, CCP, RHO);
  return R_NilValue;

L454_:;
  // value24 = force? value23
  Rsh_Fir_reg_value24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value23_);
  // checkMissing(value24)
  SEXP Rsh_Fir_array_args400[1];
  Rsh_Fir_array_args400[0] = Rsh_Fir_reg_value24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args400, Rsh_Fir_param_types_empty()));
  // l18 = ld x
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c124 = `is.object`(l18)
  SEXP Rsh_Fir_array_args401[1];
  Rsh_Fir_array_args401[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c124_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args401);
  // if c124 then L455() else L456(value24, l18, value24, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c124_)) {
  // L455()
    goto L455_;
  } else {
  // L456(value24, l18, value24, l18)
    Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value24_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_value28_ = Rsh_Fir_reg_value24_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l18_;
    goto L456_;
  }

L455_:;
  // dr26 = tryDispatchBuiltin.1("[[", l18)
  SEXP Rsh_Fir_array_args402[2];
  Rsh_Fir_array_args402[0] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args402[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args402);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args403[1];
  Rsh_Fir_array_args403[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args403, Rsh_Fir_param_types_empty());
  // if dc13 then L457() else L456(value24, l18, value24, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L457()
    goto L457_;
  } else {
  // L456(value24, l18, value24, dr26)
    Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value24_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_value28_ = Rsh_Fir_reg_value24_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr26_;
    goto L456_;
  }

L456_:;
  // jseq14 = ld jseq
  Rsh_Fir_reg_jseq14_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L458() else D155()
  // L458()
  goto L458_;

L457_:;
  // dx37 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args404[1];
  Rsh_Fir_array_args404[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args404, Rsh_Fir_param_types_empty());
  // goto L109(value24, l18, value24, dx37)
  // L109(value24, l18, value24, dx37)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value24_;
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_value32_ = Rsh_Fir_reg_value24_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx37_;
  goto L109_;

D155_:;
  // deopt 565 [value27, l21, value28, l22, jseq14]
  SEXP Rsh_Fir_array_deopt_stack138[5];
  Rsh_Fir_array_deopt_stack138[0] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_deopt_stack138[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack138[2] = Rsh_Fir_reg_value28_;
  Rsh_Fir_array_deopt_stack138[3] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack138[4] = Rsh_Fir_reg_jseq14_;
  Rsh_Fir_deopt(565, 5, Rsh_Fir_array_deopt_stack138, CCP, RHO);
  return R_NilValue;

L458_:;
  // jseq15 = force? jseq14
  Rsh_Fir_reg_jseq15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq14_);
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 99), RHO);
  // r282 = dyn __10(l22, jseq15)
  SEXP Rsh_Fir_array_args405[2];
  Rsh_Fir_array_args405[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args405[1] = Rsh_Fir_reg_jseq15_;
  SEXP Rsh_Fir_array_arg_names133[2];
  Rsh_Fir_array_arg_names133[0] = R_MissingArg;
  Rsh_Fir_array_arg_names133[1] = R_MissingArg;
  Rsh_Fir_reg_r282_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args405, Rsh_Fir_array_arg_names133, CCP, RHO);
  // goto L109(value27, l21, value28, r282)
  // L109(value27, l21, value28, r282)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value27_;
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_value32_ = Rsh_Fir_reg_value28_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r282_;
  goto L109_;

L459_:;
  // dr28 = tryDispatchBuiltin.0("[[<-", dx38, value32)
  SEXP Rsh_Fir_array_args406[3];
  Rsh_Fir_array_args406[0] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args406[1] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_array_args406[2] = Rsh_Fir_reg_value32_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args406);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args407[1];
  Rsh_Fir_array_args407[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args407, Rsh_Fir_param_types_empty());
  // if dc14 then L461() else L460(value31, l24, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L461()
    goto L461_;
  } else {
  // L460(value31, l24, dr28)
    Rsh_Fir_reg_value34_ = Rsh_Fir_reg_value31_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dr28_;
    goto L460_;
  }

L460_:;
  // iseq4 = ld iseq
  Rsh_Fir_reg_iseq4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L462() else D156()
  // L462()
  goto L462_;

L461_:;
  // dx41 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args408[1];
  Rsh_Fir_array_args408[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args408, Rsh_Fir_param_types_empty());
  // goto L110(value31, l24, dx41)
  // L110(value31, l24, dx41)
  Rsh_Fir_reg_value36_ = Rsh_Fir_reg_value31_;
  Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx41_;
  goto L110_;

D156_:;
  // deopt 569 [value34, l26, dx40, value32, iseq4]
  SEXP Rsh_Fir_array_deopt_stack139[5];
  Rsh_Fir_array_deopt_stack139[0] = Rsh_Fir_reg_value34_;
  Rsh_Fir_array_deopt_stack139[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack139[2] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_deopt_stack139[3] = Rsh_Fir_reg_value32_;
  Rsh_Fir_array_deopt_stack139[4] = Rsh_Fir_reg_iseq4_;
  Rsh_Fir_deopt(569, 5, Rsh_Fir_array_deopt_stack139, CCP, RHO);
  return R_NilValue;

L462_:;
  // iseq5 = force? iseq4
  Rsh_Fir_reg_iseq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq4_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r283 = dyn ____1(dx40, value32, iseq5)
  SEXP Rsh_Fir_array_args409[3];
  Rsh_Fir_array_args409[0] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_args409[1] = Rsh_Fir_reg_value32_;
  Rsh_Fir_array_args409[2] = Rsh_Fir_reg_iseq5_;
  SEXP Rsh_Fir_array_arg_names134[3];
  Rsh_Fir_array_arg_names134[0] = R_MissingArg;
  Rsh_Fir_array_arg_names134[1] = R_MissingArg;
  Rsh_Fir_array_arg_names134[2] = R_MissingArg;
  Rsh_Fir_reg_r283_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args409, Rsh_Fir_array_arg_names134, CCP, RHO);
  // goto L110(value34, l26, r283)
  // L110(value34, l26, r283)
  Rsh_Fir_reg_value36_ = Rsh_Fir_reg_value34_;
  Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_r283_;
  goto L110_;

L463_:;
  // dr30 = tryDispatchBuiltin.0("[[<-", l28, dx42)
  SEXP Rsh_Fir_array_args410[3];
  Rsh_Fir_array_args410[0] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args410[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args410[2] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args410);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args411[1];
  Rsh_Fir_array_args411[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args411, Rsh_Fir_param_types_empty());
  // if dc15 then L465() else L464(value36, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L465()
    goto L465_;
  } else {
  // L464(value36, dr30)
    Rsh_Fir_reg_value38_ = Rsh_Fir_reg_value36_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_dr30_;
    goto L464_;
  }

L464_:;
  // jseq16 = ld jseq
  Rsh_Fir_reg_jseq16_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L466() else D157()
  // L466()
  goto L466_;

L465_:;
  // dx43 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args412[1];
  Rsh_Fir_array_args412[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args412, Rsh_Fir_param_types_empty());
  // goto L111(dx43)
  // L111(dx43)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx43_;
  goto L111_;

D157_:;
  // deopt 572 [value38, l30, dx42, jseq16]
  SEXP Rsh_Fir_array_deopt_stack140[4];
  Rsh_Fir_array_deopt_stack140[0] = Rsh_Fir_reg_value38_;
  Rsh_Fir_array_deopt_stack140[1] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_deopt_stack140[2] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_deopt_stack140[3] = Rsh_Fir_reg_jseq16_;
  Rsh_Fir_deopt(572, 4, Rsh_Fir_array_deopt_stack140, CCP, RHO);
  return R_NilValue;

L466_:;
  // jseq17 = force? jseq16
  Rsh_Fir_reg_jseq17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq16_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r284 = dyn ____2(l30, dx42, jseq17)
  SEXP Rsh_Fir_array_args413[3];
  Rsh_Fir_array_args413[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args413[1] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_args413[2] = Rsh_Fir_reg_jseq17_;
  SEXP Rsh_Fir_array_arg_names135[3];
  Rsh_Fir_array_arg_names135[0] = R_MissingArg;
  Rsh_Fir_array_arg_names135[1] = R_MissingArg;
  Rsh_Fir_array_arg_names135[2] = R_MissingArg;
  Rsh_Fir_reg_r284_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args413, Rsh_Fir_array_arg_names135, CCP, RHO);
  // goto L111(r284)
  // L111(r284)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_r284_;
  goto L111_;

D158_:;
  // deopt 576 [cl2]
  SEXP Rsh_Fir_array_deopt_stack141[1];
  Rsh_Fir_array_deopt_stack141[0] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(576, 1, Rsh_Fir_array_deopt_stack141, CCP, RHO);
  return R_NilValue;

L467_:;
  // cl3 = force? cl2
  Rsh_Fir_reg_cl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl2_);
  // checkMissing(cl3)
  SEXP Rsh_Fir_array_args414[1];
  Rsh_Fir_array_args414[0] = Rsh_Fir_reg_cl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args414, Rsh_Fir_param_types_empty()));
  // l31 = ld x
  Rsh_Fir_reg_l31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__2 = ldf `class<-`
  Rsh_Fir_reg_class__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L468() else D159()
  // L468()
  goto L468_;

D159_:;
  // deopt 579 [cl3, l31, cl3]
  SEXP Rsh_Fir_array_deopt_stack142[3];
  Rsh_Fir_array_deopt_stack142[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_array_deopt_stack142[1] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack142[2] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_deopt(579, 3, Rsh_Fir_array_deopt_stack142, CCP, RHO);
  return R_NilValue;

L468_:;
  // r285 = dyn class__2(l31, NULL, cl3)
  SEXP Rsh_Fir_array_args415[3];
  Rsh_Fir_array_args415[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args415[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args415[2] = Rsh_Fir_reg_cl3_;
  SEXP Rsh_Fir_array_arg_names136[3];
  Rsh_Fir_array_arg_names136[0] = R_MissingArg;
  Rsh_Fir_array_arg_names136[1] = R_MissingArg;
  Rsh_Fir_array_arg_names136[2] = R_MissingArg;
  Rsh_Fir_reg_r285_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__2_, 3, Rsh_Fir_array_args415, Rsh_Fir_array_arg_names136, CCP, RHO);
  // check L469() else D160()
  // L469()
  goto L469_;

D160_:;
  // deopt 581 [cl3, r285]
  SEXP Rsh_Fir_array_deopt_stack143[2];
  Rsh_Fir_array_deopt_stack143[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_array_deopt_stack143[1] = Rsh_Fir_reg_r285_;
  Rsh_Fir_deopt(581, 2, Rsh_Fir_array_deopt_stack143, CCP, RHO);
  return R_NilValue;

L469_:;
  // st x = r285
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r285_, RHO);
  (void)(Rsh_Fir_reg_r285_);
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L470() else D161()
  // L470()
  goto L470_;

D161_:;
  // deopt 583 [x29]
  SEXP Rsh_Fir_array_deopt_stack144[1];
  Rsh_Fir_array_deopt_stack144[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(583, 1, Rsh_Fir_array_deopt_stack144, CCP, RHO);
  return R_NilValue;

L470_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args416[1];
  Rsh_Fir_array_args416[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args416, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // r4 = dyn sys_call()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r5 = dyn names(r4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r2 = dyn base1(<lang sys.call()>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r9 = dyn c("", "value")
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base2("", "value")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value7_;
  SEXP Rsh_Fir_reg_value8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // p5 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p4 = prom<V +>{
  //     N2 = ld N;
  //     N3 = force? N2;
  //     checkMissing(N3);
  //     return N3;
  //   };
  //   r47 = dyn ngettext(p4, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //   return r47;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   N4 = ld N;
  //   N5 = force? N4;
  //   checkMissing(N5);
  //   return N5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_7, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   nrows2 = ld nrows;
  //   nrows3 = force? nrows2;
  //   checkMissing(nrows3);
  //   return nrows3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_8, 0, NULL, CCP, RHO);
  // r51 = dyn sprintf(p5, p6, p7)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names27, CCP, RHO);
  // return r51
  return Rsh_Fir_reg_r51_;
}
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // p4 = prom<V +>{
  //   N2 = ld N;
  //   N3 = force? N2;
  //   checkMissing(N3);
  //   return N3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_6, 0, NULL, CCP, RHO);
  // r47 = dyn ngettext(p4, "replacement has %d row, data has %d", "replacement has %d rows, data has %d")
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args123[2] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names26, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N2_;
  SEXP Rsh_Fir_reg_N3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // return N3
  return Rsh_Fir_reg_N3_;
}
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N4_;
  SEXP Rsh_Fir_reg_N5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return N5
  return Rsh_Fir_reg_N5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows2_;
  SEXP Rsh_Fir_reg_nrows3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return nrows3
  return Rsh_Fir_reg_nrows3_;
}
SEXP Rsh_Fir_user_promise_inner650999460_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r75_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // p10 = prom<V +>{
  //   ngettext1 = ldf ngettext;
  //   p9 = prom<V +>{
  //     N12 = ld N;
  //     N13 = force? N12;
  //     checkMissing(N13);
  //     return N13;
  //   };
  //   r71 = dyn ngettext1(p9, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //   return r71;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   N14 = ld N;
  //   N15 = force? N14;
  //   checkMissing(N15);
  //   return N15;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_12, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   nrows8 = ld nrows;
  //   nrows9 = force? nrows8;
  //   checkMissing(nrows9);
  //   return nrows9;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_13, 0, NULL, CCP, RHO);
  // r75 = dyn sprintf1(p10, p11, p12)
  SEXP Rsh_Fir_array_args154[3];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args154[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 3, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names36, CCP, RHO);
  // return r75
  return Rsh_Fir_reg_r75_;
}
SEXP Rsh_Fir_user_promise_inner650999460_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r71_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // ngettext1 = ldf ngettext
  Rsh_Fir_reg_ngettext1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // p9 = prom<V +>{
  //   N12 = ld N;
  //   N13 = force? N12;
  //   checkMissing(N13);
  //   return N13;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_11, 0, NULL, CCP, RHO);
  // r71 = dyn ngettext1(p9, "replacement has %d row, data has %d", "replacement has %d rows, data has %d")
  SEXP Rsh_Fir_array_args151[3];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args151[2] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext1_, 3, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names35, CCP, RHO);
  // return r71
  return Rsh_Fir_reg_r71_;
}
SEXP Rsh_Fir_user_promise_inner650999460_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N12_;
  SEXP Rsh_Fir_reg_N13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // N12 = ld N
  Rsh_Fir_reg_N12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // N13 = force? N12
  Rsh_Fir_reg_N13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N12_);
  // checkMissing(N13)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_N13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // return N13
  return Rsh_Fir_reg_N13_;
}
SEXP Rsh_Fir_user_promise_inner650999460_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N14_;
  SEXP Rsh_Fir_reg_N15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // N14 = ld N
  Rsh_Fir_reg_N14_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // N15 = force? N14
  Rsh_Fir_reg_N15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N14_);
  // checkMissing(N15)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_N15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // return N15
  return Rsh_Fir_reg_N15_;
}
SEXP Rsh_Fir_user_promise_inner650999460_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows8_;
  SEXP Rsh_Fir_reg_nrows9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // nrows8 = ld nrows
  Rsh_Fir_reg_nrows8_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // nrows9 = force? nrows8
  Rsh_Fir_reg_nrows9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows8_);
  // checkMissing(nrows9)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_nrows9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // return nrows9
  return Rsh_Fir_reg_nrows9_;
}
SEXP Rsh_Fir_user_promise_inner650999460_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc4_;
  SEXP Rsh_Fir_reg_nc5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // nc4 = ld nc
  Rsh_Fir_reg_nc4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nc5 = force? nc4
  Rsh_Fir_reg_nc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc4_);
  // checkMissing(nc5)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_nc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // return nc5
  return Rsh_Fir_reg_nc5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_r109_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // sym16 = ldf names
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base16 = ldf names in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args188);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r108
  return Rsh_Fir_reg_r108_;

L1_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r109 = dyn names4(x14)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r109_;
  goto L0_;

L2_:;
  // r107 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r107_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new_rows4_;
  SEXP Rsh_Fir_reg_new_rows5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // new_rows4 = ld `new.rows`
  Rsh_Fir_reg_new_rows4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // new_rows5 = force? new_rows4
  Rsh_Fir_reg_new_rows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows4_);
  // checkMissing(new_rows5)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_new_rows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // return new_rows5
  return Rsh_Fir_reg_new_rows5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty()));
  // return x22
  return Rsh_Fir_reg_x22_;
}
SEXP Rsh_Fir_user_promise_inner650999460_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rows4_;
  SEXP Rsh_Fir_reg_rows5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // rows4 = ld rows
  Rsh_Fir_reg_rows4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // rows5 = force? rows4
  Rsh_Fir_reg_rows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows4_);
  // checkMissing(rows5)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_rows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty()));
  // return rows5
  return Rsh_Fir_reg_rows5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new_rows8_;
  SEXP Rsh_Fir_reg_new_rows9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // new_rows8 = ld `new.rows`
  Rsh_Fir_reg_new_rows8_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // new_rows9 = force? new_rows8
  Rsh_Fir_reg_new_rows9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows8_);
  // checkMissing(new_rows9)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_new_rows9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // return new_rows9
  return Rsh_Fir_reg_new_rows9_;
}
SEXP Rsh_Fir_user_promise_inner650999460_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_j4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args333[1];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args333, Rsh_Fir_param_types_empty()));
  // return j4
  return Rsh_Fir_reg_j4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r245_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // p21 = prom<V +>{
  //   j7 = ld j;
  //   j8 = force? j7;
  //   checkMissing(j8);
  //   c99 = `is.object`(j8);
  //   if c99 then L2() else L3(j8);
  // L0(dx32):
  //   return dx32;
  // L2():
  //   dr20 = tryDispatchBuiltin.1("[", j8);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L4() else L3(dr20);
  // L3(j10):
  //   sym43 = ldf `is.na`;
  //   base43 = ldf `is.na` in base;
  //   guard43 = `==`.4(sym43, base43);
  //   if guard43 then L5() else L6();
  // L1(j13, r241):
  //   __7 = ldf `[` in base;
  //   r243 = dyn __7(j13, r241);
  //   goto L0(r243);
  // L4():
  //   dx31 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx31);
  // L5():
  //   jseq2 = ld jseq;
  //   jseq3 = force? jseq2;
  //   checkMissing(jseq3);
  //   is_na1 = ldf `is.na` in base;
  //   r242 = dyn is_na1(jseq3);
  //   goto L1(j10, r242);
  // L6():
  //   r240 = dyn base43(<sym jseq>);
  //   goto L1(j10, r240);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_22, 0, NULL, CCP, RHO);
  // r245 = dyn gettextf("replacing element in non-existent column: %s", p21)
  SEXP Rsh_Fir_array_args356[2];
  Rsh_Fir_array_args356[0] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args356[1] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names116[2];
  Rsh_Fir_array_arg_names116[0] = R_MissingArg;
  Rsh_Fir_array_arg_names116[1] = R_MissingArg;
  Rsh_Fir_reg_r245_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args356, Rsh_Fir_array_arg_names116, CCP, RHO);
  // return r245
  return Rsh_Fir_reg_r245_;
}
SEXP Rsh_Fir_user_promise_inner650999460_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_reg_j8_;
  SEXP Rsh_Fir_reg_c99_;
  SEXP Rsh_Fir_reg_j10_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_sym43_;
  SEXP Rsh_Fir_reg_base43_;
  SEXP Rsh_Fir_reg_guard43_;
  SEXP Rsh_Fir_reg_r240_;
  SEXP Rsh_Fir_reg_j13_;
  SEXP Rsh_Fir_reg_r241_;
  SEXP Rsh_Fir_reg_jseq2_;
  SEXP Rsh_Fir_reg_jseq3_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r242_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r243_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // j7 = ld j
  Rsh_Fir_reg_j7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j8 = force? j7
  Rsh_Fir_reg_j8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j7_);
  // checkMissing(j8)
  SEXP Rsh_Fir_array_args346[1];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_j8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args346, Rsh_Fir_param_types_empty()));
  // c99 = `is.object`(j8)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_Fir_reg_j8_;
  Rsh_Fir_reg_c99_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args347);
  // if c99 then L2() else L3(j8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c99_)) {
  // L2()
    goto L2_;
  } else {
  // L3(j8)
    Rsh_Fir_reg_j10_ = Rsh_Fir_reg_j8_;
    goto L3_;
  }

L0_:;
  // return dx32
  return Rsh_Fir_reg_dx32_;

L1_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r243 = dyn __7(j13, r241)
  SEXP Rsh_Fir_array_args348[2];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_j13_;
  Rsh_Fir_array_args348[1] = Rsh_Fir_reg_r241_;
  SEXP Rsh_Fir_array_arg_names113[2];
  Rsh_Fir_array_arg_names113[0] = R_MissingArg;
  Rsh_Fir_array_arg_names113[1] = R_MissingArg;
  Rsh_Fir_reg_r243_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args348, Rsh_Fir_array_arg_names113, CCP, RHO);
  // goto L0(r243)
  // L0(r243)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r243_;
  goto L0_;

L2_:;
  // dr20 = tryDispatchBuiltin.1("[", j8)
  SEXP Rsh_Fir_array_args349[2];
  Rsh_Fir_array_args349[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args349[1] = Rsh_Fir_reg_j8_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args349);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args350, Rsh_Fir_param_types_empty());
  // if dc10 then L4() else L3(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr20)
    Rsh_Fir_reg_j10_ = Rsh_Fir_reg_dr20_;
    goto L3_;
  }

L3_:;
  // sym43 = ldf `is.na`
  Rsh_Fir_reg_sym43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base43 = ldf `is.na` in base
  Rsh_Fir_reg_base43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard43 = `==`.4(sym43, base43)
  SEXP Rsh_Fir_array_args351[2];
  Rsh_Fir_array_args351[0] = Rsh_Fir_reg_sym43_;
  Rsh_Fir_array_args351[1] = Rsh_Fir_reg_base43_;
  Rsh_Fir_reg_guard43_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args351);
  // if guard43 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard43_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx31 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args352[1];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args352, Rsh_Fir_param_types_empty());
  // goto L0(dx31)
  // L0(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L0_;

L5_:;
  // jseq2 = ld jseq
  Rsh_Fir_reg_jseq2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // jseq3 = force? jseq2
  Rsh_Fir_reg_jseq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq2_);
  // checkMissing(jseq3)
  SEXP Rsh_Fir_array_args353[1];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_jseq3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args353, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r242 = dyn is_na1(jseq3)
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_Fir_reg_jseq3_;
  SEXP Rsh_Fir_array_arg_names114[1];
  Rsh_Fir_array_arg_names114[0] = R_MissingArg;
  Rsh_Fir_reg_r242_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args354, Rsh_Fir_array_arg_names114, CCP, RHO);
  // goto L1(j10, r242)
  // L1(j10, r242)
  Rsh_Fir_reg_j13_ = Rsh_Fir_reg_j10_;
  Rsh_Fir_reg_r241_ = Rsh_Fir_reg_r242_;
  goto L1_;

L6_:;
  // r240 = dyn base43(<sym jseq>)
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names115[1];
  Rsh_Fir_array_arg_names115[0] = R_MissingArg;
  Rsh_Fir_reg_r240_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base43_, 1, Rsh_Fir_array_args355, Rsh_Fir_array_arg_names115, CCP, RHO);
  // goto L1(j10, r240)
  // L1(j10, r240)
  Rsh_Fir_reg_j13_ = Rsh_Fir_reg_j10_;
  Rsh_Fir_reg_r241_ = Rsh_Fir_reg_r240_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r269_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // p23 = prom<V +>{
  //   jseq6 = ld jseq;
  //   jseq7 = force? jseq6;
  //   checkMissing(jseq7);
  //   c113 = `is.object`(jseq7);
  //   if c113 then L1() else L2(jseq7);
  // L0(dx36):
  //   return dx36;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[", jseq7);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(jseq9):
  //   jseq10 = ld jseq;
  //   jseq11 = force? jseq10;
  //   checkMissing(jseq11);
  //   nvars2 = ld nvars;
  //   nvars3 = force? nvars2;
  //   checkMissing(nvars3);
  //   r266 = `>`(jseq11, nvars3);
  //   __9 = ldf `[` in base;
  //   r267 = dyn __9(jseq9, r266);
  //   goto L0(r267);
  // L3():
  //   dx35 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx35);
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_24, 0, NULL, CCP, RHO);
  // r269 = dyn gettextf1("replacing element in non-existent column: %s", p23)
  SEXP Rsh_Fir_array_args390[2];
  Rsh_Fir_array_args390[0] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args390[1] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names126[2];
  Rsh_Fir_array_arg_names126[0] = R_MissingArg;
  Rsh_Fir_array_arg_names126[1] = R_MissingArg;
  Rsh_Fir_reg_r269_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args390, Rsh_Fir_array_arg_names126, CCP, RHO);
  // return r269
  return Rsh_Fir_reg_r269_;
}
SEXP Rsh_Fir_user_promise_inner650999460_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_jseq6_;
  SEXP Rsh_Fir_reg_jseq7_;
  SEXP Rsh_Fir_reg_c113_;
  SEXP Rsh_Fir_reg_jseq9_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_jseq10_;
  SEXP Rsh_Fir_reg_jseq11_;
  SEXP Rsh_Fir_reg_nvars2_;
  SEXP Rsh_Fir_reg_nvars3_;
  SEXP Rsh_Fir_reg_r266_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r267_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner650999460/0: expected 0, got %d", NCAPTURES);

  // jseq6 = ld jseq
  Rsh_Fir_reg_jseq6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // jseq7 = force? jseq6
  Rsh_Fir_reg_jseq7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq6_);
  // checkMissing(jseq7)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_Fir_reg_jseq7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args381, Rsh_Fir_param_types_empty()));
  // c113 = `is.object`(jseq7)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_jseq7_;
  Rsh_Fir_reg_c113_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args382);
  // if c113 then L1() else L2(jseq7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c113_)) {
  // L1()
    goto L1_;
  } else {
  // L2(jseq7)
    Rsh_Fir_reg_jseq9_ = Rsh_Fir_reg_jseq7_;
    goto L2_;
  }

L0_:;
  // return dx36
  return Rsh_Fir_reg_dx36_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[", jseq7)
  SEXP Rsh_Fir_array_args383[2];
  Rsh_Fir_array_args383[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args383[1] = Rsh_Fir_reg_jseq7_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args383);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args384[1];
  Rsh_Fir_array_args384[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args384, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_jseq9_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // jseq10 = ld jseq
  Rsh_Fir_reg_jseq10_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // jseq11 = force? jseq10
  Rsh_Fir_reg_jseq11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jseq10_);
  // checkMissing(jseq11)
  SEXP Rsh_Fir_array_args385[1];
  Rsh_Fir_array_args385[0] = Rsh_Fir_reg_jseq11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args385, Rsh_Fir_param_types_empty()));
  // nvars2 = ld nvars
  Rsh_Fir_reg_nvars2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // nvars3 = force? nvars2
  Rsh_Fir_reg_nvars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nvars2_);
  // checkMissing(nvars3)
  SEXP Rsh_Fir_array_args386[1];
  Rsh_Fir_array_args386[0] = Rsh_Fir_reg_nvars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args386, Rsh_Fir_param_types_empty()));
  // r266 = `>`(jseq11, nvars3)
  SEXP Rsh_Fir_array_args387[2];
  Rsh_Fir_array_args387[0] = Rsh_Fir_reg_jseq11_;
  Rsh_Fir_array_args387[1] = Rsh_Fir_reg_nvars3_;
  Rsh_Fir_reg_r266_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args387);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r267 = dyn __9(jseq9, r266)
  SEXP Rsh_Fir_array_args388[2];
  Rsh_Fir_array_args388[0] = Rsh_Fir_reg_jseq9_;
  Rsh_Fir_array_args388[1] = Rsh_Fir_reg_r266_;
  SEXP Rsh_Fir_array_arg_names125[2];
  Rsh_Fir_array_arg_names125[0] = R_MissingArg;
  Rsh_Fir_array_arg_names125[1] = R_MissingArg;
  Rsh_Fir_reg_r267_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args388, Rsh_Fir_array_arg_names125, CCP, RHO);
  // goto L0(r267)
  // L0(r267)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r267_;
  goto L0_;

L3_:;
  // dx35 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args389[1];
  Rsh_Fir_array_args389[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args389, Rsh_Fir_param_types_empty());
  // goto L0(dx35)
  // L0(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
