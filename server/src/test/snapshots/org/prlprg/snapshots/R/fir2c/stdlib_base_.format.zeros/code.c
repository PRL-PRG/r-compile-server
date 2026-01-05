#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner3518340412_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner3518340412_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3518340412_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3518340412_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3518340412_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
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
  // r = clos inner3518340412
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3518340412_, RHO, CCP);
  // st `.format.zeros` = r
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
SEXP Rsh_Fir_user_function_from_R_inner3518340412_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner3518340412 dynamic dispatch from R ([x, `zero.print`, nx, replace, `warn.non.fitting`])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner3518340412_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner3518340412_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3518340412 dynamic dispatch ([x, `zero.print`, nx, replace, `warn.non.fitting`])

  return Rsh_Fir_user_version_inner3518340412_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3518340412_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3518340412 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3518340412/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_zero_print;
  SEXP Rsh_Fir_reg_nx;
  SEXP Rsh_Fir_reg_replace;
  SEXP Rsh_Fir_reg_warn_non_fitting;
  SEXP Rsh_Fir_reg_nx_isMissing;
  SEXP Rsh_Fir_reg_nx_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_replace_isMissing;
  SEXP Rsh_Fir_reg_replace_orDefault;
  SEXP Rsh_Fir_reg_warn_non_fitting_isMissing;
  SEXP Rsh_Fir_reg_warn_non_fitting_orDefault;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_zero_print1_;
  SEXP Rsh_Fir_reg_zero_print2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_nx1_;
  SEXP Rsh_Fir_reg_nx2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_nx3_;
  SEXP Rsh_Fir_reg_nx4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_zero_print3_;
  SEXP Rsh_Fir_reg_zero_print4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_zero_print5_;
  SEXP Rsh_Fir_reg_zero_print6_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_zero_print7_;
  SEXP Rsh_Fir_reg_zero_print8_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_zero_print9_;
  SEXP Rsh_Fir_reg_zero_print10_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_zero_print11_;
  SEXP Rsh_Fir_reg_zero_print12_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i0_;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_nchar1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_replace1_;
  SEXP Rsh_Fir_reg_replace2_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_zero_print13_;
  SEXP Rsh_Fir_reg_zero_print14_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_zero_print16_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_zero_print18_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_zero_print19_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_nz;
  SEXP Rsh_Fir_reg_nz1_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_warn_non_fitting1_;
  SEXP Rsh_Fir_reg_warn_non_fitting2_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_pmin;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_pmax;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_zero_print20_;
  SEXP Rsh_Fir_reg_zero_print21_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_zero_print24_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_zero_print25_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_zero_print28_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_zero_print29_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_substr__;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_zero_print31_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_nc4_;
  SEXP Rsh_Fir_reg_nc5_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_strrep;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_l22_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_P2_;
  SEXP Rsh_Fir_reg_P3_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_substr__1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_l24_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_l26_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_P8_;
  SEXP Rsh_Fir_reg_P9_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_l28_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_zero_print = PARAMS[1];
  Rsh_Fir_reg_nx = PARAMS[2];
  Rsh_Fir_reg_replace = PARAMS[3];
  Rsh_Fir_reg_warn_non_fitting = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `zero.print` = zero_print
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_zero_print, RHO);
  (void)(Rsh_Fir_reg_zero_print);
  // nx_isMissing = missing.0(nx)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nx;
  Rsh_Fir_reg_nx_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nx_isMissing then L0() else L1(nx)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nx_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(nx)
    Rsh_Fir_reg_nx_orDefault = Rsh_Fir_reg_nx;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   suppressWarnings = ldf suppressWarnings;
  //   p = prom<V +>{
  //     sym = ldf `as.numeric`;
  //     base = ldf `as.numeric` in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r1):
  //     return r1;
  //   L1():
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     as_numeric = ldf `as.numeric` in base;
  //     r2 = dyn as_numeric(x2);
  //     goto L0(r2);
  //   L2():
  //     r = dyn base(<sym x>);
  //     goto L0(r);
  //   };
  //   r4 = dyn suppressWarnings(p);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_nx_orDefault = Rsh_Fir_reg_p1_;
  goto L1_;

L1_:;
  // st nx = nx_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_nx_orDefault, RHO);
  (void)(Rsh_Fir_reg_nx_orDefault);
  // replace_isMissing = missing.0(replace)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_replace;
  Rsh_Fir_reg_replace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if replace_isMissing then L2(FALSE) else L2(replace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_replace_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_replace_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(replace)
    Rsh_Fir_reg_replace_orDefault = Rsh_Fir_reg_replace;
    goto L2_;
  }

L2_:;
  // st replace = replace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_replace_orDefault, RHO);
  (void)(Rsh_Fir_reg_replace_orDefault);
  // warn_non_fitting_isMissing = missing.0(warn_non_fitting)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_warn_non_fitting;
  Rsh_Fir_reg_warn_non_fitting_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if warn_non_fitting_isMissing then L3(TRUE) else L3(warn_non_fitting)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_warn_non_fitting_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_warn_non_fitting_orDefault = Rsh_const(CCP, 8);
    goto L3_;
  } else {
  // L3(warn_non_fitting)
    Rsh_Fir_reg_warn_non_fitting_orDefault = Rsh_Fir_reg_warn_non_fitting;
    goto L3_;
  }

