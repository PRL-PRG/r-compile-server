#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1139050501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1139050501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1139050501_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1139050501
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1139050501_, RHO, CCP);
  // st `.traceback` = r
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
SEXP Rsh_Fir_user_function_inner1139050501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1139050501 dynamic dispatch ([x, `max.lines`])

  return Rsh_Fir_user_version_inner1139050501_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1139050501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1139050501 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1139050501/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_max_lines;
  SEXP Rsh_Fir_reg_x_isMissing;
  SEXP Rsh_Fir_reg_x_orDefault;
  SEXP Rsh_Fir_reg_max_lines_isMissing;
  SEXP Rsh_Fir_reg_max_lines_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg__is_positive_intlike;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_traceback;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_int_x;
  SEXP Rsh_Fir_reg_int_x1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_get0_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_is_pairlist;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg__is_positive_intlike1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_valid_max_lines;
  SEXP Rsh_Fir_reg_valid_max_lines1_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_max_lines5_;
  SEXP Rsh_Fir_reg_max_lines6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_max_lines7_;
  SEXP Rsh_Fir_reg_max_lines8_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_typeof;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_reg_valid_max_lines2_;
  SEXP Rsh_Fir_reg_valid_max_lines3_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_i38_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_max_lines9_;
  SEXP Rsh_Fir_reg_max_lines10_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_i49_;
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i51_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_i52_;
  SEXP Rsh_Fir_reg_i53_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_i55_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_i60_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_max_lines11_;
  SEXP Rsh_Fir_reg_max_lines12_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_i62_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_i64_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_i65_;
  SEXP Rsh_Fir_reg_i66_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_i68_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_i70_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_reg_i72_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_c72_;
  SEXP Rsh_Fir_reg_i74_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_i76_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_i77_;
  SEXP Rsh_Fir_reg_i78_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_i79_;
  SEXP Rsh_Fir_reg_srcref;
  SEXP Rsh_Fir_reg_srcref1_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_i81_;
  SEXP Rsh_Fir_reg_srcref4_;
  SEXP Rsh_Fir_reg_l19_;
  SEXP Rsh_Fir_reg_srcref5_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_i83_;
  SEXP Rsh_Fir_reg_srcref8_;
  SEXP Rsh_Fir_reg_l22_;
  SEXP Rsh_Fir_reg_srcref9_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_i84_;
  SEXP Rsh_Fir_reg_i85_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_attr__1_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_i87_;
  SEXP Rsh_Fir_reg_srcref11_;
  SEXP Rsh_Fir_reg_l24_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_i89_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_i90_;
  SEXP Rsh_Fir_reg_i91_;
  SEXP Rsh_Fir_reg_____3_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_x35_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_max_lines = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if x_isMissing then L0(NULL) else L0(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_x_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L0_;
  }

L0_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // max_lines_isMissing = missing.0(max_lines)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_max_lines;
  Rsh_Fir_reg_max_lines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if max_lines_isMissing then L1() else L2(max_lines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_lines_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(max_lines)
    Rsh_Fir_reg_max_lines_orDefault = Rsh_Fir_reg_max_lines;
    goto L2_;
  }

L1_:;
  // p2 = prom<V +>{
  //   getOption = ldf getOption;
  //   p1 = prom<V +>{
  //     getOption1 = ldf getOption;
  //     p = prom<V +>{
  //       return -1;
  //     };
  //     r1 = dyn getOption1("deparse.max.lines", p);
  //     return r1;
  //   };
  //   r3 = dyn getOption("traceback.max.lines", p1);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_, 0, NULL, CCP, RHO);
  // goto L2(p2)
  // L2(p2)
  Rsh_Fir_reg_max_lines_orDefault = Rsh_Fir_reg_p2_;
  goto L2_;

L2_:;
  // st `max.lines` = max_lines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_max_lines_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_lines_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // st x = r15
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // int_x = ld `int.x`
  Rsh_Fir_reg_int_x = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L51() else D6()
  // L51()
  goto L51_;

L6_:;
  // c27 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c27 then L10(c27) else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L10(c27)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c27_;
    goto L10_;
  } else {
  // L63()
    goto L63_;
  }

L7_:;
  // c8 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c8 then L56() else L8(c6, c8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L56()
    goto L56_;
  } else {
  // L8(c6, c8)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c8_;
    goto L8_;
  }

L8_:;
  // c24 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // c25 = `||`(c11, c24)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args7);
  // goto L6(c25)
  // L6(c25)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c25_;
  goto L6_;

L9_:;
  // r27 = `!`(r21)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args8);
  // c20 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // c21 = `&&`(c18, c20)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args10);
  // goto L8(c17, c21)
  // L8(c17, c21)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c21_;
  goto L8_;

L10_:;
  // c36 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c36 then L12(c36) else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L12(c36)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c36_;
    goto L12_;
  } else {
  // L69()
    goto L69_;
  }

L11_:;
  // c33 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // c34 = `||`(c32, c33)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args13);
  // goto L10(c34)
  // L10(c34)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c34_;
  goto L10_;

