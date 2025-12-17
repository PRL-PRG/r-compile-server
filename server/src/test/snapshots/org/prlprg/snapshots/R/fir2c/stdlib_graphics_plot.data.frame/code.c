#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2207324802_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2207324802_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2207324802_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2207324802_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2207324802_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2207324802_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2207324802_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2207324802_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_plot3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_plot4_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_plot5_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r18_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `plot.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   OrchardSprays = ld OrchardSprays;
  //   OrchardSprays1 = force? OrchardSprays;
  //   checkMissing(OrchardSprays1);
  //   c = `is.object`(OrchardSprays1);
  //   if c then L1() else L2(OrchardSprays1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", OrchardSprays1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(OrchardSprays3):
  //   __ = ldf `[` in base;
  //   r1 = dyn __(OrchardSprays3, 1.0);
  //   goto L0(r1);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn plot[, method](p, "jitter")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   OrchardSprays4 = ld OrchardSprays;
  //   OrchardSprays5 = force? OrchardSprays4;
  //   checkMissing(OrchardSprays5);
  //   c1 = `is.object`(OrchardSprays5);
  //   if c1 then L2() else L3(OrchardSprays5);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", OrchardSprays5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(OrchardSprays7):
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L5() else L6();
  // L1(OrchardSprays10, r5):
  //   __1 = ldf `[` in base;
  //   r7 = dyn __1(OrchardSprays10, r5);
  //   goto L0(r7);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   c2 = ldf c in base;
  //   r6 = dyn c2(4.0, 1.0);
  //   goto L1(OrchardSprays7, r6);
  // L6():
  //   r4 = dyn base(4.0, 1.0);
  //   goto L1(OrchardSprays7, r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn plot1(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   OrchardSprays11 = ld OrchardSprays;
  //   OrchardSprays12 = force? OrchardSprays11;
  //   checkMissing(OrchardSprays12);
  //   return OrchardSprays12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn plot2(p2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 16 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // plot3 = ldf plot
  Rsh_Fir_reg_plot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   iris = ld iris;
  //   iris1 = force? iris;
  //   checkMissing(iris1);
  //   return iris1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn plot3(p3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot3_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 20 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // plot4 = ldf plot
  Rsh_Fir_reg_plot4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   iris2 = ld iris;
  //   iris3 = force? iris2;
  //   checkMissing(iris3);
  //   c3 = `is.object`(iris3);
  //   if c3 then L1() else L2(iris3);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", iris3);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(iris5):
  //   __2 = ldf `[` in base;
  //   r14 = dyn __2(iris5, <int 5, 4>);
  //   goto L0(r14);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r16 = dyn plot4(p4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot4_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 24 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // plot5 = ldf plot
  Rsh_Fir_reg_plot5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   women = ld women;
  //   women1 = force? women;
  //   checkMissing(women1);
  //   return women1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r18 = dyn plot5(p5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot5_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_OrchardSprays;
  SEXP Rsh_Fir_reg_OrchardSprays1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_OrchardSprays3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // OrchardSprays = ld OrchardSprays
  Rsh_Fir_reg_OrchardSprays = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // OrchardSprays1 = force? OrchardSprays
  Rsh_Fir_reg_OrchardSprays1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OrchardSprays);
  // checkMissing(OrchardSprays1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_OrchardSprays1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(OrchardSprays1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_OrchardSprays1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L1() else L2(OrchardSprays1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(OrchardSprays1)
    Rsh_Fir_reg_OrchardSprays3_ = Rsh_Fir_reg_OrchardSprays1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", OrchardSprays1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_OrchardSprays1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_OrchardSprays3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r1 = dyn __(OrchardSprays3, 1.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_OrchardSprays3_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_OrchardSprays4_;
  SEXP Rsh_Fir_reg_OrchardSprays5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_OrchardSprays7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_OrchardSprays10_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // OrchardSprays4 = ld OrchardSprays
  Rsh_Fir_reg_OrchardSprays4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // OrchardSprays5 = force? OrchardSprays4
  Rsh_Fir_reg_OrchardSprays5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OrchardSprays4_);
  // checkMissing(OrchardSprays5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_OrchardSprays5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(OrchardSprays5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_OrchardSprays5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args8);
  // if c1 then L2() else L3(OrchardSprays5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2()
    goto L2_;
  } else {
  // L3(OrchardSprays5)
    Rsh_Fir_reg_OrchardSprays7_ = Rsh_Fir_reg_OrchardSprays5_;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", OrchardSprays5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_OrchardSprays5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_OrchardSprays7_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r7 = dyn __1(OrchardSprays10, r5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_OrchardSprays10_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L0_;

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn c2(4.0, 1.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(OrchardSprays7, r6)
  // L1(OrchardSprays7, r6)
  Rsh_Fir_reg_OrchardSprays10_ = Rsh_Fir_reg_OrchardSprays7_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L6_:;
  // r4 = dyn base(4.0, 1.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(OrchardSprays7, r4)
  // L1(OrchardSprays7, r4)
  Rsh_Fir_reg_OrchardSprays10_ = Rsh_Fir_reg_OrchardSprays7_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_OrchardSprays11_;
  SEXP Rsh_Fir_reg_OrchardSprays12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // OrchardSprays11 = ld OrchardSprays
  Rsh_Fir_reg_OrchardSprays11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // OrchardSprays12 = force? OrchardSprays11
  Rsh_Fir_reg_OrchardSprays12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OrchardSprays11_);
  // checkMissing(OrchardSprays12)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_OrchardSprays12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return OrchardSprays12
  return Rsh_Fir_reg_OrchardSprays12_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris;
  SEXP Rsh_Fir_reg_iris1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris = ld iris
  Rsh_Fir_reg_iris = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // iris1 = force? iris
  Rsh_Fir_reg_iris1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris);
  // checkMissing(iris1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_iris1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return iris1
  return Rsh_Fir_reg_iris1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris2_;
  SEXP Rsh_Fir_reg_iris3_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_iris5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris2 = ld iris
  Rsh_Fir_reg_iris2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // iris3 = force? iris2
  Rsh_Fir_reg_iris3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris2_);
  // checkMissing(iris3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_iris3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(iris3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_iris3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c3 then L1() else L2(iris3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(iris3)
    Rsh_Fir_reg_iris5_ = Rsh_Fir_reg_iris3_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", iris3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_iris3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_iris5_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r14 = dyn __2(iris5, <int 5, 4>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_iris5_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_women;
  SEXP Rsh_Fir_reg_women1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // women = ld women
  Rsh_Fir_reg_women = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // women1 = force? women
  Rsh_Fir_reg_women1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women);
  // checkMissing(women1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_women1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return women1
  return Rsh_Fir_reg_women1_;
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
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_stripchart;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_plot1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_ncol1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_plot2_1;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_pairs;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_reg_r34_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r = clos inner2207324802
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2207324802_, RHO, CCP);
  // st plot2 = r
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, 0, NULL, CCP, RHO);
  // r2 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args32);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c then L8() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L8()
    goto L8_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L8_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r4 = dyn stop("'plot.data.frame' applied to non data frame")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