L3_:;
  // st `warn.non.fitting` = warn_non_fitting_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_warn_non_fitting_orDefault, RHO);
  (void)(Rsh_Fir_reg_warn_non_fitting_orDefault);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L4_:;
  // r8 = `!`(r7)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args9);
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c1 then L42() else L5(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L42()
    goto L42_;
  } else {
  // L5(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L5_;
  }

L39_:;
  // zero_print1 = ld `zero.print`
  Rsh_Fir_reg_zero_print1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L40_:;
  // r6 = dyn base1(<sym zero.print>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D0_:;
  // deopt 1 [zero_print1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_zero_print1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // c13 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c13 then L52() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L52()
    goto L52_;
  } else {
  // L8()
    goto L8_;
  }

L41_:;
  // zero_print2 = force? zero_print1
  Rsh_Fir_reg_zero_print2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print1_);
  // checkMissing(zero_print2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_zero_print2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `==`(zero_print2, NULL)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_zero_print2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args14);
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c;
  goto L4_;

L42_:;
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L6_:;
  // c10 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // c11 = `&&`(c6, c10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args17);
  // goto L5(c11)
  // L5(c11)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c11_;
  goto L5_;

L8_:;
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L153() else D50()
  // L153()
  goto L153_;

L43_:;
  // nx1 = ld nx
  Rsh_Fir_reg_nx1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L45() else D1()
  // L45()
  goto L45_;

L44_:;
  // r9 = dyn base2(<lang `<-`(i0, `&`(`==`(nx, 0.0), `!`(is.na(nx))))>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, RHO);
  // goto L6(c1, r9)
  // L6(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

L52_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

D1_:;
  // deopt 7 [c1, nx1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_nx1_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 184 [x11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // r24 = `>`(r22, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args20);
  // c14 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c14 then L57() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L57()
    goto L57_;
  } else {
  // L10()
    goto L10_;
  }

L45_:;
  // nx2 = force? nx1
  Rsh_Fir_reg_nx2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx1_);
  // checkMissing(nx2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_nx2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r11 = `==`(nx2, 0.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_nx2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args23);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L53_:;
  // zero_print3 = ld `zero.print`
  Rsh_Fir_reg_zero_print3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D5()
  // L55()
  goto L55_;

L54_:;
  // r21 = dyn base4(<sym zero.print>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, RHO);
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L9_;

L153_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x12
  return Rsh_Fir_reg_x12_;

D5_:;
  // deopt 24 [zero_print3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_zero_print3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // r18 = `!`(r16)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args27);
  // r19 = `&&`(r15, r18)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args28);
  // st i0 = r19
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r20 = dyn any(r19)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, RHO);
  // check L50() else D4()
  // L50()
  goto L50_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym5 = ldf `is.logical`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf `is.logical` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L46_:;
  // nx3 = ld nx
  Rsh_Fir_reg_nx3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L48() else D2()
  // L48()
  goto L48_;

L47_:;
  // r14 = dyn base3(<sym nx>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, RHO);
  // goto L7(c1, r11, r14)
  // L7(c1, r11, r14)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r14_;
  goto L7_;

L55_:;
  // zero_print4 = force? zero_print3
  Rsh_Fir_reg_zero_print4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print3_);
  // checkMissing(zero_print4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_zero_print4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r23 = dyn length(zero_print4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_zero_print4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, RHO);
  // check L56() else D6()
  // L56()
  goto L56_;

L57_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L58() else D7()
  // L58()
  goto L58_;

D2_:;
  // deopt 12 [c1, r11, nx3]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_nx3_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 20 [c9, r20]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 [r23]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // c16 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c16 then L64() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L64()
    goto L64_;
  } else {
  // L13()
    goto L13_;
  }

L48_:;
  // nx4 = force? nx3
  Rsh_Fir_reg_nx4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx3_);
  // checkMissing(nx4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nx4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r17 = dyn is_na(nx4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_nx4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, RHO);
  // check L49() else D3()
  // L49()
  goto L49_;

L50_:;
  // goto L6(c9, r20)
  // L6(c9, r20)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r20_;
  goto L6_;

L56_:;
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L9_;

L58_:;
  // r25 = dyn stop("'zero.print' has length > 1")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, RHO);
  // check L59() else D8()
  // L59()
  goto L59_;

L61_:;
  // zero_print5 = ld `zero.print`
  Rsh_Fir_reg_zero_print5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

L62_:;
  // r27 = dyn base5(<sym zero.print>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D3_:;
  // deopt 15 [c1, r11, r17]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 33 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 37 [zero_print5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_zero_print5_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym6 = ldf `is.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base6 = ldf `is.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard6 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L49_:;
  // goto L7(c1, r11, r17)
  // L7(c1, r11, r17)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;

L59_:;
  // goto L11()
  // L11()
  goto L11_;

L63_:;
  // zero_print6 = force? zero_print5
  Rsh_Fir_reg_zero_print6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print5_);
  // checkMissing(zero_print6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_zero_print6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c15 = `is.logical`(zero_print6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_zero_print6_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args41);
  // goto L12(c15)
  // L12(c15)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c15_;
  goto L12_;