L12_:;
  // c45 = `as.logical`(c37)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c45 then L75() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L75()
    goto L75_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // c42 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // c43 = `||`(c41, c42)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args16);
  // goto L12(c43)
  // L12(c43)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c43_;
  goto L12_;

L14_:;
  // goto L40()
  // L40()
  goto L40_;

L15_:;
  // max_lines7 = ld `max.lines`
  Rsh_Fir_reg_max_lines7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L82() else D18()
  // L82()
  goto L82_;

L16_:;
  // st nlines = r37
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // sym7 = ldf seq_along
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf seq_along in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard7 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L17_:;
  // s = toForSeq(r39)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args19);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 12);
  // goto L18(i)
  // L18(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L18_;

L18_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // c47 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if c47 then L86() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L86()
    goto L86_;
  } else {
  // L39()
    goto L39_;
  }

L19_:;
  // st srcref = r42
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // sym9 = ldf typeof
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base9 = ldf typeof in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard9 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L20_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r44 = dyn attr(dx1, "srcref")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

L21_:;
  // r49 = `==`(r46, "language")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args24);
  // c50 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c50 then L103() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L103()
    goto L103_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r48 = dyn typeof(dx3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

L23_:;
  // goto L25(i16)
  // L25(i16)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i16_;
  goto L25_;

L24_:;
  // st x = dx7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L25(i30)
  // L25(i30)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i30_;
  goto L25_;

L25_:;
  // valid_max_lines2 = ld `valid.max.lines`
  Rsh_Fir_reg_valid_max_lines2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L111() else D29()
  // L111()
  goto L111_;

L26_:;
  // c67 = `as.logical`(c55)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c67 then L123() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L123()
    goto L123_;
  } else {
  // L29()
    goto L29_;
  }

L27_:;
  // max_lines9 = ld `max.lines`
  Rsh_Fir_reg_max_lines9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L121() else D33()
  // L121()
  goto L121_;

L28_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r63 = dyn length1(dx9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L120() else D32()
  // L120()
  goto L120_;

L29_:;
  // goto L36(i35)
  // L36(i35)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i35_;
  goto L36_;

L30_:;
  // c69 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args29);
  // if c69 then L129() else L130(i51, dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L129()
    goto L129_;
  } else {
  // L130(i51, dx11)
    Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i51_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L130_;
  }

L31_:;
  // l4 = ld x
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c70 = `is.object`(l4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args30);
  // if c70 then L135() else L136(i57, dx15, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L135()
    goto L135_;
  } else {
  // L136(i57, dx15, l4)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i57_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L136_;
  }

L32_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r69 = dyn __5(dx18, r67)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L31(i60, r69)
  // L31(i60, r69)
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r69_;
  goto L31_;

L33_:;
  // st x = dx24
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx24_, RHO);
  (void)(Rsh_Fir_reg_dx24_);
  // l7 = ld x
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c71 = `is.object`(l7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args32);
  // if c71 then L139() else L140(i64, TRUE, l7, TRUE, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L139()
    goto L139_;
  } else {
  // L140(i64, TRUE, l7, TRUE, l7)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_r73_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r74_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l7_;
    goto L140_;
  }

L34_:;
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L143() else D39()
  // L143()
  goto L143_;

L35_:;
  // st x = dx28
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx28_, RHO);
  (void)(Rsh_Fir_reg_dx28_);
  // goto L36(i76)
  // L36(i76)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i76_;
  goto L36_;

L36_:;
  // srcref = ld srcref
  Rsh_Fir_reg_srcref = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L150() else D42()
  // L150()
  goto L150_;

L37_:;
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L155() else D44()
  // L155()
  goto L155_;

L38_:;
  // st x = dx32
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx32_, RHO);
  (void)(Rsh_Fir_reg_dx32_);
  // goto L18(i89)
  // L18(i89)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i89_;
  goto L18_;

L39_:;
  // x13 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args33[4];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_x13_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args33);
  // st i = x13
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x13_, RHO);
  (void)(Rsh_Fir_reg_x13_);
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard8 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L40_:;
  // x34 = ld x
  Rsh_Fir_reg_x34_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L162() else D47()
  // L162()
  goto L162_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   r8 = `<=`(r6, 1.0);
  //   return r8;
  // L1():
  //   max_lines1 = ld `max.lines`;
  //   max_lines2 = force? max_lines1;
  //   checkMissing(max_lines2);
  //   length = ldf length in base;
  //   r7 = dyn length(max_lines2);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base(<sym max.lines>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_3, 0, NULL, CCP, RHO);
  // r10 = dyn stopifnot(p3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D1()
  // L42()
  goto L42_;

D1_:;
  // deopt 3 [r10]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L42_:;
  // r11 = clos inner2501545716
  Rsh_Fir_reg_r11_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `.is.positive.intlike` = r11
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // _is_positive_intlike = ldf `.is.positive.intlike`
  Rsh_Fir_reg__is_positive_intlike = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L43() else D2()
  // L43()
  goto L43_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p4 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_4, 0, NULL, CCP, RHO);
  // r13 = dyn _is_positive_intlike(p4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__is_positive_intlike, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

