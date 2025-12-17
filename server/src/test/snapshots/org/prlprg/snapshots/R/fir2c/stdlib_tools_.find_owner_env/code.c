#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3457772070_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3457772070_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3457772070_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3457772070_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3457772070_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3457772070
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3457772070_, RHO, CCP);
  // st `.find_owner_env` = r
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
SEXP Rsh_Fir_user_function_inner3457772070_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3457772070 dynamic dispatch ([v, env, last, default])

  return Rsh_Fir_user_version_inner3457772070_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3457772070_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3457772070 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3457772070/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_last;  // last
  SEXP Rsh_Fir_reg_default;  // default
  SEXP Rsh_Fir_reg_last_isMissing;  // last_isMissing
  SEXP Rsh_Fir_reg_last_orDefault;  // last_orDefault
  SEXP Rsh_Fir_reg_default_isMissing;  // default_isMissing
  SEXP Rsh_Fir_reg_default_orDefault;  // default_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_last1_;  // last1
  SEXP Rsh_Fir_reg_last2_;  // last2
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_env3_;  // env3
  SEXP Rsh_Fir_reg_env4_;  // env4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_env5_;  // env5
  SEXP Rsh_Fir_reg_env6_;  // env6
  SEXP Rsh_Fir_reg_parent_env;  // parent_env
  SEXP Rsh_Fir_reg_env7_;  // env7
  SEXP Rsh_Fir_reg_env8_;  // env8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_default1_;  // default1
  SEXP Rsh_Fir_reg_default2_;  // default2

  // Bind parameters
  Rsh_Fir_reg_v = PARAMS[0];
  Rsh_Fir_reg_env = PARAMS[1];
  Rsh_Fir_reg_last = PARAMS[2];
  Rsh_Fir_reg_default = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st v = v
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_v, RHO);
  (void)(Rsh_Fir_reg_v);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // last_isMissing = missing.0(last)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_last;
  Rsh_Fir_reg_last_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if last_isMissing then L0(NA_LGL) else L0(last)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_last_isMissing)) {
  // L0(NA_LGL)
    Rsh_Fir_reg_last_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(last)
    Rsh_Fir_reg_last_orDefault = Rsh_Fir_reg_last;
    goto L0_;
  }

L0_:;
  // st last = last_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_last_orDefault, RHO);
  (void)(Rsh_Fir_reg_last_orDefault);
  // default_isMissing = missing.0(default)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_default;
  Rsh_Fir_reg_default_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if default_isMissing then L1(NA_LGL) else L1(default)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_default_isMissing)) {
  // L1(NA_LGL)
    Rsh_Fir_reg_default_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(default)
    Rsh_Fir_reg_default_orDefault = Rsh_Fir_reg_default;
    goto L1_;
  }

L1_:;
  // st default = default_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_default_orDefault, RHO);
  (void)(Rsh_Fir_reg_default_orDefault);
  // goto L6()
  // L6()
  goto L6_;

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L12() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // default1 = ld default
  Rsh_Fir_reg_default1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L4_:;
  // parent_env = ldf `parent.env`
  Rsh_Fir_reg_parent_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L6_:;
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym env>, <sym last>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [env1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_env1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // last1 = ld last
  Rsh_Fir_reg_last1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 4 [last1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_last1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // last2 = force? last1
  Rsh_Fir_reg_last2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last1_);
  // checkMissing(last2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_last2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn identical(env2, last2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args8[9];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_env2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_last2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[9];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 14 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L12_:;
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   v1 = ld v;
  //   v2 = force? v1;
  //   checkMissing(v2);
  //   return v2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3457772070_, CCP, RHO);
  // p1 = prom<V +>{
  //   env3 = ld env;
  //   env4 = force? env3;
  //   checkMissing(env4);
  //   return env4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3457772070_1, CCP, RHO);
  // r6 = dyn exists[, envir, inherits](p, p1, FALSE)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 23 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L4()
    goto L4_;
  }

L15_:;
  // env5 = ld env
  Rsh_Fir_reg_env5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 24 [env5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_env5_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // env6 = force? env5
  Rsh_Fir_reg_env6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env5_);
  // checkMissing(env6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_env6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return env6
  return Rsh_Fir_reg_env6_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p2 = prom<V +>{
  //   env7 = ld env;
  //   env8 = force? env7;
  //   checkMissing(env8);
  //   return env8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3457772070_2, CCP, RHO);
  // r10 = dyn parent_env(p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_env, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 30 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // st env = r10
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L6()
  // L6()
  goto L6_;

D8_:;
  // deopt 35 [default1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_default1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // default2 = force? default1
  Rsh_Fir_reg_default2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_default1_);
  // checkMissing(default2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_default2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return default2
  return Rsh_Fir_reg_default2_;
}
SEXP Rsh_Fir_user_promise_inner3457772070_(SEXP CCP, SEXP RHO) {
  // v1 = ld v
  Rsh_Fir_reg_v1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v2 = force? v1
  Rsh_Fir_reg_v2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v1_);
  // checkMissing(v2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_v2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return v2
  return Rsh_Fir_reg_v2_;
}
SEXP Rsh_Fir_user_promise_inner3457772070_1(SEXP CCP, SEXP RHO) {
  // env3 = ld env
  Rsh_Fir_reg_env3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // env4 = force? env3
  Rsh_Fir_reg_env4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env3_);
  // checkMissing(env4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_env4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return env4
  return Rsh_Fir_reg_env4_;
}
SEXP Rsh_Fir_user_promise_inner3457772070_2(SEXP CCP, SEXP RHO) {
  // env7 = ld env
  Rsh_Fir_reg_env7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // env8 = force? env7
  Rsh_Fir_reg_env8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env7_);
  // checkMissing(env8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_env8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return env8
  return Rsh_Fir_reg_env8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
