#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1517694136_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1517694136_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1517694136_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1517694136_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_nls_control;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1517694136
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1517694136_, RHO, CCP);
  // st `nls.control` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // nls_control = ldf `nls.control`
  Rsh_Fir_reg_nls_control = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return 4.8828125E-4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn nls_control[minFactor](p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nls_control, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 4.8828125E-4
  return Rsh_const(CCP, 1);
}
SEXP Rsh_Fir_user_function_inner1517694136_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1517694136 dynamic dispatch ([maxiter, tol, minFactor, printEval, warnOnly, scaleOffset, nDcentral])

  return Rsh_Fir_user_version_inner1517694136_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1517694136_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1517694136 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1517694136/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_maxiter;
  SEXP Rsh_Fir_reg_tol;
  SEXP Rsh_Fir_reg_minFactor;
  SEXP Rsh_Fir_reg_printEval;
  SEXP Rsh_Fir_reg_warnOnly;
  SEXP Rsh_Fir_reg_scaleOffset;
  SEXP Rsh_Fir_reg_nDcentral;
  SEXP Rsh_Fir_reg_maxiter_isMissing;
  SEXP Rsh_Fir_reg_maxiter_orDefault;
  SEXP Rsh_Fir_reg_tol_isMissing;
  SEXP Rsh_Fir_reg_tol_orDefault;
  SEXP Rsh_Fir_reg_minFactor_isMissing;
  SEXP Rsh_Fir_reg_minFactor_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_printEval_isMissing;
  SEXP Rsh_Fir_reg_printEval_orDefault;
  SEXP Rsh_Fir_reg_warnOnly_isMissing;
  SEXP Rsh_Fir_reg_warnOnly_orDefault;
  SEXP Rsh_Fir_reg_scaleOffset_isMissing;
  SEXP Rsh_Fir_reg_scaleOffset_orDefault;
  SEXP Rsh_Fir_reg_nDcentral_isMissing;
  SEXP Rsh_Fir_reg_nDcentral_orDefault;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_maxiter1_;
  SEXP Rsh_Fir_reg_maxiter2_;
  SEXP Rsh_Fir_reg_tol7_;
  SEXP Rsh_Fir_reg_tol8_;
  SEXP Rsh_Fir_reg_minFactor5_;
  SEXP Rsh_Fir_reg_minFactor6_;
  SEXP Rsh_Fir_reg_printEval1_;
  SEXP Rsh_Fir_reg_printEval2_;
  SEXP Rsh_Fir_reg_warnOnly1_;
  SEXP Rsh_Fir_reg_warnOnly2_;
  SEXP Rsh_Fir_reg_scaleOffset5_;
  SEXP Rsh_Fir_reg_scaleOffset6_;
  SEXP Rsh_Fir_reg_nDcentral7_;
  SEXP Rsh_Fir_reg_nDcentral8_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r46_;

  // Bind parameters
  Rsh_Fir_reg_maxiter = PARAMS[0];
  Rsh_Fir_reg_tol = PARAMS[1];
  Rsh_Fir_reg_minFactor = PARAMS[2];
  Rsh_Fir_reg_printEval = PARAMS[3];
  Rsh_Fir_reg_warnOnly = PARAMS[4];
  Rsh_Fir_reg_scaleOffset = PARAMS[5];
  Rsh_Fir_reg_nDcentral = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // maxiter_isMissing = missing.0(maxiter)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_maxiter;
  Rsh_Fir_reg_maxiter_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if maxiter_isMissing then L0(50.0) else L0(maxiter)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_maxiter_isMissing)) {
  // L0(50.0)
    Rsh_Fir_reg_maxiter_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(maxiter)
    Rsh_Fir_reg_maxiter_orDefault = Rsh_Fir_reg_maxiter;
    goto L0_;
  }

L0_:;
  // st maxiter = maxiter_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_maxiter_orDefault, RHO);
  (void)(Rsh_Fir_reg_maxiter_orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if tol_isMissing then L1(1.0E-5) else L1(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L1(1.0E-5)
    Rsh_Fir_reg_tol_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L1_;
  }

L1_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // minFactor_isMissing = missing.0(minFactor)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_minFactor;
  Rsh_Fir_reg_minFactor_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if minFactor_isMissing then L2() else L3(minFactor)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_minFactor_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(minFactor)
    Rsh_Fir_reg_minFactor_orDefault = Rsh_Fir_reg_minFactor;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   return 9.765625E-4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_, 0, NULL, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_minFactor_orDefault = Rsh_Fir_reg_p1;
  goto L3_;

L3_:;
  // st minFactor = minFactor_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_minFactor_orDefault, RHO);
  (void)(Rsh_Fir_reg_minFactor_orDefault);
  // printEval_isMissing = missing.0(printEval)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_printEval;
  Rsh_Fir_reg_printEval_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if printEval_isMissing then L4(FALSE) else L4(printEval)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_printEval_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_printEval_orDefault = Rsh_const(CCP, 8);
    goto L4_;
  } else {
  // L4(printEval)
    Rsh_Fir_reg_printEval_orDefault = Rsh_Fir_reg_printEval;
    goto L4_;
  }

