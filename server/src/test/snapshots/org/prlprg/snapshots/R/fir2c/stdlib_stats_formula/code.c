#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_fo;
  SEXP Rsh_Fir_reg_fo1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_fo2_;
  SEXP Rsh_Fir_reg_fo3_;
  SEXP Rsh_Fir_reg_typeof;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_terms;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_environment1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_environment2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_as_formula2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_reformulate;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r35_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st formula = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf class
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf class in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // fo = ld fo
  Rsh_Fir_reg_fo = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L2_:;
  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r3 = dyn __(<sym y>, <lang `*`(x1, x2)>)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // st fo = r3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn class(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(<lang `<-`(fo, `~`(y, `*`(x1, x2)))>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 10 [fo]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_fo;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L5_:;
  // fo1 = force? fo
  Rsh_Fir_reg_fo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fo);
  // checkMissing(fo1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_fo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // sym1 = ldf typeof
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf typeof in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L1_:;
  // terms = ldf terms
  Rsh_Fir_reg_terms = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L6_:;
  // fo2 = ld fo
  Rsh_Fir_reg_fo2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r5 = dyn base1(<sym fo>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D2_:;
  // deopt 14 [fo2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_fo2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // fo3 = force? fo2
  Rsh_Fir_reg_fo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fo2_);
  // checkMissing(fo3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_fo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn typeof(fo3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_fo3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L10_:;
  // p = prom<V +>{
  //   fo4 = ld fo;
  //   fo5 = force? fo4;
  //   checkMissing(fo5);
  //   return fo5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r9 = dyn terms(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D3_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1()
  // L1()
  goto L1_;