D3_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L44_:;
  // st `int.x` = r13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c then L45() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L45()
    goto L45_;
  } else {
  // L3()
    goto L3_;
  }

L45_:;
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L48() else D4()
  // L48()
  goto L48_;

L47_:;
  // r14 = dyn base1(<lang traceback(x)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L4_;

D4_:;
  // deopt 14 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L48_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // traceback = ldf traceback in base
  Rsh_Fir_reg_traceback = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r16 = dyn traceback(x4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_traceback, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D5()
  // L49()
  goto L49_;

D5_:;
  // deopt 17 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L4_;

D6_:;
  // deopt 21 [int_x]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_int_x;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L51_:;
  // int_x1 = force? int_x
  Rsh_Fir_reg_int_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int_x);
  // checkMissing(int_x1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_int_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(int_x1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_int_x1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c1 then L6(c1) else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L6(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L6_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard2 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L53_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D7()
  // L55()
  goto L55_;

L54_:;
  // r18 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(c1, r18)
  // L7(c1, r18)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D7_:;
  // deopt 24 [c1, x5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L55_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c7 = `==`(x6, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // goto L7(c1, c7)
  // L7(c1, c7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_c7_;
  goto L7_;

L56_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard3 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // get0 = ldf get0
  Rsh_Fir_reg_get0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L59() else D8()
  // L59()
  goto L59_;

L58_:;
  // r20 = dyn base3(<lang `<-`(x, get0(".Traceback", envir=baseenv()))>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(c6, c8, r20)
  // L9(c6, c8, r20)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L9_;

D8_:;
  // deopt 29 [c6, c8]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L59_:;
  // p5 = prom<V +>{
  //   sym4 = ldf baseenv;
  //   base4 = ldf baseenv in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   baseenv = ldf baseenv in base;
  //   r24 = dyn baseenv();
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base4();
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_5, 0, NULL, CCP, RHO);
  // r26 = dyn get0[, envir](".Traceback", p5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get0_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L60() else D9()
  // L60()
  goto L60_;

D9_:;
  // deopt 33 [c6, c8, r26]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L60_:;
  // st x = r26
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // c19 = `==`(r26, NULL)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args58);
  // goto L9(c6, c8, c19)
  // L9(c6, c8, c19)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_c19_;
  goto L9_;

L63_:;
  // sym5 = ldf `is.pairlist`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base5 = ldf `is.pairlist` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L66() else D10()
  // L66()
  goto L66_;

L65_:;
  // r28 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(c27, r28)
  // L11(c27, r28)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D10_:;
  // deopt 41 [c27, x7]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L66_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // is_pairlist = ldf `is.pairlist` in base
  Rsh_Fir_reg_is_pairlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r30 = dyn is_pairlist(x8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_pairlist, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L67() else D11()
  // L67()
  goto L67_;

D11_:;
  // deopt 44 [c27, r30]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L11(c27, r30)
  // L11(c27, r30)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L11_;

L69_:;
  // sym6 = ldf `is.list`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base6 = ldf `is.list` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard6 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L70_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L72() else D12()
  // L72()
  goto L72_;

L71_:;
  // r31 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(c36, r31)
  // L13(c36, r31)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L13_;

D12_:;
  // deopt 48 [c36, x9]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L72_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r33 = dyn is_list(x10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L73() else D13()
  // L73()
  goto L73_;

D13_:;
  // deopt 51 [c36, r33]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L13(c36, r33)
  // L13(c36, r33)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L13_;

L75_:;
  // _is_positive_intlike1 = ldf `.is.positive.intlike`
  Rsh_Fir_reg__is_positive_intlike1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L76() else D14()
  // L76()
  goto L76_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p6 = prom<V +>{
  //   max_lines3 = ld `max.lines`;
  //   max_lines4 = force? max_lines3;
  //   checkMissing(max_lines4);
  //   return max_lines4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_6, 0, NULL, CCP, RHO);
  // r35 = dyn _is_positive_intlike1(p6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__is_positive_intlike1_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L77() else D15()
  // L77()
  goto L77_;

D15_:;
  // deopt 56 [r35]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L77_:;
  // st `valid.max.lines` = r35
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // valid_max_lines = ld `valid.max.lines`
  Rsh_Fir_reg_valid_max_lines = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L78() else D16()
  // L78()
  goto L78_;

D16_:;
  // deopt 58 [valid_max_lines]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_valid_max_lines;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L78_:;
  // valid_max_lines1 = force? valid_max_lines
  Rsh_Fir_reg_valid_max_lines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valid_max_lines);
  // checkMissing(valid_max_lines1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_valid_max_lines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c46 = `as.logical`(valid_max_lines1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_valid_max_lines1_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c46 then L79() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L79()
    goto L79_;
  } else {
  // L15()
    goto L15_;
  }

L79_:;
  // max_lines5 = ld `max.lines`
  Rsh_Fir_reg_max_lines5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L80() else D17()
  // L80()
  goto L80_;

