#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner907579597_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner907579597_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner907579597_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner907579597_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner907579597_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner907579597
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner907579597_, RHO, CCP);
  // st check_screen_device = r
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
SEXP Rsh_Fir_user_function_inner907579597_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner907579597 dynamic dispatch ([where])

  return Rsh_Fir_user_version_inner907579597_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner907579597_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner907579597 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner907579597/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_where_isMissing;  // where_isMissing
  SEXP Rsh_Fir_reg_where_orDefault;  // where_orDefault
  SEXP Rsh_Fir_reg_Sys_getenv;  // Sys_getenv
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_check;  // check
  SEXP Rsh_Fir_reg_check1_;  // check1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_check2_;  // check2
  SEXP Rsh_Fir_reg_check3_;  // check3
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_msg2_;  // msg2
  SEXP Rsh_Fir_reg_msg3_;  // msg3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if where_isMissing then L0("screen devices") else L0(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L0("screen devices")
    Rsh_Fir_reg_where_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L0_;
  }

L0_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L3_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r = dyn Sys_getenv("_R_CHECK_SCREEN_DEVICE_", "")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // st check = r
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner907579597_, CCP, RHO);
  // r2 = dyn sprintf("%s should not be used in examples etc", p)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // st msg = r2
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // check = ld check
  Rsh_Fir_reg_check = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base(<sym check>, "stop")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D4_:;
  // deopt 14 [check]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_check;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // check1 = force? check
  Rsh_Fir_reg_check1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check);
  // checkMissing(check1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_check1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn identical(check1, "stop", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args10[9];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_check1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[8] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[9];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 25 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L13_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner907579597_1, CCP, RHO);
  // r7 = dyn stop[, domain](p1, NA_LGL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 31 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L17_:;
  // check2 = ld check
  Rsh_Fir_reg_check2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

L18_:;
  // r8 = dyn base1(<sym check>, "warn")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D8_:;
  // deopt 34 [check2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_check2_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // check3 = force? check2
  Rsh_Fir_reg_check3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check2_);
  // checkMissing(check3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_check3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn identical1(check3, "warn", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args15[9];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_check3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[9];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 45 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

L21_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p2 = prom<V +>{
  //   msg2 = ld msg;
  //   msg3 = force? msg2;
  //   checkMissing(msg3);
  //   return msg3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner907579597_2, CCP, RHO);
  // r12 = dyn warning[, `immediate.`, `noBreaks.`, domain](p2, TRUE, TRUE, NA_LGL)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 55 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner907579597_(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner907579597_1(SEXP CCP, SEXP RHO) {
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_user_promise_inner907579597_2(SEXP CCP, SEXP RHO) {
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return msg3
  return Rsh_Fir_reg_msg3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
