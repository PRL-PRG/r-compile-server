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
SEXP Rsh_Fir_user_function_inner3148629483_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3148629483_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3148629483_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3148629483_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2942660460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2942660460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2942660460_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_arima_sim;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_arima_sim1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_arima_sim2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_ts_plot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r42_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3148629483
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3148629483_, RHO, CCP);
  // st `arima.sim` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // arima_sim = ldf `arima.sim`
  Rsh_Fir_reg_arima_sim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L3() else L4();
  // L0(r6):
  //   return r6;
  // L3():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L5() else L6();
  // L4():
  //   r5 = dyn base1[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>);
  //   goto L0(r5);
  // L1(r8):
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L7() else L8();
  // L5():
  //   c = ldf c in base;
  //   r9 = dyn c(0.8897, -0.4858);
  //   goto L1(r9);
  // L6():
  //   r7 = dyn base2(0.8897, <lang `-`(0.4858)>);
  //   goto L1(r7);
  // L2(r11):
  //   list = ldf list in base;
  //   r13 = dyn list(r8, r11);
  //   goto L0(r13);
  // L7():
  //   c1 = ldf c in base;
  //   r12 = dyn c1(-0.2279, 0.2488);
  //   goto L2(r12);
  // L8():
  //   r10 = dyn base3(<lang `-`(0.2279)>, 0.2488);
  //   goto L2(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym4 = ldf sqrt;
  //   base4 = ldf sqrt in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   r17 = sqrt(0.1796);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base4(0.1796);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r19 = dyn arima_sim[n, , sd](63.0, p1, p2)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima_sim, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 [r19]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // arima_sim1 = ldf `arima.sim`
  Rsh_Fir_reg_arima_sim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p3 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L3() else L4();
  // L0(r21):
  //   return r21;
  // L3():
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L5() else L6();
  // L4():
  //   r20 = dyn base5[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>);
  //   goto L0(r20);
  // L1(r23):
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L7() else L8();
  // L5():
  //   c2 = ldf c in base;
  //   r24 = dyn c2(0.8897, -0.4858);
  //   goto L1(r24);
  // L6():
  //   r22 = dyn base6(0.8897, <lang `-`(0.4858)>);
  //   goto L1(r22);
  // L2(r26):
  //   list1 = ldf list in base;
  //   r28 = dyn list1(r23, r26);
  //   goto L0(r28);
  // L7():
  //   c3 = ldf c in base;
  //   r27 = dyn c3(-0.2279, 0.2488);
  //   goto L2(r27);
  // L8():
  //   r25 = dyn base7(<lang `-`(0.2279)>, 0.2488);
  //   goto L2(r25);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   r30 = clos inner2942660460;
  //   return r30;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r32 = dyn arima_sim1[n, , `rand.gen`](63.0, p3, p4)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima_sim1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 23 [r32]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // arima_sim2 = ldf `arima.sim`
  Rsh_Fir_reg_arima_sim2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p5 = prom<V +>{
  //   sym8 = ldf list;
  //   base8 = ldf list in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L2() else L3();
  // L0(r34):
  //   return r34;
  // L2():
  //   sym9 = ldf c;
  //   base9 = ldf c in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L4() else L5();
  // L3():
  //   r33 = dyn base8[order, ar](<lang c(1.0, 1.0, 0.0)>, 0.7);
  //   goto L0(r33);
  // L1(r36):
  //   list2 = ldf list in base;
  //   r38 = dyn list2(r36, 0.7);
  //   goto L0(r38);
  // L4():
  //   c4 = ldf c in base;
  //   r37 = dyn c4(1.0, 1.0, 0.0);
  //   goto L1(r37);
  // L5():
  //   r35 = dyn base9(1.0, 1.0, 0.0);
  //   goto L1(r35);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r40 = dyn arima_sim2[, n](p5, 200.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima_sim2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 29 [r40]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st `ts.sim` = r40
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // ts_plot = ldf `ts.plot`
  Rsh_Fir_reg_ts_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p6 = prom<V +>{
  //   ts_sim = ld `ts.sim`;
  //   ts_sim1 = force? ts_sim;
  //   checkMissing(ts_sim1);
  //   return ts_sim1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r42 = dyn ts_plot(p6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_plot, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 34 [r42]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L3_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r5 = dyn base1[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

L1_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r9 = dyn c(0.8897, -0.4858)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L6_:;
  // r7 = dyn base2(0.8897, <lang `-`(0.4858)>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r13 = dyn list(r8, r11)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L0_;

L7_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r12 = dyn c1(-0.2279, 0.2488)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L2_;

L8_:;
  // r10 = dyn base3(<lang `-`(0.2279)>, 0.2488)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf sqrt
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf sqrt in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // r17 = sqrt(0.1796)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args14);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base4(0.1796)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard5 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L3_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard6 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r20 = dyn base5[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;

L1_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard7 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r24 = dyn c2(0.8897, -0.4858)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r24)
  // L1(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L1_;

L6_:;
  // r22 = dyn base6(0.8897, <lang `-`(0.4858)>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r22)
  // L1(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L1_;

L2_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r28 = dyn list1(r23, r26)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r28_;
  goto L0_;

L7_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r27 = dyn c3(-0.2279, 0.2488)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r27)
  // L2(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L2_;

L8_:;
  // r25 = dyn base7(<lang `-`(0.2279)>, 0.2488)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(r25)
  // L2(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r30 = clos inner2942660460
  Rsh_Fir_reg_r30_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2942660460_, RHO, CCP);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard8 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r34
  return Rsh_Fir_reg_r34_;

L2_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard9 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r33 = dyn base8[order, ar](<lang c(1.0, 1.0, 0.0)>, 0.7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L0_;

L1_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r38 = dyn list2(r36, 0.7)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r38_;
  goto L0_;

L4_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r37 = dyn c4(1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(r37)
  // L1(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L1_;

L5_:;
  // r35 = dyn base9(1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r35)
  // L1(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ts_sim;
  SEXP Rsh_Fir_reg_ts_sim1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ts_sim = ld `ts.sim`
  Rsh_Fir_reg_ts_sim = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // ts_sim1 = force? ts_sim
  Rsh_Fir_reg_ts_sim1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ts_sim);
  // checkMissing(ts_sim1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ts_sim1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return ts_sim1
  return Rsh_Fir_reg_ts_sim1_;
}
SEXP Rsh_Fir_user_function_inner3148629483_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3148629483 dynamic dispatch ([model, n, `rand.gen`, innov, `n.start`, `start.innov`, `...`])

  return Rsh_Fir_user_version_inner3148629483_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3148629483_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3148629483 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner3148629483/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_model;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_rand_gen;
  SEXP Rsh_Fir_reg_innov;
  SEXP Rsh_Fir_reg_n_start;
  SEXP Rsh_Fir_reg_start_innov;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_rand_gen_isMissing;
  SEXP Rsh_Fir_reg_rand_gen_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_innov_isMissing;
  SEXP Rsh_Fir_reg_innov_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_n_start_isMissing;
  SEXP Rsh_Fir_reg_n_start_orDefault;
  SEXP Rsh_Fir_reg_start_innov_isMissing;
  SEXP Rsh_Fir_reg_start_innov_orDefault;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_model1_;
  SEXP Rsh_Fir_reg_model2_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_model3_;
  SEXP Rsh_Fir_reg_model4_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_model6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_model7_;
  SEXP Rsh_Fir_reg_model8_;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_model10_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_polyroot;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_Mod;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_minroots;
  SEXP Rsh_Fir_reg_minroots1_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_r36_1;
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_model11_;
  SEXP Rsh_Fir_reg_model12_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_model14_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym7_1;
  SEXP Rsh_Fir_reg_base7_1;
  SEXP Rsh_Fir_reg_guard7_1;
  SEXP Rsh_Fir_reg_r42_1;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_n_start3_;
  SEXP Rsh_Fir_reg_n_start4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_q;
  SEXP Rsh_Fir_reg_q1_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_ifelse;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_n_start5_;
  SEXP Rsh_Fir_reg_n_start6_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_reg_q3_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_model15_;
  SEXP Rsh_Fir_reg_model16_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_model18_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_ord;
  SEXP Rsh_Fir_reg_ord1_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_ord2_;
  SEXP Rsh_Fir_reg_ord3_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_ord5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_q4_;
  SEXP Rsh_Fir_reg_q5_;
  SEXP Rsh_Fir_reg_ord6_;
  SEXP Rsh_Fir_reg_ord7_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_q7_;
  SEXP Rsh_Fir_reg_ord9_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_q9_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop6_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_ord10_;
  SEXP Rsh_Fir_reg_ord11_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_ord13_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_d6_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_stop7_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_start_innov1_;
  SEXP Rsh_Fir_reg_start_innov2_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_n_start7_;
  SEXP Rsh_Fir_reg_n_start8_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_stop8_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_ts;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_model19_;
  SEXP Rsh_Fir_reg_model20_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_model22_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_filter;
  SEXP Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_reg_p28_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_model27_;
  SEXP Rsh_Fir_reg_model28_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_model30_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r155_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_reg_r158_;
  SEXP Rsh_Fir_reg_model31_;
  SEXP Rsh_Fir_reg_model32_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_model34_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_filter1_;
  SEXP Rsh_Fir_reg_p29_;
  SEXP Rsh_Fir_reg_p30_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_n_start17_;
  SEXP Rsh_Fir_reg_n_start18_;
  SEXP Rsh_Fir_reg_r166_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_r168_;
  SEXP Rsh_Fir_reg_n_start19_;
  SEXP Rsh_Fir_reg_n_start20_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_diffinv;
  SEXP Rsh_Fir_reg_p31_;
  SEXP Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_reg_r175_;
  SEXP Rsh_Fir_reg_as_ts;
  SEXP Rsh_Fir_reg_p33_;
  SEXP Rsh_Fir_reg_r178_;

  // Bind parameters
  Rsh_Fir_reg_model = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_rand_gen = PARAMS[2];
  Rsh_Fir_reg_innov = PARAMS[3];
  Rsh_Fir_reg_n_start = PARAMS[4];
  Rsh_Fir_reg_start_innov = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st model = model
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_model, RHO);
  (void)(Rsh_Fir_reg_model);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // rand_gen_isMissing = missing.0(rand_gen)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_rand_gen;
  Rsh_Fir_reg_rand_gen_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if rand_gen_isMissing then L0() else L1(rand_gen)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rand_gen_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(rand_gen)
    Rsh_Fir_reg_rand_gen_orDefault = Rsh_Fir_reg_rand_gen;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   rnorm = ld rnorm;
  //   rnorm1 = force? rnorm;
  //   checkMissing(rnorm1);
  //   return rnorm1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_rand_gen_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st `rand.gen` = rand_gen_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_rand_gen_orDefault, RHO);
  (void)(Rsh_Fir_reg_rand_gen_orDefault);
  // innov_isMissing = missing.0(innov)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_innov;
  Rsh_Fir_reg_innov_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if innov_isMissing then L2() else L3(innov)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_innov_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(innov)
    Rsh_Fir_reg_innov_orDefault = Rsh_Fir_reg_innov;
    goto L3_;
  }

