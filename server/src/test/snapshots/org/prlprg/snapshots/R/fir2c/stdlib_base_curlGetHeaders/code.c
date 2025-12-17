#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3207154116_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3207154116_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3207154116
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3207154116_, RHO, CCP);
  // st curlGetHeaders = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3207154116_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3207154116 dynamic dispatch ([url, redirect, verify, timeout, TLS])

  return Rsh_Fir_user_version_inner3207154116_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3207154116_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3207154116 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3207154116/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_url;  // url
  SEXP Rsh_Fir_reg_redirect;  // redirect
  SEXP Rsh_Fir_reg_verify;  // verify
  SEXP Rsh_Fir_reg_timeout;  // timeout
  SEXP Rsh_Fir_reg_TLS;  // TLS
  SEXP Rsh_Fir_reg_redirect_isMissing;  // redirect_isMissing
  SEXP Rsh_Fir_reg_redirect_orDefault;  // redirect_orDefault
  SEXP Rsh_Fir_reg_verify_isMissing;  // verify_isMissing
  SEXP Rsh_Fir_reg_verify_orDefault;  // verify_orDefault
  SEXP Rsh_Fir_reg_timeout_isMissing;  // timeout_isMissing
  SEXP Rsh_Fir_reg_timeout_orDefault;  // timeout_orDefault
  SEXP Rsh_Fir_reg_TLS_isMissing;  // TLS_isMissing
  SEXP Rsh_Fir_reg_TLS_orDefault;  // TLS_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_url1_;  // url1
  SEXP Rsh_Fir_reg_url2_;  // url2
  SEXP Rsh_Fir_reg_redirect1_;  // redirect1
  SEXP Rsh_Fir_reg_redirect2_;  // redirect2
  SEXP Rsh_Fir_reg_verify1_;  // verify1
  SEXP Rsh_Fir_reg_verify2_;  // verify2
  SEXP Rsh_Fir_reg_timeout1_;  // timeout1
  SEXP Rsh_Fir_reg_timeout2_;  // timeout2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_TLS1_;  // TLS1
  SEXP Rsh_Fir_reg_TLS2_;  // TLS2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_curlGetHeaders;  // curlGetHeaders
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_url = PARAMS[0];
  Rsh_Fir_reg_redirect = PARAMS[1];
  Rsh_Fir_reg_verify = PARAMS[2];
  Rsh_Fir_reg_timeout = PARAMS[3];
  Rsh_Fir_reg_TLS = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st url = url
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_url, RHO);
  (void)(Rsh_Fir_reg_url);
  // redirect_isMissing = missing.0(redirect)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_redirect;
  Rsh_Fir_reg_redirect_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if redirect_isMissing then L0(TRUE) else L0(redirect)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_redirect_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_redirect_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(redirect)
    Rsh_Fir_reg_redirect_orDefault = Rsh_Fir_reg_redirect;
    goto L0_;
  }

L0_:;
  // st redirect = redirect_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_redirect_orDefault, RHO);
  (void)(Rsh_Fir_reg_redirect_orDefault);
  // verify_isMissing = missing.0(verify)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_verify;
  Rsh_Fir_reg_verify_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if verify_isMissing then L1(TRUE) else L1(verify)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_verify_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_verify_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(verify)
    Rsh_Fir_reg_verify_orDefault = Rsh_Fir_reg_verify;
    goto L1_;
  }

L1_:;
  // st verify = verify_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_verify_orDefault, RHO);
  (void)(Rsh_Fir_reg_verify_orDefault);
  // timeout_isMissing = missing.0(timeout)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_timeout;
  Rsh_Fir_reg_timeout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if timeout_isMissing then L2(0) else L2(timeout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_timeout_isMissing)) {
  // L2(0)
    Rsh_Fir_reg_timeout_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(timeout)
    Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_timeout;
    goto L2_;
  }

L2_:;
  // st timeout = timeout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_timeout_orDefault, RHO);
  (void)(Rsh_Fir_reg_timeout_orDefault);
  // TLS_isMissing = missing.0(TLS)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_TLS;
  Rsh_Fir_reg_TLS_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if TLS_isMissing then L3("") else L3(TLS)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_TLS_isMissing)) {
  // L3("")
    Rsh_Fir_reg_TLS_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(TLS)
    Rsh_Fir_reg_TLS_orDefault = Rsh_Fir_reg_TLS;
    goto L3_;
  }

L3_:;
  // st TLS = TLS_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_TLS_orDefault, RHO);
  (void)(Rsh_Fir_reg_TLS_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L5_:;
  // curlGetHeaders = ldf curlGetHeaders in base
  Rsh_Fir_reg_curlGetHeaders = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r5 = dyn curlGetHeaders(url2, redirect2, verify2, timeout2, r3)
  SEXP Rsh_Fir_array_args5[5];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_url2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_redirect2_;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_verify2_;
  Rsh_Fir_array_args5[3] = Rsh_Fir_reg_timeout2_;
  Rsh_Fir_array_args5[4] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_curlGetHeaders, 5, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L6_:;
  // url1 = ld url
  Rsh_Fir_reg_url1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<lang curlGetHeaders(url, redirect, verify, timeout, as.character(TLS))>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 2 [url1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_url1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // url2 = force? url1
  Rsh_Fir_reg_url2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_url1_);
  // checkMissing(url2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_url2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // redirect1 = ld redirect
  Rsh_Fir_reg_redirect1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [redirect1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_redirect1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // redirect2 = force? redirect1
  Rsh_Fir_reg_redirect2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_redirect1_);
  // checkMissing(redirect2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_redirect2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // verify1 = ld verify
  Rsh_Fir_reg_verify1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [verify1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_verify1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // verify2 = force? verify1
  Rsh_Fir_reg_verify2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verify1_);
  // checkMissing(verify2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_verify2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // timeout1 = ld timeout
  Rsh_Fir_reg_timeout1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 8 [timeout1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_timeout1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // timeout2 = force? timeout1
  Rsh_Fir_reg_timeout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_timeout1_);
  // checkMissing(timeout2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_timeout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // TLS1 = ld TLS
  Rsh_Fir_reg_TLS1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L13_:;
  // r2 = dyn base1(<sym TLS>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r2)
  // L5(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L5_;

D4_:;
  // deopt 12 [TLS1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_TLS1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // TLS2 = force? TLS1
  Rsh_Fir_reg_TLS2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TLS1_);
  // checkMissing(TLS2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_TLS2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r4 = dyn as_character(TLS2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_TLS2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 15 [r4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L5_;

D6_:;
  // deopt 17 [r5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