L4_:;
  // st printEval = printEval_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_printEval_orDefault, RHO);
  (void)(Rsh_Fir_reg_printEval_orDefault);
  // warnOnly_isMissing = missing.0(warnOnly)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_warnOnly;
  Rsh_Fir_reg_warnOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if warnOnly_isMissing then L5(FALSE) else L5(warnOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_warnOnly_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_warnOnly_orDefault = Rsh_const(CCP, 8);
    goto L5_;
  } else {
  // L5(warnOnly)
    Rsh_Fir_reg_warnOnly_orDefault = Rsh_Fir_reg_warnOnly;
    goto L5_;
  }

L5_:;
  // st warnOnly = warnOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_warnOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_warnOnly_orDefault);
  // scaleOffset_isMissing = missing.0(scaleOffset)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_scaleOffset;
  Rsh_Fir_reg_scaleOffset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if scaleOffset_isMissing then L6(0.0) else L6(scaleOffset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scaleOffset_isMissing)) {
  // L6(0.0)
    Rsh_Fir_reg_scaleOffset_orDefault = Rsh_const(CCP, 11);
    goto L6_;
  } else {
  // L6(scaleOffset)
    Rsh_Fir_reg_scaleOffset_orDefault = Rsh_Fir_reg_scaleOffset;
    goto L6_;
  }

L6_:;
  // st scaleOffset = scaleOffset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_scaleOffset_orDefault, RHO);
  (void)(Rsh_Fir_reg_scaleOffset_orDefault);
  // nDcentral_isMissing = missing.0(nDcentral)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_nDcentral;
  Rsh_Fir_reg_nDcentral_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if nDcentral_isMissing then L7(FALSE) else L7(nDcentral)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nDcentral_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_nDcentral_orDefault = Rsh_const(CCP, 8);
    goto L7_;
  } else {
  // L7(nDcentral)
    Rsh_Fir_reg_nDcentral_orDefault = Rsh_Fir_reg_nDcentral;
    goto L7_;
  }