L2_:;
  // p2 = prom<V +>{
  //   rand_gen1 = ldf `rand.gen`;
  //   p1 = prom<V +>{
  //     n1 = ld n;
  //     n2 = force? n1;
  //     checkMissing(n2);
  //     return n2;
  //   };
  //   ddd1 = ld `...`;
  //   r2 = dyn rand_gen1[, `...`](p1, ddd1);
  //   return r2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_1, 0, NULL, CCP, RHO);
  // goto L3(p2)
  // L3(p2)
  Rsh_Fir_reg_innov_orDefault = Rsh_Fir_reg_p2_1;
  goto L3_;

L3_:;
  // st innov = innov_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_innov_orDefault, RHO);
  (void)(Rsh_Fir_reg_innov_orDefault);
  // n_start_isMissing = missing.0(n_start)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_n_start;
  Rsh_Fir_reg_n_start_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args41);
  // if n_start_isMissing then L4(NA_LGL) else L4(n_start)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_start_isMissing)) {
  // L4(NA_LGL)
    Rsh_Fir_reg_n_start_orDefault = Rsh_const(CCP, 33);
    goto L4_;
  } else {
  // L4(n_start)
    Rsh_Fir_reg_n_start_orDefault = Rsh_Fir_reg_n_start;
    goto L4_;
  }

L4_:;
  // st `n.start` = n_start_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_n_start_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_start_orDefault);
  // start_innov_isMissing = missing.0(start_innov)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_start_innov;
  Rsh_Fir_reg_start_innov_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args42);
  // if start_innov_isMissing then L5() else L6(start_innov)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_start_innov_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(start_innov)
    Rsh_Fir_reg_start_innov_orDefault = Rsh_Fir_reg_start_innov;
    goto L6_;
  }

L5_:;
  // p4 = prom<V +>{
  //   rand_gen2 = ldf `rand.gen`;
  //   p3 = prom<V +>{
  //     n_start1 = ld `n.start`;
  //     n_start2 = force? n_start1;
  //     checkMissing(n_start2);
  //     return n_start2;
  //   };
  //   ddd2 = ld `...`;
  //   r5 = dyn rand_gen2[, `...`](p3, ddd2);
  //   return r5;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_3, 0, NULL, CCP, RHO);
  // goto L6(p4)
  // L6(p4)
  Rsh_Fir_reg_start_innov_orDefault = Rsh_Fir_reg_p4_1;
  goto L6_;

L6_:;
  // st `start.innov` = start_innov_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_start_innov_orDefault, RHO);
  (void)(Rsh_Fir_reg_start_innov_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L7_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args46);
  // c = `as.logical`(r10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c then L67() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L67()
    goto L67_;
  } else {
  // L8()
    goto L8_;
  }

L63_:;
  // model1 = ld model
  Rsh_Fir_reg_model1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L65() else D0()
  // L65()
  goto L65_;

L64_:;
  // r7 = dyn base(<sym model>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L7_;

D0_:;
  // deopt 2 [model1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_model1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L71() else D4()
  // L71()
  goto L71_;

L65_:;
  // model2 = force? model1
  Rsh_Fir_reg_model2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model1_);
  // checkMissing(model2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_model2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r9 = dyn is_list(model2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_model2_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L66() else D1()
  // L66()
  goto L66_;

L67_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L68() else D2()
  // L68()
  goto L68_;

D1_:;
  // deopt 5 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 [n3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L7_;

L68_:;
  // r11 = dyn stop("'model' must be list")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L69() else D3()
  // L69()
  goto L69_;

L71_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r13 = `<=`(n4, 0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args53);
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c1 then L72() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L72()
    goto L72_;
  } else {
  // L10()
    goto L10_;
  }

D3_:;
  // deopt 10 [r11]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard1 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L69_:;
  // goto L9()
  // L9()
  goto L9_;

L72_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L73() else D5()
  // L73()
  goto L73_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // st p = r17
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // p5 = ld p
  Rsh_Fir_reg_p5_1 = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L84() else D9()
  // L84()
  goto L84_;

L73_:;
  // r14 = dyn stop1("'n' must be strictly positive")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L74() else D6()
  // L74()
  goto L74_;

L76_:;
  // model3 = ld model
  Rsh_Fir_reg_model3_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L78() else D7()
  // L78()
  goto L78_;

L77_:;
  // r16 = dyn base1(<lang `$`(model, ar)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L12(r16)
  // L12(r16)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r16_1;
  goto L12_;

D6_:;
  // deopt 20 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 25 [model3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_model3_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [p5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L11()
  // L11()
  goto L11_;

L78_:;
  // model4 = force? model3
  Rsh_Fir_reg_model4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model3_);
  // checkMissing(model4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_model4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(model4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_model4_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c2 then L80() else L81(model4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L80()
    goto L80_;
  } else {
  // L81(model4)
    Rsh_Fir_reg_model6_ = Rsh_Fir_reg_model4_;
    goto L81_;
  }

L84_:;
  // p6 = force? p5
  Rsh_Fir_reg_p6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_1);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(p6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c3 then L85() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L85()
    goto L85_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard6 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L79_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r19 = dyn length(dx1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L83() else D8()
  // L83()
  goto L83_;

L80_:;
  // dr = tryDispatchBuiltin.1("$", model4)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_model4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc then L82() else L81(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr)
    Rsh_Fir_reg_model6_ = Rsh_Fir_reg_dr;
    goto L81_;
  }

L81_:;
  // r18 = `$`(model6, <sym ar>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_model6_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args66);
  // goto L79(r18)
  // L79(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L79_;

L85_:;
  // sym2 = ldf min
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base2 = ldf min in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard2 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

D8_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L14_:;
  // st minroots = r21
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r21_1, RHO);
  (void)(Rsh_Fir_reg_r21_1);
  // minroots = ld minroots
  Rsh_Fir_reg_minroots = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L103() else D15()
  // L103()
  goto L103_;

L21_:;
  // st q = r39
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym7_1;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base7_1;
  Rsh_Fir_reg_guard7_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard7 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_1)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L82_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L79(dx)
  // L79(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L79_;

L83_:;
  // goto L12(r19)
  // L12(r19)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r19_1;
  goto L12_;

L86_:;
  // sym3 = ldf Mod
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base3 = ldf Mod in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard3 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L87_:;
  // r20 = dyn base2(<lang Mod(polyroot(c(1.0, `-`(`$`(model, ar)))))>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L14(r20)
  // L14(r20)
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r20_1;
  goto L14_;

L109_:;
  // model11 = ld model
  Rsh_Fir_reg_model11_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L111() else D18()
  // L111()
  goto L111_;

L110_:;
  // r38 = dyn base6(<lang `$`(model, ma)>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L21(r38)
  // L21(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_1;
  goto L21_;

D15_:;
  // deopt 55 [minroots]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_minroots;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 69 [model11]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_model11_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L15_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r33 = dyn min(r23)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L102() else D14()
  // L102()
  goto L102_;

L22_:;
  // c8 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args74);
  // if c8 then L121() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L121()
    goto L121_;
  } else {
  // L23()
    goto L23_;
  }

L88_:;
  // sym4 = ldf polyroot
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base4 = ldf polyroot in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard4 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L89_:;
  // r22 = dyn base3(<lang polyroot(c(1.0, `-`(`$`(model, ar))))>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L15(r22)
  // L15(r22)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r22_1;
  goto L15_;

