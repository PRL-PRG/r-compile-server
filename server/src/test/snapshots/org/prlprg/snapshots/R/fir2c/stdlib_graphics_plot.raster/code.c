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
SEXP Rsh_Fir_user_function_inner1772369318_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1772369318_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1772369318_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1772369318_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_as_raster;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_plot3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_plot4_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_box;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_title;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_plot5_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_plot6_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r43_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1772369318
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1772369318_, RHO, CCP);
  // st `plot.raster` = r
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
  // as_raster = ldf `as.raster`
  Rsh_Fir_reg_as_raster = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
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
  // r1 = dyn base(<sym grDevices>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
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
  //   grDevices = ld grDevices;
  //   grDevices1 = force? grDevices;
  //   checkMissing(grDevices1);
  //   return grDevices1;
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
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c(0.5, 1.0, 0.5);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(0.5, 1.0, 0.5);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn as_raster(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raster, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
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
  // deopt 11 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // st r = r9
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   r10 = ld r;
  //   r11 = force? r10;
  //   checkMissing(r11);
  //   return r11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r13 = dyn plot(p2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 16 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p3 = prom<V +>{
  //   r14 = ld r;
  //   r15 = force? r14;
  //   checkMissing(r15);
  //   return r15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn plot1[, interpolate](p3, FALSE)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p4 = prom<V +>{
  //   r18 = ld r;
  //   r19 = force? r18;
  //   checkMissing(r19);
  //   return r19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r21 = dyn plot2[, asp](p4, NA_LGL)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 28 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p5 = prom<V +>{
  //   sym2 = ldf rep;
  //   base2 = ldf rep in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   rep = ldf rep in base;
  //   r24 = dyn rep(0.0, 4.0);
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base2(0.0, 4.0);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r26 = dyn par[mar](p5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 33 [r26]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // st op = r26
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // plot3 = ldf plot
  Rsh_Fir_reg_plot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p6 = prom<V +>{
  //   r27 = ld r;
  //   r28 = force? r27;
  //   checkMissing(r28);
  //   return r28;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r30 = dyn plot3[, asp](p6, NA_LGL)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot3_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 40 [r30]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p7 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r32 = dyn par1(p7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 44 [r32]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // plot4 = ldf plot
  Rsh_Fir_reg_plot4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p8 = prom<V +>{
  //   r33 = ld r;
  //   r34 = force? r33;
  //   checkMissing(r34);
  //   return r34;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r36 = dyn plot4[, asp](p8, NA_LGL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot4_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 50 [r36]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // box = ldf box
  Rsh_Fir_reg_box = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r37 = dyn box()
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_box, 0, NULL, NULL, CCP, RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 53 [r37]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // title = ldf title
  Rsh_Fir_reg_title = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // r38 = dyn title[main]("This is my raster")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_title, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L24() else D21()
  // L24()
  goto L24_;

D21_:;
  // deopt 58 [r38]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // plot5 = ldf plot
  Rsh_Fir_reg_plot5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L25() else D22()
  // L25()
  goto L25_;

D22_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r39 = dyn plot5(1.0)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot5_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L26() else D23()
  // L26()
  goto L26_;

D23_:;
  // deopt 62 [r39]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L26_:;
  // plot6 = ldf plot
  Rsh_Fir_reg_plot6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L27() else D24()
  // L27()
  goto L27_;

D24_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p9 = prom<V +>{
  //   r40 = ld r;
  //   r41 = force? r40;
  //   checkMissing(r41);
  //   return r41;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r43 = dyn plot6[, add](p9, TRUE)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot6_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L28() else D25()
  // L28()
  goto L28_;

D25_:;
  // deopt 68 [r43]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L28_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_grDevices;
  SEXP Rsh_Fir_reg_grDevices1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // grDevices = ld grDevices
  Rsh_Fir_reg_grDevices = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // grDevices1 = force? grDevices
  Rsh_Fir_reg_grDevices1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grDevices);
  // checkMissing(grDevices1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_grDevices1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return grDevices1
  return Rsh_Fir_reg_grDevices1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r7 = dyn c(0.5, 1.0, 0.5)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base1(0.5, 1.0, 0.5)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r10 = ld r
  Rsh_Fir_reg_r10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r11 = force? r10
  Rsh_Fir_reg_r11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r10_);
  // checkMissing(r11)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r14 = ld r
  Rsh_Fir_reg_r14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r15 = force? r14
  Rsh_Fir_reg_r15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r14_);
  // checkMissing(r15)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r18 = ld r
  Rsh_Fir_reg_r18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r19 = force? r18
  Rsh_Fir_reg_r19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r18_);
  // checkMissing(r19)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf rep
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf rep in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r24 = dyn rep(0.0, 4.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base2(0.0, 4.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r27 = ld r
  Rsh_Fir_reg_r27_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r28 = force? r27
  Rsh_Fir_reg_r28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r27_);
  // checkMissing(r28)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r33 = ld r
  Rsh_Fir_reg_r33_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r34 = force? r33
  Rsh_Fir_reg_r34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r33_);
  // checkMissing(r34)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r40 = ld r
  Rsh_Fir_reg_r40_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r41 = force? r40
  Rsh_Fir_reg_r41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r40_);
  // checkMissing(r41)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_function_inner1772369318_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1772369318 dynamic dispatch ([x, y, xlim, ylim, xaxs, yaxs, asp, add, `...`])

  return Rsh_Fir_user_version_inner1772369318_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1772369318_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1772369318 version 0 (*, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner1772369318/0: expected 9, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_xlim;
  SEXP Rsh_Fir_reg_ylim;
  SEXP Rsh_Fir_reg_xaxs;
  SEXP Rsh_Fir_reg_yaxs;
  SEXP Rsh_Fir_reg_asp;
  SEXP Rsh_Fir_reg_add;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_xlim_isMissing;
  SEXP Rsh_Fir_reg_xlim_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_ylim_isMissing;
  SEXP Rsh_Fir_reg_ylim_orDefault;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_xaxs_isMissing;
  SEXP Rsh_Fir_reg_xaxs_orDefault;
  SEXP Rsh_Fir_reg_yaxs_isMissing;
  SEXP Rsh_Fir_reg_yaxs_orDefault;
  SEXP Rsh_Fir_reg_asp_isMissing;
  SEXP Rsh_Fir_reg_asp_orDefault;
  SEXP Rsh_Fir_reg_add_isMissing;
  SEXP Rsh_Fir_reg_add_orDefault;
  SEXP Rsh_Fir_reg_add1_;
  SEXP Rsh_Fir_reg_add2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_plot_new;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_plot_window;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_rasterImage;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r28_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_xlim = PARAMS[2];
  Rsh_Fir_reg_ylim = PARAMS[3];
  Rsh_Fir_reg_xaxs = PARAMS[4];
  Rsh_Fir_reg_yaxs = PARAMS[5];
  Rsh_Fir_reg_asp = PARAMS[6];
  Rsh_Fir_reg_add = PARAMS[7];
  Rsh_Fir_reg_ddd = PARAMS[8];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // xlim_isMissing = missing.0(xlim)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_xlim;
  Rsh_Fir_reg_xlim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if xlim_isMissing then L0() else L1(xlim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlim_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(xlim)
    Rsh_Fir_reg_xlim_orDefault = Rsh_Fir_reg_xlim;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   ncol = ldf ncol;
  //   p = prom<V +>{
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     return x2;
  //   };
  //   r3 = dyn ncol(p);
  //   c = ldf c in base;
  //   r4 = dyn c(0.0, r3);
  //   goto L0(r4);
  // L2():
  //   r = dyn base(0.0, <lang ncol(x)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_xlim_orDefault = Rsh_Fir_reg_p1_1;
  goto L1_;

L1_:;
  // st xlim = xlim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_xlim_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlim_orDefault);
  // ylim_isMissing = missing.0(ylim)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ylim;
  Rsh_Fir_reg_ylim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if ylim_isMissing then L2() else L3(ylim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylim_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(ylim)
    Rsh_Fir_reg_ylim_orDefault = Rsh_Fir_reg_ylim;
    goto L3_;
  }

L2_:;
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   nrow = ldf nrow;
  //   p2 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   r9 = dyn nrow(p2);
  //   c1 = ldf c in base;
  //   r10 = dyn c1(0.0, r9);
  //   goto L0(r10);
  // L2():
  //   r6 = dyn base1(0.0, <lang nrow(x)>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_2, 0, NULL, CCP, RHO);
  // goto L3(p3)
  // L3(p3)
  Rsh_Fir_reg_ylim_orDefault = Rsh_Fir_reg_p3_1;
  goto L3_;

L3_:;
  // st ylim = ylim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_ylim_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylim_orDefault);
  // xaxs_isMissing = missing.0(xaxs)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_xaxs;
  Rsh_Fir_reg_xaxs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args40);
  // if xaxs_isMissing then L4("i") else L4(xaxs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xaxs_isMissing)) {
  // L4("i")
    Rsh_Fir_reg_xaxs_orDefault = Rsh_const(CCP, 33);
    goto L4_;
  } else {
  // L4(xaxs)
    Rsh_Fir_reg_xaxs_orDefault = Rsh_Fir_reg_xaxs;
    goto L4_;
  }