L64_:;
  // zero_print7 = ld `zero.print`
  Rsh_Fir_reg_zero_print7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L65() else D10()
  // L65()
  goto L65_;

D10_:;
  // deopt 40 [zero_print7]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_zero_print7_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L17_:;
  // r33 = `!`(r32)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args42);
  // c19 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c19 then L72() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L72()
    goto L72_;
  } else {
  // L18()
    goto L18_;
  }

L65_:;
  // zero_print8 = force? zero_print7
  Rsh_Fir_reg_zero_print8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print7_);
  // checkMissing(zero_print8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_zero_print8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(zero_print8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_zero_print8_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c17 then L66() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L66()
    goto L66_;
  } else {
  // L14()
    goto L14_;
  }

L69_:;
  // zero_print9 = ld `zero.print`
  Rsh_Fir_reg_zero_print9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L71() else D11()
  // L71()
  goto L71_;

L70_:;
  // r31 = dyn base6(<sym zero.print>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, RHO);
  // goto L17(r31)
  // L17(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L17_;

D11_:;
  // deopt 50 [zero_print9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_zero_print9_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15(" ")
  // L15(" ")
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 23);
  goto L15_;

L15_:;
  // st `zero.print` = r29
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L16()
  // L16()
  goto L16_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym7 = ldf nchar
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base7 = ldf nchar in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L66_:;
  // goto L15("0")
  // L15("0")
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 25);
  goto L15_;

L71_:;
  // zero_print10 = force? zero_print9
  Rsh_Fir_reg_zero_print10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print9_);
  // checkMissing(zero_print10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_zero_print10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c18 = `is.character`(zero_print10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_zero_print10_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args49);
  // goto L17(c18)
  // L17(c18)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_c18_;
  goto L17_;

L72_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L73() else D12()
  // L73()
  goto L73_;

D12_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // st nz = r37
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // sym8 = ldf nchar
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base8 = ldf nchar in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard8 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L73_:;
  // r34 = dyn stop1("'zero.print' must be character, logical or NULL")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, RHO);
  // check L74() else D13()
  // L74()
  goto L74_;

L76_:;
  // zero_print11 = ld `zero.print`
  Rsh_Fir_reg_zero_print11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D14()
  // L78()
  goto L78_;

L77_:;
  // r36 = dyn base7(<sym zero.print>, "c")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, RHO);
  // goto L20(r36)
  // L20(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L20_;

D13_:;
  // deopt 57 [r34]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 62 [zero_print11]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_zero_print11_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L21_:;
  // st nc = r40
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L88() else D19()
  // L88()
  goto L88_;

L74_:;
  // goto L19()
  // L19()
  goto L19_;

L78_:;
  // zero_print12 = force? zero_print11
  Rsh_Fir_reg_zero_print12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print11_);
  // checkMissing(zero_print12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_zero_print12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r38 = dyn nchar(zero_print12, "c", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_zero_print12_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args54[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, RHO);
  // check L79() else D15()
  // L79()
  goto L79_;

L80_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L82() else D16()
  // L82()
  goto L82_;

L81_:;
  // r39 = dyn base8(<lang `[`(x, i0)>, "c")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, RHO);
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

D15_:;
  // deopt 68 [r38]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 72 [x3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L20(r38)
  // L20(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L20_;

L82_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(x4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c20 then L83() else L84(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L83()
    goto L83_;
  } else {
  // L84(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L84_;
  }

L88_:;
  // p3 = prom<V +>{
  //   regexpr = ldf regexpr;
  //   p2 = prom<V +>{
  //     x7 = ld x;
  //     x8 = force? x7;
  //     checkMissing(x8);
  //     c21 = `is.object`(x8);
  //     if c21 then L1() else L2(x8);
  //   L0(dx3):
  //     return dx3;
  //   L1():
  //     dr2 = tryDispatchBuiltin.1("[", x8);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L3() else L2(dr2);
  //   L2(x10):
  //     i2 = ld i0;
  //     i3 = force? i2;
  //     __1 = ldf `[` in base;
  //     r43 = dyn __1(x10, i3);
  //     goto L0(r43);
  //   L3():
  //     dx2 = getTryDispatchBuiltinValue(dr2);
  //     goto L0(dx2);
  //   };
  //   r45 = dyn regexpr[, , fixed]("0", p2, TRUE);
  //   return r45;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_2, 0, NULL, CCP, RHO);
  // r47 = dyn as_vector(p3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

D20_:;
  // deopt 86 [r47]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L22_:;
  // nchar1 = ldf nchar in base
  Rsh_Fir_reg_nchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r42 = dyn nchar1(dx1, "c", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args66[4];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args66[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar1_, 4, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, RHO);
  // check L87() else D18()
  // L87()
  goto L87_;

L83_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc then L85() else L84(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L85()
    goto L85_;
  } else {
  // L84(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L84_;
  }

L84_:;
  // i0 = ld i0
  Rsh_Fir_reg_i0_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L86() else D17()
  // L86()
  goto L86_;

L89_:;
  // st ind0 = r47
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // replace1 = ld replace
  Rsh_Fir_reg_replace1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L90() else D21()
  // L90()
  goto L90_;

D17_:;
  // deopt 74 [x6, i0]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i0_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 81 [r42]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 88 [replace1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_replace1_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L22(dx)
  // L22(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L22_;

L86_:;
  // i1 = force? i0
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i0_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r41 = dyn __(x6, i1)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, RHO);
  // goto L22(r41)
  // L22(r41)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r41_;
  goto L22_;

L87_:;
  // goto L21(r42)
  // L21(r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L21_;

L90_:;
  // replace2 = force? replace1
  Rsh_Fir_reg_replace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_replace1_);
  // checkMissing(replace2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_replace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c22 = `as.logical`(replace2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_replace2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c22 then L91() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L91()
    goto L91_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard9 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L25_:;
  // goto L38()
  // L38()
  goto L38_;