D17_:;
  // deopt 60 [max_lines5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_max_lines5_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // max_lines6 = force? max_lines5
  Rsh_Fir_reg_max_lines6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines5_);
  // checkMissing(max_lines6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_max_lines6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r36 = `+`(max_lines6, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_max_lines6_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args72);
  // goto L16(r36)
  // L16(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L16_;

D18_:;
  // deopt 64 [max_lines7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_max_lines7_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L82_:;
  // max_lines8 = force? max_lines7
  Rsh_Fir_reg_max_lines8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines7_);
  // checkMissing(max_lines8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_max_lines8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // goto L16(max_lines8)
  // L16(max_lines8)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_max_lines8_;
  goto L16_;

L83_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

L84_:;
  // r38 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(r38)
  // L17(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L17_;

D19_:;
  // deopt 68 [x11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L85_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r40 = seq_along(x12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args76);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L17_;

L86_:;
  // goto L40()
  // L40()
  goto L40_;

L87_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

L88_:;
  // r41 = dyn base8(<lang `[[`(x, i)>, "srcref")
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(i2, r41)
  // L19(i2, r41)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L19_;

D20_:;
  // deopt 73 [i2, x14]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L89_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(x15)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args79);
  // if c48 then L90() else L91(i2, x15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L90()
    goto L90_;
  } else {
  // L91(i2, x15)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x15_;
    goto L91_;
  }

L90_:;
  // dr = tryDispatchBuiltin.1("[[", x15)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc then L92() else L91(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L92()
    goto L92_;
  } else {
  // L91(i2, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_dr;
    goto L91_;
  }

L91_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

L92_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L20(i2, dx)
  // L20(i2, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

D21_:;
  // deopt 75 [i9, x17, i12]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L93_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r43 = dyn __(x17, i13)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(i9, r43)
  // L20(i9, r43)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r43_;
  goto L20_;

D22_:;
  // deopt 80 [i11, r44]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L19(i11, r44)
  // L19(i11, r44)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r44_;
  goto L19_;

L95_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L97() else D23()
  // L97()
  goto L97_;

L96_:;
  // r45 = dyn base9(<lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(i7, r45)
  // L21(i7, r45)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L21_;

D23_:;
  // deopt 84 [i7, x18]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L97_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(x19)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args86);
  // if c49 then L98() else L99(i7, x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L98()
    goto L98_;
  } else {
  // L99(i7, x19)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L99_;
  }

L98_:;
  // dr2 = tryDispatchBuiltin.1("[[", x19)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc1 then L100() else L99(i7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L100()
    goto L100_;
  } else {
  // L99(i7, dr2)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr2_;
    goto L99_;
  }

L99_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

L100_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L22(i7, dx2)
  // L22(i7, dx2)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L22_;

D24_:;
  // deopt 86 [i18, x21, i21]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(86, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L101_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r47 = dyn __1(x21, i22)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L22(i18, r47)
  // L22(i18, r47)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r47_;
  goto L22_;

D25_:;
  // deopt 90 [i20, r48]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L21(i20, r48)
  // L21(i20, r48)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r48_;
  goto L21_;

L103_:;
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L104() else D26()
  // L104()
  goto L104_;

D26_:;
  // deopt 94 [i16]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L104_:;
  // p7 = prom<V +>{
  //   x22 = ld x;
  //   x23 = force? x22;
  //   checkMissing(x23);
  //   c51 = `is.object`(x23);
  //   if c51 then L1() else L2(x23);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", x23);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x25):
  //   i25 = ld i;
  //   i26 = force? i25;
  //   __2 = ldf `[[` in base;
  //   r50 = dyn __2(x25, i26);
  //   goto L0(r50);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   nlines = ld nlines;
  //   nlines1 = force? nlines;
  //   checkMissing(nlines1);
  //   return nlines1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_8, 0, NULL, CCP, RHO);
  // r53 = dyn deparse[, nlines](p7, p8)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L105() else D27()
  // L105()
  goto L105_;

D27_:;
  // deopt 98 [i16, r53]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L105_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c52 = `is.object`(l1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args99);
  // if c52 then L106() else L107(i16, r53, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L106()
    goto L106_;
  } else {
  // L107(i16, r53, l1)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L107_;
  }

L106_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l1, r53)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc3 then L108() else L107(i16, r53, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L108()
    goto L108_;
  } else {
  // L107(i16, r53, dr6)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr6_;
    goto L107_;
  }

L107_:;
  // i31 = ld i
  Rsh_Fir_reg_i31_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L109() else D28()
  // L109()
  goto L109_;

L108_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L24(i16, r53, dx6)
  // L24(i16, r53, dx6)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L24_;