L103_:;
  // minroots1 = force? minroots
  Rsh_Fir_reg_minroots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_minroots);
  // checkMissing(minroots1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_minroots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r34 = `<=`(minroots1, 1.0)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_minroots1_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args78);
  // c6 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c6 then L104() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L104()
    goto L104_;
  } else {
  // L18()
    goto L18_;
  }

L111_:;
  // model12 = force? model11
  Rsh_Fir_reg_model12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model11_);
  // checkMissing(model12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_model12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(model12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_model12_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args81);
  // if c7 then L113() else L114(model12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L113()
    goto L113_;
  } else {
  // L114(model12)
    Rsh_Fir_reg_model14_ = Rsh_Fir_reg_model12_;
    goto L114_;
  }

L117_:;
  // n_start3 = ld `n.start`
  Rsh_Fir_reg_n_start3_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L119() else D20()
  // L119()
  goto L119_;

L118_:;
  // r42 = dyn base7(<sym n.start>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_1, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L22(r42)
  // L22(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_1;
  goto L22_;

D14_:;
  // deopt 53 [r33]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 77 [n_start3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_n_start3_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L16_:;
  // Mod = ldf Mod in base
  Rsh_Fir_reg_Mod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r32 = dyn Mod(r25)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Mod, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L101() else D13()
  // L101()
  goto L101_;

L18_:;
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_r36_1 = Rsh_const(CCP, 54);
  goto L19_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L23_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // n_start5 = ld `n.start`
  Rsh_Fir_reg_n_start5_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L127() else D26()
  // L127()
  goto L127_;

L90_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard5 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L91_:;
  // r24 = dyn base4(<lang c(1.0, `-`(`$`(model, ar)))>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L16(r24)
  // L16(r24)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r24_1;
  goto L16_;

L102_:;
  // goto L14(r33)
  // L14(r33)
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r33_1;
  goto L14_;

L104_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L105() else D16()
  // L105()
  goto L105_;

L112_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r41 = dyn length1(dx5)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L116() else D19()
  // L116()
  goto L116_;

L113_:;
  // dr4 = tryDispatchBuiltin.1("$", model12)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_model12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L115() else L114(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr4)
    Rsh_Fir_reg_model14_ = Rsh_Fir_reg_dr4_;
    goto L114_;
  }

L114_:;
  // r40 = `$`(model14, <sym ma>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_model14_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args89);
  // goto L112(r40)
  // L112(r40)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r40_1;
  goto L112_;

L119_:;
  // n_start4 = force? n_start3
  Rsh_Fir_reg_n_start4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start3_);
  // checkMissing(n_start4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_n_start4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r44 = dyn is_na(n_start4)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_n_start4_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L120() else D21()
  // L120()
  goto L120_;

L121_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L122() else D22()
  // L122()
  goto L122_;

D13_:;
  // deopt 51 [r32]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r32_1;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 73 [r41]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 80 [r44]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 81 [p7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 94 [n_start5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_n_start5_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L17_:;
  // polyroot = ldf polyroot in base
  Rsh_Fir_reg_polyroot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r31 = dyn polyroot(r27)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_polyroot, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L100() else D12()
  // L100()
  goto L100_;

L92_:;
  // model7 = ld model
  Rsh_Fir_reg_model7_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L94() else D10()
  // L94()
  goto L94_;

L93_:;
  // r26 = dyn base5(1.0, <lang `-`(`$`(model, ar))>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L17(r26)
  // L17(r26)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r26_1;
  goto L17_;

L101_:;
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r32_1;
  goto L15_;

L105_:;
  // r35 = dyn stop2("'ar' part of model is not stationary")
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L106() else D17()
  // L106()
  goto L106_;

L115_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L112(dx4)
  // L112(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L112_;

L116_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L21_;

L120_:;
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L22_;

L122_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // q = ld q
  Rsh_Fir_reg_q = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L123() else D23()
  // L123()
  goto L123_;

L127_:;
  // n_start6 = force? n_start5
  Rsh_Fir_reg_n_start6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start5_);
  // checkMissing(n_start6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_n_start6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // p13 = ld p
  Rsh_Fir_reg_p13_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L128() else D27()
  // L128()
  goto L128_;

D10_:;
  // deopt 42 [model7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_model7_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 49 [r31]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 62 [r35]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r35_1;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 82 [p8, q]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_q;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 95 [n_start6, p13]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_n_start6_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L94_:;
  // model8 = force? model7
  Rsh_Fir_reg_model8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model7_);
  // checkMissing(model8)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_model8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(model8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_model8_;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args99);
  // if c4 then L96() else L97(model8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L96()
    goto L96_;
  } else {
  // L97(model8)
    Rsh_Fir_reg_model10_ = Rsh_Fir_reg_model8_;
    goto L97_;
  }

L100_:;
  // goto L16(r31)
  // L16(r31)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r31_;
  goto L16_;

L106_:;
  // goto L19(r35)
  // L19(r35)
  Rsh_Fir_reg_r36_1 = Rsh_Fir_reg_r35_1;
  goto L19_;

L123_:;
  // q1 = force? q
  Rsh_Fir_reg_q1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q);
  // checkMissing(q1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_q1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r45 = `+`(p8, q1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_q1_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args101);
  // ifelse = ldf ifelse
  Rsh_Fir_reg_ifelse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L124() else D24()
  // L124()
  goto L124_;

L128_:;
  // p14 = force? p13
  Rsh_Fir_reg_p14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p13_);
  // checkMissing(p14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // q2 = ld q
  Rsh_Fir_reg_q2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L129() else D28()
  // L129()
  goto L129_;

D24_:;
  // deopt 85 [r45]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 96 [n_start6, p14, q2]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_n_start6_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_q2_;
  Rsh_Fir_deopt(96, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L95_:;
  // r29 = `-`(<missing>, dx3)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args103);
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r30 = dyn c5(1.0, r29)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L99() else D11()
  // L99()
  goto L99_;

L96_:;
  // dr2 = tryDispatchBuiltin.1("$", model8)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_model8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc1 then L98() else L97(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr2)
    Rsh_Fir_reg_model10_ = Rsh_Fir_reg_dr2_;
    goto L97_;
  }

L97_:;
  // r28 = `$`(model10, <sym ar>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_model10_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args107);
  // goto L95(r28)
  // L95(r28)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r28_1;
  goto L95_;

L124_:;
  // p11 = prom<V +>{
  //   p9 = ld p;
  //   p10 = force? p9;
  //   checkMissing(p10);
  //   r46 = `>`(p10, 0.0);
  //   return r46;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_5, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym8 = ldf ceiling;
  //   base8 = ldf ceiling in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L2() else L3();
  // L0(r49):
  //   return r49;
  // L2():
  //   sym9 = ldf log;
  //   base9 = ldf log in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L4() else L5();
  // L3():
  //   r48 = dyn base8(<lang `/`(6.0, log(minroots))>);
  //   goto L0(r48);
  // L1(r53, r54):
  //   r56 = `/`(r53, r54);
  //   r57 = ceiling(r56);
  //   goto L0(r57);
  // L4():
  //   minroots2 = ld minroots;
  //   minroots3 = force? minroots2;
  //   checkMissing(minroots3);
  //   r55 = log(minroots3, 2.718281828459045);
  //   goto L1(6.0, r55);
  // L5():
  //   r52 = dyn base9(<sym minroots>);
  //   goto L1(6.0, r52);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_6, 0, NULL, CCP, RHO);
  // r59 = dyn ifelse(p11, p12, 0.0)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args118[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse, 3, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L125() else D25()
  // L125()
  goto L125_;

L129_:;
  // q3 = force? q2
  Rsh_Fir_reg_q3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q2_);
  // checkMissing(q3)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_q3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r62 = `+`(p14, q3)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_q3_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args120);
  // r63 = `<`(n_start6, r62)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_n_start6_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args121);
  // c9 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args122);
  // if c9 then L130() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L130()
    goto L130_;
  } else {
  // L25()
    goto L25_;
  }

D11_:;
  // deopt 47 [r30]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 89 [r45, r59]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // st d = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_const(CCP, 25), RHO);
  (void)(Rsh_const(CCP, 25));
  // sym10 = ldf `is.null`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base10 = ldf `is.null` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard10 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L98_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L95(dx2)
  // L95(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L95_;

L99_:;
  // goto L17(r30)
  // L17(r30)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r30_1;
  goto L17_;

L125_:;
  // r60 = `+`(r45, r59)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args125);
  // st `n.start` = r60
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // goto L24()
  // L24()
  goto L24_;

L130_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L131() else D29()
  // L131()
  goto L131_;

D29_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r69 = `!`(r67)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args126);
  // c12 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args127);
  // if c12 then L141() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L141()
    goto L141_;
  } else {
  // L28()
    goto L28_;
  }

L131_:;
  // r64 = dyn stop3("burn-in 'n.start' must be as long as 'ar + ma'")
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L132() else D30()
  // L132()
  goto L132_;

L134_:;
  // model15 = ld model
  Rsh_Fir_reg_model15_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L136() else D31()
  // L136()
  goto L136_;

L135_:;
  // r66 = dyn base10(<lang `<-`(ord, `$`(model, order))>)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L27(r66)
  // L27(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L27_;

D30_:;
  // deopt 103 [r64]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 110 [model15]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_model15_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L43()
  // L43()
  goto L43_;