L91_:;
  // zero_print13 = ld `zero.print`
  Rsh_Fir_reg_zero_print13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L92() else D22()
  // L92()
  goto L92_;

D22_:;
  // deopt 90 [zero_print13]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_zero_print13_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L26_:;
  // c24 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args74);
  // if c24 then L103() else L27(c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L103()
    goto L103_;
  } else {
  // L27(c24)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c24_;
    goto L27_;
  }

L92_:;
  // zero_print14 = force? zero_print13
  Rsh_Fir_reg_zero_print14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print13_);
  // checkMissing(zero_print14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_zero_print14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c23 = `is.object`(l)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c23 then L93() else L94(zero_print14, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L93()
    goto L93_;
  } else {
  // L94(zero_print14, l)
    Rsh_Fir_reg_zero_print16_ = Rsh_Fir_reg_zero_print14_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L94_;
  }

L98_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L100() else D24()
  // L100()
  goto L100_;

L99_:;
  // r49 = dyn base9(<lang `<`(nc, nz)>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names22, RHO);
  // goto L26(r49)
  // L26(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L26_;

D24_:;
  // deopt 99 [nc]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L24_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L25(zero_print18)
  // L25(zero_print18)
  Rsh_Fir_reg_zero_print19_ = Rsh_Fir_reg_zero_print18_;
  goto L25_;

L27_:;
  // c30 = `as.logical`(c26)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // if c30 then L106() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L106()
    goto L106_;
  } else {
  // L28()
    goto L28_;
  }

L93_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, zero_print14)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_zero_print14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args79);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc2 then L95() else L94(zero_print14, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L95()
    goto L95_;
  } else {
  // L94(zero_print14, dr4)
    Rsh_Fir_reg_zero_print16_ = Rsh_Fir_reg_zero_print14_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L94_;
  }

L94_:;
  // i4 = ld i0
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L96() else D23()
  // L96()
  goto L96_;

L100_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // nz = ld nz
  Rsh_Fir_reg_nz = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L101() else D25()
  // L101()
  goto L101_;

L103_:;
  // warn_non_fitting1 = ld `warn.non.fitting`
  Rsh_Fir_reg_warn_non_fitting1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L104() else D27()
  // L104()
  goto L104_;

D23_:;
  // deopt 93 [zero_print16, l2, zero_print14, i4]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_zero_print16_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_zero_print14_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_i4_;
  Rsh_Fir_deopt(93, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 100 [nc1, nz]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_nz;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 105 [c24, warn_non_fitting1]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_warn_non_fitting1_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // pmin = ldf pmin
  Rsh_Fir_reg_pmin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L110() else D30()
  // L110()
  goto L110_;

L95_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L24(zero_print14, dx4)
  // L24(zero_print14, dx4)
  Rsh_Fir_reg_zero_print18_ = Rsh_Fir_reg_zero_print14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L24_;

L96_:;
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r48 = dyn ___(l2, zero_print14, i5)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_zero_print14_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, RHO);
  // goto L24(zero_print16, r48)
  // L24(zero_print16, r48)
  Rsh_Fir_reg_zero_print18_ = Rsh_Fir_reg_zero_print16_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r48_;
  goto L24_;

L101_:;
  // nz1 = force? nz
  Rsh_Fir_reg_nz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nz);
  // checkMissing(nz1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_nz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r51 = `<`(nc1, nz1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_nz1_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args85);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r52 = dyn any1(r51)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names24, RHO);
  // check L102() else D26()
  // L102()
  goto L102_;

L104_:;
  // warn_non_fitting2 = force? warn_non_fitting1
  Rsh_Fir_reg_warn_non_fitting2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warn_non_fitting1_);
  // checkMissing(warn_non_fitting2)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_warn_non_fitting2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(warn_non_fitting2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_warn_non_fitting2_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args88);
  // c28 = `&&`(c24, c27)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args89);
  // goto L27(c28)
  // L27(c28)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c28_;
  goto L27_;

L106_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L107() else D28()
  // L107()
  goto L107_;

D26_:;
  // deopt 104 [r52]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L26(r52)
  // L26(r52)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r52_;
  goto L26_;

L107_:;
  // r53 = dyn warning("'zero.print' is truncated to fit into formatted zeros; consider 'replace=TRUE'")
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, RHO);
  // check L108() else D29()
  // L108()
  goto L108_;

