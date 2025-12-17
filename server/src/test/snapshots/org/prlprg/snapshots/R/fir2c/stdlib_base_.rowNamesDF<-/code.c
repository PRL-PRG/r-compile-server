#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1584779395_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1584779395_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1584779395_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1584779395_28(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner1584779395
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1584779395_, RHO, CCP);
  // st `.rowNamesDF<-` = r
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
SEXP Rsh_Fir_user_function_inner1584779395_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1584779395 dynamic dispatch ([x, `make.names`, value])

  return Rsh_Fir_user_version_inner1584779395_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1584779395_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1584779395 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1584779395/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_make_names;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_make_names_isMissing;
  SEXP Rsh_Fir_reg_make_names_orDefault;
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg__row_names_info;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg__set_row_names;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_value5_;
  SEXP Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_value7_;
  SEXP Rsh_Fir_reg_value8_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_value9_;
  SEXP Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_value11_;
  SEXP Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_isFALSE;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_make_names3_;
  SEXP Rsh_Fir_reg_make_names4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg__set_row_names1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_attr__1_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_value13_;
  SEXP Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_value15_;
  SEXP Rsh_Fir_reg_value16_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_value17_;
  SEXP Rsh_Fir_reg_value18_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_value20_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_nv;
  SEXP Rsh_Fir_reg_nv1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_reg_nv2_;
  SEXP Rsh_Fir_reg_nv3_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_rep_len;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_value21_;
  SEXP Rsh_Fir_reg_value22_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_value24_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_value27_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_reg_n13_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_anyDuplicated;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_isFALSE1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_make_names9_;
  SEXP Rsh_Fir_reg_make_names10_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg__set_row_names2_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_isTRUE1_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_make_names13_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_value38_;
  SEXP Rsh_Fir_reg_value39_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_isFALSE2_;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_make_names16_;
  SEXP Rsh_Fir_reg_make_names17_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg__set_row_names3_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_isTRUE2_;
  SEXP Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_reg_c66_;
  SEXP Rsh_Fir_reg_stop6_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_make_names20_;
  SEXP Rsh_Fir_reg_p28_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_value44_;
  SEXP Rsh_Fir_reg_value45_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_attr__2_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_make_names = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // make_names_isMissing = missing.0(make_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_make_names;
  Rsh_Fir_reg_make_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if make_names_isMissing then L0(FALSE) else L0(make_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_make_names_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_make_names_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(make_names)
    Rsh_Fir_reg_make_names_orDefault = Rsh_Fir_reg_make_names;
    goto L0_;
  }

L0_:;
  // st `make.names` = make_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_make_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_make_names_orDefault);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L49() else D0()
  // L49()
  goto L49_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // _row_names_info = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L55() else D4()
  // L55()
  goto L55_;