L12_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, 0, NULL, CCP, RHO);
  // r7 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1()
  // L1()
  goto L1_;

L13_:;
  // r8 = `==`(r7, 1.0)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c1 then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // ncol1 = ldf ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

L14_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 20 [x5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c2 then L16() else L17(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L16()
    goto L16_;
  } else {
  // L17(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L17_;
  }

L28_:;
  // p6 = prom<V +>{
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   return x16;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_2, 0, NULL, CCP, RHO);
  // r27 = dyn ncol1(p6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L29() else D14()
  // L29()
  goto L29_;

D14_:;
  // deopt 44 [r27]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L3_:;
  // st x1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L16_:;
  // dr = tryDispatchBuiltin.1("[[", x6)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr1;
    goto L17_;
  }

L17_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r9 = dyn __(x8, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r9_1;
  goto L3_;

L29_:;
  // r28 = `==`(r27, 2.0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args46);
  // c6 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c6 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // pairs = ldf pairs
  Rsh_Fir_reg_pairs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L34() else D17()
  // L34()
  goto L34_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L3_;

L19_:;
  // p2 = prom<V +>{
  //   sym = ldf class;
  //   base = ldf class in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r11):
  //   c3 = `is.object`(r11);
  //   if c3 then L4() else L5(r11);
  // L2():
  //   x9 = ld x1;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   class = ldf class in base;
  //   r12 = dyn class(x10);
  //   goto L0(r12);
  // L3():
  //   r10 = dyn base(<sym x1>);
  //   goto L0(r10);
  // L1(dx3):
  //   return dx3;
  // L4():
  //   dr2 = tryDispatchBuiltin.1("[", r11);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(r14):
  //   __1 = ldf `[` in base;
  //   r15 = dyn __1(r14, 1);
  //   goto L1(r15);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c4 = ldf c in base;
  //   r19 = dyn c4("integer", "numeric");
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base1("integer", "numeric");
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_4, 0, NULL, CCP, RHO);
  // r21 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

