#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2368403604_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2368403604_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2368403604_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2368403604_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner2368403604
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2368403604_, RHO, CCP);
  // st `all.equal.function` = r
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
SEXP Rsh_Fir_user_function_inner2368403604_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2368403604 dynamic dispatch ([target, current, `check.environment`, `...`])

  return Rsh_Fir_user_version_inner2368403604_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2368403604_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2368403604 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2368403604/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_check_environment;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_check_environment_isMissing;
  SEXP Rsh_Fir_reg_check_environment_orDefault;
  SEXP Rsh_Fir_reg_all_equal_language;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_check_environment1_;
  SEXP Rsh_Fir_reg_check_environment2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_environment1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_ee;
  SEXP Rsh_Fir_reg_ee1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_all_equal_environment;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_ee2_;
  SEXP Rsh_Fir_reg_ee3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_isTRUE1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_ee6_;
  SEXP Rsh_Fir_reg_ee7_;
  SEXP Rsh_Fir_reg_ee8_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_msg5_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_check_environment = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // check_environment_isMissing = missing.0(check_environment)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_check_environment;
  Rsh_Fir_reg_check_environment_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if check_environment_isMissing then L0(TRUE) else L0(check_environment)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_environment_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_check_environment_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(check_environment)
    Rsh_Fir_reg_check_environment_orDefault = Rsh_Fir_reg_check_environment;
    goto L0_;
  }

L0_:;
  // st `check.environment` = check_environment_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_check_environment_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_environment_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // all_equal_language = ldf `all.equal.language`
  Rsh_Fir_reg_all_equal_language = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L1_:;
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L40() else D19()
  // L40()
  goto L40_;

L2_:;
  // st ee = r4
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // ee = ld ee
  Rsh_Fir_reg_ee = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

L5_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

L7_:;
  // goto L8(NULL)
  // L8(NULL)
  Rsh_Fir_reg_ee8_ = Rsh_const(CCP, 11);
  goto L8_;

L8_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r26 = dyn c4(msg3, ee8)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_ee8_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L38() else D18()
  // L38()
  goto L38_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   target1 = ld target;
  //   target2 = force? target1;
  //   checkMissing(target2);
  //   return target2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   current1 = ld current;
  //   current2 = force? current1;
  //   checkMissing(current2);
  //   return current2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_1, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r2 = dyn all_equal_language[, , `...`](p, p1, ddd1)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal_language, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st msg = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // check_environment1 = ld `check.environment`
  Rsh_Fir_reg_check_environment1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 7 [check_environment1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_check_environment1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // check_environment2 = force? check_environment1
  Rsh_Fir_reg_check_environment2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_environment1_);
  // checkMissing(check_environment2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_check_environment2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(check_environment2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_check_environment2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c then L12() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L1()
    goto L1_;
  }

L12_:;
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // r3 = dyn base[, , `ignore.environment`](<lang environment(target)>, <lang environment(current)>, FALSE)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   target3 = ld target;
  //   target4 = force? target3;
  //   checkMissing(target4);
  //   return target4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_2, 0, NULL, CCP, RHO);
  // r6 = dyn environment(p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // environment1 = ldf environment
  Rsh_Fir_reg_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p3 = prom<V +>{
  //   current3 = ld current;
  //   current4 = force? current3;
  //   checkMissing(current4);
  //   return current4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_3, 0, NULL, CCP, RHO);
  // r8 = dyn environment1(p3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r9 = dyn identical(r6, r8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args14[9];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 27 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r9_;
  goto L2_;

D8_:;
  // deopt 29 [ee]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ee;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // ee1 = force? ee
  Rsh_Fir_reg_ee1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ee);
  // checkMissing(ee1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ee1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r10 = `!`(ee1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ee1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args16);
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c1 then L21() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L3()
    goto L3_;
  }