L4_:;
  // st xaxs = xaxs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_xaxs_orDefault, RHO);
  (void)(Rsh_Fir_reg_xaxs_orDefault);
  // yaxs_isMissing = missing.0(yaxs)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_yaxs;
  Rsh_Fir_reg_yaxs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args41);
  // if yaxs_isMissing then L5("i") else L5(yaxs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_yaxs_isMissing)) {
  // L5("i")
    Rsh_Fir_reg_yaxs_orDefault = Rsh_const(CCP, 33);
    goto L5_;
  } else {
  // L5(yaxs)
    Rsh_Fir_reg_yaxs_orDefault = Rsh_Fir_reg_yaxs;
    goto L5_;
  }

L5_:;
  // st yaxs = yaxs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_yaxs_orDefault, RHO);
  (void)(Rsh_Fir_reg_yaxs_orDefault);
  // asp_isMissing = missing.0(asp)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_asp;
  Rsh_Fir_reg_asp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args42);
  // if asp_isMissing then L6(1.0) else L6(asp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_asp_isMissing)) {
  // L6(1.0)
    Rsh_Fir_reg_asp_orDefault = Rsh_const(CCP, 6);
    goto L6_;
  } else {
  // L6(asp)
    Rsh_Fir_reg_asp_orDefault = Rsh_Fir_reg_asp;
    goto L6_;
  }