D28_:;
  // deopt 100 [i28, r55, l3, r53, i31]
  SEXP Rsh_Fir_array_deopt_stack25[5];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack25[4] = Rsh_Fir_reg_i31_;
  Rsh_Fir_deopt(100, 5, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L109_:;
  // i32 = force? i31
  Rsh_Fir_reg_i32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i31_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r58 = dyn ____(l3, r53, i32)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L24(i28, r55, r58)
  // L24(i28, r55, r58)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r58_;
  goto L24_;

D29_:;
  // deopt 106 [i33, valid_max_lines2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_valid_max_lines2_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L111_:;
  // valid_max_lines3 = force? valid_max_lines2
  Rsh_Fir_reg_valid_max_lines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valid_max_lines2_);
  // checkMissing(valid_max_lines3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_valid_max_lines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c53 = `as.logical`(valid_max_lines3)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_valid_max_lines3_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args105);
  // if c53 then L112() else L26(i33, c53)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L112()
    goto L112_;
  } else {
  // L26(i33, c53)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c53_;
    goto L26_;
  }

L112_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard10 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L113_:;
  // x26 = ld x
  Rsh_Fir_reg_x26_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L115() else D30()
  // L115()
  goto L115_;

L114_:;
  // r60 = dyn base10(<lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L27(i33, c53, r60)
  // L27(i33, c53, r60)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L27_;

D30_:;
  // deopt 110 [i33, c53, x26]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_x26_;
  Rsh_Fir_deopt(110, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L115_:;
  // x27 = force? x26
  Rsh_Fir_reg_x27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x26_);
  // checkMissing(x27)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c59 = `is.object`(x27)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args109);
  // if c59 then L116() else L117(i33, c53, x27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L116()
    goto L116_;
  } else {
  // L117(i33, c53, x27)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c53_;
    Rsh_Fir_reg_x29_ = Rsh_Fir_reg_x27_;
    goto L117_;
  }

L116_:;
  // dr8 = tryDispatchBuiltin.1("[[", x27)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_x27_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc4 then L118() else L117(i33, c53, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L118()
    goto L118_;
  } else {
  // L117(i33, c53, dr8)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c53_;
    Rsh_Fir_reg_x29_ = Rsh_Fir_reg_dr8_;
    goto L117_;
  }

L117_:;
  // i43 = ld i
  Rsh_Fir_reg_i43_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L119() else D31()
  // L119()
  goto L119_;

L118_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L28(i33, c53, dx8)
  // L28(i33, c53, dx8)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L28_;

D31_:;
  // deopt 112 [i40, c61, x29, i43]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_x29_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_i43_;
  Rsh_Fir_deopt(112, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L119_:;
  // i44 = force? i43
  Rsh_Fir_reg_i44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i43_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r62 = dyn __3(x29, i44)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L28(i40, c61, r62)
  // L28(i40, c61, r62)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r62_;
  goto L28_;

D32_:;
  // deopt 116 [i42, c63, r63]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_c63_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L27(i42, c63, r63)
  // L27(i42, c63, r63)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r63_;
  goto L27_;

D33_:;
  // deopt 116 [i38, c58, r61, max_lines9]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_max_lines9_;
  Rsh_Fir_deopt(116, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L121_:;
  // max_lines10 = force? max_lines9
  Rsh_Fir_reg_max_lines10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines9_);
  // checkMissing(max_lines10)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_max_lines10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // r64 = `>`(r61, max_lines10)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_max_lines10_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args115);
  // c64 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args116);
  // c65 = `&&`(c58, c64)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args117);
  // goto L26(i38, c65)
  // L26(i38, c65)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c65_;
  goto L26_;

L123_:;
  // x30 = ld x
  Rsh_Fir_reg_x30_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L124() else D34()
  // L124()
  goto L124_;

D34_:;
  // deopt 120 [i35, x30]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L124_:;
  // x31 = force? x30
  Rsh_Fir_reg_x31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x30_);
  // checkMissing(x31)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c68 = `is.object`(x31)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c68 then L125() else L126(i35, x31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L125()
    goto L125_;
  } else {
  // L126(i35, x31)
    Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_x33_ = Rsh_Fir_reg_x31_;
    goto L126_;
  }

L125_:;
  // dr10 = tryDispatchBuiltin.1("[[", x31)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc5 then L127() else L126(i35, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L127()
    goto L127_;
  } else {
  // L126(i35, dr10)
    Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_x33_ = Rsh_Fir_reg_dr10_;
    goto L126_;
  }

L126_:;
  // i52 = ld i
  Rsh_Fir_reg_i52_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L128() else D35()
  // L128()
  goto L128_;

L127_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L30(i35, dx10)
  // L30(i35, dx10)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L30_;

D35_:;
  // deopt 122 [i49, x33, i52]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_x33_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_i52_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L128_:;
  // i53 = force? i52
  Rsh_Fir_reg_i53_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i52_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r65 = dyn __4(x33, i53)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_i53_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L30(i49, r65)
  // L30(i49, r65)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r65_;
  goto L30_;

L129_:;
  // dr12 = tryDispatchBuiltin.1("[", dx11)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc6 then L131() else L130(i51, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L131()
    goto L131_;
  } else {
  // L130(i51, dr12)
    Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i51_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr12_;
    goto L130_;
  }

L130_:;
  // sym11 = ldf seq_len
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base11 = ldf seq_len in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard11 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L131_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L31(i51, dx14)
  // L31(i51, dx14)
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L31_;