L21_:;
  // all_equal_environment = ldf `all.equal.environment`
  Rsh_Fir_reg_all_equal_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p5 = prom<V +>{
  //   environment2 = ldf environment;
  //   p4 = prom<V +>{
  //     target5 = ld target;
  //     target6 = force? target5;
  //     checkMissing(target6);
  //     return target6;
  //   };
  //   r12 = dyn environment2(p4);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_4, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   environment3 = ldf environment;
  //   p6 = prom<V +>{
  //     current5 = ld current;
  //     current6 = force? current5;
  //     checkMissing(current6);
  //     return current6;
  //   };
  //   r15 = dyn environment3(p6);
  //   return r15;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_6, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r17 = dyn all_equal_environment[, , `...`](p5, p7, ddd2)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal_environment, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 37 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // st ee = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L4()
  // L4()
  goto L4_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p8 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_8, 0, NULL, CCP, RHO);
  // r20 = dyn isTRUE(p8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 44 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // c2 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c2 then L27() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L5()
    goto L5_;
  }

L27_:;
  // ee2 = ld ee
  Rsh_Fir_reg_ee2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

D13_:;
  // deopt 45 [ee2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ee2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // ee3 = force? ee2
  Rsh_Fir_reg_ee3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ee2_);
  // checkMissing(ee3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_ee3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ee3
  return Rsh_Fir_reg_ee3_;

L30_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L32() else D14()
  // L32()
  goto L32_;

L31_:;
  // r21 = dyn base1(<sym msg>, <lang if(`!`(isTRUE(ee)), ee)>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L6_;

D14_:;
  // deopt 49 [msg2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // isTRUE1 = ldf isTRUE
  Rsh_Fir_reg_isTRUE1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L33() else D15()
  // L33()
  goto L33_;

D15_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p9 = prom<V +>{
  //   ee4 = ld ee;
  //   ee5 = force? ee4;
  //   checkMissing(ee5);
  //   return ee5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_9, 0, NULL, CCP, RHO);
  // r24 = dyn isTRUE1(p9)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L34() else D16()
  // L34()
  goto L34_;

D16_:;
  // deopt 54 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L34_:;
  // r25 = `!`(r24)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args31);
  // c3 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c3 then L35() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L35()
    goto L35_;
  } else {
  // L7()
    goto L7_;
  }

L35_:;
  // ee6 = ld ee
  Rsh_Fir_reg_ee6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L36() else D17()
  // L36()
  goto L36_;

D17_:;
  // deopt 56 [ee6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ee6_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L36_:;
  // ee7 = force? ee6
  Rsh_Fir_reg_ee7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ee6_);
  // checkMissing(ee7)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ee7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // goto L8(ee7)
  // L8(ee7)
  Rsh_Fir_reg_ee8_ = Rsh_Fir_reg_ee7_;
  goto L8_;

D18_:;
  // deopt 61 [r26]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r26)
  // L6(r26)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r26_;
  goto L6_;

D19_:;
  // deopt 62 [msg4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg5
  return Rsh_Fir_reg_msg5_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return target2
  return Rsh_Fir_reg_target2_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return current2
  return Rsh_Fir_reg_current2_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return target4
  return Rsh_Fir_reg_target4_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return current4
  return Rsh_Fir_reg_current4_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // environment2 = ldf environment
  Rsh_Fir_reg_environment2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p4 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_5, 0, NULL, CCP, RHO);
  // r12 = dyn environment2(p4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // environment3 = ldf environment
  Rsh_Fir_reg_environment3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p6 = prom<V +>{
  //   current5 = ld current;
  //   current6 = force? current5;
  //   checkMissing(current6);
  //   return current6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2368403604_7, 0, NULL, CCP, RHO);
  // r15 = dyn environment3(p6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return current6
  return Rsh_Fir_reg_current6_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_user_promise_inner2368403604_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ee4_;
  SEXP Rsh_Fir_reg_ee5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2368403604/0: expected 0, got %d", NCAPTURES);

  // ee4 = ld ee
  Rsh_Fir_reg_ee4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // ee5 = force? ee4
  Rsh_Fir_reg_ee5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ee4_);
  // checkMissing(ee5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_ee5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return ee5
  return Rsh_Fir_reg_ee5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