L30_:;
  // plot2 = ldf plot2
  Rsh_Fir_reg_plot2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L31() else D15()
  // L31()
  goto L31_;

D8_:;
  // deopt 30 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // c5 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c5 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L31_:;
  // p7 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   return x18;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_5, 0, NULL, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r30 = dyn plot2[, `...`](p7, ddd3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_1, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L32() else D16()
  // L32()
  goto L32_;

L34_:;
  // p9 = prom<V +>{
  //   data_matrix = ldf `data.matrix`;
  //   p8 = prom<V +>{
  //     x19 = ld x;
  //     x20 = force? x19;
  //     checkMissing(x20);
  //     return x20;
  //   };
  //   r32 = dyn data_matrix(p8);
  //   return r32;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_6, 0, NULL, CCP, RHO);
  // ddd4 = ld `...`
  Rsh_Fir_reg_ddd4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r34 = dyn pairs[, `...`](p9, ddd4)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairs, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L35() else D18()
  // L35()
  goto L35_;

D16_:;
  // deopt 51 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 56 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L4_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

L21_:;
  // stripchart = ldf stripchart
  Rsh_Fir_reg_stripchart = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

L32_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p4 = prom<V +>{
  //   x11 = ld x1;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_8, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r23 = dyn stripchart[, `...`](p4, ddd1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stripchart, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

L25_:;
  // p5 = prom<V +>{
  //   x13 = ld x1;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_9, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r25 = dyn plot[, `...`](p5, ddd2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D10_:;
  // deopt 35 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 40 [r25]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return x16
  return Rsh_Fir_reg_x16_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // sym = ldf class
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf class in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c3 = `is.object`(r11)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args50);
  // if c3 then L4() else L5(r11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L4()
    goto L4_;
  } else {
  // L5(r11)
    Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r11_1;
    goto L5_;
  }

