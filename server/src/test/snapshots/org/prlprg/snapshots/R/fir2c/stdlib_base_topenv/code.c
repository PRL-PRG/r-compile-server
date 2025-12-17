#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner32921296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner32921296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner32921296_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner32921296_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner32921296
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner32921296_, RHO, CCP);
  // st topenv = r
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
SEXP Rsh_Fir_user_function_inner32921296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner32921296 dynamic dispatch ([envir, matchThisEnv])

  return Rsh_Fir_user_version_inner32921296_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner32921296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner32921296 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner32921296/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_matchThisEnv;  // matchThisEnv
  SEXP Rsh_Fir_reg_envir_isMissing;  // envir_isMissing
  SEXP Rsh_Fir_reg_envir_orDefault;  // envir_orDefault
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_matchThisEnv_isMissing;  // matchThisEnv_isMissing
  SEXP Rsh_Fir_reg_matchThisEnv_orDefault;  // matchThisEnv_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_envir2_;  // envir2
  SEXP Rsh_Fir_reg_matchThisEnv1_;  // matchThisEnv1
  SEXP Rsh_Fir_reg_matchThisEnv2_;  // matchThisEnv2
  SEXP Rsh_Fir_reg_topenv;  // topenv
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_envir = PARAMS[0];
  Rsh_Fir_reg_matchThisEnv = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if envir_isMissing then L0() else L1(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner32921296_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // matchThisEnv_isMissing = missing.0(matchThisEnv)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_matchThisEnv;
  Rsh_Fir_reg_matchThisEnv_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if matchThisEnv_isMissing then L2() else L3(matchThisEnv)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_matchThisEnv_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(matchThisEnv)
    Rsh_Fir_reg_matchThisEnv_orDefault = Rsh_Fir_reg_matchThisEnv;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   getOption = ldf getOption;
  //   r2 = dyn getOption("topLevelEnvironment");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner32921296_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_matchThisEnv_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st matchThisEnv = matchThisEnv_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_matchThisEnv_orDefault, RHO);
  (void)(Rsh_Fir_reg_matchThisEnv_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L5_:;
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base(<lang topenv(envir, matchThisEnv)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D0_:;
  // deopt 2 [envir1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // matchThisEnv1 = ld matchThisEnv
  Rsh_Fir_reg_matchThisEnv1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [matchThisEnv1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_matchThisEnv1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // matchThisEnv2 = force? matchThisEnv1
  Rsh_Fir_reg_matchThisEnv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matchThisEnv1_);
  // checkMissing(matchThisEnv2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_matchThisEnv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // topenv = ldf topenv in base
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r6 = dyn topenv(envir2, matchThisEnv2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_matchThisEnv2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner32921296_(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner32921296_1(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r2 = dyn getOption("topLevelEnvironment")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
