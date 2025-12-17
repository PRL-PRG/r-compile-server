#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2340813864_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2340813864_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2340813864_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340813864_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_interactive;  // interactive
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_split_screen;  // split_screen
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_split_screen1_;  // split_screen1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_screen;  // screen
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_plot;  // plot
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_screen1_;  // screen1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_plot1_;  // plot1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_close_screen;  // close_screen
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_split_screen2_;  // split_screen2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_split_screen3_;  // split_screen3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_plot2_;  // plot2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_erase_screen;  // erase_screen
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_plot3_;  // plot3
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_screen2_;  // screen2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_plot4_;  // plot4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_screen3_;  // screen3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_plot5_;  // plot5
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_screen4_;  // screen4
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_plot6_;  // plot6
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_axis;  // axis
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_title;  // title
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_close_screen1_;  // close_screen1
  SEXP Rsh_Fir_reg_r48_;  // r48

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2340813864
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2340813864_, RHO, CCP);
  // st screen = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf interactive
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf interactive in base
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
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L5() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 2);

L2_:;
  // interactive = ldf interactive in base
  Rsh_Fir_reg_interactive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn interactive()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interactive, 0, NULL, NULL, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L5_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn par[bg]("white")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // split_screen = ldf `split.screen`
  Rsh_Fir_reg_split_screen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c1 = ldf c in base;
  //   r7 = dyn c1(2.0, 1.0);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(2.0, 1.0);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r9 = dyn split_screen(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split_screen, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // split_screen1 = ldf `split.screen`
  Rsh_Fir_reg_split_screen1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   c2 = ldf c in base;
  //   r12 = dyn c2(1.0, 3.0);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2(1.0, 3.0);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r14 = dyn split_screen1[, screen](p1, 2.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 0);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split_screen1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 21 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // screen = ldf screen
  Rsh_Fir_reg_screen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r15 = dyn screen(1.0)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_screen, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D8_:;
  // deopt 25 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L14() else D9()
  // L14()
  goto L14_;

D9_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p2 = prom<V +>{
  //   return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r17 = dyn plot(p2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D10()
  // L15()
  goto L15_;

D10_:;
  // deopt 29 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // screen1 = ldf screen
  Rsh_Fir_reg_screen1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D11()
  // L16()
  goto L16_;

D11_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r18 = dyn screen1(4.0)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_screen1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D12()
  // L17()
  goto L17_;

D12_:;
  // deopt 33 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L18() else D13()
  // L18()
  goto L18_;

D13_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // r20 = dyn plot1(p3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D14()
  // L19()
  goto L19_;

D14_:;
  // deopt 37 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // close_screen = ldf `close.screen`
  Rsh_Fir_reg_close_screen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L20() else D15()
  // L20()
  goto L20_;

D15_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // r21 = dyn close_screen[all](TRUE)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close_screen, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D16()
  // L21()
  goto L21_;

D16_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // split_screen2 = ldf `split.screen`
  Rsh_Fir_reg_split_screen2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L22() else D17()
  // L22()
  goto L22_;

D17_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p4 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   c3 = ldf c in base;
  //   r24 = dyn c3(2.0, 1.0);
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base3(2.0, 1.0);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, CCP, RHO);
  // r26 = dyn split_screen2(p4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split_screen2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L23() else D18()
  // L23()
  goto L23_;

D18_:;
  // deopt 46 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // split_screen3 = ldf `split.screen`
  Rsh_Fir_reg_split_screen3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L24() else D19()
  // L24()
  goto L24_;

D19_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p5 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c4 = ldf c in base;
  //   r29 = dyn c4(1.0, 2.0);
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base4(1.0, 2.0);
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, CCP, RHO);
  // r31 = dyn split_screen3(p5, 2.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split_screen3_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L25() else D20()
  // L25()
  goto L25_;

D20_:;
  // deopt 51 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L26() else D21()
  // L26()
  goto L26_;

D21_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, CCP, RHO);
  // r33 = dyn plot2(p6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L27() else D22()
  // L27()
  goto L27_;