L6_:;
  // st asp = asp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_asp_orDefault, RHO);
  (void)(Rsh_Fir_reg_asp_orDefault);
  // add_isMissing = missing.0(add)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_add;
  Rsh_Fir_reg_add_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args43);
  // if add_isMissing then L7(FALSE) else L7(add)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_add_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_add_orDefault = Rsh_const(CCP, 9);
    goto L7_;
  } else {
  // L7(add)
    Rsh_Fir_reg_add_orDefault = Rsh_Fir_reg_add;
    goto L7_;
  }

L7_:;
  // st add = add_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_add_orDefault, RHO);
  (void)(Rsh_Fir_reg_add_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // add1 = ld add
  Rsh_Fir_reg_add1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

D0_:;
  // deopt 0 [add1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_add1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L10_:;
  // add2 = force? add1
  Rsh_Fir_reg_add2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_add1_);
  // checkMissing(add2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_add2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r12 = `!`(add2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_add2_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args45);
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c2 then L11() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L11()
    goto L11_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // rasterImage = ldf rasterImage
  Rsh_Fir_reg_rasterImage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L11_:;
  // plot_new = ldf `plot.new`
  Rsh_Fir_reg_plot_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r13 = dyn plot_new()
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot_new, 0, NULL, NULL, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L17_:;
  // p9 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_4, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   ncol1 = ldf ncol;
  //   p10 = prom<V +>{
  //     x7 = ld x;
  //     x8 = force? x7;
  //     checkMissing(x8);
  //     return x8;
  //   };
  //   r23 = dyn ncol1(p10);
  //   return r23;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_5, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   nrow1 = ldf nrow;
  //   p12 = prom<V +>{
  //     x9 = ld x;
  //     x10 = force? x9;
  //     checkMissing(x10);
  //     return x10;
  //   };
  //   r26 = dyn nrow1(p12);
  //   return r26;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_7, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // r28 = dyn rasterImage[, , , , , `...`](p9, 0.0, 0.0, p11, p13, ddd1)
  SEXP Rsh_Fir_array_args52[6];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args52[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args52[4] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args52[5] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names25[6];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rasterImage, 6, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D2_:;
  // deopt 5 [r13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 29 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L13_:;
  // plot_window = ldf `plot.window`
  Rsh_Fir_reg_plot_window = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_1;

D3_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   xlim1 = ld xlim;
  //   xlim2 = force? xlim1;
  //   checkMissing(xlim2);
  //   return xlim2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_9, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   ylim1 = ld ylim;
  //   ylim2 = force? ylim1;
  //   checkMissing(ylim2);
  //   return ylim2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_10, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   asp1 = ld asp;
  //   asp2 = force? asp1;
  //   checkMissing(asp2);
  //   return asp2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_11, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   xaxs1 = ld xaxs;
  //   xaxs2 = force? xaxs1;
  //   checkMissing(xaxs2);
  //   return xaxs2;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_12, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   yaxs1 = ld yaxs;
  //   yaxs2 = force? yaxs1;
  //   checkMissing(yaxs2);
  //   return yaxs2;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_13, 0, NULL, CCP, RHO);
  // r19 = dyn plot_window[xlim, ylim, asp, xaxs, yaxs](p4, p5, p6, p7, p8)
  SEXP Rsh_Fir_array_args58[5];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args58[3] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args58[4] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names26[3] = Rsh_const(CCP, 34);
  Rsh_Fir_array_arg_names26[4] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot_window, 5, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 18 [r19]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L9()
  // L9()
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r4_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_1, 0, NULL, CCP, RHO);
  // r3 = dyn ncol(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names17, CCP, RHO);
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn c(0.0, r3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L2_:;
  // r = dyn base(0.0, <lang ncol(x)>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r10_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_1;

L1_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_3, 0, NULL, CCP, RHO);
  // r9 = dyn nrow(p2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names20, CCP, RHO);
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn c1(0.0, r9)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r10_1;
  goto L0_;