L2_:;
  // x9 = ld x1
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r12 = dyn class(x10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L0_;

L3_:;
  // r10 = dyn base(<sym x1>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_;
  goto L0_;

L1_:;
  // return dx3
  return Rsh_Fir_reg_dx3_1;

L4_:;
  // dr2 = tryDispatchBuiltin.1("[", r11)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_dr2_1;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r15 = dyn __1(r14, 1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(r15)
  // L1(r15)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r15_;
  goto L1_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_1;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r19 = dyn c4("integer", "numeric")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base1("integer", "numeric")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return x18
  return Rsh_Fir_reg_x18_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_matrix;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // data_matrix = ldf `data.matrix`
  Rsh_Fir_reg_data_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p8 = prom<V +>{
  //   x19 = ld x;
  //   x20 = force? x19;
  //   checkMissing(x20);
  //   return x20;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_7, 0, NULL, CCP, RHO);
  // r32 = dyn data_matrix(p8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_matrix, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_x20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return x20
  return Rsh_Fir_reg_x20_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x11 = ld x1
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2044426018/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x1
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_function_inner2207324802_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2207324802 dynamic dispatch ([x, xlab, ylab, `...`])

  return Rsh_Fir_user_version_inner2207324802_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2207324802_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2207324802 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2207324802/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_xlab;
  SEXP Rsh_Fir_reg_ylab;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_xlab_isMissing;
  SEXP Rsh_Fir_reg_xlab_orDefault;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_ylab_isMissing;
  SEXP Rsh_Fir_reg_ylab_orDefault;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_plot2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_p3_2;
  SEXP Rsh_Fir_reg_p4_2;
  SEXP Rsh_Fir_reg_p5_2;
  SEXP Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_reg_r20_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_xlab = PARAMS[1];
  Rsh_Fir_reg_ylab = PARAMS[2];
  Rsh_Fir_reg_ddd1 = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // xlab_isMissing = missing.0(xlab)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_xlab;
  Rsh_Fir_reg_xlab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args72);
  // if xlab_isMissing then L0() else L1(xlab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlab_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(xlab)
    Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_xlab;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf names;
  //   base = ldf names in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   c = `is.object`(r1);
  //   if c then L4() else L5(r1);
  // L2():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   names = ldf names in base;
  //   r2 = dyn names(x2);
  //   goto L0(r2);
  // L3():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // L1(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("[", r1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r4):
  //   __ = ldf `[` in base;
  //   r5 = dyn __(r4, 1);
  //   goto L1(r5);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_p2;
  goto L1_;

L1_:;
  // st xlab = xlab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_xlab_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlab_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args82);
  // if ylab_isMissing then L2() else L3(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r8):
  //   c1 = `is.object`(r8);
  //   if c1 then L4() else L5(r8);
  // L2():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   names1 = ldf names in base;
  //   r9 = dyn names1(x4);
  //   goto L0(r9);
  // L3():
  //   r7 = dyn base1(<sym x>);
  //   goto L0(r7);
  // L1(dx3):
  //   return dx3;
  // L4():
  //   dr2 = tryDispatchBuiltin.1("[", r8);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(r11):
  //   __1 = ldf `[` in base;
  //   r12 = dyn __1(r11, 2);
  //   goto L1(r12);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_p1_2;
  goto L3_;

L3_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // plot = ldf plot
  Rsh_Fir_reg_plot2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c2 = `is.object`(x6);
  //   if c2 then L1() else L2(x6);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", x6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x8):
  //   __2 = ldf `[[` in base;
  //   r14 = dyn __2(x8, 1);
  //   goto L0(r14);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c3 = `is.object`(x10);
  //   if c3 then L1() else L2(x10);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", x10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(x12):
  //   __3 = ldf `[[` in base;
  //   r16 = dyn __3(x12, 2);
  //   goto L0(r16);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p3_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   xlab1 = ld xlab;
  //   xlab2 = force? xlab1;
  //   checkMissing(xlab2);
  //   return xlab2;
  // }
  Rsh_Fir_reg_p4_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   ylab1 = ld ylab;
  //   ylab2 = force? ylab1;
  //   checkMissing(ylab2);
  //   return ylab2;
  // }
  Rsh_Fir_reg_p5_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2207324802_5, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_1 = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r20 = dyn plot[, , xlab, ylab, `...`](p2, p3, p4, p5, ddd1)
  SEXP Rsh_Fir_array_args106[5];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p2_2;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p3_2;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_p4_2;
  Rsh_Fir_array_args106[3] = Rsh_Fir_reg_p5_2;
  Rsh_Fir_array_args106[4] = Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_array_arg_names35[5];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names35[3] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names35[4] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2, 5, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 9 [r20]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_reg_dr2;
  SEXP Rsh_Fir_reg_dc2;
  SEXP Rsh_Fir_reg_dx2;
  SEXP Rsh_Fir_reg_dx1_2;
  SEXP Rsh_Fir_reg___2;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // sym = ldf names
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args74);
  // if c then L4() else L5(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L4()
    goto L4_;
  } else {
  // L5(r1)
    Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_r1_1;
    goto L5_;
  }