D22_:;
  // deopt 55 [r33]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // erase_screen = ldf `erase.screen`
  Rsh_Fir_reg_erase_screen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L28() else D23()
  // L28()
  goto L28_;

D23_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r34 = dyn erase_screen()
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_erase_screen, 0, NULL, NULL, CCP, RHO);
  // check L29() else D24()
  // L29()
  goto L29_;

D24_:;
  // deopt 58 [r34]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L29_:;
  // plot3 = ldf plot
  Rsh_Fir_reg_plot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L30() else D25()
  // L30()
  goto L30_;

D25_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p7 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, CCP, RHO);
  // r36 = dyn plot3[, ylab](p7, "ylab 3")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot3_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L31() else D26()
  // L31()
  goto L31_;

D26_:;
  // deopt 64 [r36]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // screen2 = ldf screen
  Rsh_Fir_reg_screen2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L32() else D27()
  // L32()
  goto L32_;

D27_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r37 = dyn screen2(1.0)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_screen2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L33() else D28()
  // L33()
  goto L33_;

D28_:;
  // deopt 68 [r37]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L33_:;
  // plot4 = ldf plot
  Rsh_Fir_reg_plot4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L34() else D29()
  // L34()
  goto L34_;

D29_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p8 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, CCP, RHO);
  // r39 = dyn plot4(p8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot4_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L35() else D30()
  // L35()
  goto L35_;

D30_:;
  // deopt 72 [r39]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // screen3 = ldf screen
  Rsh_Fir_reg_screen3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L36() else D31()
  // L36()
  goto L36_;

D31_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r40 = dyn screen3(4.0)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_screen3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L37() else D32()
  // L37()
  goto L37_;

D32_:;
  // deopt 76 [r40]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L37_:;
  // plot5 = ldf plot
  Rsh_Fir_reg_plot5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L38() else D33()
  // L38()
  goto L38_;

D33_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p9 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, CCP, RHO);
  // r42 = dyn plot5[, ylab](p9, "ylab 4")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot5_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L39() else D34()
  // L39()
  goto L39_;

D34_:;
  // deopt 82 [r42]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // screen4 = ldf screen
  Rsh_Fir_reg_screen4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L40() else D35()
  // L40()
  goto L40_;

D35_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // r43 = dyn screen4(1.0, FALSE)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_screen4_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L41() else D36()
  // L41()
  goto L41_;

D36_:;
  // deopt 87 [r43]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L41_:;
  // plot6 = ldf plot
  Rsh_Fir_reg_plot6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L42() else D37()
  // L42()
  goto L42_;

