#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2249744929_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2249744929_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_structure1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_foo_obj;
  SEXP Rsh_Fir_reg_foo_obj1_;
  SEXP Rsh_Fir_reg_bar_obj;
  SEXP Rsh_Fir_reg_bar_obj1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_rm;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2249744929
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2249744929_, RHO, CCP);
  // st chooseOpsMethod = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn structure[, class](1.0, "foo")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st foo_obj = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // structure1 = ldf structure
  Rsh_Fir_reg_structure1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // r2 = dyn structure1[, class](1.0, "bar")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 15 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st bar_obj = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // r3 = clos inner4284372013
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4284372013_, RHO, CCP);
  // st `+.foo` = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // r4 = clos inner4284372013
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4284372013_, RHO, CCP);
  // st `Ops.bar` = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym = ldf invisible
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf invisible in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // r9 = clos inner2249744929
  Rsh_Fir_reg_r9_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2249744929_, RHO, CCP);
  // st `chooseOpsMethod.bar` = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

L5_:;
  // foo_obj = ld foo_obj
  Rsh_Fir_reg_foo_obj = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

L6_:;
  // r5 = dyn base(<lang `+`(foo_obj, bar_obj)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D4_:;
  // deopt 25 [foo_obj]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_foo_obj;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // foo_obj1 = force? foo_obj
  Rsh_Fir_reg_foo_obj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo_obj);
  // checkMissing(foo_obj1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_foo_obj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // bar_obj = ld bar_obj
  Rsh_Fir_reg_bar_obj = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

L10_:;
  // p = prom<V +>{
  //   sym1 = ldf identical;
  //   base1 = ldf identical in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0():
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L2():
  //   foo_obj2 = ld foo_obj;
  //   foo_obj3 = force? foo_obj2;
  //   checkMissing(foo_obj3);
  //   bar_obj2 = ld bar_obj;
  //   bar_obj3 = force? bar_obj2;
  //   checkMissing(bar_obj3);
  //   r12 = `+`(foo_obj3, bar_obj3);
  //   identical = ldf identical in base;
  //   r13 = dyn identical(r12, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L3():
  //   r10 = dyn base1(<lang `+`(foo_obj, bar_obj)>, "bar");
  //   goto L0();
  // L1(r15):
  //   return r15;
  // L4():
  //   bar_obj4 = ld bar_obj;
  //   bar_obj5 = force? bar_obj4;
  //   checkMissing(bar_obj5);
  //   foo_obj4 = ld foo_obj;
  //   foo_obj5 = force? foo_obj4;
  //   checkMissing(foo_obj5);
  //   r16 = `+`(bar_obj5, foo_obj5);
  //   identical1 = ldf identical in base;
  //   r17 = dyn identical1(r16, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L1(r17);
  // L5():
  //   r14 = dyn base2(<lang `+`(bar_obj, foo_obj)>, "bar");
  //   goto L1(r14);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r19 = dyn stopifnot[exprs](p)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D5_:;
  // deopt 26 [foo_obj1, bar_obj]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_foo_obj1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_bar_obj;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // bar_obj1 = force? bar_obj
  Rsh_Fir_reg_bar_obj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar_obj);
  // checkMissing(bar_obj1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_bar_obj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r7 = `+`(foo_obj1, bar_obj1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_foo_obj1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_bar_obj1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args19);
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r8 = dyn invisible(r7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

L11_:;
  // rm = ldf rm
  Rsh_Fir_reg_rm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D6_:;
  // deopt 30 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0()
  // L0()
  goto L0_;

L12_:;
  // p1 = prom<V +>{
  //   foo_obj6 = ld foo_obj;
  //   foo_obj7 = force? foo_obj6;
  //   checkMissing(foo_obj7);
  //   return foo_obj7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   bar_obj6 = ld bar_obj;
  //   bar_obj7 = force? bar_obj6;
  //   checkMissing(bar_obj7);
  //   return bar_obj7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   __foo = ld `+.foo`;
  //   __foo1 = force? __foo;
  //   checkMissing(__foo1);
  //   return __foo1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   Ops_bar = ld `Ops.bar`;
  //   Ops_bar1 = force? Ops_bar;
  //   checkMissing(Ops_bar1);
  //   return Ops_bar1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   chooseOpsMethod_bar = ld `chooseOpsMethod.bar`;
  //   chooseOpsMethod_bar1 = force? chooseOpsMethod_bar;
  //   checkMissing(chooseOpsMethod_bar1);
  //   return chooseOpsMethod_bar1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r25 = dyn rm(p1, p2, p3, p4, p5)
  SEXP Rsh_Fir_array_args26[5];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args26[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args26[4] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[5];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rm, 5, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 46 [r25]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_foo_obj2_;
  SEXP Rsh_Fir_reg_foo_obj3_;
  SEXP Rsh_Fir_reg_bar_obj2_;
  SEXP Rsh_Fir_reg_bar_obj3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_bar_obj4_;
  SEXP Rsh_Fir_reg_bar_obj5_;
  SEXP Rsh_Fir_reg_foo_obj4_;
  SEXP Rsh_Fir_reg_foo_obj5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // foo_obj2 = ld foo_obj
  Rsh_Fir_reg_foo_obj2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // foo_obj3 = force? foo_obj2
  Rsh_Fir_reg_foo_obj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo_obj2_);
  // checkMissing(foo_obj3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_foo_obj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // bar_obj2 = ld bar_obj
  Rsh_Fir_reg_bar_obj2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // bar_obj3 = force? bar_obj2
  Rsh_Fir_reg_bar_obj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar_obj2_);
  // checkMissing(bar_obj3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_bar_obj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r12 = `+`(foo_obj3, bar_obj3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_foo_obj3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_bar_obj3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args9);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn identical(r12, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args10[9];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[8] = Rsh_const(CCP, 16);
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
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L3_:;
  // r10 = dyn base1(<lang `+`(foo_obj, bar_obj)>, "bar")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L4_:;
  // bar_obj4 = ld bar_obj
  Rsh_Fir_reg_bar_obj4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // bar_obj5 = force? bar_obj4
  Rsh_Fir_reg_bar_obj5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar_obj4_);
  // checkMissing(bar_obj5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_bar_obj5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // foo_obj4 = ld foo_obj
  Rsh_Fir_reg_foo_obj4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // foo_obj5 = force? foo_obj4
  Rsh_Fir_reg_foo_obj5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo_obj4_);
  // checkMissing(foo_obj5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_foo_obj5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r16 = `+`(bar_obj5, foo_obj5)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_bar_obj5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_foo_obj5_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args14);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r17 = dyn identical1(r16, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args15[9];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 16);
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
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L1_;