L110_:;
  // p4 = prom<V +>{
  //   nc2 = ld nc;
  //   nc3 = force? nc2;
  //   checkMissing(nc3);
  //   return nc3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   nz2 = ld nz;
  //   nz3 = force? nz2;
  //   checkMissing(nz3);
  //   r56 = `-`(nz3, 1);
  //   ind0 = ld ind0;
  //   ind1 = force? ind0;
  //   checkMissing(ind1);
  //   r57 = `+`(r56, ind1);
  //   return r57;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_5, 0, NULL, CCP, RHO);
  // r59 = dyn pmin(p4, p5)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmin, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names26, RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

D29_:;
  // deopt 111 [r53]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 118 [r59]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L29()
  // L29()
  goto L29_;

L111_:;
  // st i2 = r59
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // pmax = ldf pmax
  Rsh_Fir_reg_pmax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

D32_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p6 = prom<V +>{
  //   i6 = ld i2;
  //   i7 = force? i6;
  //   checkMissing(i7);
  //   nz4 = ld nz;
  //   nz5 = force? nz4;
  //   checkMissing(nz5);
  //   r60 = `-`(i7, nz5);
  //   r61 = `+`(r60, 1);
  //   return r61;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_6, 0, NULL, CCP, RHO);
  // r63 = dyn pmax(1, p6)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmax, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names27, RHO);
  // check L113() else D33()
  // L113()
  goto L113_;

D33_:;
  // deopt 124 [r63]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L113_:;
  // st i1 = r63
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // zero_print20 = ld `zero.print`
  Rsh_Fir_reg_zero_print20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L114() else D34()
  // L114()
  goto L114_;

D34_:;
  // deopt 126 [zero_print20]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_zero_print20_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L114_:;
  // zero_print21 = force? zero_print20
  Rsh_Fir_reg_zero_print21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero_print20_);
  // checkMissing(zero_print21)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_zero_print21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c31 = `is.object`(l3)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args103);
  // if c31 then L115() else L116(zero_print21, l3, zero_print21, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L115()
    goto L115_;
  } else {
  // L116(zero_print21, l3, zero_print21, l3)
    Rsh_Fir_reg_zero_print24_ = Rsh_Fir_reg_zero_print21_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_zero_print25_ = Rsh_Fir_reg_zero_print21_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l3_;
    goto L116_;
  }

L30_:;
  // substr__ = ldf `substr<-`
  Rsh_Fir_reg_substr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L119() else D36()
  // L119()
  goto L119_;

L115_:;
  // dr6 = tryDispatchBuiltin.1("[", l3)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc3 then L117() else L116(zero_print21, l3, zero_print21, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L117()
    goto L117_;
  } else {
  // L116(zero_print21, l3, zero_print21, dr6)
    Rsh_Fir_reg_zero_print24_ = Rsh_Fir_reg_zero_print21_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_zero_print25_ = Rsh_Fir_reg_zero_print21_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr6_;
    goto L116_;
  }

L116_:;
  // i8 = ld i0
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L118() else D35()
  // L118()
  goto L118_;

D35_:;
  // deopt 130 [zero_print24, l6, zero_print25, l7, i8]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_zero_print24_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_zero_print25_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(130, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 134 [zero_print28, l9, dx7, zero_print29]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_zero_print28_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_zero_print29_;
  Rsh_Fir_deopt(134, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L117_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L30(zero_print21, l3, zero_print21, dx6)
  // L30(zero_print21, l3, zero_print21, dx6)
  Rsh_Fir_reg_zero_print28_ = Rsh_Fir_reg_zero_print21_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_zero_print29_ = Rsh_Fir_reg_zero_print21_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L30_;

L118_:;
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r64 = dyn __2(l7, i9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names28, RHO);
  // goto L30(zero_print24, l6, zero_print25, r64)
  // L30(zero_print24, l6, zero_print25, r64)
  Rsh_Fir_reg_zero_print28_ = Rsh_Fir_reg_zero_print24_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_zero_print29_ = Rsh_Fir_reg_zero_print25_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r64_;
  goto L30_;

L119_:;
  // p7 = prom<V +>{
  //   i10 = ld i1;
  //   i11 = force? i10;
  //   checkMissing(i11);
  //   return i11;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   i12 = ld i2;
  //   i13 = force? i12;
  //   checkMissing(i13);
  //   return i13;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_8, 0, NULL, CCP, RHO);
  // r67 = dyn substr__(dx7, NULL, p7, p8, zero_print29)
  SEXP Rsh_Fir_array_args110[5];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args110[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args110[4] = Rsh_Fir_reg_zero_print29_;
  SEXP Rsh_Fir_array_arg_names29[5];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr__, 5, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names29, RHO);
  // check L120() else D37()
  // L120()
  goto L120_;

D37_:;
  // deopt 138 [zero_print28, l9, r67]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_zero_print28_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(138, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // c32 = `is.object`(l9)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args111);
  // if c32 then L121() else L122(zero_print28, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L121()
    goto L121_;
  } else {
  // L122(zero_print28, l9)
    Rsh_Fir_reg_zero_print31_ = Rsh_Fir_reg_zero_print28_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L122_;
  }