L43_:;
  // sym13 = ldf missing
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base13 = ldf missing in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard13 then L183() else L184()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L183()
    goto L183_;
  } else {
  // L184()
    goto L184_;
  }

L132_:;
  // goto L26()
  // L26()
  goto L26_;

L136_:;
  // model16 = force? model15
  Rsh_Fir_reg_model16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model15_);
  // checkMissing(model16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_model16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(model16)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_model16_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c10 then L138() else L139(model16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L138()
    goto L138_;
  } else {
  // L139(model16)
    Rsh_Fir_reg_model18_ = Rsh_Fir_reg_model16_;
    goto L139_;
  }

L141_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard11 then L142() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L142()
    goto L142_;
  } else {
  // L143()
    goto L143_;
  }

L29_:;
  // r73 = `!=`(r71, 3)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args134);
  // c13 = `as.logical`(r73)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args135);
  // if c13 then L146() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L146()
    goto L146_;
  } else {
  // L30()
    goto L30_;
  }

L44_:;
  // r96 = `!`(r94)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args136);
  // c26 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args137);
  // if c26 then L185() else L45(c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L185()
    goto L185_;
  } else {
  // L45(c26)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
    goto L45_;
  }

L137_:;
  // st ord = dx7
  Rsh_Fir_store(Rsh_const(CCP, 71), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // c11 = `==`(dx7, NULL)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args138);
  // goto L27(c11)
  // L27(c11)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_c11_;
  goto L27_;

L138_:;
  // dr6 = tryDispatchBuiltin.1("$", model16)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_model16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if dc3 then L140() else L139(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L140()
    goto L140_;
  } else {
  // L139(dr6)
    Rsh_Fir_reg_model18_ = Rsh_Fir_reg_dr6_;
    goto L139_;
  }

L139_:;
  // r68 = `$`(model18, <sym order>)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_model18_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args141);
  // goto L137(r68)
  // L137(r68)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r68_;
  goto L137_;

L142_:;
  // ord = ld ord
  Rsh_Fir_reg_ord = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L144() else D32()
  // L144()
  goto L144_;

L143_:;
  // r70 = dyn base11(<sym ord>)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L29(r70)
  // L29(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L29_;

L183_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r95 = dyn missing(<sym start.innov>)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L44(r95)
  // L44(r95)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r95_;
  goto L44_;

L184_:;
  // r93 = dyn base13(<sym start.innov>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L44(r93)
  // L44(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L44_;

D32_:;
  // deopt 118 [ord]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_ord;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // p15 = ld p
  Rsh_Fir_reg_p15_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L150() else D36()
  // L150()
  goto L150_;

L45_:;
  // c35 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args145);
  // if c35 then L192() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L192()
    goto L192_;
  } else {
  // L47()
    goto L47_;
  }

L140_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L137(dx6)
  // L137(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L137_;

L144_:;
  // ord1 = force? ord
  Rsh_Fir_reg_ord1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord);
  // checkMissing(ord1)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_ord1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r72 = dyn length2(ord1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_ord1_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L145() else D33()
  // L145()
  goto L145_;

L146_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L147() else D34()
  // L147()
  goto L147_;

L185_:;
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard14 then L186() else L187()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L186()
    goto L186_;
  } else {
  // L187()
    goto L187_;
  }

D33_:;
  // deopt 121 [r72]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 130 [p15]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L46_:;
  // n_start7 = ld `n.start`
  Rsh_Fir_reg_n_start7_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L190() else D51()
  // L190()
  goto L190_;

L47_:;
  // goto L48()
  // L48()
  goto L48_;

L48_:;
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L196() else D54()
  // L196()
  goto L196_;

L145_:;
  // goto L29(r72)
  // L29(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L29_;

L147_:;
  // r74 = dyn stop4("'model$order' must be of length 3")
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L148() else D35()
  // L148()
  goto L148_;

L150_:;
  // p16 = force? p15
  Rsh_Fir_reg_p16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p15_);
  // checkMissing(p16)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // ord2 = ld ord
  Rsh_Fir_reg_ord2_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L151() else D37()
  // L151()
  goto L151_;

L186_:;
  // start_innov1 = ld `start.innov`
  Rsh_Fir_reg_start_innov1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L188() else D49()
  // L188()
  goto L188_;

L187_:;
  // r97 = dyn base14(<sym start.innov>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L46(c26, r97)
  // L46(c26, r97)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L46_;

L192_:;
  // stop8 = ldf stop
  Rsh_Fir_reg_stop8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L193() else D52()
  // L193()
  goto L193_;

D35_:;
  // deopt 127 [r74]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 131 [p16, ord2]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_ord2_;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 186 [c26, start_innov1]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_start_innov1_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 189 [c31, r98, n_start7]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_n_start7_;
  Rsh_Fir_deopt(189, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 194 []
  Rsh_Fir_deopt(194, 0, NULL, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 202 []
  Rsh_Fir_deopt(202, 0, NULL, CCP, RHO);
  return R_NilValue;

L148_:;
  // goto L31()
  // L31()
  goto L31_;

L151_:;
  // ord3 = force? ord2
  Rsh_Fir_reg_ord3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord2_);
  // checkMissing(ord3)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_ord3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(ord3)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_ord3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args154);
  // if c14 then L152() else L153(p16, ord3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L152()
    goto L152_;
  } else {
  // L153(p16, ord3)
    Rsh_Fir_reg_p18_ = Rsh_Fir_reg_p16_;
    Rsh_Fir_reg_ord5_ = Rsh_Fir_reg_ord3_;
    goto L153_;
  }

L188_:;
  // start_innov2 = force? start_innov1
  Rsh_Fir_reg_start_innov2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start_innov1_);
  // checkMissing(start_innov2)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_start_innov2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r99 = dyn length3(start_innov2)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_start_innov2_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L189() else D50()
  // L189()
  goto L189_;

L190_:;
  // n_start8 = force? n_start7
  Rsh_Fir_reg_n_start8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start7_);
  // checkMissing(n_start8)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_n_start8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // r100 = `<`(r98, n_start8)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_n_start8_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args158);
  // c32 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args159);
  // c33 = `&&`(c31, c32)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args160);
  // goto L45(c33)
  // L45(c33)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c33_;
  goto L45_;

L193_:;
  // p24 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p22 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p21 = prom<V +>{
  //       n_start9 = ld `n.start`;
  //       n_start10 = force? n_start9;
  //       checkMissing(n_start10);
  //       return n_start10;
  //     };
  //     r102 = dyn ngettext(p21, "'start.innov' is too short: need %d point", "'start.innov' is too short: need %d points");
  //     return r102;
  //   };
  //   p23 = prom<V +>{
  //     n_start11 = ld `n.start`;
  //     n_start12 = force? n_start11;
  //     checkMissing(n_start12);
  //     return n_start12;
  //   };
  //   r105 = dyn sprintf(p22, p23);
  //   return r105;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_7, 0, NULL, CCP, RHO);
  // r107 = dyn stop8[, domain](p24, NA_LGL)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = Rsh_const(CCP, 78);
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop8_, 2, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L194() else D53()
  // L194()
  goto L194_;

L196_:;
  // p25 = prom<V +>{
  //   sym15 = ldf c;
  //   base15 = ldf c in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L4() else L5();
  // L0(r110):
  //   return r110;
  // L4():
  //   start_innov3 = ld `start.innov`;
  //   start_innov4 = force? start_innov3;
  //   checkMissing(start_innov4);
  //   c36 = `is.object`(start_innov4);
  //   if c36 then L6() else L7(start_innov4);
  // L5():
  //   r109 = dyn base15(<lang `[`(start.innov, seq_len(n.start))>, <lang `[`(innov, `:`(1, n))>);
  //   goto L0(r109);
  // L1(dx15):
  //   innov1 = ld innov;
  //   innov2 = force? innov1;
  //   checkMissing(innov2);
  //   c37 = `is.object`(innov2);
  //   if c37 then L11() else L12(innov2);
  // L6():
  //   dr14 = tryDispatchBuiltin.1("[", start_innov4);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L8() else L7(dr14);
  // L7(start_innov6):
  //   sym16 = ldf seq_len;
  //   base16 = ldf seq_len in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L9() else L10();
  // L2(start_innov9, r112):
  //   __3 = ldf `[` in base;
  //   r114 = dyn __3(start_innov9, r112);
  //   goto L1(r114);
  // L3(dx17):
  //   c38 = ldf c in base;
  //   r117 = dyn c38(dx15, dx17);
  //   goto L0(r117);
  // L8():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L1(dx14);
  // L9():
  //   n_start13 = ld `n.start`;
  //   n_start14 = force? n_start13;
  //   checkMissing(n_start14);
  //   r113 = seq_len(n_start14);
  //   goto L2(start_innov6, r113);
  // L10():
  //   r111 = dyn base16(<sym n.start>);
  //   goto L2(start_innov6, r111);
  // L11():
  //   dr16 = tryDispatchBuiltin.1("[", innov2);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L13() else L12(dr16);
  // L12(innov4):
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   r115 = `:`(1, n6);
  //   __4 = ldf `[` in base;
  //   r116 = dyn __4(innov4, r115);
  //   goto L3(r116);
  // L13():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L3(dx16);
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_11, 0, NULL, CCP, RHO);
  // p26 = prom<V +>{
  //   n_start15 = ld `n.start`;
  //   n_start16 = force? n_start15;
  //   checkMissing(n_start16);
  //   r119 = `-`(1.0, n_start16);
  //   return r119;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_12, 0, NULL, CCP, RHO);
  // r121 = dyn ts[, start](p25, p26)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = Rsh_const(CCP, 85);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 2, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L197() else D55()
  // L197()
  goto L197_;