L5_:;
  // r14 = dyn base2(<lang `+`(bar_obj, foo_obj)>, "bar")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r14)
  // L1(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_foo_obj6_;
  SEXP Rsh_Fir_reg_foo_obj7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // foo_obj6 = ld foo_obj
  Rsh_Fir_reg_foo_obj6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // foo_obj7 = force? foo_obj6
  Rsh_Fir_reg_foo_obj7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo_obj6_);
  // checkMissing(foo_obj7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_foo_obj7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return foo_obj7
  return Rsh_Fir_reg_foo_obj7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bar_obj6_;
  SEXP Rsh_Fir_reg_bar_obj7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bar_obj6 = ld bar_obj
  Rsh_Fir_reg_bar_obj6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // bar_obj7 = force? bar_obj6
  Rsh_Fir_reg_bar_obj7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar_obj6_);
  // checkMissing(bar_obj7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_bar_obj7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return bar_obj7
  return Rsh_Fir_reg_bar_obj7_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___foo;
  SEXP Rsh_Fir_reg___foo1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __foo = ld `+.foo`
  Rsh_Fir_reg___foo = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // __foo1 = force? __foo
  Rsh_Fir_reg___foo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___foo);
  // checkMissing(__foo1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg___foo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return __foo1
  return Rsh_Fir_reg___foo1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Ops_bar;
  SEXP Rsh_Fir_reg_Ops_bar1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Ops_bar = ld `Ops.bar`
  Rsh_Fir_reg_Ops_bar = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // Ops_bar1 = force? Ops_bar
  Rsh_Fir_reg_Ops_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ops_bar);
  // checkMissing(Ops_bar1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_Ops_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return Ops_bar1
  return Rsh_Fir_reg_Ops_bar1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_chooseOpsMethod_bar;
  SEXP Rsh_Fir_reg_chooseOpsMethod_bar1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // chooseOpsMethod_bar = ld `chooseOpsMethod.bar`
  Rsh_Fir_reg_chooseOpsMethod_bar = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // chooseOpsMethod_bar1 = force? chooseOpsMethod_bar
  Rsh_Fir_reg_chooseOpsMethod_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chooseOpsMethod_bar);
  // checkMissing(chooseOpsMethod_bar1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_chooseOpsMethod_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return chooseOpsMethod_bar1
  return Rsh_Fir_reg_chooseOpsMethod_bar1_;
}
SEXP Rsh_Fir_user_function_inner2249744929_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2249744929 dynamic dispatch ([x, y, mx, my, cl, reverse])

  return Rsh_Fir_user_version_inner2249744929_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2249744929_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2249744929 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2249744929/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_mx;
  SEXP Rsh_Fir_reg_my;
  SEXP Rsh_Fir_reg_cl;
  SEXP Rsh_Fir_reg_reverse;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_mx = PARAMS[2];
  Rsh_Fir_reg_my = PARAMS[3];
  Rsh_Fir_reg_cl = PARAMS[4];
  Rsh_Fir_reg_reverse = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st mx = mx
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_mx, RHO);
  (void)(Rsh_Fir_reg_mx);
  // st my = my
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_my, RHO);
  (void)(Rsh_Fir_reg_my);
  // st cl = cl
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_cl, RHO);
  (void)(Rsh_Fir_reg_cl);
  // st reverse = reverse
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_reverse, RHO);
  (void)(Rsh_Fir_reg_reverse);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r2 = dyn UseMethod("chooseOpsMethod")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("chooseOpsMethod")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4284372013 dynamic dispatch ([e1, e2])

  return Rsh_Fir_user_version_inner4284372013_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4284372013 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4284372013/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_e2_;

  // Bind parameters
  Rsh_Fir_reg_e1_ = PARAMS[0];
  Rsh_Fir_reg_e2_ = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e1 = e1
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_e1_, RHO);
  (void)(Rsh_Fir_reg_e1_);
  // st e2 = e2
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_e2_, RHO);
  (void)(Rsh_Fir_reg_e2_);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "foo"
  return Rsh_const(CCP, 3);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