L132_:;
  // max_lines11 = ld `max.lines`
  Rsh_Fir_reg_max_lines11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L134() else D36()
  // L134()
  goto L134_;

L133_:;
  // r66 = dyn base11(<sym max.lines>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L32(i55, dx13, r66)
  // L32(i55, dx13, r66)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L32_;

D36_:;
  // deopt 126 [i55, dx13, max_lines11]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_max_lines11_;
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L134_:;
  // max_lines12 = force? max_lines11
  Rsh_Fir_reg_max_lines12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines11_);
  // checkMissing(max_lines12)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_max_lines12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // r68 = seq_len(max_lines12)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_max_lines12_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args130);
  // goto L32(i55, dx13, r68)
  // L32(i55, dx13, r68)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L32_;

L135_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l4, dx15)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args131);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc7 then L137() else L136(i57, dx15, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L137()
    goto L137_;
  } else {
  // L136(i57, dx15, dr14)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i57_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr14_;
    goto L136_;
  }

L136_:;
  // i65 = ld i
  Rsh_Fir_reg_i65_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L138() else D37()
  // L138()
  goto L138_;

L137_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L33(i57, dx22)
  // L33(i57, dx22)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
  goto L33_;

D37_:;
  // deopt 131 [i62, dx20, l6, dx15, i65]
  SEXP Rsh_Fir_array_deopt_stack34[5];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_i65_;
  Rsh_Fir_deopt(131, 5, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L138_:;
  // i66 = force? i65
  Rsh_Fir_reg_i66_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i65_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r70 = dyn ____1(l6, dx15, i66)
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args134[2] = Rsh_Fir_reg_i66_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L33(i62, r70)
  // L33(i62, r70)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r70_;
  goto L33_;

L139_:;
  // dr16 = tryDispatchBuiltin.1("[[", l7)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc8 then L141() else L140(i64, TRUE, l7, TRUE, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L141()
    goto L141_;
  } else {
  // L140(i64, TRUE, l7, TRUE, dr16)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_r73_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r74_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr16_;
    goto L140_;
  }

L140_:;
  // i71 = ld i
  Rsh_Fir_reg_i71_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L142() else D38()
  // L142()
  goto L142_;

L141_:;
  // dx25 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L34(i64, TRUE, l7, TRUE, dx25)
  // L34(i64, TRUE, l7, TRUE, dx25)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_r77_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_r78_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L34_;

D38_:;
  // deopt 139 [i68, r73, l10, r74, l11, i71]
  SEXP Rsh_Fir_array_deopt_stack35[6];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack35[4] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack35[5] = Rsh_Fir_reg_i71_;
  Rsh_Fir_deopt(139, 6, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L142_:;
  // i72 = force? i71
  Rsh_Fir_reg_i72_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i71_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r79 = dyn __6(l11, i72)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_i72_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L34(i68, r73, l10, r74, r79)
  // L34(i68, r73, l10, r74, r79)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r79_;
  goto L34_;

D39_:;
  // deopt 143 [i70, r77, l13, dx26, r78]
  SEXP Rsh_Fir_array_deopt_stack36[5];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_deopt_stack36[4] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(143, 5, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L143_:;
  // r80 = dyn attr__(dx26, NULL, "truncated", r78)
  SEXP Rsh_Fir_array_args139[4];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args139[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args139[3] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L144() else D40()
  // L144()
  goto L144_;

D40_:;
  // deopt 146 [i70, r77, l13, r80]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(146, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L144_:;
  // c72 = `is.object`(l13)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args140);
  // if c72 then L145() else L146(i70, r77, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c72_)) {
  // L145()
    goto L145_;
  } else {
  // L146(i70, r77, l13)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i70_;
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r77_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L146_;
  }

L145_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l13, r80)
  SEXP Rsh_Fir_array_args141[3];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args141);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc9 then L147() else L146(i70, r77, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L147()
    goto L147_;
  } else {
  // L146(i70, r77, dr18)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i70_;
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r77_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr18_;
    goto L146_;
  }

L146_:;
  // i77 = ld i
  Rsh_Fir_reg_i77_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L148() else D41()
  // L148()
  goto L148_;

L147_:;
  // dx27 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L35(i70, r77, dx27)
  // L35(i70, r77, dx27)
  Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L35_;

D41_:;
  // deopt 147 [i74, r82, l15, r80, i77]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i74_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_i77_;
  Rsh_Fir_deopt(147, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L148_:;
  // i78 = force? i77
  Rsh_Fir_reg_i78_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i77_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r85 = dyn ____2(l15, r80, i78)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_i78_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L35(i74, r82, r85)
  // L35(i74, r82, r85)
  Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i74_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r85_;
  goto L35_;

D42_:;
  // deopt 153 [i79, srcref]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_srcref;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L150_:;
  // srcref1 = force? srcref
  Rsh_Fir_reg_srcref1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref);
  // checkMissing(srcref1)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_srcref1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // l16 = ld x
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c73 = `is.object`(l16)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args146);
  // if c73 then L151() else L152(i79, srcref1, l16, srcref1, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L151()
    goto L151_;
  } else {
  // L152(i79, srcref1, l16, srcref1, l16)
    Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i79_;
    Rsh_Fir_reg_srcref4_ = Rsh_Fir_reg_srcref1_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_srcref5_ = Rsh_Fir_reg_srcref1_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l16_;
    goto L152_;
  }