D50_:;
  // deopt 189 [c26, r99]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(189, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 198 [r107]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 206 [r121]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L32_:;
  // r77 = `!=`(p20, dx9)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args190);
  // c15 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args191);
  // if c15 then L155() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L155()
    goto L155_;
  } else {
  // L33()
    goto L33_;
  }

L152_:;
  // dr8 = tryDispatchBuiltin.1("[", ord3)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_ord3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args192);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc4 then L154() else L153(p16, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L154()
    goto L154_;
  } else {
  // L153(p16, dr8)
    Rsh_Fir_reg_p18_ = Rsh_Fir_reg_p16_;
    Rsh_Fir_reg_ord5_ = Rsh_Fir_reg_dr8_;
    goto L153_;
  }

L153_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r76 = dyn __(ord5, 1)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_ord5_;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L32(p18, r76)
  // L32(p18, r76)
  Rsh_Fir_reg_p20_ = Rsh_Fir_reg_p18_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r76_;
  goto L32_;

L189_:;
  // goto L46(c26, r99)
  // L46(c26, r99)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r99_;
  goto L46_;

L194_:;
  // goto L48()
  // L48()
  goto L48_;

L197_:;
  // st x = r121
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // sym17 = ldf length
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base17 = ldf length in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args195);
  // if guard17 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L33_:;
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // q4 = ld q
  Rsh_Fir_reg_q4_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L159() else D40()
  // L159()
  goto L159_;

L49_:;
  // c40 = `as.logical`(r123)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args196);
  // if c40 then L206() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L206()
    goto L206_;
  } else {
  // L50()
    goto L50_;
  }

L154_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // goto L32(p16, dx8)
  // L32(p16, dx8)
  Rsh_Fir_reg_p20_ = Rsh_Fir_reg_p16_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L32_;

L155_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L156() else D38()
  // L156()
  goto L156_;

L198_:;
  // model19 = ld model
  Rsh_Fir_reg_model19_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L200() else D56()
  // L200()
  goto L200_;

L199_:;
  // r122 = dyn base17(<lang `$`(model, ma)>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L49(r122)
  // L49(r122)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r122_;
  goto L49_;

D38_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 143 [q4]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 210 [model19]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_model19_;
  Rsh_Fir_deopt(210, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L53()
  // L53()
  goto L53_;

L53_:;
  // sym20 = ldf length
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base20 = ldf length in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard20 then L220() else L221()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L220()
    goto L220_;
  } else {
  // L221()
    goto L221_;
  }

L156_:;
  // r78 = dyn stop5("inconsistent specification of 'ar' order")
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L157() else D39()
  // L157()
  goto L157_;

L159_:;
  // q5 = force? q4
  Rsh_Fir_reg_q5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q4_);
  // checkMissing(q5)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_q5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // ord6 = ld ord
  Rsh_Fir_reg_ord6_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L160() else D41()
  // L160()
  goto L160_;

L200_:;
  // model20 = force? model19
  Rsh_Fir_reg_model20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model19_);
  // checkMissing(model20)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_model20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(model20)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_model20_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args203);
  // if c39 then L202() else L203(model20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L202()
    goto L202_;
  } else {
  // L203(model20)
    Rsh_Fir_reg_model22_ = Rsh_Fir_reg_model20_;
    goto L203_;
  }

L206_:;
  // filter = ldf filter
  Rsh_Fir_reg_filter = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // check L207() else D58()
  // L207()
  goto L207_;

D39_:;
  // deopt 140 [r78]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 144 [q5, ord6]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_ord6_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 216 []
  Rsh_Fir_deopt(216, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // c46 = `as.logical`(r158)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args204);
  // if c46 then L228() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L228()
    goto L228_;
  } else {
  // L55()
    goto L55_;
  }

L157_:;
  // goto L34()
  // L34()
  goto L34_;

L160_:;
  // ord7 = force? ord6
  Rsh_Fir_reg_ord7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord6_);
  // checkMissing(ord7)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_ord7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(ord7)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_ord7_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args206);
  // if c16 then L161() else L162(q5, ord7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L161()
    goto L161_;
  } else {
  // L162(q5, ord7)
    Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q5_;
    Rsh_Fir_reg_ord9_ = Rsh_Fir_reg_ord7_;
    goto L162_;
  }

L201_:;
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r125 = dyn length4(dx19)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L205() else D57()
  // L205()
  goto L205_;

L202_:;
  // dr18 = tryDispatchBuiltin.1("$", model20)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_model20_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args208);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if dc9 then L204() else L203(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L204()
    goto L204_;
  } else {
  // L203(dr18)
    Rsh_Fir_reg_model22_ = Rsh_Fir_reg_dr18_;
    goto L203_;
  }

L203_:;
  // r124 = `$`(model22, <sym ma>)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_model22_;
  Rsh_Fir_array_args210[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args210);
  // goto L201(r124)
  // L201(r124)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r124_;
  goto L201_;

L207_:;
  // p27 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_13, 0, NULL, CCP, RHO);
  // p28 = prom<V +>{
  //   sym18 = ldf c;
  //   base18 = ldf c in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L1() else L2();
  // L0(r128):
  //   return r128;
  // L1():
  //   model23 = ld model;
  //   model24 = force? model23;
  //   checkMissing(model24);
  //   c41 = `is.object`(model24);
  //   if c41 then L4() else L5(model24);
  // L2():
  //   r127 = dyn base18(1.0, <lang `$`(model, ma)>);
  //   goto L0(r127);
  // L3(dx21):
  //   c42 = ldf c in base;
  //   r130 = dyn c42(1.0, dx21);
  //   goto L0(r130);
  // L4():
  //   dr20 = tryDispatchBuiltin.1("$", model24);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L6() else L5(dr20);
  // L5(model26):
  //   r129 = `$`(model26, <sym ma>);
  //   goto L3(r129);
  // L6():
  //   dx20 = getTryDispatchBuiltinValue(dr20);
  //   goto L3(dx20);
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_14, 0, NULL, CCP, RHO);
  // r132 = dyn filter[, , sides](p27, p28, 1)
  SEXP Rsh_Fir_array_args221[3];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_p27_;
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args221[2] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names71[3];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = Rsh_const(CCP, 89);
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_filter, 3, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L208() else D59()
  // L208()
  goto L208_;

L220_:;
  // model31 = ld model
  Rsh_Fir_reg_model31_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L222() else D61()
  // L222()
  goto L222_;

L221_:;
  // r157 = dyn base20(<lang `$`(model, ar)>)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L54(r157)
  // L54(r157)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L54_;

D57_:;
  // deopt 214 [r125]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 221 [r132]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(221, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 237 [model31]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_model31_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L35_:;
  // r81 = `!=`(q9, dx11)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_q9_;
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args223);
  // c17 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args224);
  // if c17 then L164() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L164()
    goto L164_;
  } else {
  // L36()
    goto L36_;
  }

L55_:;
  // goto L56()
  // L56()
  goto L56_;

L56_:;
  // n_start17 = ld `n.start`
  Rsh_Fir_reg_n_start17_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L232() else D65()
  // L232()
  goto L232_;

L161_:;
  // dr10 = tryDispatchBuiltin.1("[", ord7)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_ord7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args225);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc5 then L163() else L162(q5, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L163()
    goto L163_;
  } else {
  // L162(q5, dr10)
    Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q5_;
    Rsh_Fir_reg_ord9_ = Rsh_Fir_reg_dr10_;
    goto L162_;
  }

L162_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r80 = dyn __1(ord9, 3)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_ord9_;
  Rsh_Fir_array_args227[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L35(q7, r80)
  // L35(q7, r80)
  Rsh_Fir_reg_q9_ = Rsh_Fir_reg_q7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r80_;
  goto L35_;

L204_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // goto L201(dx18)
  // L201(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L201_;

L205_:;
  // goto L49(r125)
  // L49(r125)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r125_;
  goto L49_;

L208_:;
  // st x = r132
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r132_, RHO);
  (void)(Rsh_Fir_reg_r132_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // c43 = `is.object`(l)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args229);
  // if c43 then L209() else L210(0.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L209()
    goto L209_;
  } else {
  // L210(0.0, l)
    Rsh_Fir_reg_r134_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L210_;
  }

L222_:;
  // model32 = force? model31
  Rsh_Fir_reg_model32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model31_);
  // checkMissing(model32)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_model32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(model32)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_model32_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args231);
  // if c45 then L224() else L225(model32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L224()
    goto L224_;
  } else {
  // L225(model32)
    Rsh_Fir_reg_model34_ = Rsh_Fir_reg_model32_;
    goto L225_;
  }

L228_:;
  // filter1 = ldf filter
  Rsh_Fir_reg_filter1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // check L229() else D63()
  // L229()
  goto L229_;