L31_:;
  // st x = dx9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard10 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L121_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l9, r67)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc4 then L123() else L122(zero_print28, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L123()
    goto L123_;
  } else {
  // L122(zero_print28, dr8)
    Rsh_Fir_reg_zero_print31_ = Rsh_Fir_reg_zero_print28_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr8_;
    goto L122_;
  }

L122_:;
  // i14 = ld i0
  Rsh_Fir_reg_i14_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L124() else D38()
  // L124()
  goto L124_;

D38_:;
  // deopt 139 [zero_print31, l11, r67, i14]
  SEXP Rsh_Fir_array_deopt_stack33[4];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_zero_print31_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_i14_;
  Rsh_Fir_deopt(139, 4, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L32_:;
  // c33 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args115);
  // if c33 then L130() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L130()
    goto L130_;
  } else {
  // L33()
    goto L33_;
  }

L123_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L31(dx8)
  // L31(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L31_;

L124_:;
  // i15 = force? i14
  Rsh_Fir_reg_i15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i14_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r68 = dyn ___1(l11, r67, i15)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names30, RHO);
  // goto L31(r68)
  // L31(r68)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r68_;
  goto L31_;

L125_:;
  // nc4 = ld nc
  Rsh_Fir_reg_nc4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L127() else D39()
  // L127()
  goto L127_;

L126_:;
  // r69 = dyn base10(<lang `<-`(P, `>`(nc, i2))>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names31, RHO);
  // goto L32(r69)
  // L32(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L32_;

D39_:;
  // deopt 145 [nc4]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_nc4_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_zero_print19_ = Rsh_const(CCP, 11);
  goto L25_;

L127_:;
  // nc5 = force? nc4
  Rsh_Fir_reg_nc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc4_);
  // checkMissing(nc5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_nc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // i16 = ld i2
  Rsh_Fir_reg_i16_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L128() else D40()
  // L128()
  goto L128_;

L130_:;
  // strrep = ldf strrep
  Rsh_Fir_reg_strrep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L131() else D42()
  // L131()
  goto L131_;

D40_:;
  // deopt 146 [nc5, i16]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_nc5_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(146, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 153 []
  Rsh_Fir_deopt(153, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // i17 = force? i16
  Rsh_Fir_reg_i17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i16_);
  // checkMissing(i17)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_i17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r71 = `>`(nc5, i17)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_nc5_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args121);
  // st P = r71
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r72 = dyn any2(r71)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names32, RHO);
  // check L129() else D41()
  // L129()
  goto L129_;

L131_:;
  // p9 = prom<V +>{
  //   nc6 = ld nc;
  //   nc7 = force? nc6;
  //   checkMissing(nc7);
  //   i18 = ld i2;
  //   i19 = force? i18;
  //   checkMissing(i19);
  //   r73 = `-`(nc7, i19);
  //   c34 = `is.object`(r73);
  //   if c34 then L1() else L2(r73);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", r73);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(r75):
  //   P = ld P;
  //   P1 = force? P;
  //   __3 = ldf `[` in base;
  //   r76 = dyn __3(r75, P1);
  //   goto L0(r76);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_9, 0, NULL, CCP, RHO);
  // r78 = dyn strrep(" ", p9)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strrep, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names34, RHO);
  // check L132() else D43()
  // L132()
  goto L132_;

D41_:;
  // deopt 151 [r72]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 156 [r78]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L32(r72)
  // L32(r72)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r72_;
  goto L32_;

L132_:;
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c35 = `is.object`(l12)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c35 then L133() else L134(r78, l12, r78, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L133()
    goto L133_;
  } else {
  // L134(r78, l12, r78, l12)
    Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l12_;
    goto L134_;
  }

L34_:;
  // c36 = `is.object`(dx13)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args133);
  // if c36 then L137() else L138(r85, l18, dx13, r86, dx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L137()
    goto L137_;
  } else {
  // L138(r85, l18, dx13, r86, dx13)
    Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r85_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r86_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx13_;
    goto L138_;
  }

L133_:;
  // dr12 = tryDispatchBuiltin.1("[", l12)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc6 then L135() else L134(r78, l12, r78, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L135()
    goto L135_;
  } else {
  // L134(r78, l12, r78, dr12)
    Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr12_;
    goto L134_;
  }

L134_:;
  // i20 = ld i0
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L136() else D44()
  // L136()
  goto L136_;

D44_:;
  // deopt 159 [r81, l15, r82, l16, i20]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(159, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L35_:;
  // substr__1 = ldf `substr<-`
  Rsh_Fir_reg_substr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L141() else D46()
  // L141()
  goto L141_;

L135_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L34(r78, l12, r78, dx12)
  // L34(r78, l12, r78, dx12)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L34_;

L136_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r87 = dyn __4(l16, i21)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names35, RHO);
  // goto L34(r81, l15, r82, r87)
  // L34(r81, l15, r82, r87)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r87_;
  goto L34_;

L137_:;
  // dr14 = tryDispatchBuiltin.1("[", dx13)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc7 then L139() else L138(r85, l18, dx13, r86, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L139()
    goto L139_;
  } else {
  // L138(r85, l18, dx13, r86, dr14)
    Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r85_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r86_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr14_;
    goto L138_;
  }

L138_:;
  // P2 = ld P
  Rsh_Fir_reg_P2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L140() else D45()
  // L140()
  goto L140_;