D37_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p10 = prom<V +>{
  //   return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, CCP, RHO);
  // r45 = dyn plot6[, axes, lty, ylab](p10, FALSE, 2.0, "")
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names25[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names25[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot6_, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L43() else D38()
  // L43()
  goto L43_;

D38_:;
  // deopt 97 [r45]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L43_:;
  // axis = ldf axis
  Rsh_Fir_reg_axis = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L44() else D39()
  // L44()
  goto L44_;

D39_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // r46 = dyn axis(4.0)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axis, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L45() else D40()
  // L45()
  goto L45_;

D40_:;
  // deopt 101 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L45_:;
  // title = ldf title
  Rsh_Fir_reg_title = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L46() else D41()
  // L46()
  goto L46_;

D41_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // r47 = dyn title("Plot 1")
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_title, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L47() else D42()
  // L47()
  goto L47_;

D42_:;
  // deopt 105 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L47_:;
  // close_screen1 = ldf `close.screen`
  Rsh_Fir_reg_close_screen1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L48() else D43()
  // L48()
  goto L48_;

D43_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r48 = dyn close_screen1[all](TRUE)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close_screen1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L49() else D44()
  // L49()
  goto L49_;

D44_:;
  // deopt 110 [r48]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn c1(2.0, 1.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base1(2.0, 1.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn c2(1.0, 3.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2(1.0, 3.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>
  return Rsh_const(CCP, 12);
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>
  return Rsh_const(CCP, 12);
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r24 = dyn c3(2.0, 1.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base3(2.0, 1.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn c4(1.0, 2.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base4(1.0, 2.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO) {
  // return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>
  return Rsh_const(CCP, 12);
}
SEXP Rsh_Fir_user_function_inner2340813864_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2340813864 dynamic dispatch ([n, new])

  return Rsh_Fir_user_version_inner2340813864_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2340813864_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2340813864 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2340813864/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_cur_screen;  // cur_screen
  SEXP Rsh_Fir_reg_cur_screen1_;  // cur_screen1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_new_isMissing;  // new_isMissing
  SEXP Rsh_Fir_reg_new_orDefault;  // new_orDefault
  SEXP Rsh_Fir_reg__SSexists;  // _SSexists
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg__SSget;  // _SSget
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_c3_1;  // c3
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_cur_screen2_;  // cur_screen2
  SEXP Rsh_Fir_reg_cur_screen3_;  // cur_screen3
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg__SSget1_;  // _SSget1
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r17_1;  // r17
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg__SSget2_;  // _SSget2
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_par1;  // par
  SEXP Rsh_Fir_reg__SSenv;  // _SSenv
  SEXP Rsh_Fir_reg__SSenv1_;  // _SSenv1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg__SSenv3_;  // _SSenv3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_cur_screen4_;  // cur_screen4
  SEXP Rsh_Fir_reg_cur_screen5_;  // cur_screen5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r29_1;  // r29
  SEXP Rsh_Fir_reg__SSassign;  // _SSassign
  SEXP Rsh_Fir_reg_split_screens;  // split_screens
  SEXP Rsh_Fir_reg_split_screens1_;  // split_screens1
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_r31_1;  // r31
  SEXP Rsh_Fir_reg__SSassign1_;  // _SSassign1
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p5_1;  // p5
  SEXP Rsh_Fir_reg_r33_1;  // r33
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_split_screens2_;  // split_screens2
  SEXP Rsh_Fir_reg_split_screens3_;  // split_screens3
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_split_screens5_;  // split_screens5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r34_1;  // r34
  SEXP Rsh_Fir_reg_p6_1;  // p6
  SEXP Rsh_Fir_reg_r36_1;  // r36
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_erase_screen1;  // erase_screen
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_p7_1;  // p7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r40_1;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r42_1;  // r42

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_new = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if n_isMissing then L0() else L1(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   cur_screen = ld `cur.screen`;
  //   cur_screen1 = force? cur_screen;
  //   checkMissing(cur_screen1);
  //   return cur_screen1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // new_isMissing = missing.0(new)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_new;
  Rsh_Fir_reg_new_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if new_isMissing then L2(TRUE) else L2(new)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_new_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_new_orDefault = Rsh_const(CCP, 15);
    goto L2_;
  } else {
  // L2(new)
    Rsh_Fir_reg_new_orDefault = Rsh_Fir_reg_new;
    goto L2_;
  }

L2_:;
  // st new = new_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_new_orDefault, RHO);
  (void)(Rsh_Fir_reg_new_orDefault);
  // _SSexists = ldf `.SSexists`
  Rsh_Fir_reg__SSexists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L3_:;
  // _SSget = ldf `.SSget`
  Rsh_Fir_reg__SSget = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L5_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L6(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L25()
    goto L25_;
  } else {
  // L6(c1)
    Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c1_1;
    goto L6_;
  }

L6_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c10 then L29() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L29()
    goto L29_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // c7 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L6(c8)
  // L6(c8)
  Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c8_;
  goto L6_;

L8_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // _SSget2 = ldf `.SSget`
  Rsh_Fir_reg__SSget2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L12_:;
  // st `split.screens` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // _SSassign = ldf `.SSassign`
  Rsh_Fir_reg__SSassign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym2 = ldf invisible
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf invisible in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r1 = dyn _SSexists("sp.screens")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSexists, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L17_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c then L18() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L18()
    goto L18_;
  } else {
  // L3()
    goto L3_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 22);

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r5 = dyn _SSget("sp.cur.screen")
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L22_:;
  // st `cur.screen` = r5
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r8 = dyn missing(<sym n>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L5_;

L24_:;
  // r6 = dyn base(<sym n>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L5_;

L25_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r11 = dyn missing1(<sym new>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L7(c1, r11)
  // L7(c1, r11)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L7_;

L27_:;
  // r9 = dyn base1(<sym new>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L7(c1, r9)
  // L7(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L7_;

L29_:;
  // cur_screen2 = ld `cur.screen`
  Rsh_Fir_reg_cur_screen2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 22 [cur_screen2]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_cur_screen2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L30_:;
  // cur_screen3 = force? cur_screen2
  Rsh_Fir_reg_cur_screen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen2_);
  // checkMissing(cur_screen3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_cur_screen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cur_screen3
  return Rsh_Fir_reg_cur_screen3_;

D5_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_1, CCP, RHO);
  // p2 = prom<V +>{
  //   _SSget1 = ldf `.SSget`;
  //   r15 = dyn _SSget1("sp.valid.screens");
  //   return r15;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_2, CCP, RHO);
  // r17 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 31 [r17]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L34_:;
  // r18 = `!`(r17)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c11 then L35() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L35()
    goto L35_;
  } else {
  // L10()
    goto L10_;
  }

L35_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r19 = dyn stop("invalid screen number")
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D8_:;
  // deopt 36 [r19]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L11()
  // L11()
  goto L11_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r21 = dyn _SSget2("sp.screens")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget2_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L40_:;
  // st `split.screens` = r21
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r21_1, RHO);
  (void)(Rsh_Fir_reg_r21_1);
  // par = ldf par
  Rsh_Fir_reg_par1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   _SSenv = ld `.SSenv`;
  //   _SSenv1 = force? _SSenv;
  //   checkMissing(_SSenv1);
  //   c12 = `is.object`(_SSenv1);
  //   if c12 then L1() else L2(_SSenv1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _SSenv1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_SSenv3):
  //   r22 = `$`(_SSenv3, <sym par.list>);
  //   goto L0(r22);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_3, CCP, RHO);
  // r24 = dyn par(p3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 47 [r24]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L42_:;
  // l = ld `split.screens`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // c13 = `is.object`(l)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c13 then L43() else L44(r24, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L43()
    goto L43_;
  } else {
  // L44(r24, l)
    Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r24_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L44_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, r24)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args69);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(r24, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(r24, dr2)
    Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r24_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // cur_screen4 = ld `cur.screen`
  Rsh_Fir_reg_cur_screen4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

L45_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

D13_:;
  // deopt 49 [r26, l2, r24, cur_screen4]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_cur_screen4_;
  Rsh_Fir_deopt(49, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L46_:;
  // cur_screen5 = force? cur_screen4
  Rsh_Fir_reg_cur_screen5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r29 = dyn ____(l2, r24, cur_screen5)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_cur_screen5_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_1;
  goto L12_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p4 = prom<V +>{
  //   split_screens = ld `split.screens`;
  //   split_screens1 = force? split_screens;
  //   checkMissing(split_screens1);
  //   return split_screens1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_4, CCP, RHO);
  // r31 = dyn _SSassign("sp.screens", p4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

D15_:;
  // deopt 57 [r31]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L48_:;
  // _SSassign1 = ldf `.SSassign`
  Rsh_Fir_reg__SSassign1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

D16_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p5 = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_5, CCP, RHO);
  // r33 = dyn _SSassign1("sp.cur.screen", p5)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 62 [r33]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L50_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L51() else D18()
  // L51()
  goto L51_;

D18_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p6 = prom<V +>{
  //   split_screens2 = ld `split.screens`;
  //   split_screens3 = force? split_screens2;
  //   checkMissing(split_screens3);
  //   c14 = `is.object`(split_screens3);
  //   if c14 then L1() else L2(split_screens3);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", split_screens3);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(split_screens5):
  //   n5 = ld n;
  //   n6 = force? n5;
  //   __ = ldf `[[` in base;
  //   r34 = dyn __(split_screens5, n6);
  //   goto L0(r34);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_6, CCP, RHO);
  // r36 = dyn par1(p6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

D19_:;
  // deopt 66 [r36]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r36_1;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L52_:;
  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L53() else D20()
  // L53()
  goto L53_;

D20_:;
  // deopt 67 [new1]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_new1_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L53_:;
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(new2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_new2_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c15 then L54() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L54()
    goto L54_;
  } else {
  // L13()
    goto L13_;
  }

L54_:;
  // erase_screen = ldf `erase.screen`
  Rsh_Fir_reg_erase_screen1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L55() else D21()
  // L55()
  goto L55_;

D21_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p7 = prom<V +>{
  //   n7 = ld n;
  //   n8 = force? n7;
  //   checkMissing(n8);
  //   return n8;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340813864_7, CCP, RHO);
  // r38 = dyn erase_screen(p7)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_erase_screen1, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L56() else D22()
  // L56()
  goto L56_;

D22_:;
  // deopt 72 [r38]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L14()
  // L14()
  goto L14_;

L58_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L60() else D23()
  // L60()
  goto L60_;

L59_:;
  // r40 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L15(r40)
  // L15(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_1;
  goto L15_;

D23_:;
  // deopt 77 [n9]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L60_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r42 = dyn invisible(n10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L61() else D24()
  // L61()
  goto L61_;

D24_:;
  // deopt 80 [r42]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r42_1;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L15(r42)
  // L15(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_1;
  goto L15_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_(SEXP CCP, SEXP RHO) {
  // cur_screen = ld `cur.screen`
  Rsh_Fir_reg_cur_screen = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // cur_screen1 = force? cur_screen
  Rsh_Fir_reg_cur_screen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen);
  // checkMissing(cur_screen1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_cur_screen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return cur_screen1
  return Rsh_Fir_reg_cur_screen1_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_1(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_2(SEXP CCP, SEXP RHO) {
  // _SSget1 = ldf `.SSget`
  Rsh_Fir_reg__SSget1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // r15 = dyn _SSget1("sp.valid.screens")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names35, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_1;
}
SEXP Rsh_Fir_user_promise_inner2340813864_3(SEXP CCP, SEXP RHO) {
  // _SSenv = ld `.SSenv`
  Rsh_Fir_reg__SSenv = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // _SSenv1 = force? _SSenv
  Rsh_Fir_reg__SSenv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__SSenv);
  // checkMissing(_SSenv1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg__SSenv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(_SSenv1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg__SSenv1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(_SSenv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_SSenv1)
    Rsh_Fir_reg__SSenv3_ = Rsh_Fir_reg__SSenv1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _SSenv1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg__SSenv1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__SSenv3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r22 = `$`(_SSenv3, <sym par.list>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg__SSenv3_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_4(SEXP CCP, SEXP RHO) {
  // split_screens = ld `split.screens`
  Rsh_Fir_reg_split_screens = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // split_screens1 = force? split_screens
  Rsh_Fir_reg_split_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_screens);
  // checkMissing(split_screens1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_split_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return split_screens1
  return Rsh_Fir_reg_split_screens1_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_5(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_6(SEXP CCP, SEXP RHO) {
  // split_screens2 = ld `split.screens`
  Rsh_Fir_reg_split_screens2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // split_screens3 = force? split_screens2
  Rsh_Fir_reg_split_screens3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_screens2_);
  // checkMissing(split_screens3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_split_screens3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(split_screens3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_split_screens3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2(split_screens3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split_screens3)
    Rsh_Fir_reg_split_screens5_ = Rsh_Fir_reg_split_screens3_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", split_screens3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_split_screens3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_split_screens5_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r34 = dyn __(split_screens5, n6)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_split_screens5_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r34_1;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2340813864_7(SEXP CCP, SEXP RHO) {
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return n8
  return Rsh_Fir_reg_n8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