D63_:;
  // deopt 243 []
  Rsh_Fir_deopt(243, 0, NULL, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 252 [n_start17]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_n_start17_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L37()
  // L37()
  goto L37_;

L37_:;
  // ord10 = ld ord
  Rsh_Fir_reg_ord10_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L168() else D44()
  // L168()
  goto L168_;

L51_:;
  // st x = dx23
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L53()
  // L53()
  goto L53_;

L163_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L35(q5, dx10)
  // L35(q5, dx10)
  Rsh_Fir_reg_q9_ = Rsh_Fir_reg_q5_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L35_;

L164_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L165() else D42()
  // L165()
  goto L165_;

L209_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l, 0.0)
  SEXP Rsh_Fir_array_args233[3];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args233[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args233[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args233);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // if dc11 then L211() else L210(0.0, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L211()
    goto L211_;
  } else {
  // L210(0.0, dr22)
    Rsh_Fir_reg_r134_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr22_;
    goto L210_;
  }

L210_:;
  // sym19 = ldf seq_along
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // base19 = ldf seq_along in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args235);
  // if guard19 then L212() else L213()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L212()
    goto L212_;
  } else {
  // L213()
    goto L213_;
  }

L223_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r160 = dyn length5(dx27)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L227() else D62()
  // L227()
  goto L227_;

L224_:;
  // dr26 = tryDispatchBuiltin.1("$", model32)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_model32_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args237);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // if dc13 then L226() else L225(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L226()
    goto L226_;
  } else {
  // L225(dr26)
    Rsh_Fir_reg_model34_ = Rsh_Fir_reg_dr26_;
    goto L225_;
  }

L225_:;
  // r159 = `$`(model34, <sym ar>)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_model34_;
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args239);
  // goto L223(r159)
  // L223(r159)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r159_;
  goto L223_;

L229_:;
  // p29 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_15, 0, NULL, CCP, RHO);
  // p30 = prom<V +>{
  //   model35 = ld model;
  //   model36 = force? model35;
  //   checkMissing(model36);
  //   c47 = `is.object`(model36);
  //   if c47 then L1() else L2(model36);
  // L0(dx29):
  //   return dx29;
  // L1():
  //   dr28 = tryDispatchBuiltin.1("$", model36);
  //   dc14 = getTryDispatchBuiltinDispatched(dr28);
  //   if dc14 then L3() else L2(dr28);
  // L2(model38):
  //   r162 = `$`(model38, <sym ar>);
  //   goto L0(r162);
  // L3():
  //   dx28 = getTryDispatchBuiltinValue(dr28);
  //   goto L0(dx28);
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_16, 0, NULL, CCP, RHO);
  // r164 = dyn filter1[, , method](p29, p30, "recursive")
  SEXP Rsh_Fir_array_args247[3];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_p30_;
  Rsh_Fir_array_args247[2] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names75[3];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_array_arg_names75[2] = Rsh_const(CCP, 93);
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_filter1_, 3, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L230() else D64()
  // L230()
  goto L230_;

L232_:;
  // n_start18 = force? n_start17
  Rsh_Fir_reg_n_start18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start17_);
  // checkMissing(n_start18)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_n_start18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // r166 = `>`(n_start18, 0.0)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_n_start18_;
  Rsh_Fir_array_args249[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args249);
  // c48 = `as.logical`(r166)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args250);
  // if c48 then L233() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L233()
    goto L233_;
  } else {
  // L57()
    goto L57_;
  }

D42_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 156 [ord10]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_ord10_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 241 [r160]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 248 [r164]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L52_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // r155 = dyn ___(l5, r143, r144)
  SEXP Rsh_Fir_array_args251[3];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_r143_;
  Rsh_Fir_array_args251[2] = Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_array_arg_names76[3];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L51(r142, r155)
  // L51(r142, r155)
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r142_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r155_;
  goto L51_;

L57_:;
  // goto L60()
  // L60()
  goto L60_;

L60_:;
  // d7 = ld d
  Rsh_Fir_reg_d7_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L242() else D68()
  // L242()
  goto L242_;

L165_:;
  // r82 = dyn stop6("inconsistent specification of 'ma' order")
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 1, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L166() else D43()
  // L166()
  goto L166_;

L168_:;
  // ord11 = force? ord10
  Rsh_Fir_reg_ord11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord10_);
  // checkMissing(ord11)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_ord11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(ord11)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_ord11_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args254);
  // if c18 then L169() else L170(ord11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L169()
    goto L169_;
  } else {
  // L170(ord11)
    Rsh_Fir_reg_ord13_ = Rsh_Fir_reg_ord11_;
    goto L170_;
  }

L211_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // goto L51(0.0, dx22)
  // L51(0.0, dx22)
  Rsh_Fir_reg_r136_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L51_;

L212_:;
  // model27 = ld model
  Rsh_Fir_reg_model27_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L214() else D60()
  // L214()
  goto L214_;

L213_:;
  // r141 = dyn base19(<lang `$`(model, ma)>)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args256, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L52(r134, l2, 0.0, r141)
  // L52(r134, l2, 0.0, r141)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r143_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r141_;
  goto L52_;

L226_:;
  // dx26 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // goto L223(dx26)
  // L223(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L223_;

L227_:;
  // goto L54(r160)
  // L54(r160)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r160_;
  goto L54_;

L230_:;
  // st x = r164
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r164_, RHO);
  (void)(Rsh_Fir_reg_r164_);
  // goto L56()
  // L56()
  goto L56_;

L233_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L234() else D66()
  // L234()
  goto L234_;

D43_:;
  // deopt 153 [r82]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 227 [r134, l2, 0.0, model27]
  SEXP Rsh_Fir_array_deopt_stack55[4];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_model27_;
  Rsh_Fir_deopt(227, 4, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 256 [x4]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 267 [d7]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L38_:;
  // st d = dx13
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L172() else D45()
  // L172()
  goto L172_;

L166_:;
  // goto L37()
  // L37()
  goto L37_;

L169_:;
  // dr12 = tryDispatchBuiltin.1("[", ord11)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_ord11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args258);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if dc6 then L171() else L170(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L171()
    goto L171_;
  } else {
  // L170(dr12)
    Rsh_Fir_reg_ord13_ = Rsh_Fir_reg_dr12_;
    goto L170_;
  }

L170_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r84 = dyn __2(ord13, 2)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_ord13_;
  Rsh_Fir_array_args260[1] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args260, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L38(r84)
  // L38(r84)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r84_;
  goto L38_;

L214_:;
  // model28 = force? model27
  Rsh_Fir_reg_model28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model27_);
  // checkMissing(model28)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_model28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(model28)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_model28_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args262);
  // if c44 then L216() else L217(r134, l2, 0.0, model28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L216()
    goto L216_;
  } else {
  // L217(r134, l2, 0.0, model28)
    Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r148_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_model30_ = Rsh_Fir_reg_model28_;
    goto L217_;
  }

L234_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(x5)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args264);
  // if c49 then L235() else L236(x5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L235()
    goto L235_;
  } else {
  // L236(x5)
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x5_;
    goto L236_;
  }

L242_:;
  // d8 = force? d7
  Rsh_Fir_reg_d8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d7_);
  // checkMissing(d8)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_d8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty()));
  // r172 = `>`(d8, 0.0)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_d8_;
  Rsh_Fir_array_args266[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args266);
  // c50 = `as.logical`(r172)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_r172_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args267);
  // if c50 then L243() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L243()
    goto L243_;
  } else {
  // L61()
    goto L61_;
  }

D45_:;
  // deopt 162 [d]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L58_:;
  // st x = dx31
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L60()
  // L60()
  goto L60_;

L61_:;
  // goto L62()
  // L62()
  goto L62_;

L62_:;
  // as_ts = ldf `as.ts`
  Rsh_Fir_reg_as_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // check L247() else D71()
  // L247()
  goto L247_;

L171_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // goto L38(dx12)
  // L38(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L38_;

L172_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // sym12 = ldf round
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 98), RHO);
  // base12 = ldf round in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 98), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args270[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args270);
  // if guard12 then L173() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L173()
    goto L173_;
  } else {
  // L174()
    goto L174_;
  }

L215_:;
  // r154 = seq_along(dx25)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args271);
  // goto L52(r151, l9, r152, r154)
  // L52(r151, l9, r152, r154)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r151_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r152_;
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r154_;
  goto L52_;

L216_:;
  // dr24 = tryDispatchBuiltin.1("$", model28)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_model28_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args272);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if dc12 then L218() else L217(r134, l2, 0.0, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L218()
    goto L218_;
  } else {
  // L217(r134, l2, 0.0, dr24)
    Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r148_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_model30_ = Rsh_Fir_reg_dr24_;
    goto L217_;
  }

L217_:;
  // r153 = `$`(model30, <sym ma>)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_model30_;
  Rsh_Fir_array_args274[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args274);
  // goto L215(r147, l7, r148, r153)
  // L215(r147, l7, r148, r153)
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r148_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r153_;
  goto L215_;

L235_:;
  // dr30 = tryDispatchBuiltin.1("[", x5)
  SEXP Rsh_Fir_array_args275[2];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args275[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args275);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if dc15 then L237() else L236(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L237()
    goto L237_;
  } else {
  // L236(dr30)
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dr30_;
    goto L236_;
  }

L236_:;
  // sym21 = ldf seq_len
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // base21 = ldf seq_len in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args277[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args277);
  // if guard21 then L238() else L239()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L238()
    goto L238_;
  } else {
  // L239()
    goto L239_;
  }