L2_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r2 = dyn names(x2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L3_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L1_:;
  // return dx1
  return Rsh_Fir_reg_dx1_2;

L4_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_dr2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dc2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_dr2;
    goto L5_;
  }

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn __(r4, 1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_r5_1;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dx2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_dx2;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_2;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r9_2;
  SEXP Rsh_Fir_reg_c1_2;
  SEXP Rsh_Fir_reg_r11_2;
  SEXP Rsh_Fir_reg_dr2_2;
  SEXP Rsh_Fir_reg_dc1_2;
  SEXP Rsh_Fir_reg_dx2_2;
  SEXP Rsh_Fir_reg_dx3_2;
  SEXP Rsh_Fir_reg___1_2;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf names
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c1 = `is.object`(r8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_c1_2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args84);
  // if c1 then L4() else L5(r8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_2)) {
  // L4()
    goto L4_;
  } else {
  // L5(r8)
    Rsh_Fir_reg_r11_2 = Rsh_Fir_reg_r8_1;
    goto L5_;
  }

L2_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r9 = dyn names1(x4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r9_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_2;
  goto L0_;

L3_:;
  // r7 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_2;
  goto L0_;

L1_:;
  // return dx3
  return Rsh_Fir_reg_dx3_2;

L4_:;
  // dr2 = tryDispatchBuiltin.1("[", r8)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_dr2_2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dc1_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_2)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_r11_2 = Rsh_Fir_reg_dr2_2;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r12 = dyn __1(r11, 2)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r11_2;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_2, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_dx3_2 = Rsh_Fir_reg_r12_1;
  goto L1_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dx2_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_2 = Rsh_Fir_reg_dx2_2;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_c2_2;
  SEXP Rsh_Fir_reg_x8_1;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx4_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg___2_1;
  SEXP Rsh_Fir_reg_r14_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_c2_2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args93);
  // if c2 then L1() else L2(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_2)) {
  // L1()
    goto L1_;
  } else {
  // L2(x6)
    Rsh_Fir_reg_x8_1 = Rsh_Fir_reg_x6_1;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_1;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", x6)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x8_1 = Rsh_Fir_reg_dr4_1;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r14 = dyn __2(x8, 1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x8_1;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r14_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r14_2;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_1;
  SEXP Rsh_Fir_reg_x10_1;
  SEXP Rsh_Fir_reg_c3_2;
  SEXP Rsh_Fir_reg_x12_1;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r16_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_1);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x10_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x10_1;
  Rsh_Fir_reg_c3_2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args99);
  // if c3 then L1() else L2(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_2)) {
  // L1()
    goto L1_;
  } else {
  // L2(x10)
    Rsh_Fir_reg_x12_1 = Rsh_Fir_reg_x10_1;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", x10)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_x10_1;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_x12_1 = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn __3(x12, 2)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x12_1;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r16_1;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xlab1_;
  SEXP Rsh_Fir_reg_xlab2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // xlab1 = ld xlab
  Rsh_Fir_reg_xlab1_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // xlab2 = force? xlab1
  Rsh_Fir_reg_xlab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab1_);
  // checkMissing(xlab2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_xlab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return xlab2
  return Rsh_Fir_reg_xlab2_;
}
SEXP Rsh_Fir_user_promise_inner2207324802_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ylab1_;
  SEXP Rsh_Fir_reg_ylab2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2207324802/0: expected 0, got %d", NCAPTURES);

  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return ylab2
  return Rsh_Fir_reg_ylab2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