L7_:;
  // st nDcentral = nDcentral_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_nDcentral_orDefault, RHO);
  (void)(Rsh_Fir_reg_nDcentral_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   sym = ldf `is.numeric`;
  //   base = ldf `is.numeric` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   tol1 = ld tol;
  //   tol2 = force? tol1;
  //   checkMissing(tol2);
  //   is_numeric = ldf `is.numeric` in base;
  //   r3 = dyn is_numeric(tol2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym tol>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   r8 = `==`(r6, 1);
  //   return r8;
  // L1():
  //   tol3 = ld tol;
  //   tol4 = force? tol3;
  //   checkMissing(tol4);
  //   length = ldf length in base;
  //   r7 = dyn length(tol4);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(<sym tol>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   tol5 = ld tol;
  //   tol6 = force? tol5;
  //   checkMissing(tol6);
  //   r10 = `>`(tol6, 0.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym2 = ldf `is.numeric`;
  //   base2 = ldf `is.numeric` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   minFactor1 = ld minFactor;
  //   minFactor2 = force? minFactor1;
  //   checkMissing(minFactor2);
  //   is_numeric1 = ldf `is.numeric` in base;
  //   r14 = dyn is_numeric1(minFactor2);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2(<sym minFactor>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   r19 = `==`(r17, 1);
  //   return r19;
  // L1():
  //   minFactor3 = ld minFactor;
  //   minFactor4 = force? minFactor3;
  //   checkMissing(minFactor4);
  //   length1 = ldf length in base;
  //   r18 = dyn length1(minFactor4);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3(<sym minFactor>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym4 = ldf `is.numeric`;
  //   base4 = ldf `is.numeric` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   scaleOffset1 = ld scaleOffset;
  //   scaleOffset2 = force? scaleOffset1;
  //   checkMissing(scaleOffset2);
  //   is_numeric2 = ldf `is.numeric` in base;
  //   r23 = dyn is_numeric2(scaleOffset2);
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base4(<sym scaleOffset>);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym5 = ldf length;
  //   base5 = ldf length in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r26):
  //   r28 = `==`(r26, 1);
  //   return r28;
  // L1():
  //   scaleOffset3 = ld scaleOffset;
  //   scaleOffset4 = force? scaleOffset3;
  //   checkMissing(scaleOffset4);
  //   length2 = ldf length in base;
  //   r27 = dyn length2(scaleOffset4);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base5(<sym scaleOffset>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf `is.logical`;
  //   base6 = ldf `is.logical` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   nDcentral1 = ld nDcentral;
  //   nDcentral2 = force? nDcentral1;
  //   checkMissing(nDcentral2);
  //   c = `is.logical`(nDcentral2);
  //   goto L0(c);
  // L2():
  //   r30 = dyn base6(<sym nDcentral>);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym7 = ldf length;
  //   base7 = ldf length in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r34):
  //   r36 = `==`(r34, 1);
  //   return r36;
  // L1():
  //   nDcentral3 = ld nDcentral;
  //   nDcentral4 = force? nDcentral3;
  //   checkMissing(nDcentral4);
  //   length3 = ldf length in base;
  //   r35 = dyn length3(nDcentral4);
  //   goto L0(r35);
  // L2():
  //   r33 = dyn base7(<sym nDcentral>);
  //   goto L0(r33);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   sym8 = ldf `is.na`;
  //   base8 = ldf `is.na` in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r39):
  //   r41 = `!`(r39);
  //   return r41;
  // L1():
  //   nDcentral5 = ld nDcentral;
  //   nDcentral6 = force? nDcentral5;
  //   checkMissing(nDcentral6);
  //   is_na = ldf `is.na` in base;
  //   r40 = dyn is_na(nDcentral6);
  //   goto L0(r40);
  // L2():
  //   r38 = dyn base8(<sym nDcentral>);
  //   goto L0(r38);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1517694136_10, 0, NULL, CCP, RHO);
  // r43 = dyn stopifnot(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)
  SEXP Rsh_Fir_array_args51[10];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args51[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args51[4] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args51[5] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args51[6] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args51[7] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args51[8] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args51[9] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names18[10];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_array_arg_names18[9] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 10, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 12 [r43]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard9 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_;

L11_:;
  // maxiter1 = ld maxiter
  Rsh_Fir_reg_maxiter1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r44 = dyn base9[maxiter, tol, minFactor, printEval, warnOnly, scaleOffset, nDcentral](<sym maxiter>, <sym tol>, <sym minFactor>, <sym printEval>, <sym warnOnly>, <sym scaleOffset>, <sym nDcentral>)
  SEXP Rsh_Fir_array_args53[7];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args53[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args53[6] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names19[7];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names19[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names19[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names19[6] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 7, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L8(r44)
  // L8(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L8_;

D2_:;
  // deopt 15 [maxiter1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_maxiter1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // maxiter2 = force? maxiter1
  Rsh_Fir_reg_maxiter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxiter1_);
  // checkMissing(maxiter2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_maxiter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // tol7 = ld tol
  Rsh_Fir_reg_tol7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 18 [tol7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_tol7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // tol8 = force? tol7
  Rsh_Fir_reg_tol8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol7_);
  // checkMissing(tol8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_tol8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // minFactor5 = ld minFactor
  Rsh_Fir_reg_minFactor5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 21 [minFactor5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_minFactor5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // minFactor6 = force? minFactor5
  Rsh_Fir_reg_minFactor6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_minFactor5_);
  // checkMissing(minFactor6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_minFactor6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // printEval1 = ld printEval
  Rsh_Fir_reg_printEval1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 24 [printEval1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_printEval1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // printEval2 = force? printEval1
  Rsh_Fir_reg_printEval2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_printEval1_);
  // checkMissing(printEval2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_printEval2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // warnOnly1 = ld warnOnly
  Rsh_Fir_reg_warnOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 27 [warnOnly1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_warnOnly1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // warnOnly2 = force? warnOnly1
  Rsh_Fir_reg_warnOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warnOnly1_);
  // checkMissing(warnOnly2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_warnOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // scaleOffset5 = ld scaleOffset
  Rsh_Fir_reg_scaleOffset5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 30 [scaleOffset5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_scaleOffset5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // scaleOffset6 = force? scaleOffset5
  Rsh_Fir_reg_scaleOffset6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scaleOffset5_);
  // checkMissing(scaleOffset6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_scaleOffset6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // nDcentral7 = ld nDcentral
  Rsh_Fir_reg_nDcentral7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 33 [nDcentral7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_nDcentral7_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // nDcentral8 = force? nDcentral7
  Rsh_Fir_reg_nDcentral8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nDcentral7_);
  // checkMissing(nDcentral8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_nDcentral8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r46 = dyn list(maxiter2, tol8, minFactor6, printEval2, warnOnly2, scaleOffset6, nDcentral8)
  SEXP Rsh_Fir_array_args61[7];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_maxiter2_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_tol8_;
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_minFactor6_;
  Rsh_Fir_array_args61[3] = Rsh_Fir_reg_printEval2_;
  Rsh_Fir_array_args61[4] = Rsh_Fir_reg_warnOnly2_;
  Rsh_Fir_array_args61[5] = Rsh_Fir_reg_scaleOffset6_;
  Rsh_Fir_array_args61[6] = Rsh_Fir_reg_nDcentral8_;
  SEXP Rsh_Fir_array_arg_names20[7];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 7, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 37 [r46]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L8(r46)
  // L8(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // return 9.765625E-4
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_inner1517694136_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_tol1_;
  SEXP Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_1;

L1_:;
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r3 = dyn is_numeric(tol2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym tol>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_tol3_;
  SEXP Rsh_Fir_reg_tol4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r8 = `==`(r6, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args13);
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn length(tol4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_tol4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base1(<sym tol>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tol5_;
  SEXP Rsh_Fir_reg_tol6_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // tol5 = ld tol
  Rsh_Fir_reg_tol5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // tol6 = force? tol5
  Rsh_Fir_reg_tol6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol5_);
  // checkMissing(tol6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_tol6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r10 = `>`(tol6, 0.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_tol6_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args18);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_minFactor1_;
  SEXP Rsh_Fir_reg_minFactor2_;
  SEXP Rsh_Fir_reg_is_numeric1_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf `is.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `is.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // minFactor1 = ld minFactor
  Rsh_Fir_reg_minFactor1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // minFactor2 = force? minFactor1
  Rsh_Fir_reg_minFactor2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_minFactor1_);
  // checkMissing(minFactor2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_minFactor2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // is_numeric1 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r14 = dyn is_numeric1(minFactor2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_minFactor2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2(<sym minFactor>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_minFactor3_;
  SEXP Rsh_Fir_reg_minFactor4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r19 = `==`(r17, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args24);
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // minFactor3 = ld minFactor
  Rsh_Fir_reg_minFactor3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // minFactor4 = force? minFactor3
  Rsh_Fir_reg_minFactor4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_minFactor3_);
  // checkMissing(minFactor4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_minFactor4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r18 = dyn length1(minFactor4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_minFactor4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3(<sym minFactor>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_scaleOffset1_;
  SEXP Rsh_Fir_reg_scaleOffset2_;
  SEXP Rsh_Fir_reg_is_numeric2_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf `is.numeric`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.numeric` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // scaleOffset1 = ld scaleOffset
  Rsh_Fir_reg_scaleOffset1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // scaleOffset2 = force? scaleOffset1
  Rsh_Fir_reg_scaleOffset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scaleOffset1_);
  // checkMissing(scaleOffset2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_scaleOffset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // is_numeric2 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r23 = dyn is_numeric2(scaleOffset2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_scaleOffset2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base4(<sym scaleOffset>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_scaleOffset3_;
  SEXP Rsh_Fir_reg_scaleOffset4_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r28 = `==`(r26, 1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args33);
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // scaleOffset3 = ld scaleOffset
  Rsh_Fir_reg_scaleOffset3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // scaleOffset4 = force? scaleOffset3
  Rsh_Fir_reg_scaleOffset4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scaleOffset3_);
  // checkMissing(scaleOffset4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_scaleOffset4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r27 = dyn length2(scaleOffset4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_scaleOffset4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base5(<sym scaleOffset>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_nDcentral1_;
  SEXP Rsh_Fir_reg_nDcentral2_;
  SEXP Rsh_Fir_reg_c;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf `is.logical`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf `is.logical` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // nDcentral1 = ld nDcentral
  Rsh_Fir_reg_nDcentral1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nDcentral2 = force? nDcentral1
  Rsh_Fir_reg_nDcentral2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nDcentral1_);
  // checkMissing(nDcentral2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_nDcentral2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(nDcentral2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_nDcentral2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args39);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // r30 = dyn base6(<sym nDcentral>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_nDcentral3_;
  SEXP Rsh_Fir_reg_nDcentral4_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r36 = `==`(r34, 1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args42);
  // return r36
  return Rsh_Fir_reg_r36_;

L1_:;
  // nDcentral3 = ld nDcentral
  Rsh_Fir_reg_nDcentral3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nDcentral4 = force? nDcentral3
  Rsh_Fir_reg_nDcentral4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nDcentral3_);
  // checkMissing(nDcentral4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_nDcentral4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r35 = dyn length3(nDcentral4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_nDcentral4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L0_;

L2_:;
  // r33 = dyn base7(<sym nDcentral>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1517694136_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_nDcentral5_;
  SEXP Rsh_Fir_reg_nDcentral6_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1517694136/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r41 = `!`(r39)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args47);
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // nDcentral5 = ld nDcentral
  Rsh_Fir_reg_nDcentral5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nDcentral6 = force? nDcentral5
  Rsh_Fir_reg_nDcentral6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nDcentral5_);
  // checkMissing(nDcentral6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_nDcentral6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r40 = dyn is_na(nDcentral6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_nDcentral6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r38 = dyn base8(<sym nDcentral>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