D45_:;
  // deopt 164 [r90, l20, dx16, r91, dx17, P2]
  SEXP Rsh_Fir_array_deopt_stack39[6];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack39[4] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack39[5] = Rsh_Fir_reg_P2_;
  Rsh_Fir_deopt(164, 6, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 168 [r94, l22, dx20, dx21, r95]
  SEXP Rsh_Fir_array_deopt_stack40[5];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(168, 5, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L139_:;
  // dx19 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L35(r85, l18, dx13, r86, dx19)
  // L35(r85, l18, dx13, r86, dx19)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L35_;

L140_:;
  // P3 = force? P2
  Rsh_Fir_reg_P3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r96 = dyn __5(dx17, P3)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_P3_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names36, RHO);
  // goto L35(r90, l20, dx16, r91, r96)
  // L35(r90, l20, dx16, r91, r96)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r96_;
  goto L35_;

L141_:;
  // p10 = prom<V +>{
  //   i22 = ld i2;
  //   i23 = force? i22;
  //   checkMissing(i23);
  //   c37 = `is.object`(i23);
  //   if c37 then L1() else L2(i23);
  // L0(dx23):
  //   r98 = `+`(dx23, 1);
  //   return r98;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", i23);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(i25):
  //   P4 = ld P;
  //   P5 = force? P4;
  //   __6 = ldf `[` in base;
  //   r97 = dyn __6(i25, P5);
  //   goto L0(r97);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   nc8 = ld nc;
  //   nc9 = force? nc8;
  //   checkMissing(nc9);
  //   c38 = `is.object`(nc9);
  //   if c38 then L1() else L2(nc9);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", nc9);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(nc11):
  //   P6 = ld P;
  //   P7 = force? P6;
  //   __7 = ldf `[` in base;
  //   r100 = dyn __7(nc11, P7);
  //   goto L0(r100);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_11, 0, NULL, CCP, RHO);
  // r102 = dyn substr__1(dx21, NULL, p10, p11, r95)
  SEXP Rsh_Fir_array_args155[5];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args155[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args155[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args155[4] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names39[5];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_array_arg_names39[4] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr__1_, 5, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names39, RHO);
  // check L142() else D47()
  // L142()
  goto L142_;

D47_:;
  // deopt 172 [r94, l22, dx20, r102]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(172, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L142_:;
  // c39 = `is.object`(dx20)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args156);
  // if c39 then L143() else L144(r94, l22, dx20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L143()
    goto L143_;
  } else {
  // L144(r94, l22, dx20)
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r94_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx20_;
    goto L144_;
  }

L36_:;
  // c40 = `is.object`(l26)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args157);
  // if c40 then L147() else L148(r106, l26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L147()
    goto L147_;
  } else {
  // L148(r106, l26)
    Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r106_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    goto L148_;
  }

L143_:;
  // dr20 = tryDispatchBuiltin.0("[<-", dx20, r102)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args158);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if dc10 then L145() else L144(r94, l22, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L145()
    goto L145_;
  } else {
  // L144(r94, l22, dr20)
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r94_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dr20_;
    goto L144_;
  }

L144_:;
  // P8 = ld P
  Rsh_Fir_reg_P8_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L146() else D48()
  // L146()
  goto L146_;

D48_:;
  // deopt 173 [r104, l24, dx27, r102, P8]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_P8_;
  Rsh_Fir_deopt(173, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L37_:;
  // st x = dx31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L25(r111)
  // L25(r111)
  Rsh_Fir_reg_zero_print19_ = Rsh_Fir_reg_r111_;
  goto L25_;

L145_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // goto L36(r94, l22, dx28)
  // L36(r94, l22, dx28)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L36_;

L146_:;
  // P9 = force? P8
  Rsh_Fir_reg_P9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P8_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r107 = dyn ___2(dx27, r102, P9)
  SEXP Rsh_Fir_array_args161[3];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args161[2] = Rsh_Fir_reg_P9_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names40, RHO);
  // goto L36(r104, l24, r107)
  // L36(r104, l24, r107)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r107_;
  goto L36_;

L147_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l26, dx29)
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args162[2] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args162);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc11 then L149() else L148(r106, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L149()
    goto L149_;
  } else {
  // L148(r106, dr22)
    Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r106_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_dr22_;
    goto L148_;
  }

L148_:;
  // i26 = ld i0
  Rsh_Fir_reg_i26_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L150() else D49()
  // L150()
  goto L150_;