L243_:;
  // diffinv = ldf diffinv
  Rsh_Fir_reg_diffinv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L244() else D69()
  // L244()
  goto L244_;

D69_:;
  // deopt 272 []
  Rsh_Fir_deopt(272, 0, NULL, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 281 []
  Rsh_Fir_deopt(281, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r88 = `!=`(d4, r86)
  SEXP Rsh_Fir_array_args278[2];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_args278[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args278);
  // c19 = `as.logical`(r88)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args279);
  // if c19 then L40(c19) else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L40(c19)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c19_;
    goto L40_;
  } else {
  // L175()
    goto L175_;
  }

L59_:;
  // r170 = `-`(<missing>, r168)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_r168_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args280);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r171 = dyn __5(x10, r170)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L58(r171)
  // L58(r171)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r171_;
  goto L58_;

L173_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 98), RHO);
  // r87 = dyn round(<sym d>)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args282, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L39(d1, r87)
  // L39(d1, r87)
  Rsh_Fir_reg_d4_ = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L39_;

L174_:;
  // r85 = dyn base12(<sym d>)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L39(d1, r85)
  // L39(d1, r85)
  Rsh_Fir_reg_d4_ = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L39_;

L218_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty());
  // goto L215(r134, l2, 0.0, dx24)
  // L215(r134, l2, 0.0, dx24)
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r152_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L215_;

L237_:;
  // dx30 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty());
  // goto L58(dx30)
  // L58(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L58_;

L238_:;
  // n_start19 = ld `n.start`
  Rsh_Fir_reg_n_start19_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L240() else D67()
  // L240()
  goto L240_;

L239_:;
  // r167 = dyn base21(<sym n.start>)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L59(x7, r167)
  // L59(x7, r167)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r167_;
  goto L59_;

L244_:;
  // p31 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p31_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_17, 0, NULL, CCP, RHO);
  // p32 = prom<V +>{
  //   d9 = ld d;
  //   d10 = force? d9;
  //   checkMissing(d10);
  //   return d10;
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_18, 0, NULL, CCP, RHO);
  // r175 = dyn diffinv[, differences](p31, p32)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_p31_;
  Rsh_Fir_array_args289[1] = Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = Rsh_const(CCP, 100);
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diffinv, 2, Rsh_Fir_array_args289, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L245() else D70()
  // L245()
  goto L245_;

L247_:;
  // p33 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_19, 0, NULL, CCP, RHO);
  // r178 = dyn as_ts(p33)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_p33_;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r178_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_ts, 1, Rsh_Fir_array_args291, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L248() else D72()
  // L248()
  goto L248_;

D67_:;
  // deopt 259 [x7, n_start19]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_n_start19_;
  Rsh_Fir_deopt(259, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 276 [r175]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(276, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 283 [r178]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r178_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L40_:;
  // c25 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args292);
  // if c25 then L178() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L178()
    goto L178_;
  } else {
  // L41()
    goto L41_;
  }

L175_:;
  // d5 = ld d
  Rsh_Fir_reg_d5_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L176() else D46()
  // L176()
  goto L176_;

L240_:;
  // n_start20 = force? n_start19
  Rsh_Fir_reg_n_start20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start19_);
  // checkMissing(n_start20)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_n_start20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty()));
  // r169 = seq_len(n_start20)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_n_start20_;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args294);
  // goto L59(x7, r169)
  // L59(x7, r169)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r169_;
  goto L59_;

L245_:;
  // st x = r175
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r175_, RHO);
  (void)(Rsh_Fir_reg_r175_);
  // goto L62()
  // L62()
  goto L62_;

L248_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r178
  return Rsh_Fir_reg_r178_;

D46_:;
  // deopt 167 [c19, d5]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_deopt(167, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L42(NULL)
  // L42(NULL)
  Rsh_Fir_reg_r91_ = Rsh_const(CCP, 54);
  goto L42_;

L42_:;
  // goto L43()
  // L43()
  goto L43_;

L176_:;
  // d6 = force? d5
  Rsh_Fir_reg_d6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d5_);
  // checkMissing(d6)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_d6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // r89 = `<`(d6, 0.0)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_d6_;
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args296);
  // c22 = `as.logical`(r89)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args297);
  // c23 = `||`(c19, c22)
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args298[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args298);
  // goto L40(c23)
  // L40(c23)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c23_;
  goto L40_;

L178_:;
  // stop7 = ldf stop
  Rsh_Fir_reg_stop7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L179() else D47()
  // L179()
  goto L179_;

D47_:;
  // deopt 173 []
  Rsh_Fir_deopt(173, 0, NULL, CCP, RHO);
  return R_NilValue;

L179_:;
  // r90 = dyn stop7("number of differences must be a positive integer")
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop7_, 1, Rsh_Fir_array_args299, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L180() else D48()
  // L180()
  goto L180_;

D48_:;
  // deopt 175 [r90]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L180_:;
  // goto L42(r90)
  // L42(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L42_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_rnorm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // rnorm = ld rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // rnorm1 = force? rnorm
  Rsh_Fir_reg_rnorm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rnorm);
  // checkMissing(rnorm1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_rnorm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return rnorm1
  return Rsh_Fir_reg_rnorm1_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rand_gen1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // rand_gen1 = ldf `rand.gen`
  Rsh_Fir_reg_rand_gen1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_2, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // r2 = dyn rand_gen1[, `...`](p1, ddd1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rand_gen1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rand_gen2_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // rand_gen2 = ldf `rand.gen`
  Rsh_Fir_reg_rand_gen2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p3 = prom<V +>{
  //   n_start1 = ld `n.start`;
  //   n_start2 = force? n_start1;
  //   checkMissing(n_start2);
  //   return n_start2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_4, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // r5 = dyn rand_gen2[, `...`](p3, ddd2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rand_gen2_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names24, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_1;
}
SEXP Rsh_Fir_user_promise_inner3148629483_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_start1_;
  SEXP Rsh_Fir_reg_n_start2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // n_start1 = ld `n.start`
  Rsh_Fir_reg_n_start1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // n_start2 = force? n_start1
  Rsh_Fir_reg_n_start2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start1_);
  // checkMissing(n_start2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_n_start2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return n_start2
  return Rsh_Fir_reg_n_start2_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r46 = `>`(p10, 0.0)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args109);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_1;
  SEXP Rsh_Fir_reg_base8_1;
  SEXP Rsh_Fir_reg_guard8_1;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym9_1;
  SEXP Rsh_Fir_reg_base9_1;
  SEXP Rsh_Fir_reg_guard9_1;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_minroots2_;
  SEXP Rsh_Fir_reg_minroots3_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf ceiling
  Rsh_Fir_reg_sym8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base8 = ldf ceiling in base
  Rsh_Fir_reg_base8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym8_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base8_1;
  Rsh_Fir_reg_guard8_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard8 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r49
  return Rsh_Fir_reg_r49_;

L2_:;
  // sym9 = ldf log
  Rsh_Fir_reg_sym9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base9 = ldf log in base
  Rsh_Fir_reg_base9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym9_1;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base9_1;
  Rsh_Fir_reg_guard9_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard9 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r48 = dyn base8(<lang `/`(6.0, log(minroots))>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_1, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L0_;

L1_:;
  // r56 = `/`(r53, r54)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args113);
  // r57 = ceiling(r56)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(168, RHO, 1, Rsh_Fir_array_args114);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r57_;
  goto L0_;

L4_:;
  // minroots2 = ld minroots
  Rsh_Fir_reg_minroots2_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // minroots3 = force? minroots2
  Rsh_Fir_reg_minroots3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_minroots2_);
  // checkMissing(minroots3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_minroots3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // r55 = log(minroots3, 2.718281828459045)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_minroots3_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args116);
  // goto L1(6.0, r55)
  // L1(6.0, r55)
  Rsh_Fir_reg_r53_ = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L1_;

L5_:;
  // r52 = dyn base9(<sym minroots>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_1, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L1(6.0, r52)
  // L1(6.0, r52)
  Rsh_Fir_reg_r53_ = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r105_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // p22 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p21 = prom<V +>{
  //     n_start9 = ld `n.start`;
  //     n_start10 = force? n_start9;
  //     checkMissing(n_start10);
  //     return n_start10;
  //   };
  //   r102 = dyn ngettext(p21, "'start.innov' is too short: need %d point", "'start.innov' is too short: need %d points");
  //   return r102;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_8, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   n_start11 = ld `n.start`;
  //   n_start12 = force? n_start11;
  //   checkMissing(n_start12);
  //   return n_start12;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_10, 0, NULL, CCP, RHO);
  // r105 = dyn sprintf(p22, p23)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names57, CCP, RHO);
  // return r105
  return Rsh_Fir_reg_r105_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r102_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // p21 = prom<V +>{
  //   n_start9 = ld `n.start`;
  //   n_start10 = force? n_start9;
  //   checkMissing(n_start10);
  //   return n_start10;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3148629483_9, 0, NULL, CCP, RHO);
  // r102 = dyn ngettext(p21, "'start.innov' is too short: need %d point", "'start.innov' is too short: need %d points")
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args162[2] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names56, CCP, RHO);
  // return r102
  return Rsh_Fir_reg_r102_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_start9_;
  SEXP Rsh_Fir_reg_n_start10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // n_start9 = ld `n.start`
  Rsh_Fir_reg_n_start9_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // n_start10 = force? n_start9
  Rsh_Fir_reg_n_start10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start9_);
  // checkMissing(n_start10)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_n_start10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // return n_start10
  return Rsh_Fir_reg_n_start10_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_start11_;
  SEXP Rsh_Fir_reg_n_start12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // n_start11 = ld `n.start`
  Rsh_Fir_reg_n_start11_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // n_start12 = force? n_start11
  Rsh_Fir_reg_n_start12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start11_);
  // checkMissing(n_start12)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_n_start12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // return n_start12
  return Rsh_Fir_reg_n_start12_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_start_innov3_;
  SEXP Rsh_Fir_reg_start_innov4_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_start_innov6_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_start_innov9_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_n_start13_;
  SEXP Rsh_Fir_reg_n_start14_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_innov1_;
  SEXP Rsh_Fir_reg_innov2_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_innov4_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_r117_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard15 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // return r110
  return Rsh_Fir_reg_r110_;