L11_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   fo6 = ld fo;
  //   fo7 = force? fo6;
  //   checkMissing(fo7);
  //   return fo7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r11 = dyn environment(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // environment1 = ldf environment
  Rsh_Fir_reg_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p2 = prom<V +>{
  //   as_formula = ldf `as.formula`;
  //   r12 = dyn as_formula("y ~ x");
  //   return r12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r14 = dyn environment1(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 29 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // environment2 = ldf environment
  Rsh_Fir_reg_environment2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p4 = prom<V +>{
  //   as_formula1 = ldf `as.formula`;
  //   p3 = prom<V +>{
  //     new_env = ldf `new.env`;
  //     r15 = dyn new_env();
  //     return r15;
  //   };
  //   r17 = dyn as_formula1[, env]("y ~ x", p3);
  //   return r17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r19 = dyn environment2(p4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 33 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p5 = prom<V +>{
  //   r20 = `:`(1.0, 25.0);
  //   return r20;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn paste0("x", p5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // st xnam = r22
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // as_formula2 = ldf `as.formula`
  Rsh_Fir_reg_as_formula2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p8 = prom<V +>{
  //   paste1 = ldf paste;
  //   p7 = prom<V +>{
  //     paste2 = ldf paste;
  //     p6 = prom<V +>{
  //       xnam = ld xnam;
  //       xnam1 = force? xnam;
  //       checkMissing(xnam1);
  //       return xnam1;
  //     };
  //     r24 = dyn paste2[, collapse](p6, "+");
  //     return r24;
  //   };
  //   r26 = dyn paste1("y ~ ", p7);
  //   return r26;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r28 = dyn as_formula2(p8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 43 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // st fmla = r28
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // reformulate = ldf reformulate
  Rsh_Fir_reg_reformulate = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

D16_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p9 = prom<V +>{
  //   xnam2 = ld xnam;
  //   xnam3 = force? xnam2;
  //   checkMissing(xnam3);
  //   return xnam3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r30 = dyn reformulate[, response](p9, "y")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reformulate, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D17_:;
  // deopt 50 [r30]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // st fmla2 = r30
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D18_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p10 = prom<V +>{
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   fmla = ld fmla;
  //   fmla1 = force? fmla;
  //   checkMissing(fmla1);
  //   fmla2 = ld fmla2;
  //   fmla3 = force? fmla2;
  //   checkMissing(fmla3);
  //   identical = ldf identical in base;
  //   r33 = dyn identical(fmla1, fmla3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base2(<sym fmla>, <sym fmla2>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r35 = dyn stopifnot(p10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 55 [r35]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r35
  return Rsh_Fir_reg_r35_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fo4_;
  SEXP Rsh_Fir_reg_fo5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fo4 = ld fo
  Rsh_Fir_reg_fo4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fo5 = force? fo4
  Rsh_Fir_reg_fo5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fo4_);
  // checkMissing(fo5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_fo5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return fo5
  return Rsh_Fir_reg_fo5_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fo6_;
  SEXP Rsh_Fir_reg_fo7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fo6 = ld fo
  Rsh_Fir_reg_fo6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fo7 = force? fo6
  Rsh_Fir_reg_fo7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fo6_);
  // checkMissing(fo7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_fo7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return fo7
  return Rsh_Fir_reg_fo7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_formula;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_formula = ldf `as.formula`
  Rsh_Fir_reg_as_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r12 = dyn as_formula("y ~ x")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_formula1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_formula1 = ldf `as.formula`
  Rsh_Fir_reg_as_formula1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p3 = prom<V +>{
  //   new_env = ldf `new.env`;
  //   r15 = dyn new_env();
  //   return r15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r17 = dyn as_formula1[, env]("y ~ x", p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new_env;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r15 = dyn new_env()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 0, NULL, NULL, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r20 = `:`(1.0, 25.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args17);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p7 = prom<V +>{
  //   paste2 = ldf paste;
  //   p6 = prom<V +>{
  //     xnam = ld xnam;
  //     xnam1 = force? xnam;
  //     checkMissing(xnam1);
  //     return xnam1;
  //   };
  //   r24 = dyn paste2[, collapse](p6, "+");
  //   return r24;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r26 = dyn paste1("y ~ ", p7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste2 = ldf paste
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p6 = prom<V +>{
  //   xnam = ld xnam;
  //   xnam1 = force? xnam;
  //   checkMissing(xnam1);
  //   return xnam1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r24 = dyn paste2[, collapse](p6, "+")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xnam;
  SEXP Rsh_Fir_reg_xnam1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xnam = ld xnam
  Rsh_Fir_reg_xnam = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // xnam1 = force? xnam
  Rsh_Fir_reg_xnam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xnam);
  // checkMissing(xnam1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_xnam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return xnam1
  return Rsh_Fir_reg_xnam1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xnam2_;
  SEXP Rsh_Fir_reg_xnam3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xnam2 = ld xnam
  Rsh_Fir_reg_xnam2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // xnam3 = force? xnam2
  Rsh_Fir_reg_xnam3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xnam2_);
  // checkMissing(xnam3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_xnam3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return xnam3
  return Rsh_Fir_reg_xnam3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_fmla;
  SEXP Rsh_Fir_reg_fmla1_;
  SEXP Rsh_Fir_reg_fmla2_;
  SEXP Rsh_Fir_reg_fmla3_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // fmla = ld fmla
  Rsh_Fir_reg_fmla = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // fmla1 = force? fmla
  Rsh_Fir_reg_fmla1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fmla);
  // checkMissing(fmla1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_fmla1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // fmla2 = ld fmla2
  Rsh_Fir_reg_fmla2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // fmla3 = force? fmla2
  Rsh_Fir_reg_fmla3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fmla2_);
  // checkMissing(fmla3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_fmla3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r33 = dyn identical(fmla1, fmla3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args28[9];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_fmla1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_fmla3_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[5] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[6] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args28[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[8] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names16[9];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_array_arg_names16[7] = R_MissingArg;
  Rsh_Fir_array_arg_names16[8] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base2(<sym fmla>, <sym fmla2>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r2 = dyn UseMethod("formula")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("formula")
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