D49_:;
  // deopt 176 [r109, l28, dx29, i26]
  SEXP Rsh_Fir_array_deopt_stack43[4];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_i26_;
  Rsh_Fir_deopt(176, 4, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L149_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L37(r106, dx30)
  // L37(r106, dx30)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L37_;

L150_:;
  // i27 = force? i26
  Rsh_Fir_reg_i27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i26_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r112 = dyn ___3(l28, dx29, i27)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names41, RHO);
  // goto L37(r109, r112)
  // L37(r109, r112)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r112_;
  goto L37_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_suppressWarnings;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // suppressWarnings = ldf suppressWarnings
  Rsh_Fir_reg_suppressWarnings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p = prom<V +>{
  //   sym = ldf `as.numeric`;
  //   base = ldf `as.numeric` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   as_numeric = ldf `as.numeric` in base;
  //   r2 = dyn as_numeric(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_1, 0, NULL, CCP, RHO);
  // r4 = dyn suppressWarnings(p)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressWarnings, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `as.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn as_numeric(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_regexpr;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // regexpr = ldf regexpr
  Rsh_Fir_reg_regexpr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p2 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   c21 = `is.object`(x8);
  //   if c21 then L1() else L2(x8);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", x8);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(x10):
  //   i2 = ld i0;
  //   i3 = force? i2;
  //   __1 = ldf `[` in base;
  //   r43 = dyn __1(x10, i3);
  //   goto L0(r43);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3518340412_3, 0, NULL, CCP, RHO);
  // r45 = dyn regexpr[, , fixed]("0", p2, TRUE)
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regexpr, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, RHO);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(x8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c21 then L1() else L2(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i2 = ld i0
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r43 = dyn __1(x10, i3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_nc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return nc3
  return Rsh_Fir_reg_nc3_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nz2_;
  SEXP Rsh_Fir_reg_nz3_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_ind0_;
  SEXP Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // nz2 = ld nz
  Rsh_Fir_reg_nz2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nz3 = force? nz2
  Rsh_Fir_reg_nz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nz2_);
  // checkMissing(nz3)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_nz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r56 = `-`(nz3, 1)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_nz3_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args93);
  // ind0 = ld ind0
  Rsh_Fir_reg_ind0_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // ind1 = force? ind0
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind0_);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r57 = `+`(r56, ind1)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args95);
  // return r57
  return Rsh_Fir_reg_r57_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_nz4_;
  SEXP Rsh_Fir_reg_nz5_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // i6 = ld i2
  Rsh_Fir_reg_i6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // i7 = force? i6
  Rsh_Fir_reg_i7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i6_);
  // checkMissing(i7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_i7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // nz4 = ld nz
  Rsh_Fir_reg_nz4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nz5 = force? nz4
  Rsh_Fir_reg_nz5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nz4_);
  // checkMissing(nz5)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_nz5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r60 = `-`(i7, nz5)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_nz5_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args99);
  // r61 = `+`(r60, 1)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args100);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_i11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // i10 = ld i1
  Rsh_Fir_reg_i10_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // i11 = force? i10
  Rsh_Fir_reg_i11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i10_);
  // checkMissing(i11)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_i11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return i11
  return Rsh_Fir_reg_i11_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_i13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // i12 = ld i2
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // checkMissing(i13)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_i13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return i13
  return Rsh_Fir_reg_i13_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc6_;
  SEXP Rsh_Fir_reg_nc7_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_P;
  SEXP Rsh_Fir_reg_P1_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r76_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // nc6 = ld nc
  Rsh_Fir_reg_nc6_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // nc7 = force? nc6
  Rsh_Fir_reg_nc7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc6_);
  // checkMissing(nc7)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_nc7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // i18 = ld i2
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // checkMissing(i19)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_i19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // r73 = `-`(nc7, i19)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_nc7_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args125);
  // c34 = `is.object`(r73)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args126);
  // if c34 then L1() else L2(r73)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L1()
    goto L1_;
  } else {
  // L2(r73)
    Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r73_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", r73)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_r75_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // P = ld P
  Rsh_Fir_reg_P = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // P1 = force? P
  Rsh_Fir_reg_P1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r76 = dyn __3(r75, P1)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_P1_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names33, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r76_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_P4_;
  SEXP Rsh_Fir_reg_P5_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // i22 = ld i2
  Rsh_Fir_reg_i22_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // i23 = force? i22
  Rsh_Fir_reg_i23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i22_);
  // checkMissing(i23)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_i23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(i23)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args143);
  // if c37 then L1() else L2(i23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L1()
    goto L1_;
  } else {
  // L2(i23)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
    goto L2_;
  }

L0_:;
  // r98 = `+`(dx23, 1)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args144);
  // return r98
  return Rsh_Fir_reg_r98_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", i23)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args145);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // P4 = ld P
  Rsh_Fir_reg_P4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // P5 = force? P4
  Rsh_Fir_reg_P5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r97 = dyn __6(i25, P5)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_P5_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names37, RHO);
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r97_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3518340412_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc8_;
  SEXP Rsh_Fir_reg_nc9_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_nc11_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_P6_;
  SEXP Rsh_Fir_reg_P7_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r100_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3518340412/0: expected 0, got %d", NCAPTURES);

  // nc8 = ld nc
  Rsh_Fir_reg_nc8_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // nc9 = force? nc8
  Rsh_Fir_reg_nc9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc8_);
  // checkMissing(nc9)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_nc9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(nc9)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_nc9_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args150);
  // if c38 then L1() else L2(nc9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L1()
    goto L1_;
  } else {
  // L2(nc9)
    Rsh_Fir_reg_nc11_ = Rsh_Fir_reg_nc9_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", nc9)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_nc9_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_nc11_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // P6 = ld P
  Rsh_Fir_reg_P6_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // P7 = force? P6
  Rsh_Fir_reg_P7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P6_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r100 = dyn __7(nc11, P7)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_nc11_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_P7_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names38, RHO);
  // goto L0(r100)
  // L0(r100)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r100_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