L151_:;
  // dr20 = tryDispatchBuiltin.1("[[", l16)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc10 then L153() else L152(i79, srcref1, l16, srcref1, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L153()
    goto L153_;
  } else {
  // L152(i79, srcref1, l16, srcref1, dr20)
    Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i79_;
    Rsh_Fir_reg_srcref4_ = Rsh_Fir_reg_srcref1_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_srcref5_ = Rsh_Fir_reg_srcref1_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr20_;
    goto L152_;
  }

L152_:;
  // i84 = ld i
  Rsh_Fir_reg_i84_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L154() else D43()
  // L154()
  goto L154_;

L153_:;
  // dx29 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L37(i79, srcref1, l16, srcref1, dx29)
  // L37(i79, srcref1, l16, srcref1, dx29)
  Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i79_;
  Rsh_Fir_reg_srcref8_ = Rsh_Fir_reg_srcref1_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_srcref9_ = Rsh_Fir_reg_srcref1_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L37_;

D43_:;
  // deopt 157 [i81, srcref4, l19, srcref5, l20, i84]
  SEXP Rsh_Fir_array_deopt_stack40[6];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i81_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_srcref4_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_srcref5_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack40[5] = Rsh_Fir_reg_i84_;
  Rsh_Fir_deopt(157, 6, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L154_:;
  // i85 = force? i84
  Rsh_Fir_reg_i85_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i84_);
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r87 = dyn __7(l20, i85)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_i85_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L37(i81, srcref4, l19, srcref5, r87)
  // L37(i81, srcref4, l19, srcref5, r87)
  Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i81_;
  Rsh_Fir_reg_srcref8_ = Rsh_Fir_reg_srcref4_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_srcref9_ = Rsh_Fir_reg_srcref5_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r87_;
  goto L37_;

D44_:;
  // deopt 161 [i83, srcref8, l22, dx30, srcref9]
  SEXP Rsh_Fir_array_deopt_stack41[5];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i83_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_srcref8_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_deopt_stack41[4] = Rsh_Fir_reg_srcref9_;
  Rsh_Fir_deopt(161, 5, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L155_:;
  // r88 = dyn attr__1(dx30, NULL, "srcref", srcref9)
  SEXP Rsh_Fir_array_args151[4];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args151[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args151[3] = Rsh_Fir_reg_srcref9_;
  SEXP Rsh_Fir_array_arg_names37[4];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L156() else D45()
  // L156()
  goto L156_;

D45_:;
  // deopt 164 [i83, srcref8, l22, r88]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i83_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_srcref8_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(164, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L156_:;
  // c74 = `is.object`(l22)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args152);
  // if c74 then L157() else L158(i83, srcref8, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L157()
    goto L157_;
  } else {
  // L158(i83, srcref8, l22)
    Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i83_;
    Rsh_Fir_reg_srcref11_ = Rsh_Fir_reg_srcref8_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L158_;
  }

L157_:;
  // dr22 = tryDispatchBuiltin.0("[[<-", l22, r88)
  SEXP Rsh_Fir_array_args153[3];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args153[2] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args153);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc11 then L159() else L158(i83, srcref8, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L159()
    goto L159_;
  } else {
  // L158(i83, srcref8, dr22)
    Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i83_;
    Rsh_Fir_reg_srcref11_ = Rsh_Fir_reg_srcref8_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr22_;
    goto L158_;
  }

L158_:;
  // i90 = ld i
  Rsh_Fir_reg_i90_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L160() else D46()
  // L160()
  goto L160_;

L159_:;
  // dx31 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L38(i83, dx31)
  // L38(i83, dx31)
  Rsh_Fir_reg_i89_ = Rsh_Fir_reg_i83_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L38_;