L2_:;
  // r6 = dyn base1(0.0, <lang nrow(x)>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ncol1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r23_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // ncol1 = ldf ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p10 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_6, 0, NULL, CCP, RHO);
  // r23 = dyn ncol1(p10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_1;
}
SEXP Rsh_Fir_user_promise_inner1772369318_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrow1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r26_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p12 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1772369318_8, 0, NULL, CCP, RHO);
  // r26 = dyn nrow1(p12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names24, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_1;
}
SEXP Rsh_Fir_user_promise_inner1772369318_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xlim1_;
  SEXP Rsh_Fir_reg_xlim2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // xlim1 = ld xlim
  Rsh_Fir_reg_xlim1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // xlim2 = force? xlim1
  Rsh_Fir_reg_xlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim1_);
  // checkMissing(xlim2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_xlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return xlim2
  return Rsh_Fir_reg_xlim2_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ylim1_;
  SEXP Rsh_Fir_reg_ylim2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // ylim1 = ld ylim
  Rsh_Fir_reg_ylim1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // ylim2 = force? ylim1
  Rsh_Fir_reg_ylim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylim1_);
  // checkMissing(ylim2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ylim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return ylim2
  return Rsh_Fir_reg_ylim2_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_asp1_;
  SEXP Rsh_Fir_reg_asp2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // asp1 = ld asp
  Rsh_Fir_reg_asp1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // asp2 = force? asp1
  Rsh_Fir_reg_asp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_asp1_);
  // checkMissing(asp2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_asp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return asp2
  return Rsh_Fir_reg_asp2_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xaxs1_;
  SEXP Rsh_Fir_reg_xaxs2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // xaxs1 = ld xaxs
  Rsh_Fir_reg_xaxs1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // xaxs2 = force? xaxs1
  Rsh_Fir_reg_xaxs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xaxs1_);
  // checkMissing(xaxs2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_xaxs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return xaxs2
  return Rsh_Fir_reg_xaxs2_;
}
SEXP Rsh_Fir_user_promise_inner1772369318_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yaxs1_;
  SEXP Rsh_Fir_reg_yaxs2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1772369318/0: expected 0, got %d", NCAPTURES);

  // yaxs1 = ld yaxs
  Rsh_Fir_reg_yaxs1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // yaxs2 = force? yaxs1
  Rsh_Fir_reg_yaxs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yaxs1_);
  // checkMissing(yaxs2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_yaxs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return yaxs2
  return Rsh_Fir_reg_yaxs2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