L4_:;
  // start_innov3 = ld `start.innov`
  Rsh_Fir_reg_start_innov3_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // start_innov4 = force? start_innov3
  Rsh_Fir_reg_start_innov4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start_innov3_);
  // checkMissing(start_innov4)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_start_innov4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(start_innov4)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_start_innov4_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args168);
  // if c36 then L6() else L7(start_innov4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L6()
    goto L6_;
  } else {
  // L7(start_innov4)
    Rsh_Fir_reg_start_innov6_ = Rsh_Fir_reg_start_innov4_;
    goto L7_;
  }

L5_:;
  // r109 = dyn base15(<lang `[`(start.innov, seq_len(n.start))>, <lang `[`(innov, `:`(1, n))>)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L0_;

L1_:;
  // innov1 = ld innov
  Rsh_Fir_reg_innov1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // innov2 = force? innov1
  Rsh_Fir_reg_innov2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_innov1_);
  // checkMissing(innov2)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_innov2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(innov2)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_innov2_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args171);
  // if c37 then L11() else L12(innov2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L11()
    goto L11_;
  } else {
  // L12(innov2)
    Rsh_Fir_reg_innov4_ = Rsh_Fir_reg_innov2_;
    goto L12_;
  }

L6_:;
  // dr14 = tryDispatchBuiltin.1("[", start_innov4)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_start_innov4_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args172);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if dc7 then L8() else L7(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr14)
    Rsh_Fir_reg_start_innov6_ = Rsh_Fir_reg_dr14_;
    goto L7_;
  }

L7_:;
  // sym16 = ldf seq_len
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // base16 = ldf seq_len in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args174);
  // if guard16 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r114 = dyn __3(start_innov9, r112)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_start_innov9_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L1(r114)
  // L1(r114)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r114_;
  goto L1_;

L3_:;
  // c38 = ldf c in base
  Rsh_Fir_reg_c38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r117 = dyn c38(dx15, dx17)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c38_, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L0(r117)
  // L0(r117)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r117_;
  goto L0_;

L8_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L1(dx14)
  // L1(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L1_;

L9_:;
  // n_start13 = ld `n.start`
  Rsh_Fir_reg_n_start13_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // n_start14 = force? n_start13
  Rsh_Fir_reg_n_start14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start13_);
  // checkMissing(n_start14)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_n_start14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // r113 = seq_len(n_start14)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_n_start14_;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args179);
  // goto L2(start_innov6, r113)
  // L2(start_innov6, r113)
  Rsh_Fir_reg_start_innov9_ = Rsh_Fir_reg_start_innov6_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r113_;
  goto L2_;

L10_:;
  // r111 = dyn base16(<sym n.start>)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L2(start_innov6, r111)
  // L2(start_innov6, r111)
  Rsh_Fir_reg_start_innov9_ = Rsh_Fir_reg_start_innov6_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r111_;
  goto L2_;

L11_:;
  // dr16 = tryDispatchBuiltin.1("[", innov2)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_innov2_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args181);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if dc8 then L13() else L12(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr16)
    Rsh_Fir_reg_innov4_ = Rsh_Fir_reg_dr16_;
    goto L12_;
  }

L12_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // r115 = `:`(1, n6)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args184);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r116 = dyn __4(innov4, r115)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_innov4_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L3(r116)
  // L3(r116)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r116_;
  goto L3_;

L13_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L3(dx16)
  // L3(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_start15_;
  SEXP Rsh_Fir_reg_n_start16_;
  SEXP Rsh_Fir_reg_r119_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // n_start15 = ld `n.start`
  Rsh_Fir_reg_n_start15_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // n_start16 = force? n_start15
  Rsh_Fir_reg_n_start16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_start15_);
  // checkMissing(n_start16)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_n_start16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // r119 = `-`(1.0, n_start16)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_n_start16_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args188);
  // return r119
  return Rsh_Fir_reg_r119_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_model23_;
  SEXP Rsh_Fir_reg_model24_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_model26_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_r130_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // sym18 = ldf c
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base18 = ldf c in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args212);
  // if guard18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r128
  return Rsh_Fir_reg_r128_;

L1_:;
  // model23 = ld model
  Rsh_Fir_reg_model23_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // model24 = force? model23
  Rsh_Fir_reg_model24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model23_);
  // checkMissing(model24)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_model24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // c41 = `is.object`(model24)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_model24_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args214);
  // if c41 then L4() else L5(model24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L4()
    goto L4_;
  } else {
  // L5(model24)
    Rsh_Fir_reg_model26_ = Rsh_Fir_reg_model24_;
    goto L5_;
  }

L2_:;
  // r127 = dyn base18(1.0, <lang `$`(model, ma)>)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args215[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L0(r127)
  // L0(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L0_;

L3_:;
  // c42 = ldf c in base
  Rsh_Fir_reg_c42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r130 = dyn c42(1.0, dx21)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c42_, 2, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r130_;
  goto L0_;

L4_:;
  // dr20 = tryDispatchBuiltin.1("$", model24)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_model24_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args217);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc10 then L6() else L5(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr20)
    Rsh_Fir_reg_model26_ = Rsh_Fir_reg_dr20_;
    goto L5_;
  }

L5_:;
  // r129 = `$`(model26, <sym ma>)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_model26_;
  Rsh_Fir_array_args219[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args219);
  // goto L3(r129)
  // L3(r129)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r129_;
  goto L3_;

L6_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // goto L3(dx20)
  // L3(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_model35_;
  SEXP Rsh_Fir_reg_model36_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_model38_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_r162_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // model35 = ld model
  Rsh_Fir_reg_model35_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // model36 = force? model35
  Rsh_Fir_reg_model36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model35_);
  // checkMissing(model36)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_model36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(model36)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_model36_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args242);
  // if c47 then L1() else L2(model36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L1()
    goto L1_;
  } else {
  // L2(model36)
    Rsh_Fir_reg_model38_ = Rsh_Fir_reg_model36_;
    goto L2_;
  }

L0_:;
  // return dx29
  return Rsh_Fir_reg_dx29_;

L1_:;
  // dr28 = tryDispatchBuiltin.1("$", model36)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_model36_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args243);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // if dc14 then L3() else L2(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr28)
    Rsh_Fir_reg_model38_ = Rsh_Fir_reg_dr28_;
    goto L2_;
  }

L2_:;
  // r162 = `$`(model38, <sym ar>)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_model38_;
  Rsh_Fir_array_args245[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args245);
  // goto L0(r162)
  // L0(r162)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r162_;
  goto L0_;

L3_:;
  // dx28 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // goto L0(dx28)
  // L0(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_d10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // d9 = ld d
  Rsh_Fir_reg_d9_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // d10 = force? d9
  Rsh_Fir_reg_d10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d9_);
  // checkMissing(d10)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_d10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty()));
  // return d10
  return Rsh_Fir_reg_d10_;
}
SEXP Rsh_Fir_user_promise_inner3148629483_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3148629483/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_function_inner2942660460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2942660460 dynamic dispatch ([n, `...`])

  return Rsh_Fir_user_version_inner2942660460_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2942660460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2942660460 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2942660460/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_rt;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_2;

  // Bind parameters
  Rsh_Fir_reg_n1 = PARAMS[0];
  Rsh_Fir_reg_ddd1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_n1, RHO);
  (void)(Rsh_Fir_reg_n1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // sym = ldf sqrt
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf sqrt in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args300);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // rt = ldf rt
  Rsh_Fir_reg_rt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 102), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // r2 = sqrt(0.1796)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args301);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(0.1796)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2942660460_, 0, NULL, CCP, RHO);
  // r4 = dyn rt[, df](p, 5.0)
  SEXP Rsh_Fir_array_args304[2];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args304[1] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = Rsh_const(CCP, 104);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rt, 2, Rsh_Fir_array_args304, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 8 [r1, r4]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L4_:;
  // r5 = `*`(r1, r4)
  SEXP Rsh_Fir_array_args305[2];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args305[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args305);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_2;
}
SEXP Rsh_Fir_user_promise_inner2942660460_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1_1;
  SEXP Rsh_Fir_reg_n2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2942660460/0: expected 0, got %d", NCAPTURES);

  // n1 = ld n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_1);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_n2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