D46_:;
  // deopt 165 [i87, srcref11, l24, r88, i90]
  SEXP Rsh_Fir_array_deopt_stack43[5];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i87_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_srcref11_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_deopt_stack43[4] = Rsh_Fir_reg_i90_;
  Rsh_Fir_deopt(165, 5, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L160_:;
  // i91 = force? i90
  Rsh_Fir_reg_i91_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i90_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r89 = dyn ____3(l24, r88, i91)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args156[2] = Rsh_Fir_reg_i91_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L38(i87, r89)
  // L38(i87, r89)
  Rsh_Fir_reg_i89_ = Rsh_Fir_reg_i87_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r89_;
  goto L38_;

D47_:;
  // deopt 174 [x34]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L162_:;
  // x35 = force? x34
  Rsh_Fir_reg_x35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x34_);
  // checkMissing(x35)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_x35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x35
  return Rsh_Fir_reg_x35_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   p = prom<V +>{
  //     return -1;
  //   };
  //   r1 = dyn getOption1("deparse.max.lines", p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_1, 0, NULL, CCP, RHO);
  // r3 = dyn getOption("traceback.max.lines", p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_2, 0, NULL, CCP, RHO);
  // r1 = dyn getOption1("deparse.max.lines", p)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 4);
}
SEXP Rsh_Fir_user_promise_inner1139050501_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_max_lines1_;
  SEXP Rsh_Fir_reg_max_lines2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r8 = `<=`(r6, 1.0)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args36);
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // max_lines1 = ld `max.lines`
  Rsh_Fir_reg_max_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // max_lines2 = force? max_lines1
  Rsh_Fir_reg_max_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines1_);
  // checkMissing(max_lines2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_max_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r7 = dyn length(max_lines2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_max_lines2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base(<sym max.lines>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_baseenv;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf baseenv
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf baseenv in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
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
  // baseenv = ldf baseenv in base
  Rsh_Fir_reg_baseenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r24 = dyn baseenv()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_baseenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base4()
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max_lines3_;
  SEXP Rsh_Fir_reg_max_lines4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // max_lines3 = ld `max.lines`
  Rsh_Fir_reg_max_lines3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // max_lines4 = force? max_lines3
  Rsh_Fir_reg_max_lines4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines3_);
  // checkMissing(max_lines4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_max_lines4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return max_lines4
  return Rsh_Fir_reg_max_lines4_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c51 = `is.object`(x23)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args92);
  // if c51 then L1() else L2(x23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x23)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x23_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", x23)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // i25 = ld i
  Rsh_Fir_reg_i25_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // i26 = force? i25
  Rsh_Fir_reg_i26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i25_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r50 = dyn __2(x25, i26)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r50_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nlines;
  SEXP Rsh_Fir_reg_nlines1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // nlines = ld nlines
  Rsh_Fir_reg_nlines = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // nlines1 = force? nlines
  Rsh_Fir_reg_nlines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlines);
  // checkMissing(nlines1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_nlines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return nlines1
  return Rsh_Fir_reg_nlines1_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_length1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c6_1;
  SEXP Rsh_Fir_reg_c7_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_1;
  SEXP Rsh_Fir_reg_c20_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_x7_1;
  SEXP Rsh_Fir_reg_x8_1;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c24_1;
  SEXP Rsh_Fir_reg_c25_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args158);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args159);
  // if c then L11() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L11()
    goto L11_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L1_;
  }

L1_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args160);
  // if c9 then L17() else L3(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L17()
    goto L17_;
  } else {
  // L3(c9)
    Rsh_Fir_reg_c11_1 = Rsh_Fir_reg_c9_;
    goto L3_;
  }

L2_:;
  // r6 = `==`(r4, 1)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args161);
  // c6 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c6_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args162);
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_c6_1;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args163);
  // goto L1(c7)
  // L1(c7)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c7_1;
  goto L1_;

L3_:;
  // c18 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_c11_1;
  Rsh_Fir_reg_c18_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args164);
  // if c18 then L23() else L5(c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_1)) {
  // L23()
    goto L23_;
  } else {
  // L5(c18)
    Rsh_Fir_reg_c20_1 = Rsh_Fir_reg_c18_1;
    goto L5_;
  }

L4_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args165);
  // c15 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args166);
  // c16 = `&&`(c14, c15)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args167);
  // goto L3(c16)
  // L3(c16)
  Rsh_Fir_reg_c11_1 = Rsh_Fir_reg_c16_;
  goto L3_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c20
  return Rsh_Fir_reg_c20_1;

L6_:;
  // r14 = `>=`(r12, 0)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args168);
  // c24 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c24_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args169);
  // c25 = `&&`(c23, c24)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_c24_1;
  Rsh_Fir_reg_c25_1 = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args170);
  // goto L5(c25)
  // L5(c25)
  Rsh_Fir_reg_c20_1 = Rsh_Fir_reg_c25_1;
  goto L5_;

L7_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L9_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r2 = dyn is_numeric(x2)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L11_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args174);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L2_;

D2_:;
  // deopt 8 [c, x3]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L14_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r5 = dyn length(x4)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 11 [c, r5]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(c, r5)
  // L2(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_1;
  goto L2_;

L17_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args178);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

L19_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L4(c9, r7)
  // L4(c9, r7)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L4_;

D4_:;
  // deopt 17 [c9, x5]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L20_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r9 = dyn is_na(x6)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 20 [c9, r9]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L4(c9, r9)
  // L4(c9, r9)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_;
  goto L4_;

L23_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args182);
  // if guard3 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L25_:;
  // r11 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L6(c18, r11)
  // L6(c18, r11)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_1;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L6_;

D6_:;
  // deopt 25 [c18, x7]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_c18_1;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_x7_1;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L26_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_1);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_x8_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r13 = dyn as_integer(x8)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_x8_1;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

D7_:;
  // deopt 28 [c18, r13]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_c18_1;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L6(c18, r13)
  // L6(c18, r13)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_1;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_1;
  goto L6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