L3_:;
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args1);
  // if c2 then L60() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L60()
    goto L60_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym1 = ldf `is.object`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.object` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L6_:;
  // c4 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c4 then L7(c4) else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L7(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L7_;
  } else {
  // L71()
    goto L71_;
  }

L7_:;
  // c14 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c14 then L76() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L76()
    goto L76_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // r19 = `!`(r18)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args5);
  // c11 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // c12 = `||`(c9, c11)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args7);
  // goto L7(c12)
  // L7(c12)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c12_;
  goto L7_;

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st value = r21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L82() else D16()
  // L82()
  goto L82_;

L12_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard7 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L13_:;
  // r30 = `!`(r26)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args9);
  // c17 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c17 then L90() else L15(c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L90()
    goto L90_;
  } else {
  // L15(c17)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c17_;
    goto L15_;
  }

L14_:;
  // c16 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // goto L13(c16)
  // L13(c16)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c16_;
  goto L13_;

L15_:;
  // c26 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c26 then L96() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L96()
    goto L96_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // r34 = `>`(r32, 0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args13);
  // c23 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // c24 = `&&`(c22, c23)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args15);
  // goto L15(c24)
  // L15(c24)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c24_;
  goto L15_;

L17_:;
  // goto L18(NULL)
  // L18(NULL)
  Rsh_Fir_reg_r36_ = Rsh_const(CCP, 10);
  goto L18_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L160() else D53()
  // L160()
  goto L160_;

L20_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L105() else D25()
  // L105()
  goto L105_;

L21_:;
  // goto L19()
  // L19()
  goto L19_;

L22_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard8 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L23_:;
  // goto L19()
  // L19()
  goto L19_;

L24_:;
  // c29 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c29 then L117() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L117()
    goto L117_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L125() else D37()
  // L125()
  goto L125_;

L26_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard9 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L27_:;
  // st nv = r58
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L135() else D43()
  // L135()
  goto L135_;

L28_:;
  // value21 = ld value
  Rsh_Fir_reg_value21_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L152() else D51()
  // L152()
  goto L152_;

L29_:;
  // st value = r62
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L23(r62)
  // L23(r62)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r62_;
  goto L23_;

L30_:;
  // c33 = ldf c in base
  Rsh_Fir_reg_c33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r68 = dyn c33(value16, r64)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_value16_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c33_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L150() else D50()
  // L150()
  goto L150_;

L31_:;
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L147() else D47()
  // L147()
  goto L147_;

L32_:;
  // st value = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L23(dx3)
  // L23(dx3)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_dx3_;
  goto L23_;

L33_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r72 = dyn __1(value27, r70)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L32(r72)
  // L32(r72)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r72_;
  goto L32_;

L34_:;
  // sym18 = ldf anyNA
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base18 = ldf anyNA in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard18 then L190() else L191()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L190()
    goto L190_;
  } else {
  // L191()
    goto L191_;
  }

L35_:;
  // sym14 = ldf `is.na`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base14 = ldf `is.na` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard14 then L173() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L173()
    goto L173_;
  } else {
  // L174()
    goto L174_;
  }

L36_:;
  // goto L40()
  // L40()
  goto L40_;

L37_:;
  // c39 = `as.logical`(r107)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c39 then L177() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L177()
    goto L177_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // isTRUE1 = ldf isTRUE
  Rsh_Fir_reg_isTRUE1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L181() else D67()
  // L181()
  goto L181_;

L39_:;
  // make_names13 = ldf `make.names`
  Rsh_Fir_reg_make_names13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L187() else D71()
  // L187()
  goto L187_;

L40_:;
  // value44 = ld value
  Rsh_Fir_reg_value44_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L218() else D89()
  // L218()
  goto L218_;

L41_:;
  // c62 = `as.logical`(r132)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c62 then L194() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L194()
    goto L194_;
  } else {
  // L42()
    goto L42_;
  }

L42_:;
  // goto L40()
  // L40()
  goto L40_;

L43_:;
  // goto L44()
  // L44()
  goto L44_;

L44_:;
  // sym19 = ldf `is.na`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base19 = ldf `is.na` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard19 then L201() else L202()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L201()
    goto L201_;
  } else {
  // L202()
    goto L202_;
  }

L45_:;
  // c64 = `as.logical`(r139)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c64 then L205() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L205()
    goto L205_;
  } else {
  // L46()
    goto L46_;
  }

L46_:;
  // isTRUE2 = ldf isTRUE
  Rsh_Fir_reg_isTRUE2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L209() else D83()
  // L209()
  goto L209_;

L47_:;
  // goto L40()
  // L40()
  goto L40_;

L48_:;
  // make_names20 = ldf `make.names`
  Rsh_Fir_reg_make_names20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L215() else D87()
  // L215()
  goto L215_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_, 0, NULL, CCP, RHO);
  // r1 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L50() else D1()
  // L50()
  goto L50_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L50_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args29);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c then L51() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L51()
    goto L51_;
  } else {
  // L1()
    goto L1_;
  }

L51_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L52() else D2()
  // L52()
  goto L52_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_1, 0, NULL, CCP, RHO);
  // r4 = dyn as_data_frame(p1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L53() else D3()
  // L53()
  goto L53_;

D3_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L53_:;
  // st x = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L2()
  // L2()
  goto L2_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_2, 0, NULL, CCP, RHO);
  // r7 = dyn _row_names_info(p2, 2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L56() else D5()
  // L56()
  goto L56_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L56_:;
  // st n = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L59() else D6()
  // L59()
  goto L59_;

L58_:;
  // r8 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D6_:;
  // deopt 19 [value1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L59_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c1 = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args38);
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c1_;
  goto L3_;

L60_:;
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L61() else D7()
  // L61()
  goto L61_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p3 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_3, 0, NULL, CCP, RHO);
  // r11 = dyn _set_row_names(p3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

D8_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L62_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

D9_:;
  // deopt 27 [r11, l, r11]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L63_:;
  // r12 = dyn attr__(l, NULL, "row.names", r11)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

D10_:;
  // deopt 30 [r11, r12]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L64_:;
  // st x = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D11()
  // L65()
  goto L65_;

D11_:;
  // deopt 32 [x7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L65_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x8
  return Rsh_Fir_reg_x8_;

L68_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L70() else D12()
  // L70()
  goto L70_;

L69_:;
  // r15 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L6_;

D12_:;
  // deopt 38 [value3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L70_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(value4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args45);
  // goto L6(c3)
  // L6(c3)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_c3_;
  goto L6_;

L71_:;
  // sym2 = ldf `is.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf `is.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L72_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L74() else D13()
  // L74()
  goto L74_;

L73_:;
  // r17 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(c4, r17)
  // L8(c4, r17)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L8_;

D13_:;
  // deopt 42 [c4, value5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L74_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c10 = `is.integer`(value6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(386, RHO, 1, Rsh_Fir_array_args49);
  // goto L8(c4, c10)
  // L8(c4, c10)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c10_;
  goto L8_;

L76_:;
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L77_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L79() else D14()
  // L79()
  goto L79_;

L78_:;
  // r20 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L10_;

D14_:;
  // deopt 49 [value7]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L79_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r22 = dyn as_character(value8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_value8_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L80() else D15()
  // L80()
  goto L80_;

D15_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L10_;

D16_:;
  // deopt 56 [n2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L82_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r24 = `==`(n3, 0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55);
  // c15 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c15 then L83() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L83()
    goto L83_;
  } else {
  // L12()
    goto L12_;
  }

L83_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard4 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard5 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L85_:;
  // r25 = dyn base4(<lang attr(x, "row.names")>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L13(r25)
  // L13(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L13_;

L86_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L88() else D17()
  // L88()
  goto L88_;

L87_:;
  // r27 = dyn base5(<sym x>, "row.names")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L14_;

D17_:;
  // deopt 63 [x9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L88_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn attr(x10, "row.names")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L89() else D18()
  // L89()
  goto L89_;

D18_:;
  // deopt 67 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L14_;

L90_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard6 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L93() else D19()
  // L93()
  goto L93_;

L92_:;
  // r31 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L16(c17, r31)
  // L16(c17, r31)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L16_;

D19_:;
  // deopt 72 [c17, value9]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L93_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r33 = dyn length(value10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L94() else D20()
  // L94()
  goto L94_;

D20_:;
  // deopt 75 [c17, r33]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L16(c17, r33)
  // L16(c17, r33)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L16_;

L96_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L97() else D21()
  // L97()
  goto L97_;

D21_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // r35 = dyn stop("invalid 'row.names' length")
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L98() else D22()
  // L98()
  goto L98_;

D22_:;
  // deopt 82 [r35]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L18(r35)
  // L18(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L18_;

L101_:;
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L103() else D23()
  // L103()
  goto L103_;

L102_:;
  // r38 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L20(r38)
  // L20(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L20_;

D23_:;
  // deopt 87 [value11]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L103_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r40 = dyn length1(value12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L104() else D24()
  // L104()
  goto L104_;

D24_:;
  // deopt 90 [r40]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L20(r40)
  // L20(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L20_;

D25_:;
  // deopt 90 [r39, n4]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L105_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r41 = `!=`(r39, n5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args72);
  // c27 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args73);
  // if c27 then L106() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L106()
    goto L106_;
  } else {
  // L21()
    goto L21_;
  }

L106_:;
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L107() else D26()
  // L107()
  goto L107_;

D26_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // p4 = prom<V +>{
  //   make_names1 = ld `make.names`;
  //   make_names2 = force? make_names1;
  //   checkMissing(make_names2);
  //   return make_names2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_4, 0, NULL, CCP, RHO);
  // r43 = dyn isFALSE(p4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L108() else D27()
  // L108()
  goto L108_;

D27_:;
  // deopt 96 [r43]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L108_:;
  // c28 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c28 then L109() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L109()
    goto L109_;
  } else {
  // L22()
    goto L22_;
  }

L109_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L110() else D28()
  // L110()
  goto L110_;

D28_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r44 = dyn stop1("invalid 'row.names' length")
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L111() else D29()
  // L111()
  goto L111_;

D29_:;
  // deopt 100 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L23(r44)
  // L23(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L23_;

L113_:;
  // make_names3 = ld `make.names`
  Rsh_Fir_reg_make_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L115() else D30()
  // L115()
  goto L115_;

L114_:;
  // r46 = dyn base8(<sym make.names>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L24(r46)
  // L24(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L24_;

D30_:;
  // deopt 103 [make_names3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_make_names3_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L115_:;
  // make_names4 = force? make_names3
  Rsh_Fir_reg_make_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names3_);
  // checkMissing(make_names4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_make_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r48 = dyn is_na(make_names4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_make_names4_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L116() else D31()
  // L116()
  goto L116_;

D31_:;
  // deopt 106 [r48]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L24(r48)
  // L24(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L24_;

L117_:;
  // _set_row_names1 = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L118() else D32()
  // L118()
  goto L118_;

D32_:;
  // deopt 108 []
  Rsh_Fir_deopt(108, 0, NULL, CCP, RHO);
  return R_NilValue;

L118_:;
  // p5 = prom<V +>{
  //   n6 = ld n;
  //   n7 = force? n6;
  //   checkMissing(n7);
  //   return n7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_5, 0, NULL, CCP, RHO);
  // r50 = dyn _set_row_names1(p5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names1_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L119() else D33()
  // L119()
  goto L119_;

D33_:;
  // deopt 110 [r50]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L119_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L120() else D34()
  // L120()
  goto L120_;

D34_:;
  // deopt 112 [r50, l1, r50]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L120_:;
  // r51 = dyn attr__1(l1, NULL, "row.names", r50)
  SEXP Rsh_Fir_array_args83[4];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args83[3] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L121() else D35()
  // L121()
  goto L121_;

D35_:;
  // deopt 115 [r50, r51]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L121_:;
  // st x = r51
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L122() else D36()
  // L122()
  goto L122_;

D36_:;
  // deopt 117 [x11]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L122_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x12
  return Rsh_Fir_reg_x12_;

D37_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L125_:;
  // p6 = prom<V +>{
  //   make_names5 = ld `make.names`;
  //   make_names6 = force? make_names5;
  //   checkMissing(make_names6);
  //   return make_names6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_6, 0, NULL, CCP, RHO);
  // r54 = dyn isTRUE(p6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L126() else D38()
  // L126()
  goto L126_;

D38_:;
  // deopt 123 [r54]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L126_:;
  // r55 = `!`(r54)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args87);
  // c30 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args88);
  // if c30 then L127() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L127()
    goto L127_;
  } else {
  // L26()
    goto L26_;
  }

L127_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L128() else D39()
  // L128()
  goto L128_;

D39_:;
  // deopt 126 []
  Rsh_Fir_deopt(126, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // r56 = dyn stop2("invalid 'make.names'")
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L129() else D40()
  // L129()
  goto L129_;

D40_:;
  // deopt 128 [r56]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L23(r56)
  // L23(r56)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r56_;
  goto L23_;

L131_:;
  // value13 = ld value
  Rsh_Fir_reg_value13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L133() else D41()
  // L133()
  goto L133_;

L132_:;
  // r57 = dyn base9(<sym value>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L27(r57)
  // L27(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L27_;

D41_:;
  // deopt 131 [value13]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L133_:;
  // value14 = force? value13
  Rsh_Fir_reg_value14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value13_);
  // checkMissing(value14)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_value14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r59 = dyn length2(value14)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L134() else D42()
  // L134()
  goto L134_;

D42_:;
  // deopt 134 [r59]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L27(r59)
  // L27(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L27_;

D43_:;
  // deopt 135 [r58, n8]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L135_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r60 = `<`(r58, n9)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_n9_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args94);
  // c31 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // if c31 then L136() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L136()
    goto L136_;
  } else {
  // L28()
    goto L28_;
  }

L136_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard10 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L137_:;
  // value15 = ld value
  Rsh_Fir_reg_value15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L139() else D44()
  // L139()
  goto L139_;

L138_:;
  // r61 = dyn base10(<sym value>, <lang rep_len(`[`(value, nv), `-`(n, nv))>)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L29(r61)
  // L29(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L29_;

D44_:;
  // deopt 140 [value15]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L139_:;
  // value16 = force? value15
  Rsh_Fir_reg_value16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value15_);
  // checkMissing(value16)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_value16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // sym11 = ldf rep_len
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base11 = ldf rep_len in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard11 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L140_:;
  // value17 = ld value
  Rsh_Fir_reg_value17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L142() else D45()
  // L142()
  goto L142_;

L141_:;
  // r63 = dyn base11(<lang `[`(value, nv)>, <lang `-`(n, nv)>)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L30(r63)
  // L30(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L30_;

D45_:;
  // deopt 144 [value17]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_value17_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L142_:;
  // value18 = force? value17
  Rsh_Fir_reg_value18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value17_);
  // checkMissing(value18)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(value18)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args102);
  // if c32 then L143() else L144(value18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L143()
    goto L143_;
  } else {
  // L144(value18)
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_value18_;
    goto L144_;
  }

L143_:;
  // dr = tryDispatchBuiltin.1("[", value18)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc then L145() else L144(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L145()
    goto L145_;
  } else {
  // L144(dr)
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_dr;
    goto L144_;
  }

L144_:;
  // nv = ld nv
  Rsh_Fir_reg_nv = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L146() else D46()
  // L146()
  goto L146_;

L145_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L31(dx)
  // L31(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L31_;

D46_:;
  // deopt 146 [value20, nv]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_nv;
  Rsh_Fir_deopt(146, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L146_:;
  // nv1 = force? nv
  Rsh_Fir_reg_nv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r65 = dyn __(value20, nv1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_nv1_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L31(r65)
  // L31(r65)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r65_;
  goto L31_;

D47_:;
  // deopt 149 [n10]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L147_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // nv2 = ld nv
  Rsh_Fir_reg_nv2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L148() else D48()
  // L148()
  goto L148_;

D48_:;
  // deopt 150 [n11, nv2]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_nv2_;
  Rsh_Fir_deopt(150, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L148_:;
  // nv3 = force? nv2
  Rsh_Fir_reg_nv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv2_);
  // checkMissing(nv3)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_nv3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r66 = `-`(n11, nv3)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_nv3_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args109);
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r67 = dyn rep_len(dx1, r66)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L149() else D49()
  // L149()
  goto L149_;

D49_:;
  // deopt 154 [r67]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L149_:;
  // goto L30(r67)
  // L30(r67)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r67_;
  goto L30_;

D50_:;
  // deopt 156 [r68]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L29(r68)
  // L29(r68)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r68_;
  goto L29_;

D51_:;
  // deopt 158 [value21]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_value21_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L152_:;
  // value22 = force? value21
  Rsh_Fir_reg_value22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value21_);
  // checkMissing(value22)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_value22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(value22)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args112);
  // if c34 then L153() else L154(value22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L153()
    goto L153_;
  } else {
  // L154(value22)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
    goto L154_;
  }

L153_:;
  // dr2 = tryDispatchBuiltin.1("[", value22)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc1 then L155() else L154(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L155()
    goto L155_;
  } else {
  // L154(dr2)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_dr2_;
    goto L154_;
  }

L154_:;
  // sym12 = ldf seq_len
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base12 = ldf seq_len in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard12 then L156() else L157()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L156()
    goto L156_;
  } else {
  // L157()
    goto L157_;
  }

L155_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L32(dx2)
  // L32(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L32_;

L156_:;
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L158() else D52()
  // L158()
  goto L158_;

L157_:;
  // r69 = dyn base12(<sym n>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L33(value24, r69)
  // L33(value24, r69)
  Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value24_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L33_;

D52_:;
  // deopt 161 [value24, n12]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_value24_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_n12_;
  Rsh_Fir_deopt(161, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L158_:;
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // r71 = seq_len(n13)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args119);
  // goto L33(value24, r71)
  // L33(value24, r71)
  Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value24_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L33_;

D53_:;
  // deopt 169 []
  Rsh_Fir_deopt(169, 0, NULL, CCP, RHO);
  return R_NilValue;

L160_:;
  // p7 = prom<V +>{
  //   value28 = ld value;
  //   value29 = force? value28;
  //   checkMissing(value29);
  //   return value29;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_7, 0, NULL, CCP, RHO);
  // r74 = dyn anyDuplicated(p7)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L161() else D54()
  // L161()
  goto L161_;

D54_:;
  // deopt 171 [r74]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L161_:;
  // c35 = `as.logical`(r74)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args122);
  // if c35 then L162() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L162()
    goto L162_;
  } else {
  // L34()
    goto L34_;
  }

L162_:;
  // isFALSE1 = ldf isFALSE
  Rsh_Fir_reg_isFALSE1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L163() else D55()
  // L163()
  goto L163_;

D55_:;
  // deopt 173 []
  Rsh_Fir_deopt(173, 0, NULL, CCP, RHO);
  return R_NilValue;

L163_:;
  // p8 = prom<V +>{
  //   make_names7 = ld `make.names`;
  //   make_names8 = force? make_names7;
  //   checkMissing(make_names8);
  //   return make_names8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_8, 0, NULL, CCP, RHO);
  // r76 = dyn isFALSE1(p8)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE1_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L164() else D56()
  // L164()
  goto L164_;

D56_:;
  // deopt 175 [r76]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L164_:;
  // c36 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args125);
  // if c36 then L165() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L165()
    goto L165_;
  } else {
  // L35()
    goto L35_;
  }

L165_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L166() else D57()
  // L166()
  goto L166_;

D57_:;
  // deopt 177 []
  Rsh_Fir_deopt(177, 0, NULL, CCP, RHO);
  return R_NilValue;

L166_:;
  // p11 = prom<V +>{
  //   unique = ldf unique;
  //   p10 = prom<V +>{
  //     value30 = ld value;
  //     value31 = force? value30;
  //     checkMissing(value31);
  //     c37 = `is.object`(value31);
  //     if c37 then L1() else L2(value31);
  //   L0(dx5):
  //     return dx5;
  //   L1():
  //     dr4 = tryDispatchBuiltin.1("[", value31);
  //     dc2 = getTryDispatchBuiltinDispatched(dr4);
  //     if dc2 then L3() else L2(dr4);
  //   L2(value33):
  //     duplicated = ldf duplicated;
  //     p9 = prom<V +>{
  //       value34 = ld value;
  //       value35 = force? value34;
  //       checkMissing(value35);
  //       return value35;
  //     };
  //     r78 = dyn duplicated(p9);
  //     __2 = ldf `[` in base;
  //     r79 = dyn __2(value33, r78);
  //     goto L0(r79);
  //   L3():
  //     dx4 = getTryDispatchBuiltinValue(dr4);
  //     goto L0(dx4);
  //   };
  //   r81 = dyn unique(p10);
  //   return r81;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_9, 0, NULL, CCP, RHO);
  // r83 = dyn sort(p11)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L167() else D58()
  // L167()
  goto L167_;

D58_:;
  // deopt 179 [r83]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L167_:;
  // st nonuniq = r83
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L168() else D59()
  // L168()
  goto L168_;

D59_:;
  // deopt 182 []
  Rsh_Fir_deopt(182, 0, NULL, CCP, RHO);
  return R_NilValue;

L168_:;
  // p20 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p12 = prom<V +>{
  //     sym13 = ldf length;
  //     base13 = ldf length in base;
  //     guard13 = `==`.4(sym13, base13);
  //     if guard13 then L1() else L2();
  //   L0(r85):
  //     return r85;
  //   L1():
  //     nonuniq = ld nonuniq;
  //     nonuniq1 = force? nonuniq;
  //     checkMissing(nonuniq1);
  //     length3 = ldf length in base;
  //     r86 = dyn length3(nonuniq1);
  //     goto L0(r86);
  //   L2():
  //     r84 = dyn base13(<sym nonuniq>);
  //     goto L0(r84);
  //   };
  //   p15 = prom<V +>{
  //     sprintf = ldf sprintf;
  //     p14 = prom<V +>{
  //       sQuote = ldf sQuote;
  //       p13 = prom<V +>{
  //         nonuniq2 = ld nonuniq;
  //         nonuniq3 = force? nonuniq2;
  //         checkMissing(nonuniq3);
  //         c38 = `is.object`(nonuniq3);
  //         if c38 then L1() else L2(nonuniq3);
  //       L0(dx7):
  //         return dx7;
  //       L1():
  //         dr6 = tryDispatchBuiltin.1("[", nonuniq3);
  //         dc3 = getTryDispatchBuiltinDispatched(dr6);
  //         if dc3 then L3() else L2(dr6);
  //       L2(nonuniq5):
  //         __3 = ldf `[` in base;
  //         r88 = dyn __3(nonuniq5, 1);
  //         goto L0(r88);
  //       L3():
  //         dx6 = getTryDispatchBuiltinValue(dr6);
  //         goto L0(dx6);
  //       };
  //       r90 = dyn sQuote(p13);
  //       return r90;
  //     };
  //     r92 = dyn sprintf("non-unique value when setting 'row.names': %s", p14);
  //     return r92;
  //   };
  //   p19 = prom<V +>{
  //     sprintf1 = ldf sprintf;
  //     p18 = prom<V +>{
  //       paste = ldf paste;
  //       p17 = prom<V +>{
  //         sQuote1 = ldf sQuote;
  //         p16 = prom<V +>{
  //           nonuniq6 = ld nonuniq;
  //           nonuniq7 = force? nonuniq6;
  //           checkMissing(nonuniq7);
  //           return nonuniq7;
  //         };
  //         r95 = dyn sQuote1(p16);
  //         return r95;
  //       };
  //       r97 = dyn paste[, collapse](p17, ", ");
  //       return r97;
  //     };
  //     r99 = dyn sprintf1("non-unique values when setting 'row.names': %s", p18);
  //     return r99;
  //   };
  //   r101 = dyn ngettext(p12, p15, p19);
  //   return r101;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_12, 0, NULL, CCP, RHO);
  // r103 = dyn warning[, domain, `call.`](p20, NA_LGL, FALSE)
  SEXP Rsh_Fir_array_args153[3];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args153[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_arg_names50[2] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 3, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L169() else D60()
  // L169()
  goto L169_;

D60_:;
  // deopt 188 [r103]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L169_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L170() else D61()
  // L170()
  goto L170_;

D61_:;
  // deopt 190 []
  Rsh_Fir_deopt(190, 0, NULL, CCP, RHO);
  return R_NilValue;

L170_:;
  // r104 = dyn stop3("duplicate 'row.names' are not allowed")
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L171() else D62()
  // L171()
  goto L171_;

D62_:;
  // deopt 192 [r104]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L171_:;
  // goto L36(r104)
  // L36(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L36_;

L173_:;
  // make_names9 = ld `make.names`
  Rsh_Fir_reg_make_names9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L175() else D63()
  // L175()
  goto L175_;

L174_:;
  // r106 = dyn base14(<sym make.names>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L37(r106)
  // L37(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L37_;

D63_:;
  // deopt 195 [make_names9]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_make_names9_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L175_:;
  // make_names10 = force? make_names9
  Rsh_Fir_reg_make_names10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names9_);
  // checkMissing(make_names10)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_make_names10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r108 = dyn is_na1(make_names10)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_make_names10_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L176() else D64()
  // L176()
  goto L176_;

D64_:;
  // deopt 198 [r108]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L176_:;
  // goto L37(r108)
  // L37(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L37_;

L177_:;
  // _set_row_names2 = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L178() else D65()
  // L178()
  goto L178_;

D65_:;
  // deopt 200 []
  Rsh_Fir_deopt(200, 0, NULL, CCP, RHO);
  return R_NilValue;

L178_:;
  // p22 = prom<V +>{
  //   n14 = ld n;
  //   n15 = force? n14;
  //   checkMissing(n15);
  //   r109 = `==`(n15, 0);
  //   c40 = `as.logical`(r109);
  //   if c40 then L7() else L0(c40);
  // L0(c42):
  //   c50 = `as.logical`(c42);
  //   if c50 then L11() else L2(c50);
  // L7():
  //   sym15 = ldf `is.null`;
  //   base15 = ldf `is.null` in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L8() else L9();
  // L1(c45, r111):
  //   c47 = `as.logical`(r111);
  //   c48 = `&&`(c45, c47);
  //   goto L0(c48);
  // L2(c52):
  //   c59 = `as.logical`(c52);
  //   if c59 then L15() else L4();
  // L8():
  //   _row_names_info1 = ldf `.row_names_info`;
  //   p21 = prom<V +>{
  //     x13 = ld x;
  //     x14 = force? x13;
  //     checkMissing(x14);
  //     return x14;
  //   };
  //   r113 = dyn _row_names_info1(p21, 0);
  //   c46 = `==`(r113, NULL);
  //   goto L1(c40, c46);
  // L9():
  //   r110 = dyn base15(<lang .row_names_info(x, 0)>);
  //   goto L1(c40, r110);
  // L11():
  //   sym16 = ldf length;
  //   base16 = ldf length in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L12() else L13();
  // L3(c55, r115):
  //   r117 = `>`(r115, 0);
  //   c56 = `as.logical`(r117);
  //   c57 = `&&`(c55, c56);
  //   goto L2(c57);
  // L4():
  //   n16 = ld n;
  //   n17 = force? n16;
  //   checkMissing(n17);
  //   return n17;
  // L12():
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   length4 = ldf length in base;
  //   r116 = dyn length4(x16);
  //   goto L3(c50, r116);
  // L13():
  //   r114 = dyn base16(<sym x>);
  //   goto L3(c50, r114);
  // L15():
  //   sym17 = ldf length;
  //   base17 = ldf length in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L16() else L17();
  // L5(r119):
  //   return r119;
  // L16():
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c60 = `is.object`(x18);
  //   if c60 then L18() else L19(x18);
  // L17():
  //   r118 = dyn base17(<lang `[[`(x, 1)>);
  //   goto L5(r118);
  // L6(dx9):
  //   length5 = ldf length in base;
  //   r121 = dyn length5(dx9);
  //   goto L5(r121);
  // L18():
  //   dr8 = tryDispatchBuiltin.1("[[", x18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L20() else L19(dr8);
  // L19(x20):
  //   __4 = ldf `[[` in base;
  //   r120 = dyn __4(x20, 1);
  //   goto L6(r120);
  // L20():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L6(dx8);
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_21, 0, NULL, CCP, RHO);
  // r123 = dyn _set_row_names2(p22)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names2_, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L179() else D66()
  // L179()
  goto L179_;

D66_:;
  // deopt 202 [r123]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L179_:;
  // st value = r123
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r123_, RHO);
  (void)(Rsh_Fir_reg_r123_);
  // goto L36(r123)
  // L36(r123)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r123_;
  goto L36_;

D67_:;
  // deopt 205 []
  Rsh_Fir_deopt(205, 0, NULL, CCP, RHO);
  return R_NilValue;

L181_:;
  // p23 = prom<V +>{
  //   make_names11 = ld `make.names`;
  //   make_names12 = force? make_names11;
  //   checkMissing(make_names12);
  //   return make_names12;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_23, 0, NULL, CCP, RHO);
  // r125 = dyn isTRUE1(p23)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE1_, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L182() else D68()
  // L182()
  goto L182_;

D68_:;
  // deopt 207 [r125]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L182_:;
  // r126 = `!`(r125)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args190);
  // c61 = `as.logical`(r126)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args191);
  // if c61 then L183() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L183()
    goto L183_;
  } else {
  // L39()
    goto L39_;
  }

L183_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L184() else D69()
  // L184()
  goto L184_;

D69_:;
  // deopt 210 []
  Rsh_Fir_deopt(210, 0, NULL, CCP, RHO);
  return R_NilValue;

L184_:;
  // r127 = dyn stop4("invalid 'make.names'")
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L185() else D70()
  // L185()
  goto L185_;

D70_:;
  // deopt 212 [r127]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L185_:;
  // goto L36(r127)
  // L36(r127)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r127_;
  goto L36_;

D71_:;
  // deopt 214 []
  Rsh_Fir_deopt(214, 0, NULL, CCP, RHO);
  return R_NilValue;

L187_:;
  // p24 = prom<V +>{
  //   value36 = ld value;
  //   value37 = force? value36;
  //   checkMissing(value37);
  //   return value37;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_24, 0, NULL, CCP, RHO);
  // r129 = dyn make_names13[, unique](p24, TRUE)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names13_, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L188() else D72()
  // L188()
  goto L188_;

D72_:;
  // deopt 218 [r129]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L188_:;
  // st value = r129
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // goto L36(r129)
  // L36(r129)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r129_;
  goto L36_;

L190_:;
  // value38 = ld value
  Rsh_Fir_reg_value38_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L192() else D73()
  // L192()
  goto L192_;

L191_:;
  // r131 = dyn base18(<sym value>)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L41(r131)
  // L41(r131)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r131_;
  goto L41_;

D73_:;
  // deopt 222 [value38]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_value38_;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L192_:;
  // value39 = force? value38
  Rsh_Fir_reg_value39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value38_);
  // checkMissing(value39)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_value39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r133 = dyn anyNA(value39)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_value39_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L193() else D74()
  // L193()
  goto L193_;

D74_:;
  // deopt 225 [r133]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L193_:;
  // goto L41(r133)
  // L41(r133)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r133_;
  goto L41_;

L194_:;
  // isFALSE2 = ldf isFALSE
  Rsh_Fir_reg_isFALSE2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L195() else D75()
  // L195()
  goto L195_;

D75_:;
  // deopt 227 []
  Rsh_Fir_deopt(227, 0, NULL, CCP, RHO);
  return R_NilValue;

L195_:;
  // p25 = prom<V +>{
  //   make_names14 = ld `make.names`;
  //   make_names15 = force? make_names14;
  //   checkMissing(make_names15);
  //   return make_names15;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_25, 0, NULL, CCP, RHO);
  // r135 = dyn isFALSE2(p25)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE2_, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L196() else D76()
  // L196()
  goto L196_;

D76_:;
  // deopt 229 [r135]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L196_:;
  // c63 = `as.logical`(r135)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args200);
  // if c63 then L197() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L197()
    goto L197_;
  } else {
  // L43()
    goto L43_;
  }

L197_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L198() else D77()
  // L198()
  goto L198_;

D77_:;
  // deopt 231 []
  Rsh_Fir_deopt(231, 0, NULL, CCP, RHO);
  return R_NilValue;

L198_:;
  // r136 = dyn stop5("missing values in 'row.names' are not allowed")
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L199() else D78()
  // L199()
  goto L199_;

D78_:;
  // deopt 233 [r136]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_deopt(233, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L199_:;
  // goto L44()
  // L44()
  goto L44_;

L201_:;
  // make_names16 = ld `make.names`
  Rsh_Fir_reg_make_names16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L203() else D79()
  // L203()
  goto L203_;

L202_:;
  // r138 = dyn base19(<sym make.names>)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L45(r138)
  // L45(r138)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r138_;
  goto L45_;

D79_:;
  // deopt 238 [make_names16]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_make_names16_;
  Rsh_Fir_deopt(238, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L203_:;
  // make_names17 = force? make_names16
  Rsh_Fir_reg_make_names17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names16_);
  // checkMissing(make_names17)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_make_names17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r140 = dyn is_na2(make_names17)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_make_names17_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L204() else D80()
  // L204()
  goto L204_;

D80_:;
  // deopt 241 [r140]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L204_:;
  // goto L45(r140)
  // L45(r140)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r140_;
  goto L45_;

L205_:;
  // _set_row_names3 = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L206() else D81()
  // L206()
  goto L206_;

D81_:;
  // deopt 243 []
  Rsh_Fir_deopt(243, 0, NULL, CCP, RHO);
  return R_NilValue;

L206_:;
  // p26 = prom<V +>{
  //   n18 = ld n;
  //   n19 = force? n18;
  //   checkMissing(n19);
  //   r141 = `>`(n19, 0.0);
  //   c65 = `as.logical`(r141);
  //   if c65 then L2() else L0();
  // L0():
  //   sym20 = ldf length;
  //   base20 = ldf length in base;
  //   guard20 = `==`.4(sym20, base20);
  //   if guard20 then L4() else L5();
  // L2():
  //   n20 = ld n;
  //   n21 = force? n20;
  //   checkMissing(n21);
  //   return n21;
  // L1(r143):
  //   return r143;
  // L4():
  //   value40 = ld value;
  //   value41 = force? value40;
  //   checkMissing(value41);
  //   length6 = ldf length in base;
  //   r144 = dyn length6(value41);
  //   goto L1(r144);
  // L5():
  //   r142 = dyn base20(<sym value>);
  //   goto L1(r142);
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_26, 0, NULL, CCP, RHO);
  // r146 = dyn _set_row_names3(p26)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names3_, 1, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L207() else D82()
  // L207()
  goto L207_;

D82_:;
  // deopt 245 [r146]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L207_:;
  // st value = r146
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r146_, RHO);
  (void)(Rsh_Fir_reg_r146_);
  // goto L47(r146)
  // L47(r146)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r146_;
  goto L47_;

D83_:;
  // deopt 248 []
  Rsh_Fir_deopt(248, 0, NULL, CCP, RHO);
  return R_NilValue;

L209_:;
  // p27 = prom<V +>{
  //   make_names18 = ld `make.names`;
  //   make_names19 = force? make_names18;
  //   checkMissing(make_names19);
  //   return make_names19;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_27, 0, NULL, CCP, RHO);
  // r149 = dyn isTRUE2(p27)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE2_, 1, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L210() else D84()
  // L210()
  goto L210_;

D84_:;
  // deopt 250 [r149]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_deopt(250, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L210_:;
  // r150 = `!`(r149)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args216);
  // c66 = `as.logical`(r150)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args217);
  // if c66 then L211() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L211()
    goto L211_;
  } else {
  // L48()
    goto L48_;
  }

L211_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L212() else D85()
  // L212()
  goto L212_;

D85_:;
  // deopt 253 []
  Rsh_Fir_deopt(253, 0, NULL, CCP, RHO);
  return R_NilValue;

L212_:;
  // r151 = dyn stop6("invalid 'make.names'")
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 1, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L213() else D86()
  // L213()
  goto L213_;

D86_:;
  // deopt 255 [r151]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L213_:;
  // goto L47(r151)
  // L47(r151)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r151_;
  goto L47_;

D87_:;
  // deopt 257 []
  Rsh_Fir_deopt(257, 0, NULL, CCP, RHO);
  return R_NilValue;

L215_:;
  // p28 = prom<V +>{
  //   value42 = ld value;
  //   value43 = force? value42;
  //   checkMissing(value43);
  //   return value43;
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_28, 0, NULL, CCP, RHO);
  // r153 = dyn make_names20[, unique](p28, TRUE)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args220[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names20_, 2, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L216() else D88()
  // L216()
  goto L216_;

D88_:;
  // deopt 261 [r153]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(261, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L216_:;
  // st value = r153
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r153_, RHO);
  (void)(Rsh_Fir_reg_r153_);
  // goto L47(r153)
  // L47(r153)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r153_;
  goto L47_;

D89_:;
  // deopt 265 [value44]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_value44_;
  Rsh_Fir_deopt(265, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L218_:;
  // value45 = force? value44
  Rsh_Fir_reg_value45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value44_);
  // checkMissing(value45)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_value45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L219() else D90()
  // L219()
  goto L219_;

D90_:;
  // deopt 268 [value45, l2, value45]
  SEXP Rsh_Fir_array_deopt_stack65[3];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_value45_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_value45_;
  Rsh_Fir_deopt(268, 3, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L219_:;
  // r154 = dyn attr__2(l2, NULL, "row.names", value45)
  SEXP Rsh_Fir_array_args222[4];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args222[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args222[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args222[3] = Rsh_Fir_reg_value45_;
  SEXP Rsh_Fir_array_arg_names77[4];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_array_arg_names77[3] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L220() else D91()
  // L220()
  goto L220_;

D91_:;
  // deopt 271 [value45, r154]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_value45_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(271, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L220_:;
  // st x = r154
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r154_, RHO);
  (void)(Rsh_Fir_reg_r154_);
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L221() else D92()
  // L221()
  goto L221_;

D92_:;
  // deopt 273 [x21]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(273, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L221_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x22
  return Rsh_Fir_reg_x22_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names1_;
  SEXP Rsh_Fir_reg_make_names2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names1 = ld `make.names`
  Rsh_Fir_reg_make_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names2 = force? make_names1
  Rsh_Fir_reg_make_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names1_);
  // checkMissing(make_names2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_make_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return make_names2
  return Rsh_Fir_reg_make_names2_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return n7
  return Rsh_Fir_reg_n7_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names5_;
  SEXP Rsh_Fir_reg_make_names6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names5 = ld `make.names`
  Rsh_Fir_reg_make_names5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names6 = force? make_names5
  Rsh_Fir_reg_make_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names5_);
  // checkMissing(make_names6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_make_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return make_names6
  return Rsh_Fir_reg_make_names6_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value28_;
  SEXP Rsh_Fir_reg_value29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // value28 = ld value
  Rsh_Fir_reg_value28_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value29 = force? value28
  Rsh_Fir_reg_value29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value28_);
  // checkMissing(value29)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_value29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return value29
  return Rsh_Fir_reg_value29_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names7_;
  SEXP Rsh_Fir_reg_make_names8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names7 = ld `make.names`
  Rsh_Fir_reg_make_names7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names8 = force? make_names7
  Rsh_Fir_reg_make_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names7_);
  // checkMissing(make_names8)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_make_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // return make_names8
  return Rsh_Fir_reg_make_names8_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r81_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p10 = prom<V +>{
  //   value30 = ld value;
  //   value31 = force? value30;
  //   checkMissing(value31);
  //   c37 = `is.object`(value31);
  //   if c37 then L1() else L2(value31);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", value31);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(value33):
  //   duplicated = ldf duplicated;
  //   p9 = prom<V +>{
  //     value34 = ld value;
  //     value35 = force? value34;
  //     checkMissing(value35);
  //     return value35;
  //   };
  //   r78 = dyn duplicated(p9);
  //   __2 = ldf `[` in base;
  //   r79 = dyn __2(value33, r78);
  //   goto L0(r79);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_10, 0, NULL, CCP, RHO);
  // r81 = dyn unique(p10)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names39, CCP, RHO);
  // return r81
  return Rsh_Fir_reg_r81_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value30_;
  SEXP Rsh_Fir_reg_value31_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_value33_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_duplicated;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r79_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // value30 = ld value
  Rsh_Fir_reg_value30_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value31 = force? value30
  Rsh_Fir_reg_value31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value30_);
  // checkMissing(value31)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_value31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(value31)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_value31_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args127);
  // if c37 then L1() else L2(value31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L1()
    goto L1_;
  } else {
  // L2(value31)
    Rsh_Fir_reg_value33_ = Rsh_Fir_reg_value31_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", value31)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_value31_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_value33_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // p9 = prom<V +>{
  //   value34 = ld value;
  //   value35 = force? value34;
  //   checkMissing(value35);
  //   return value35;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_11, 0, NULL, CCP, RHO);
  // r78 = dyn duplicated(p9)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names37, CCP, RHO);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r79 = dyn __2(value33, r78)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_value33_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r79_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value34_;
  SEXP Rsh_Fir_reg_value35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // value34 = ld value
  Rsh_Fir_reg_value34_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value35 = force? value34
  Rsh_Fir_reg_value35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value34_);
  // checkMissing(value35)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_value35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return value35
  return Rsh_Fir_reg_value35_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r101_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p12 = prom<V +>{
  //   sym13 = ldf length;
  //   base13 = ldf length in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r85):
  //   return r85;
  // L1():
  //   nonuniq = ld nonuniq;
  //   nonuniq1 = force? nonuniq;
  //   checkMissing(nonuniq1);
  //   length3 = ldf length in base;
  //   r86 = dyn length3(nonuniq1);
  //   goto L0(r86);
  // L2():
  //   r84 = dyn base13(<sym nonuniq>);
  //   goto L0(r84);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_13, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p14 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p13 = prom<V +>{
  //       nonuniq2 = ld nonuniq;
  //       nonuniq3 = force? nonuniq2;
  //       checkMissing(nonuniq3);
  //       c38 = `is.object`(nonuniq3);
  //       if c38 then L1() else L2(nonuniq3);
  //     L0(dx7):
  //       return dx7;
  //     L1():
  //       dr6 = tryDispatchBuiltin.1("[", nonuniq3);
  //       dc3 = getTryDispatchBuiltinDispatched(dr6);
  //       if dc3 then L3() else L2(dr6);
  //     L2(nonuniq5):
  //       __3 = ldf `[` in base;
  //       r88 = dyn __3(nonuniq5, 1);
  //       goto L0(r88);
  //     L3():
  //       dx6 = getTryDispatchBuiltinValue(dr6);
  //       goto L0(dx6);
  //     };
  //     r90 = dyn sQuote(p13);
  //     return r90;
  //   };
  //   r92 = dyn sprintf("non-unique value when setting 'row.names': %s", p14);
  //   return r92;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_14, 0, NULL, CCP, RHO);
  // p19 = prom<V +>{
  //   sprintf1 = ldf sprintf;
  //   p18 = prom<V +>{
  //     paste = ldf paste;
  //     p17 = prom<V +>{
  //       sQuote1 = ldf sQuote;
  //       p16 = prom<V +>{
  //         nonuniq6 = ld nonuniq;
  //         nonuniq7 = force? nonuniq6;
  //         checkMissing(nonuniq7);
  //         return nonuniq7;
  //       };
  //       r95 = dyn sQuote1(p16);
  //       return r95;
  //     };
  //     r97 = dyn paste[, collapse](p17, ", ");
  //     return r97;
  //   };
  //   r99 = dyn sprintf1("non-unique values when setting 'row.names': %s", p18);
  //   return r99;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_17, 0, NULL, CCP, RHO);
  // r101 = dyn ngettext(p12, p15, p19)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names49, CCP, RHO);
  // return r101
  return Rsh_Fir_reg_r101_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_nonuniq;
  SEXP Rsh_Fir_reg_nonuniq1_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r86_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args136);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r85
  return Rsh_Fir_reg_r85_;

L1_:;
  // nonuniq = ld nonuniq
  Rsh_Fir_reg_nonuniq = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // nonuniq1 = force? nonuniq
  Rsh_Fir_reg_nonuniq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nonuniq);
  // checkMissing(nonuniq1)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_nonuniq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r86 = dyn length3(nonuniq1)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_nonuniq1_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r86)
  // L0(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L0_;

L2_:;
  // r84 = dyn base13(<sym nonuniq>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r84)
  // L0(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r92_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // p14 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p13 = prom<V +>{
  //     nonuniq2 = ld nonuniq;
  //     nonuniq3 = force? nonuniq2;
  //     checkMissing(nonuniq3);
  //     c38 = `is.object`(nonuniq3);
  //     if c38 then L1() else L2(nonuniq3);
  //   L0(dx7):
  //     return dx7;
  //   L1():
  //     dr6 = tryDispatchBuiltin.1("[", nonuniq3);
  //     dc3 = getTryDispatchBuiltinDispatched(dr6);
  //     if dc3 then L3() else L2(dr6);
  //   L2(nonuniq5):
  //     __3 = ldf `[` in base;
  //     r88 = dyn __3(nonuniq5, 1);
  //     goto L0(r88);
  //   L3():
  //     dx6 = getTryDispatchBuiltinValue(dr6);
  //     goto L0(dx6);
  //   };
  //   r90 = dyn sQuote(p13);
  //   return r90;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_15, 0, NULL, CCP, RHO);
  // r92 = dyn sprintf("non-unique value when setting 'row.names': %s", p14)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names45, CCP, RHO);
  // return r92
  return Rsh_Fir_reg_r92_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r90_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // p13 = prom<V +>{
  //   nonuniq2 = ld nonuniq;
  //   nonuniq3 = force? nonuniq2;
  //   checkMissing(nonuniq3);
  //   c38 = `is.object`(nonuniq3);
  //   if c38 then L1() else L2(nonuniq3);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", nonuniq3);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(nonuniq5):
  //   __3 = ldf `[` in base;
  //   r88 = dyn __3(nonuniq5, 1);
  //   goto L0(r88);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_16, 0, NULL, CCP, RHO);
  // r90 = dyn sQuote(p13)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names44, CCP, RHO);
  // return r90
  return Rsh_Fir_reg_r90_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nonuniq2_;
  SEXP Rsh_Fir_reg_nonuniq3_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_nonuniq5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r88_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // nonuniq2 = ld nonuniq
  Rsh_Fir_reg_nonuniq2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // nonuniq3 = force? nonuniq2
  Rsh_Fir_reg_nonuniq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nonuniq2_);
  // checkMissing(nonuniq3)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_nonuniq3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(nonuniq3)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_nonuniq3_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args141);
  // if c38 then L1() else L2(nonuniq3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L1()
    goto L1_;
  } else {
  // L2(nonuniq3)
    Rsh_Fir_reg_nonuniq5_ = Rsh_Fir_reg_nonuniq3_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", nonuniq3)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_nonuniq3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_nonuniq5_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r88 = dyn __3(nonuniq5, 1)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_nonuniq5_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r88)
  // L0(r88)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r88_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf1_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r99_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // p18 = prom<V +>{
  //   paste = ldf paste;
  //   p17 = prom<V +>{
  //     sQuote1 = ldf sQuote;
  //     p16 = prom<V +>{
  //       nonuniq6 = ld nonuniq;
  //       nonuniq7 = force? nonuniq6;
  //       checkMissing(nonuniq7);
  //       return nonuniq7;
  //     };
  //     r95 = dyn sQuote1(p16);
  //     return r95;
  //   };
  //   r97 = dyn paste[, collapse](p17, ", ");
  //   return r97;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_18, 0, NULL, CCP, RHO);
  // r99 = dyn sprintf1("non-unique values when setting 'row.names': %s", p18)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 2, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names48, CCP, RHO);
  // return r99
  return Rsh_Fir_reg_r99_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r97_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // p17 = prom<V +>{
  //   sQuote1 = ldf sQuote;
  //   p16 = prom<V +>{
  //     nonuniq6 = ld nonuniq;
  //     nonuniq7 = force? nonuniq6;
  //     checkMissing(nonuniq7);
  //     return nonuniq7;
  //   };
  //   r95 = dyn sQuote1(p16);
  //   return r95;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_19, 0, NULL, CCP, RHO);
  // r97 = dyn paste[, collapse](p17, ", ")
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names47, CCP, RHO);
  // return r97
  return Rsh_Fir_reg_r97_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote1_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r95_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // sQuote1 = ldf sQuote
  Rsh_Fir_reg_sQuote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // p16 = prom<V +>{
  //   nonuniq6 = ld nonuniq;
  //   nonuniq7 = force? nonuniq6;
  //   checkMissing(nonuniq7);
  //   return nonuniq7;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_20, 0, NULL, CCP, RHO);
  // r95 = dyn sQuote1(p16)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote1_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names46, CCP, RHO);
  // return r95
  return Rsh_Fir_reg_r95_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nonuniq6_;
  SEXP Rsh_Fir_reg_nonuniq7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // nonuniq6 = ld nonuniq
  Rsh_Fir_reg_nonuniq6_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // nonuniq7 = force? nonuniq6
  Rsh_Fir_reg_nonuniq7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nonuniq6_);
  // checkMissing(nonuniq7)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_nonuniq7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return nonuniq7
  return Rsh_Fir_reg_nonuniq7_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n14_;
  SEXP Rsh_Fir_reg_n15_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg__row_names_info1_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_n16_;
  SEXP Rsh_Fir_reg_n17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // n14 = ld n
  Rsh_Fir_reg_n14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n15 = force? n14
  Rsh_Fir_reg_n15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n14_);
  // checkMissing(n15)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_n15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // r109 = `==`(n15, 0)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_n15_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args159);
  // c40 = `as.logical`(r109)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args160);
  // if c40 then L7() else L0(c40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L7()
    goto L7_;
  } else {
  // L0(c40)
    Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c40_;
    goto L0_;
  }

L0_:;
  // c50 = `as.logical`(c42)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args161);
  // if c50 then L11() else L2(c50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L11()
    goto L11_;
  } else {
  // L2(c50)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c50_;
    goto L2_;
  }

L1_:;
  // c47 = `as.logical`(r111)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args162);
  // c48 = `&&`(c45, c47)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args163);
  // goto L0(c48)
  // L0(c48)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c48_;
  goto L0_;

L2_:;
  // c59 = `as.logical`(c52)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args164);
  // if c59 then L15() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L15()
    goto L15_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // r117 = `>`(r115, 0)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args165);
  // c56 = `as.logical`(r117)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args166);
  // c57 = `&&`(c55, c56)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args167);
  // goto L2(c57)
  // L2(c57)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c57_;
  goto L2_;

L4_:;
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // return n17
  return Rsh_Fir_reg_n17_;

L5_:;
  // return r119
  return Rsh_Fir_reg_r119_;

L6_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r121 = dyn length5(dx9)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L5(r121)
  // L5(r121)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r121_;
  goto L5_;

L7_:;
  // sym15 = ldf `is.null`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base15 = ldf `is.null` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args170);
  // if guard15 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // _row_names_info1 = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p21 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1584779395_22, 0, NULL, CCP, RHO);
  // r113 = dyn _row_names_info1(p21, 0)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info1_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names55, CCP, RHO);
  // c46 = `==`(r113, NULL)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args173);
  // goto L1(c40, c46)
  // L1(c40, c46)
  Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_c46_;
  goto L1_;

L9_:;
  // r110 = dyn base15(<lang .row_names_info(x, 0)>)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L1(c40, r110)
  // L1(c40, r110)
  Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L1_;

L11_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard16 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r116 = dyn length4(x16)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L3(c50, r116)
  // L3(c50, r116)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r116_;
  goto L3_;

L13_:;
  // r114 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L3(c50, r114)
  // L3(c50, r114)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L3_;

L15_:;
  // sym17 = ldf length
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base17 = ldf length in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard17 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(x18)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args181);
  // if c60 then L18() else L19(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L18()
    goto L18_;
  } else {
  // L19(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L19_;
  }

L17_:;
  // r118 = dyn base17(<lang `[[`(x, 1)>)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L5(r118)
  // L5(r118)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r118_;
  goto L5_;

L18_:;
  // dr8 = tryDispatchBuiltin.1("[[", x18)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args183);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc4 then L20() else L19(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr8)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr8_;
    goto L19_;
  }

L19_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r120 = dyn __4(x20, 1)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args185[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L6(r120)
  // L6(r120)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r120_;
  goto L6_;

L20_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L6(dx8)
  // L6(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names11_;
  SEXP Rsh_Fir_reg_make_names12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names11 = ld `make.names`
  Rsh_Fir_reg_make_names11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names12 = force? make_names11
  Rsh_Fir_reg_make_names12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names11_);
  // checkMissing(make_names12)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_make_names12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // return make_names12
  return Rsh_Fir_reg_make_names12_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value36_;
  SEXP Rsh_Fir_reg_value37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // value36 = ld value
  Rsh_Fir_reg_value36_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value37 = force? value36
  Rsh_Fir_reg_value37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value36_);
  // checkMissing(value37)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_value37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // return value37
  return Rsh_Fir_reg_value37_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names14_;
  SEXP Rsh_Fir_reg_make_names15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names14 = ld `make.names`
  Rsh_Fir_reg_make_names14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names15 = force? make_names14
  Rsh_Fir_reg_make_names15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names14_);
  // checkMissing(make_names15)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_make_names15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // return make_names15
  return Rsh_Fir_reg_make_names15_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n18_;
  SEXP Rsh_Fir_reg_n19_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_n20_;
  SEXP Rsh_Fir_reg_n21_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_value40_;
  SEXP Rsh_Fir_reg_value41_;
  SEXP Rsh_Fir_reg_length6_;
  SEXP Rsh_Fir_reg_r144_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // n18 = ld n
  Rsh_Fir_reg_n18_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n19 = force? n18
  Rsh_Fir_reg_n19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n18_);
  // checkMissing(n19)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_n19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // r141 = `>`(n19, 0.0)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args206);
  // c65 = `as.logical`(r141)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args207);
  // if c65 then L2() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L2()
    goto L2_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // sym20 = ldf length
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base20 = ldf length in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args208);
  // if guard20 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // return r143
  return Rsh_Fir_reg_r143_;

L2_:;
  // n20 = ld n
  Rsh_Fir_reg_n20_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n21 = force? n20
  Rsh_Fir_reg_n21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n20_);
  // checkMissing(n21)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_n21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // return n21
  return Rsh_Fir_reg_n21_;

L4_:;
  // value40 = ld value
  Rsh_Fir_reg_value40_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value41 = force? value40
  Rsh_Fir_reg_value41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value40_);
  // checkMissing(value41)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_value41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r144 = dyn length6(value41)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_value41_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L1(r144)
  // L1(r144)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r144_;
  goto L1_;

L5_:;
  // r142 = dyn base20(<sym value>)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L1(r142)
  // L1(r142)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r142_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_names18_;
  SEXP Rsh_Fir_reg_make_names19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // make_names18 = ld `make.names`
  Rsh_Fir_reg_make_names18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // make_names19 = force? make_names18
  Rsh_Fir_reg_make_names19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names18_);
  // checkMissing(make_names19)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_make_names19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // return make_names19
  return Rsh_Fir_reg_make_names19_;
}
SEXP Rsh_Fir_user_promise_inner1584779395_28(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value42_;
  SEXP Rsh_Fir_reg_value43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1584779395/0: expected 0, got %d", NCAPTURES);

  // value42 = ld value
  Rsh_Fir_reg_value42_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value43 = force? value42
  Rsh_Fir_reg_value43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value42_);
  // checkMissing(value43)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_value43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // return value43
  return Rsh_Fir_reg_value43_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
