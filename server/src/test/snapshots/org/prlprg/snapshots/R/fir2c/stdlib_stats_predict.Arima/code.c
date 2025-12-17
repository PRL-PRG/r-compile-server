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
SEXP Rsh_Fir_user_function_inner1768932914_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1768932914_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1768932914_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1768932914_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_predict;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_arima1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_predict1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1768932914
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1768932914_, RHO, CCP);
  // st `predict.Arima` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn options[digits](5.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st od = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // predict = ldf predict
  Rsh_Fir_reg_predict = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   arima = ldf arima;
  //   p = prom<V +>{
  //     lh = ld lh;
  //     lh1 = force? lh;
  //     checkMissing(lh1);
  //     return lh1;
  //   };
  //   p1 = prom<V +>{
  //     sym = ldf c;
  //     base = ldf c in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r4):
  //     return r4;
  //   L1():
  //     c = ldf c in base;
  //     r5 = dyn c(3.0, 0.0, 0.0);
  //     goto L0(r5);
  //   L2():
  //     r3 = dyn base(3.0, 0.0, 0.0);
  //     goto L0(r3);
  //   };
  //   r7 = dyn arima[, order](p, p1);
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r9 = dyn predict[, `n.ahead`](p2, 12.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_predict, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // arima1 = ldf arima
  Rsh_Fir_reg_arima1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   USAccDeaths = ld USAccDeaths;
  //   USAccDeaths1 = force? USAccDeaths;
  //   checkMissing(USAccDeaths1);
  //   return USAccDeaths1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   c1 = ldf c in base;
  //   r13 = dyn c1(0.0, 1.0, 1.0);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base1(0.0, 1.0, 1.0);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r16):
  //   return r16;
  // L2():
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r15 = dyn base2[order](<lang c(0.0, 1.0, 1.0)>);
  //   goto L0(r15);
  // L1(r18):
  //   list = ldf list in base;
  //   r20 = dyn list(r18);
  //   goto L0(r20);
  // L4():
  //   c2 = ldf c in base;
  //   r19 = dyn c2(0.0, 1.0, 1.0);
  //   goto L1(r19);
  // L5():
  //   r17 = dyn base3(0.0, 1.0, 1.0);
  //   goto L1(r17);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn arima1[, order, seasonal](p3, p4, p5)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima1_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r22]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st fit = r22
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // predict1 = ldf predict
  Rsh_Fir_reg_predict1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p6 = prom<V +>{
  //   fit = ld fit;
  //   fit1 = force? fit;
  //   checkMissing(fit1);
  //   return fit1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r24 = dyn predict1[, `n.ahead`](p6, 6.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_predict1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 29 [r24]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p7 = prom<V +>{
  //   od = ld od;
  //   od1 = force? od;
  //   checkMissing(od1);
  //   return od1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r26 = dyn options1(p7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 33 [r26]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_arima;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // arima = ldf arima
  Rsh_Fir_reg_arima = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p = prom<V +>{
  //   lh = ld lh;
  //   lh1 = force? lh;
  //   checkMissing(lh1);
  //   return lh1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c = ldf c in base;
  //   r5 = dyn c(3.0, 0.0, 0.0);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(3.0, 0.0, 0.0);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn arima[, order](p, p1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lh;
  SEXP Rsh_Fir_reg_lh1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lh = ld lh
  Rsh_Fir_reg_lh = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // lh1 = force? lh
  Rsh_Fir_reg_lh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lh);
  // checkMissing(lh1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lh1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return lh1
  return Rsh_Fir_reg_lh1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r5 = dyn c(3.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(3.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_USAccDeaths;
  SEXP Rsh_Fir_reg_USAccDeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // USAccDeaths = ld USAccDeaths
  Rsh_Fir_reg_USAccDeaths = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // USAccDeaths1 = force? USAccDeaths
  Rsh_Fir_reg_USAccDeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_USAccDeaths);
  // checkMissing(USAccDeaths1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_USAccDeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return USAccDeaths1
  return Rsh_Fir_reg_USAccDeaths1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn c1(0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base1(0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L2_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r15 = dyn base2[order](<lang c(0.0, 1.0, 1.0)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r20 = dyn list(r18)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r20_;
  goto L0_;

L4_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r19 = dyn c2(0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r19)
  // L1(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L1_;

L5_:;
  // r17 = dyn base3(0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit;
  SEXP Rsh_Fir_reg_fit1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit = ld fit
  Rsh_Fir_reg_fit = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // fit1 = force? fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit);
  // checkMissing(fit1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_fit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return fit1
  return Rsh_Fir_reg_fit1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_od;
  SEXP Rsh_Fir_reg_od1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // od = ld od
  Rsh_Fir_reg_od = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // od1 = force? od
  Rsh_Fir_reg_od1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_od);
  // checkMissing(od1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_od1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return od1
  return Rsh_Fir_reg_od1_;
}
SEXP Rsh_Fir_user_function_inner1768932914_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1768932914 dynamic dispatch ([object, `n.ahead`, newxreg, `se.fit`, `...`])

  return Rsh_Fir_user_version_inner1768932914_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1768932914_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1768932914 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1768932914/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_n_ahead;
  SEXP Rsh_Fir_reg_newxreg;
  SEXP Rsh_Fir_reg_se_fit;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_n_ahead_isMissing;
  SEXP Rsh_Fir_reg_n_ahead_orDefault;
  SEXP Rsh_Fir_reg_newxreg_isMissing;
  SEXP Rsh_Fir_reg_newxreg_orDefault;
  SEXP Rsh_Fir_reg_se_fit_isMissing;
  SEXP Rsh_Fir_reg_se_fit_orDefault;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_object5_;
  SEXP Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_object8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_xr;
  SEXP Rsh_Fir_reg_xr1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_eval_parent;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_myNCOL;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_myNCOL1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_ncxreg;
  SEXP Rsh_Fir_reg_ncxreg1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_tsp;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_rsd2_;
  SEXP Rsh_Fir_reg_rsd3_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_object9_;
  SEXP Rsh_Fir_reg_object10_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_object12_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_object13_;
  SEXP Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_object16_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_arma;
  SEXP Rsh_Fir_reg_arma1_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_arma3_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_coefs;
  SEXP Rsh_Fir_reg_coefs1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_narma;
  SEXP Rsh_Fir_reg_narma1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_coefs2_;
  SEXP Rsh_Fir_reg_coefs3_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_narma2_;
  SEXP Rsh_Fir_reg_narma3_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_ncxreg2_;
  SEXP Rsh_Fir_reg_ncxreg3_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_narma4_;
  SEXP Rsh_Fir_reg_narma5_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_coefs4_;
  SEXP Rsh_Fir_reg_coefs5_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_drop;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_as_matrix1_;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_coefs6_;
  SEXP Rsh_Fir_reg_coefs7_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_coefs9_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_narma6_;
  SEXP Rsh_Fir_reg_narma7_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_drop1_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_arma4_;
  SEXP Rsh_Fir_reg_arma5_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_arma7_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_coefs10_;
  SEXP Rsh_Fir_reg_coefs11_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_coefs13_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_arma8_;
  SEXP Rsh_Fir_reg_arma9_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_coefs15_;
  SEXP Rsh_Fir_reg_arma11_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_coefs17_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_arma12_;
  SEXP Rsh_Fir_reg_arma13_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_coefs19_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_arma15_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_coefs21_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_ma;
  SEXP Rsh_Fir_reg_ma1_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_polyroot;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_Mod;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_arma16_;
  SEXP Rsh_Fir_reg_arma17_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_arma19_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_coefs22_;
  SEXP Rsh_Fir_reg_coefs23_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_coefs25_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_coefs28_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_arma20_;
  SEXP Rsh_Fir_reg_arma21_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_coefs30_;
  SEXP Rsh_Fir_reg_arma23_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg_coefs32_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_arma24_;
  SEXP Rsh_Fir_reg_arma25_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_coefs34_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_arma27_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_coefs36_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_ma2_;
  SEXP Rsh_Fir_reg_ma3_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_polyroot1_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_Mod1_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_KalmanForecast;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_ts;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_se_fit1_;
  SEXP Rsh_Fir_reg_se_fit2_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_ts1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r155_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r156_;
  SEXP Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_reg_pred;
  SEXP Rsh_Fir_reg_pred1_;
  SEXP Rsh_Fir_reg_se;
  SEXP Rsh_Fir_reg_se1_;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r158_;
  SEXP Rsh_Fir_reg_pred2_;
  SEXP Rsh_Fir_reg_pred3_;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_n_ahead = PARAMS[1];
  Rsh_Fir_reg_newxreg = PARAMS[2];
  Rsh_Fir_reg_se_fit = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // n_ahead_isMissing = missing.0(n_ahead)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_n_ahead;
  Rsh_Fir_reg_n_ahead_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args22);
  // if n_ahead_isMissing then L0(1) else L0(n_ahead)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_ahead_isMissing)) {
  // L0(1)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_const(CCP, 22);
    goto L0_;
  } else {
  // L0(n_ahead)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_Fir_reg_n_ahead;
    goto L0_;
  }

L0_:;
  // st `n.ahead` = n_ahead_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_n_ahead_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_ahead_orDefault);
  // newxreg_isMissing = missing.0(newxreg)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_newxreg;
  Rsh_Fir_reg_newxreg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if newxreg_isMissing then L1(NULL) else L1(newxreg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_newxreg_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_newxreg_orDefault = Rsh_const(CCP, 23);
    goto L1_;
  } else {
  // L1(newxreg)
    Rsh_Fir_reg_newxreg_orDefault = Rsh_Fir_reg_newxreg;
    goto L1_;
  }

L1_:;
  // st newxreg = newxreg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_newxreg_orDefault, RHO);
  (void)(Rsh_Fir_reg_newxreg_orDefault);
  // se_fit_isMissing = missing.0(se_fit)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_se_fit;
  Rsh_Fir_reg_se_fit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if se_fit_isMissing then L2(TRUE) else L2(se_fit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_se_fit_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_const(CCP, 25);
    goto L2_;
  } else {
  // L2(se_fit)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_Fir_reg_se_fit;
    goto L2_;
  }

L2_:;
  // st `se.fit` = se_fit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_se_fit_orDefault, RHO);
  (void)(Rsh_Fir_reg_se_fit_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r = clos inner2501545716
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st myNCOL = r
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L49() else D0()
  // L49()
  goto L49_;

D0_:;
  // deopt 3 [object1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L49_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c then L51() else L52(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L51()
    goto L51_;
  } else {
  // L52(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L52_;
  }

L50_:;
  // st rsd = dx1
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L54() else D1()
  // L54()
  goto L54_;

L51_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc then L53() else L52(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L52_;
  }

L52_:;
  // r1 = `$`(object4, <sym residuals>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args29);
  // goto L50(r1)
  // L50(r1)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_1;
  goto L50_;

D1_:;
  // deopt 7 [object5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L53_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L50(dx)
  // L50(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L50_;

L54_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args32);
  // if c1 then L56() else L57(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L56()
    goto L56_;
  } else {
  // L57(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L57_;
  }

L55_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args33);
  // if c2 then L60() else L61(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L60()
    goto L60_;
  } else {
  // L61(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L61_;
  }

L56_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // r2 = `$`(object8, <sym call>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args36);
  // goto L55(r2)
  // L55(r2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2_;
  goto L55_;

L58_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L55(dx2)
  // L55(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L55_;

L59_:;
  // st xr = dx7
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L60_:;
  // dr4 = tryDispatchBuiltin.1("$", dx3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // r3 = `$`(dx5, <sym xreg>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args41);
  // goto L59(r3)
  // L59(r3)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r3_1;
  goto L59_;

L3_:;
  // r6 = `!`(r5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args42);
  // c4 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c4 then L66() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L4()
    goto L4_;
  }

L62_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L59(dx6)
  // L59(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L59_;

L63_:;
  // xr = ld xr
  Rsh_Fir_reg_xr = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L65() else D2()
  // L65()
  goto L65_;

L64_:;
  // r4 = dyn base(<sym xr>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L3_;

D2_:;
  // deopt 13 [xr]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_xr;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r9_1 = Rsh_const(CCP, 23);
  goto L5_;

L5_:;
  // st xreg = r9
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // myNCOL = ldf myNCOL
  Rsh_Fir_reg_myNCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L70() else D5()
  // L70()
  goto L70_;

L65_:;
  // xr1 = force? xr
  Rsh_Fir_reg_xr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xr);
  // checkMissing(xr1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_xr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c3 = `==`(xr1, NULL)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_xr1_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args47);
  // goto L3(c3)
  // L3(c3)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_c3_;
  goto L3_;

L66_:;
  // eval_parent = ldf `eval.parent`
  Rsh_Fir_reg_eval_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L67() else D3()
  // L67()
  goto L67_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p = prom<V +>{
  //   xr2 = ld xr;
  //   xr3 = force? xr2;
  //   checkMissing(xr3);
  //   return xr3;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_, 0, NULL, CCP, RHO);
  // r8 = dyn eval_parent(p)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval_parent, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L68() else D4()
  // L68()
  goto L68_;

L70_:;
  // p1 = prom<V +>{
  //   xreg = ld xreg;
  //   xreg1 = force? xreg;
  //   checkMissing(xreg1);
  //   return xreg1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_1, 0, NULL, CCP, RHO);
  // r11 = dyn myNCOL(p1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myNCOL, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L71() else D6()
  // L71()
  goto L71_;

D4_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L5_;

L71_:;
  // st ncxreg = r11
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // myNCOL1 = ldf myNCOL
  Rsh_Fir_reg_myNCOL1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L72() else D7()
  // L72()
  goto L72_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // p2 = prom<V +>{
  //   newxreg1 = ld newxreg;
  //   newxreg2 = force? newxreg1;
  //   checkMissing(newxreg2);
  //   return newxreg2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_2, 0, NULL, CCP, RHO);
  // r13 = dyn myNCOL1(p2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myNCOL1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L73() else D8()
  // L73()
  goto L73_;

D8_:;
  // deopt 32 [r13]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L73_:;
  // ncxreg = ld ncxreg
  Rsh_Fir_reg_ncxreg = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L74() else D9()
  // L74()
  goto L74_;

D9_:;
  // deopt 32 [r13, ncxreg]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_ncxreg;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L74_:;
  // ncxreg1 = force? ncxreg
  Rsh_Fir_reg_ncxreg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncxreg);
  // checkMissing(ncxreg1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ncxreg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r14 = `!=`(r13, ncxreg1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_ncxreg1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args55);
  // c5 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c5 then L75() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L75()
    goto L75_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // tsp = ldf tsp
  Rsh_Fir_reg_tsp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L79() else D12()
  // L79()
  goto L79_;

L75_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L76() else D10()
  // L76()
  goto L76_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // r15 = dyn stop("'xreg' and 'newxreg' have different numbers of columns")
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L77() else D11()
  // L77()
  goto L77_;

L79_:;
  // p3 = prom<V +>{
  //   rsd = ld rsd;
  //   rsd1 = force? rsd;
  //   checkMissing(rsd1);
  //   return rsd1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_3, 0, NULL, CCP, RHO);
  // r18 = dyn tsp(p3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L80() else D13()
  // L80()
  goto L80_;

D11_:;
  // deopt 38 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L7()
  // L7()
  goto L7_;

L80_:;
  // st xtsp = r18
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r18_1, RHO);
  (void)(Rsh_Fir_reg_r18_1);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard1 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L8_:;
  // st n = r20
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r20_1, RHO);
  (void)(Rsh_Fir_reg_r20_1);
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L85() else D16()
  // L85()
  goto L85_;

L81_:;
  // rsd2 = ld rsd
  Rsh_Fir_reg_rsd2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L83() else D14()
  // L83()
  goto L83_;

L82_:;
  // r19 = dyn base1(<sym rsd>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L8(r19)
  // L8(r19)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r19_1;
  goto L8_;

D14_:;
  // deopt 48 [rsd2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_rsd2_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 53 [object9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L83_:;
  // rsd3 = force? rsd2
  Rsh_Fir_reg_rsd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rsd2_);
  // checkMissing(rsd3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_rsd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r21 = dyn length(rsd3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_rsd3_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L84() else D15()
  // L84()
  goto L84_;

L85_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(object10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args65);
  // if c6 then L87() else L88(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L87()
    goto L87_;
  } else {
  // L88(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L88_;
  }

D15_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r21_;
  goto L8_;

L86_:;
  // st arma = dx9
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L90() else D17()
  // L90()
  goto L90_;

L87_:;
  // dr6 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L89() else L88(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr6)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr6_;
    goto L88_;
  }

L88_:;
  // r22 = `$`(object12, <sym arma>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args68);
  // goto L86(r22)
  // L86(r22)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r22_1;
  goto L86_;

D17_:;
  // deopt 57 [object13]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L89_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L86(dx8)
  // L86(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L86_;

L90_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c7 then L92() else L93(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L92()
    goto L92_;
  } else {
  // L93(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L93_;
  }

L91_:;
  // st coefs = dx11
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard2 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L92_:;
  // dr8 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc4 then L94() else L93(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L94()
    goto L94_;
  } else {
  // L93(dr8)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr8_;
    goto L93_;
  }

L93_:;
  // r23 = `$`(object16, <sym coef>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args75);
  // goto L91(r23)
  // L91(r23)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r23_;
  goto L91_;

L9_:;
  // st narma = r25
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard3 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L94_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L91(dx10)
  // L91(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L91_;

L95_:;
  // arma = ld arma
  Rsh_Fir_reg_arma = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

L96_:;
  // r24 = dyn base2(<lang `[`(arma, `:`(1, 4))>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_1;
  goto L9_;

D18_:;
  // deopt 63 [arma]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_arma;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L11_:;
  // narma = ld narma
  Rsh_Fir_reg_narma = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L106() else D22()
  // L106()
  goto L106_;

L97_:;
  // arma1 = force? arma
  Rsh_Fir_reg_arma1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma);
  // checkMissing(arma1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_arma1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(arma1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_arma1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args80);
  // if c8 then L98() else L99(arma1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L98()
    goto L98_;
  } else {
  // L99(arma1)
    Rsh_Fir_reg_arma3_ = Rsh_Fir_reg_arma1_;
    goto L99_;
  }

L102_:;
  // coefs = ld coefs
  Rsh_Fir_reg_coefs = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L104() else D20()
  // L104()
  goto L104_;

L103_:;
  // r28 = dyn base3(<sym coefs>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D20_:;
  // deopt 73 [coefs]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_coefs;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 76 [r29, narma]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_narma;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L10_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r27 = dyn sum(dx13)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L101() else D19()
  // L101()
  goto L101_;

L98_:;
  // dr10 = tryDispatchBuiltin.1("[", arma1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_arma1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc5 then L100() else L99(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr10)
    Rsh_Fir_reg_arma3_ = Rsh_Fir_reg_dr10_;
    goto L99_;
  }

L99_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r26 = dyn __(arma3, <int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_arma3_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r26_1;
  goto L10_;

L104_:;
  // coefs1 = force? coefs
  Rsh_Fir_reg_coefs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs);
  // checkMissing(coefs1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_coefs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r30 = dyn length1(coefs1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_coefs1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L105() else D21()
  // L105()
  goto L105_;

L106_:;
  // narma1 = force? narma
  Rsh_Fir_reg_narma1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_narma);
  // checkMissing(narma1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_narma1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r31 = `>`(r29, narma1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_narma1_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args89);
  // c9 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c9 then L107() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L107()
    goto L107_;
  } else {
  // L12()
    goto L12_;
  }

D19_:;
  // deopt 69 [r27]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 76 [r30]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L12_:;
  // st xm = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_const(CCP, 10), RHO);
  (void)(Rsh_const(CCP, 10));
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // arma4 = ld arma
  Rsh_Fir_reg_arma4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L143() else D41()
  // L143()
  goto L143_;

L100_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L10(dx12)
  // L10(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L10_;

L101_:;
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r27_;
  goto L9_;

L105_:;
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L11_;

L107_:;
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard4 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

D41_:;
  // deopt 146 [arma4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_arma4_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L13_:;
  // c10 = `is.object`(r33)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args93);
  // if c10 then L112() else L113(r33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L112()
    goto L112_;
  } else {
  // L113(r33)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r33_;
    goto L113_;
  }

L108_:;
  // coefs2 = ld coefs
  Rsh_Fir_reg_coefs2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L110() else D23()
  // L110()
  goto L110_;

L109_:;
  // r32 = dyn base4(<sym coefs>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L13_;

L143_:;
  // arma5 = force? arma4
  Rsh_Fir_reg_arma5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma4_);
  // checkMissing(arma5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_arma5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(arma5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_arma5_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args96);
  // if c14 then L144() else L145(arma5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L144()
    goto L144_;
  } else {
  // L145(arma5)
    Rsh_Fir_reg_arma7_ = Rsh_Fir_reg_arma5_;
    goto L145_;
  }

D23_:;
  // deopt 81 [coefs2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_coefs2_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L14_:;
  // r39 = `==`(dx15, "intercept")
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args97);
  // c11 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args98);
  // if c11 then L116() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L116()
    goto L116_;
  } else {
  // L15()
    goto L15_;
  }

L22_:;
  // r66 = `>`(dx19, 0)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args99);
  // c15 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args100);
  // if c15 then L147() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L147()
    goto L147_;
  } else {
  // L23()
    goto L23_;
  }

L110_:;
  // coefs3 = force? coefs2
  Rsh_Fir_reg_coefs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs2_);
  // checkMissing(coefs3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_coefs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r34 = dyn names(coefs3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_coefs3_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L111() else D24()
  // L111()
  goto L111_;

L112_:;
  // dr12 = tryDispatchBuiltin.1("[", r33)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc6 then L114() else L113(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L114()
    goto L114_;
  } else {
  // L113(dr12)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_dr12_;
    goto L113_;
  }

L113_:;
  // narma2 = ld narma
  Rsh_Fir_reg_narma2_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L115() else D25()
  // L115()
  goto L115_;

L144_:;
  // dr16 = tryDispatchBuiltin.1("[", arma5)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_arma5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc8 then L146() else L145(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L146()
    goto L146_;
  } else {
  // L145(dr16)
    Rsh_Fir_reg_arma7_ = Rsh_Fir_reg_dr16_;
    goto L145_;
  }

L145_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r65 = dyn __3(arma7, 2)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_arma7_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L22(r65)
  // L22(r65)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r65_;
  goto L22_;

D24_:;
  // deopt 84 [r34]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 85 [r36, narma2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_narma2_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // narma4 = ld narma
  Rsh_Fir_reg_narma4_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L121() else D29()
  // L121()
  goto L121_;

L23_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // arma16 = ld arma
  Rsh_Fir_reg_arma16_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L178() else D52()
  // L178()
  goto L178_;

L111_:;
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L13_;

L114_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L14(dx14)
  // L14(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L14_;

L115_:;
  // narma3 = force? narma2
  Rsh_Fir_reg_narma3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_narma2_);
  // checkMissing(narma3)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_narma3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r37 = `+`(narma3, 1)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_narma3_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args110);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r38 = dyn __1(r36, r37)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L14(r38)
  // L14(r38)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r38_;
  goto L14_;

L116_:;
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L117() else D26()
  // L117()
  goto L117_;

L146_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L22(dx18)
  // L22(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L22_;

L147_:;
  // coefs10 = ld coefs
  Rsh_Fir_reg_coefs10_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L148() else D42()
  // L148()
  goto L148_;

D26_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 106 [narma4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_narma4_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 153 [coefs10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_coefs10_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 198 [arma16]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_arma16_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L117_:;
  // p4 = prom<V +>{
  //   sym5 = ldf rep;
  //   base5 = ldf rep in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   rep = ldf rep in base;
  //   r42 = dyn rep(1.0, <sym n.ahead>);
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base5(1.0, <sym n.ahead>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   newxreg3 = ld newxreg;
  //   newxreg4 = force? newxreg3;
  //   checkMissing(newxreg4);
  //   return newxreg4;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_5, 0, NULL, CCP, RHO);
  // r45 = dyn cbind[intercept, ](p4, p5)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L118() else D27()
  // L118()
  goto L118_;

L121_:;
  // narma5 = force? narma4
  Rsh_Fir_reg_narma5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_narma4_);
  // checkMissing(narma5)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_narma5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // r48 = `==`(narma5, 0.0)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_narma5_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args119);
  // c12 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args120);
  // if c12 then L122() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L122()
    goto L122_;
  } else {
  // L17()
    goto L17_;
  }

L148_:;
  // coefs11 = force? coefs10
  Rsh_Fir_reg_coefs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs10_);
  // checkMissing(coefs11)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_coefs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(coefs11)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_coefs11_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args122);
  // if c16 then L149() else L150(coefs11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L149()
    goto L149_;
  } else {
  // L150(coefs11)
    Rsh_Fir_reg_coefs13_ = Rsh_Fir_reg_coefs11_;
    goto L150_;
  }

L178_:;
  // arma17 = force? arma16
  Rsh_Fir_reg_arma17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma16_);
  // checkMissing(arma17)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_arma17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(arma17)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_arma17_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args124);
  // if c21 then L179() else L180(arma17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L179()
    goto L179_;
  } else {
  // L180(arma17)
    Rsh_Fir_reg_arma19_ = Rsh_Fir_reg_arma17_;
    goto L180_;
  }

D27_:;
  // deopt 97 [r45]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L17_:;
  // sym7 = ldf drop
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base7 = ldf drop in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard7 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L19_:;
  // st xm = r55
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // goto L21()
  // L21()
  goto L21_;

L24_:;
  // st ma = dx21
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard8 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L34_:;
  // r93 = `>`(dx31, 0)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args127);
  // c22 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args128);
  // if c22 then L182() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L182()
    goto L182_;
  } else {
  // L35()
    goto L35_;
  }

L118_:;
  // st newxreg = r45
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // ncxreg2 = ld ncxreg
  Rsh_Fir_reg_ncxreg2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L119() else D28()
  // L119()
  goto L119_;

L122_:;
  // sym6 = ldf drop
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base6 = ldf drop in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard6 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L149_:;
  // dr18 = tryDispatchBuiltin.1("[", coefs11)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_coefs11_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args130);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if dc9 then L151() else L150(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L151()
    goto L151_;
  } else {
  // L150(dr18)
    Rsh_Fir_reg_coefs13_ = Rsh_Fir_reg_dr18_;
    goto L150_;
  }

L150_:;
  // arma8 = ld arma
  Rsh_Fir_reg_arma8_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L152() else D43()
  // L152()
  goto L152_;

L179_:;
  // dr24 = tryDispatchBuiltin.1("[", arma17)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_arma17_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc12 then L181() else L180(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L181()
    goto L181_;
  } else {
  // L180(dr24)
    Rsh_Fir_reg_arma19_ = Rsh_Fir_reg_dr24_;
    goto L180_;
  }

L180_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r92 = dyn __7(arma19, 4)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_arma19_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L34(r92)
  // L34(r92)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r92_;
  goto L34_;

D28_:;
  // deopt 99 [ncxreg2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_ncxreg2_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 155 [coefs13, arma8]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_coefs13_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_arma8_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L19(r50)
  // L19(r50)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r50_;
  goto L19_;

L27_:;
  // c20 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args135);
  // if c20 then L173() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L173()
    goto L173_;
  } else {
  // L31()
    goto L31_;
  }

L35_:;
  // goto L46()
  // L46()
  goto L46_;

L46_:;
  // KalmanForecast = ldf KalmanForecast
  Rsh_Fir_reg_KalmanForecast = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L216() else D64()
  // L216()
  goto L216_;

L119_:;
  // ncxreg3 = force? ncxreg2
  Rsh_Fir_reg_ncxreg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncxreg2_);
  // checkMissing(ncxreg3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_ncxreg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // r46 = `+`(ncxreg3, 1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_ncxreg3_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args137);
  // st ncxreg = r46
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L16()
  // L16()
  goto L16_;

L123_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L125() else D30()
  // L125()
  goto L125_;

L124_:;
  // r49 = dyn base6(<lang `%*%`(as.matrix(newxreg), coefs)>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L18(r49)
  // L18(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L18_;

L131_:;
  // as_matrix1 = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L133() else D35()
  // L133()
  goto L133_;

L132_:;
  // r56 = dyn base7(<lang `%*%`(as.matrix(newxreg), `[`(coefs, `-`(`(`(`:`(1, narma)))))>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L19_;

L151_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L24(dx20)
  // L24(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L24_;

L152_:;
  // arma9 = force? arma8
  Rsh_Fir_reg_arma9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma8_);
  // checkMissing(arma9)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_arma9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(arma9)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_arma9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args142);
  // if c17 then L153() else L154(coefs13, arma9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L153()
    goto L153_;
  } else {
  // L154(coefs13, arma9)
    Rsh_Fir_reg_coefs15_ = Rsh_Fir_reg_coefs13_;
    Rsh_Fir_reg_arma11_ = Rsh_Fir_reg_arma9_;
    goto L154_;
  }

L160_:;
  // sym9 = ldf Mod
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base9 = ldf Mod in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard9 then L162() else L163()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L162()
    goto L162_;
  } else {
  // L163()
    goto L163_;
  }

L161_:;
  // r76 = dyn base8(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L27(r76)
  // L27(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L27_;

L181_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L34(dx30)
  // L34(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L34_;

L182_:;
  // coefs22 = ld coefs
  Rsh_Fir_reg_coefs22_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L183() else D53()
  // L183()
  goto L183_;

D30_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 205 [coefs22]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_coefs22_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 255 []
  Rsh_Fir_deopt(255, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // arma12 = ld arma
  Rsh_Fir_reg_arma12_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L156() else D44()
  // L156()
  goto L156_;

L28_:;
  // r87 = `<`(r79, 1.0)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args146);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r88 = dyn any(r87)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L172() else D49()
  // L172()
  goto L172_;

L31_:;
  // goto L32(NULL)
  // L32(NULL)
  Rsh_Fir_reg_r90_ = Rsh_const(CCP, 23);
  goto L32_;

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L125_:;
  // p6 = prom<V +>{
  //   newxreg5 = ld newxreg;
  //   newxreg6 = force? newxreg5;
  //   checkMissing(newxreg6);
  //   return newxreg6;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_6, 0, NULL, CCP, RHO);
  // r52 = dyn as_matrix(p6)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L126() else D31()
  // L126()
  goto L126_;

L133_:;
  // p7 = prom<V +>{
  //   newxreg7 = ld newxreg;
  //   newxreg8 = force? newxreg7;
  //   checkMissing(newxreg8);
  //   return newxreg8;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_7, 0, NULL, CCP, RHO);
  // r58 = dyn as_matrix1(p7)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix1_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L134() else D36()
  // L134()
  goto L134_;

L153_:;
  // dr20 = tryDispatchBuiltin.1("[", arma9)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_arma9_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc10 then L155() else L154(coefs13, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L155()
    goto L155_;
  } else {
  // L154(coefs13, dr20)
    Rsh_Fir_reg_coefs15_ = Rsh_Fir_reg_coefs13_;
    Rsh_Fir_reg_arma11_ = Rsh_Fir_reg_dr20_;
    goto L154_;
  }

L154_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r67 = dyn __4(arma11, 1)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_arma11_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L25(coefs15, r67)
  // L25(coefs15, r67)
  Rsh_Fir_reg_coefs17_ = Rsh_Fir_reg_coefs15_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r67_;
  goto L25_;

L162_:;
  // sym10 = ldf polyroot
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base10 = ldf polyroot in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard10 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L163_:;
  // r78 = dyn base9(<lang polyroot(c(1.0, ma))>)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L28(r78)
  // L28(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L28_;

L173_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L174() else D50()
  // L174()
  goto L174_;

L183_:;
  // coefs23 = force? coefs22
  Rsh_Fir_reg_coefs23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs22_);
  // checkMissing(coefs23)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_coefs23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(coefs23)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_coefs23_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args158);
  // if c23 then L184() else L185(coefs23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L184()
    goto L184_;
  } else {
  // L185(coefs23)
    Rsh_Fir_reg_coefs25_ = Rsh_Fir_reg_coefs23_;
    goto L185_;
  }

L216_:;
  // p8 = prom<V +>{
  //   n_ahead1 = ld `n.ahead`;
  //   n_ahead2 = force? n_ahead1;
  //   checkMissing(n_ahead2);
  //   return n_ahead2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   object17 = ld object;
  //   object18 = force? object17;
  //   checkMissing(object18);
  //   c28 = `is.object`(object18);
  //   if c28 then L1() else L2(object18);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("$", object18);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(object20):
  //   r127 = `$`(object20, <sym model>);
  //   goto L0(r127);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_9, 0, NULL, CCP, RHO);
  // r129 = dyn KalmanForecast(p8, p9)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_KalmanForecast, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L217() else D65()
  // L217()
  goto L217_;

D31_:;
  // deopt 116 [r52]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 129 [r58]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 160 [coefs17, dx23, 1, arma12]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_coefs17_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_arma12_;
  Rsh_Fir_deopt(160, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 189 [r88]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 191 []
  Rsh_Fir_deopt(191, 0, NULL, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 258 [r129]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L29_:;
  // Mod = ldf Mod in base
  Rsh_Fir_reg_Mod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r86 = dyn Mod(r81)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Mod, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L171() else D48()
  // L171()
  goto L171_;

L36_:;
  // st ma = dx33
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // sym13 = ldf any
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base13 = ldf any in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args168);
  // if guard13 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L126_:;
  // coefs4 = ld coefs
  Rsh_Fir_reg_coefs4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L127() else D32()
  // L127()
  goto L127_;

L134_:;
  // coefs6 = ld coefs
  Rsh_Fir_reg_coefs6_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L135() else D37()
  // L135()
  goto L135_;

L155_:;
  // dx22 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L25(coefs13, dx22)
  // L25(coefs13, dx22)
  Rsh_Fir_reg_coefs17_ = Rsh_Fir_reg_coefs13_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L25_;

L156_:;
  // arma13 = force? arma12
  Rsh_Fir_reg_arma13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma12_);
  // checkMissing(arma13)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_arma13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(arma13)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_arma13_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args171);
  // if c18 then L157() else L158(coefs17, dx23, 1, arma13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L157()
    goto L157_;
  } else {
  // L158(coefs17, dx23, 1, arma13)
    Rsh_Fir_reg_coefs19_ = Rsh_Fir_reg_coefs17_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_r69_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_arma15_ = Rsh_Fir_reg_arma13_;
    goto L158_;
  }

L164_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args172);
  // if guard11 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L165_:;
  // r80 = dyn base10(<lang c(1.0, ma)>)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L29(r80)
  // L29(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L29_;

L172_:;
  // goto L27(r88)
  // L27(r88)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r88_;
  goto L27_;

L174_:;
  // r89 = dyn warning("MA part of model is not invertible")
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L175() else D51()
  // L175()
  goto L175_;

L184_:;
  // dr26 = tryDispatchBuiltin.1("[", coefs23)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_coefs23_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc13 then L186() else L185(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L186()
    goto L186_;
  } else {
  // L185(dr26)
    Rsh_Fir_reg_coefs25_ = Rsh_Fir_reg_dr26_;
    goto L185_;
  }

L185_:;
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args177);
  // if guard12 then L187() else L188()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L187()
    goto L187_;
  } else {
  // L188()
    goto L188_;
  }

L217_:;
  // st z = r129
  Rsh_Fir_store(Rsh_const(CCP, 77), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // check L218() else D66()
  // L218()
  goto L218_;

D32_:;
  // deopt 117 [coefs4]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_coefs4_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 130 [coefs6]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_coefs6_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 185 [r86]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 193 [r89]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 261 []
  Rsh_Fir_deopt(261, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // r73 = `:`(r71, dx29)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args178);
  // r74 = `+`(dx28, r73)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args179);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r75 = dyn __6(coefs21, r74)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_coefs21_;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L24(r75)
  // L24(r75)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r75_;
  goto L24_;

L30_:;
  // polyroot = ldf polyroot in base
  Rsh_Fir_reg_polyroot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r85 = dyn polyroot(r83)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_polyroot, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L170() else D47()
  // L170()
  goto L170_;

L37_:;
  // arma24 = ld arma
  Rsh_Fir_reg_arma24_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L194() else D56()
  // L194()
  goto L194_;

L40_:;
  // c27 = `as.logical`(r111)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args182);
  // if c27 then L211() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L211()
    goto L211_;
  } else {
  // L44()
    goto L44_;
  }

L127_:;
  // coefs5 = force? coefs4
  Rsh_Fir_reg_coefs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs4_);
  // checkMissing(coefs5)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_coefs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r53 = dyn ___(r52, coefs5)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_coefs5_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L128() else D33()
  // L128()
  goto L128_;

L135_:;
  // coefs7 = force? coefs6
  Rsh_Fir_reg_coefs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coefs6_);
  // checkMissing(coefs7)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_coefs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(coefs7)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_coefs7_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args186);
  // if c13 then L136() else L137(coefs7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L136()
    goto L136_;
  } else {
  // L137(coefs7)
    Rsh_Fir_reg_coefs9_ = Rsh_Fir_reg_coefs7_;
    goto L137_;
  }

L157_:;
  // dr22 = tryDispatchBuiltin.1("[", arma13)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_arma13_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args187);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // if dc11 then L159() else L158(coefs17, dx23, 1, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L159()
    goto L159_;
  } else {
  // L158(coefs17, dx23, 1, dr22)
    Rsh_Fir_reg_coefs19_ = Rsh_Fir_reg_coefs17_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_r69_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_arma15_ = Rsh_Fir_reg_dr22_;
    goto L158_;
  }

L158_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r72 = dyn __5(arma15, 2)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_arma15_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L26(coefs19, dx25, r69, r72)
  // L26(coefs19, dx25, r69, r72)
  Rsh_Fir_reg_coefs21_ = Rsh_Fir_reg_coefs19_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r72_;
  goto L26_;

L166_:;
  // ma = ld ma
  Rsh_Fir_reg_ma = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L168() else D45()
  // L168()
  goto L168_;

L167_:;
  // r82 = dyn base11(1.0, <sym ma>)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L30(r82)
  // L30(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L30_;

L171_:;
  // goto L28(r86)
  // L28(r86)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r86_;
  goto L28_;

L175_:;
  // goto L32(r89)
  // L32(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L32_;

L186_:;
  // dx32 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // goto L36(dx32)
  // L36(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L36_;

L187_:;
  // arma20 = ld arma
  Rsh_Fir_reg_arma20_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L189() else D54()
  // L189()
  goto L189_;

L188_:;
  // r94 = dyn base12(<lang `[`(arma, `:`(1, 3))>)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L37(coefs25, r94)
  // L37(coefs25, r94)
  Rsh_Fir_reg_coefs28_ = Rsh_Fir_reg_coefs25_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L37_;

L198_:;
  // sym14 = ldf Mod
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base14 = ldf Mod in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args193);
  // if guard14 then L200() else L201()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L200()
    goto L200_;
  } else {
  // L201()
    goto L201_;
  }

L199_:;
  // r110 = dyn base13(<lang `<`(Mod(polyroot(c(1.0, ma))), 1.0)>)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L40(r110)
  // L40(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L40_;

L218_:;
  // p10 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   c29 = `is.object`(z1);
  //   if c29 then L1() else L2(z1);
  // L0(dx41):
  //   xm = ld xm;
  //   xm1 = force? xm;
  //   checkMissing(xm1);
  //   r131 = `+`(dx41, xm1);
  //   return r131;
  // L1():
  //   dr34 = tryDispatchBuiltin.1("[[", z1);
  //   dc17 = getTryDispatchBuiltinDispatched(dr34);
  //   if dc17 then L3() else L2(dr34);
  // L2(z3):
  //   __11 = ldf `[[` in base;
  //   r130 = dyn __11(z3, 1);
  //   goto L0(r130);
  // L3():
  //   dx40 = getTryDispatchBuiltinValue(dr34);
  //   goto L0(dx40);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_10, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   xtsp = ld xtsp;
  //   xtsp1 = force? xtsp;
  //   checkMissing(xtsp1);
  //   c30 = `is.object`(xtsp1);
  //   if c30 then L1() else L2(xtsp1);
  // L0(dx43):
  //   deltat = ldf deltat;
  //   p11 = prom<V +>{
  //     rsd4 = ld rsd;
  //     rsd5 = force? rsd4;
  //     checkMissing(rsd5);
  //     return rsd5;
  //   };
  //   r135 = dyn deltat(p11);
  //   r136 = `+`(dx43, r135);
  //   return r136;
  // L1():
  //   dr36 = tryDispatchBuiltin.1("[", xtsp1);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L3() else L2(dr36);
  // L2(xtsp3):
  //   __12 = ldf `[` in base;
  //   r133 = dyn __12(xtsp3, 2);
  //   goto L0(r133);
  // L3():
  //   dx42 = getTryDispatchBuiltinValue(dr36);
  //   goto L0(dx42);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_11, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   xtsp4 = ld xtsp;
  //   xtsp5 = force? xtsp4;
  //   checkMissing(xtsp5);
  //   c31 = `is.object`(xtsp5);
  //   if c31 then L1() else L2(xtsp5);
  // L0(dx45):
  //   return dx45;
  // L1():
  //   dr38 = tryDispatchBuiltin.1("[", xtsp5);
  //   dc19 = getTryDispatchBuiltinDispatched(dr38);
  //   if dc19 then L3() else L2(dr38);
  // L2(xtsp7):
  //   __13 = ldf `[` in base;
  //   r138 = dyn __13(xtsp7, 3);
  //   goto L0(r138);
  // L3():
  //   dx44 = getTryDispatchBuiltinValue(dr38);
  //   goto L0(dx44);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_13, 0, NULL, CCP, RHO);
  // r140 = dyn ts[, start, frequency](p10, p12, p13)
  SEXP Rsh_Fir_array_args218[3];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args218[2] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names58[3];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = Rsh_const(CCP, 85);
  Rsh_Fir_array_arg_names58[2] = Rsh_const(CCP, 86);
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 3, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L219() else D67()
  // L219()
  goto L219_;

D33_:;
  // deopt 120 [r53]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 178 [ma]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_ma;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 183 [r85]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 209 [coefs25, arma20]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_coefs25_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_arma20_;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 216 [coefs28, r95, 1, arma24]
  SEXP Rsh_Fir_array_deopt_stack47[4];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_coefs28_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack47[3] = Rsh_Fir_reg_arma24_;
  Rsh_Fir_deopt(216, 4, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 267 [r140]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L20_:;
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r62 = dyn ___1(r58, dx17)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L140() else D39()
  // L140()
  goto L140_;

L41_:;
  // r121 = `<`(r113, 1.0)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_args220[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args220);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r122 = dyn any1(r121)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L210() else D61()
  // L210()
  goto L210_;

L44_:;
  // goto L45(NULL)
  // L45(NULL)
  Rsh_Fir_reg_r124_ = Rsh_const(CCP, 23);
  goto L45_;

L45_:;
  // goto L46()
  // L46()
  goto L46_;

L128_:;
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r54 = dyn drop(r53)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L129() else D34()
  // L129()
  goto L129_;

L136_:;
  // dr14 = tryDispatchBuiltin.1("[", coefs7)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_coefs7_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args223);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if dc7 then L138() else L137(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L138()
    goto L138_;
  } else {
  // L137(dr14)
    Rsh_Fir_reg_coefs9_ = Rsh_Fir_reg_dr14_;
    goto L137_;
  }

L137_:;
  // narma6 = ld narma
  Rsh_Fir_reg_narma6_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L139() else D38()
  // L139()
  goto L139_;

L159_:;
  // dx27 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L26(coefs17, dx23, 1, dx27)
  // L26(coefs17, dx23, 1, dx27)
  Rsh_Fir_reg_coefs21_ = Rsh_Fir_reg_coefs17_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r71_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
  goto L26_;

L168_:;
  // ma1 = force? ma
  Rsh_Fir_reg_ma1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma);
  // checkMissing(ma1)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_ma1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r84 = dyn c19(1.0, ma1)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_ma1_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L169() else D46()
  // L169()
  goto L169_;

L170_:;
  // goto L29(r85)
  // L29(r85)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r85_;
  goto L29_;

L189_:;
  // arma21 = force? arma20
  Rsh_Fir_reg_arma21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma20_);
  // checkMissing(arma21)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_arma21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(arma21)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_arma21_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args229);
  // if c24 then L190() else L191(coefs25, arma21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L190()
    goto L190_;
  } else {
  // L191(coefs25, arma21)
    Rsh_Fir_reg_coefs30_ = Rsh_Fir_reg_coefs25_;
    Rsh_Fir_reg_arma23_ = Rsh_Fir_reg_arma21_;
    goto L191_;
  }

L194_:;
  // arma25 = force? arma24
  Rsh_Fir_reg_arma25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arma24_);
  // checkMissing(arma25)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_arma25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(arma25)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_arma25_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args231);
  // if c25 then L195() else L196(coefs28, r95, 1, arma25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L195()
    goto L195_;
  } else {
  // L196(coefs28, r95, 1, arma25)
    Rsh_Fir_reg_coefs34_ = Rsh_Fir_reg_coefs28_;
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r95_;
    Rsh_Fir_reg_r101_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_arma27_ = Rsh_Fir_reg_arma25_;
    goto L196_;
  }

L200_:;
  // sym15 = ldf polyroot
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base15 = ldf polyroot in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args232);
  // if guard15 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L201_:;
  // r112 = dyn base14(<lang polyroot(c(1.0, ma))>)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L41(r112)
  // L41(r112)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r112_;
  goto L41_;

L211_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L212() else D62()
  // L212()
  goto L212_;

L219_:;
  // st pred = r140
  Rsh_Fir_store(Rsh_const(CCP, 87), Rsh_Fir_reg_r140_, RHO);
  (void)(Rsh_Fir_reg_r140_);
  // se_fit1 = ld `se.fit`
  Rsh_Fir_reg_se_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L220() else D68()
  // L220()
  goto L220_;

D34_:;
  // deopt 122 [r54]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 133 [coefs9, 1, narma6]
  SEXP Rsh_Fir_array_deopt_stack50[3];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_coefs9_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_narma6_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 139 [r62]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 181 [r84]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 245 [r122]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 247 []
  Rsh_Fir_deopt(247, 0, NULL, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 269 [se_fit1]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_se_fit1_;
  Rsh_Fir_deopt(269, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L38_:;
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r97 = dyn sum1(dx35)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L193() else D55()
  // L193()
  goto L193_;

L39_:;
  // r107 = `:`(r105, dx37)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args235);
  // r108 = `+`(r104, r107)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args236);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r109 = dyn __10(coefs36, r108)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_coefs36_;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L36(r109)
  // L36(r109)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r109_;
  goto L36_;

L42_:;
  // Mod1 = ldf Mod in base
  Rsh_Fir_reg_Mod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r120 = dyn Mod1(r115)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Mod1_, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L209() else D60()
  // L209()
  goto L209_;

L129_:;
  // goto L18(r54)
  // L18(r54)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r54_;
  goto L18_;

L138_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // goto L20(dx16)
  // L20(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L20_;

L139_:;
  // narma7 = force? narma6
  Rsh_Fir_reg_narma7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_narma6_);
  // checkMissing(narma7)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_narma7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // r59 = `:`(1, narma7)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_narma7_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args241);
  // r60 = `-`(<missing>, r59)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args242);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r61 = dyn __2(coefs9, r60)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_coefs9_;
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r61_;
  goto L20_;

L140_:;
  // drop1 = ldf drop in base
  Rsh_Fir_reg_drop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r63 = dyn drop1(r62)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop1_, 1, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L141() else D40()
  // L141()
  goto L141_;

L169_:;
  // goto L30(r84)
  // L30(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L30_;

L190_:;
  // dr28 = tryDispatchBuiltin.1("[", arma21)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_arma21_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args245);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // if dc14 then L192() else L191(coefs25, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L192()
    goto L192_;
  } else {
  // L191(coefs25, dr28)
    Rsh_Fir_reg_coefs30_ = Rsh_Fir_reg_coefs25_;
    Rsh_Fir_reg_arma23_ = Rsh_Fir_reg_dr28_;
    goto L191_;
  }

L191_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r96 = dyn __8(arma23, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_arma23_;
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L38(coefs30, r96)
  // L38(coefs30, r96)
  Rsh_Fir_reg_coefs32_ = Rsh_Fir_reg_coefs30_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r96_;
  goto L38_;

L195_:;
  // dr30 = tryDispatchBuiltin.1("[", arma25)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_arma25_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args248);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // if dc15 then L197() else L196(coefs28, r95, 1, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L197()
    goto L197_;
  } else {
  // L196(coefs28, r95, 1, dr30)
    Rsh_Fir_reg_coefs34_ = Rsh_Fir_reg_coefs28_;
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r95_;
    Rsh_Fir_reg_r101_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_arma27_ = Rsh_Fir_reg_dr30_;
    goto L196_;
  }

L196_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r106 = dyn __9(arma27, 4)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_arma27_;
  Rsh_Fir_array_args250[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L39(coefs34, r100, r101, r106)
  // L39(coefs34, r100, r101, r106)
  Rsh_Fir_reg_coefs36_ = Rsh_Fir_reg_coefs34_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r106_;
  goto L39_;

L202_:;
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args251);
  // if guard16 then L204() else L205()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L204()
    goto L204_;
  } else {
  // L205()
    goto L205_;
  }

L203_:;
  // r114 = dyn base15(<lang c(1.0, ma)>)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L42(r114)
  // L42(r114)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L42_;

L210_:;
  // goto L40(r122)
  // L40(r122)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r122_;
  goto L40_;

L212_:;
  // r123 = dyn warning1("seasonal MA part of model is not invertible")
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L213() else D63()
  // L213()
  goto L213_;

L220_:;
  // se_fit2 = force? se_fit1
  Rsh_Fir_reg_se_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_se_fit1_);
  // checkMissing(se_fit2)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_se_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty()));
  // c32 = `as.logical`(se_fit2)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_se_fit2_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args255);
  // if c32 then L221() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L221()
    goto L221_;
  } else {
  // L47()
    goto L47_;
  }

D40_:;
  // deopt 141 [r63]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 215 [coefs32, r97]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_coefs32_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(215, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 241 [r120]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r120_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 249 [r123]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L43_:;
  // polyroot1 = ldf polyroot in base
  Rsh_Fir_reg_polyroot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r119 = dyn polyroot1(r117)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_polyroot1_, 1, Rsh_Fir_array_args256, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L208() else D59()
  // L208()
  goto L208_;

L47_:;
  // pred2 = ld pred
  Rsh_Fir_reg_pred2_ = Rsh_Fir_load(Rsh_const(CCP, 87), RHO);
  // check L230() else D74()
  // L230()
  goto L230_;

L141_:;
  // goto L19(r63)
  // L19(r63)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r63_;
  goto L19_;

L192_:;
  // dx34 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // goto L38(coefs25, dx34)
  // L38(coefs25, dx34)
  Rsh_Fir_reg_coefs32_ = Rsh_Fir_reg_coefs25_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L38_;

L193_:;
  // goto L37(coefs32, r97)
  // L37(coefs32, r97)
  Rsh_Fir_reg_coefs28_ = Rsh_Fir_reg_coefs32_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r97_;
  goto L37_;

L197_:;
  // dx36 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty());
  // goto L39(coefs28, r95, 1, dx36)
  // L39(coefs28, r95, 1, dx36)
  Rsh_Fir_reg_coefs36_ = Rsh_Fir_reg_coefs28_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_r105_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L39_;

L204_:;
  // ma2 = ld ma
  Rsh_Fir_reg_ma2_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L206() else D57()
  // L206()
  goto L206_;

L205_:;
  // r116 = dyn base16(1.0, <sym ma>)
  SEXP Rsh_Fir_array_args259[2];
  Rsh_Fir_array_args259[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args259[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L43(r116)
  // L43(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L43_;

L209_:;
  // goto L41(r120)
  // L41(r120)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r120_;
  goto L41_;

L213_:;
  // goto L45(r123)
  // L45(r123)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r123_;
  goto L45_;

L221_:;
  // ts1 = ldf ts
  Rsh_Fir_reg_ts1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // check L222() else D69()
  // L222()
  goto L222_;

D57_:;
  // deopt 234 [ma2]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_ma2_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 239 [r119]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 272 []
  Rsh_Fir_deopt(272, 0, NULL, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 290 [pred2]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_pred2_;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L206_:;
  // ma3 = force? ma2
  Rsh_Fir_reg_ma3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma2_);
  // checkMissing(ma3)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_ma3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r118 = dyn c26(1.0, ma3)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_ma3_;
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L207() else D58()
  // L207()
  goto L207_;

L208_:;
  // goto L42(r119)
  // L42(r119)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r119_;
  goto L42_;

L222_:;
  // p14 = prom<V +>{
  //   sym17 = ldf sqrt;
  //   base17 = ldf sqrt in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L2() else L3();
  // L0(r142):
  //   return r142;
  // L2():
  //   z4 = ld z;
  //   z5 = force? z4;
  //   checkMissing(z5);
  //   c33 = `is.object`(z5);
  //   if c33 then L4() else L5(z5);
  // L3():
  //   r141 = dyn base17(<lang `*`(`[[`(z, 2), `$`(object, sigma2))>);
  //   goto L0(r141);
  // L1(dx47):
  //   object21 = ld object;
  //   object22 = force? object21;
  //   checkMissing(object22);
  //   c34 = `is.object`(object22);
  //   if c34 then L8() else L9(dx47, object22);
  // L4():
  //   dr40 = tryDispatchBuiltin.1("[[", z5);
  //   dc20 = getTryDispatchBuiltinDispatched(dr40);
  //   if dc20 then L6() else L5(dr40);
  // L5(z7):
  //   __14 = ldf `[[` in base;
  //   r143 = dyn __14(z7, 2);
  //   goto L1(r143);
  // L6():
  //   dx46 = getTryDispatchBuiltinValue(dr40);
  //   goto L1(dx46);
  // L7(dx52, dx53):
  //   r145 = `*`(dx52, dx53);
  //   r146 = sqrt(r145);
  //   goto L0(r146);
  // L8():
  //   dr42 = tryDispatchBuiltin.1("$", object22);
  //   dc21 = getTryDispatchBuiltinDispatched(dr42);
  //   if dc21 then L10() else L9(dx47, dr42);
  // L9(dx49, object24):
  //   r144 = `$`(object24, <sym sigma2>);
  //   goto L7(dx49, r144);
  // L10():
  //   dx51 = getTryDispatchBuiltinValue(dr42);
  //   goto L7(dx47, dx51);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_14, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   xtsp8 = ld xtsp;
  //   xtsp9 = force? xtsp8;
  //   checkMissing(xtsp9);
  //   c35 = `is.object`(xtsp9);
  //   if c35 then L1() else L2(xtsp9);
  // L0(dx55):
  //   deltat1 = ldf deltat;
  //   p15 = prom<V +>{
  //     rsd6 = ld rsd;
  //     rsd7 = force? rsd6;
  //     checkMissing(rsd7);
  //     return rsd7;
  //   };
  //   r150 = dyn deltat1(p15);
  //   r151 = `+`(dx55, r150);
  //   return r151;
  // L1():
  //   dr44 = tryDispatchBuiltin.1("[", xtsp9);
  //   dc22 = getTryDispatchBuiltinDispatched(dr44);
  //   if dc22 then L3() else L2(dr44);
  // L2(xtsp11):
  //   __15 = ldf `[` in base;
  //   r148 = dyn __15(xtsp11, 2);
  //   goto L0(r148);
  // L3():
  //   dx54 = getTryDispatchBuiltinValue(dr44);
  //   goto L0(dx54);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_15, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   xtsp12 = ld xtsp;
  //   xtsp13 = force? xtsp12;
  //   checkMissing(xtsp13);
  //   c36 = `is.object`(xtsp13);
  //   if c36 then L1() else L2(xtsp13);
  // L0(dx57):
  //   return dx57;
  // L1():
  //   dr46 = tryDispatchBuiltin.1("[", xtsp13);
  //   dc23 = getTryDispatchBuiltinDispatched(dr46);
  //   if dc23 then L3() else L2(dr46);
  // L2(xtsp15):
  //   __16 = ldf `[` in base;
  //   r153 = dyn __16(xtsp15, 3);
  //   goto L0(r153);
  // L3():
  //   dx56 = getTryDispatchBuiltinValue(dr46);
  //   goto L0(dx56);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_17, 0, NULL, CCP, RHO);
  // r155 = dyn ts1[, start, frequency](p14, p16, p17)
  SEXP Rsh_Fir_array_args293[3];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args293[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args293[2] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names81[3];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = Rsh_const(CCP, 85);
  Rsh_Fir_array_arg_names81[2] = Rsh_const(CCP, 86);
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts1_, 3, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L223() else D70()
  // L223()
  goto L223_;

L230_:;
  // pred3 = force? pred2
  Rsh_Fir_reg_pred3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred2_);
  // checkMissing(pred3)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_pred3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pred3
  return Rsh_Fir_reg_pred3_;

D58_:;
  // deopt 237 [r118]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 278 [r155]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L207_:;
  // goto L43(r118)
  // L43(r118)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r118_;
  goto L43_;

L223_:;
  // st se = r155
  Rsh_Fir_store(Rsh_const(CCP, 94), Rsh_Fir_reg_r155_, RHO);
  (void)(Rsh_Fir_reg_r155_);
  // sym18 = ldf list
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base18 = ldf list in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args295[2];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args295[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args295);
  // if guard18 then L224() else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L224()
    goto L224_;
  } else {
  // L225()
    goto L225_;
  }

L48_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r157
  return Rsh_Fir_reg_r157_;

L224_:;
  // pred = ld pred
  Rsh_Fir_reg_pred = Rsh_Fir_load(Rsh_const(CCP, 87), RHO);
  // check L226() else D71()
  // L226()
  goto L226_;

L225_:;
  // r156 = dyn base18[pred, se](<sym pred>, <sym se>)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_arg_names82[1] = Rsh_const(CCP, 94);
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L48(r156)
  // L48(r156)
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r156_;
  goto L48_;

D71_:;
  // deopt 282 [pred]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_pred;
  Rsh_Fir_deopt(282, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L226_:;
  // pred1 = force? pred
  Rsh_Fir_reg_pred1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred);
  // checkMissing(pred1)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_pred1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // se = ld se
  Rsh_Fir_reg_se = Rsh_Fir_load(Rsh_const(CCP, 94), RHO);
  // check L227() else D72()
  // L227()
  goto L227_;

D72_:;
  // deopt 285 [se]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_se;
  Rsh_Fir_deopt(285, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L227_:;
  // se1 = force? se
  Rsh_Fir_reg_se1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_se);
  // checkMissing(se1)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_se1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r158 = dyn list(pred1, se1)
  SEXP Rsh_Fir_array_args299[2];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_pred1_;
  Rsh_Fir_array_args299[1] = Rsh_Fir_reg_se1_;
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 2, Rsh_Fir_array_args299, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L228() else D73()
  // L228()
  goto L228_;

D73_:;
  // deopt 289 [r158]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_deopt(289, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L228_:;
  // goto L48(r158)
  // L48(r158)
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r158_;
  goto L48_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xr2_;
  SEXP Rsh_Fir_reg_xr3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xr2 = ld xr
  Rsh_Fir_reg_xr2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // xr3 = force? xr2
  Rsh_Fir_reg_xr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xr2_);
  // checkMissing(xr3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_xr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return xr3
  return Rsh_Fir_reg_xr3_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xreg;
  SEXP Rsh_Fir_reg_xreg1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xreg = ld xreg
  Rsh_Fir_reg_xreg = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // xreg1 = force? xreg
  Rsh_Fir_reg_xreg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xreg);
  // checkMissing(xreg1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_xreg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return xreg1
  return Rsh_Fir_reg_xreg1_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_newxreg1_;
  SEXP Rsh_Fir_reg_newxreg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // newxreg1 = ld newxreg
  Rsh_Fir_reg_newxreg1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // newxreg2 = force? newxreg1
  Rsh_Fir_reg_newxreg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newxreg1_);
  // checkMissing(newxreg2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_newxreg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return newxreg2
  return Rsh_Fir_reg_newxreg2_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rsd;
  SEXP Rsh_Fir_reg_rsd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // rsd = ld rsd
  Rsh_Fir_reg_rsd = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // rsd1 = force? rsd
  Rsh_Fir_reg_rsd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rsd);
  // checkMissing(rsd1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_rsd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return rsd1
  return Rsh_Fir_reg_rsd1_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf rep
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base5 = ldf rep in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r42 = dyn rep(1.0, <sym n.ahead>)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base5(1.0, <sym n.ahead>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_newxreg3_;
  SEXP Rsh_Fir_reg_newxreg4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // newxreg3 = ld newxreg
  Rsh_Fir_reg_newxreg3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // newxreg4 = force? newxreg3
  Rsh_Fir_reg_newxreg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newxreg3_);
  // checkMissing(newxreg4)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_newxreg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return newxreg4
  return Rsh_Fir_reg_newxreg4_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_newxreg5_;
  SEXP Rsh_Fir_reg_newxreg6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // newxreg5 = ld newxreg
  Rsh_Fir_reg_newxreg5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // newxreg6 = force? newxreg5
  Rsh_Fir_reg_newxreg6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newxreg5_);
  // checkMissing(newxreg6)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_newxreg6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return newxreg6
  return Rsh_Fir_reg_newxreg6_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_newxreg7_;
  SEXP Rsh_Fir_reg_newxreg8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // newxreg7 = ld newxreg
  Rsh_Fir_reg_newxreg7_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // newxreg8 = force? newxreg7
  Rsh_Fir_reg_newxreg8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newxreg7_);
  // checkMissing(newxreg8)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_newxreg8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // return newxreg8
  return Rsh_Fir_reg_newxreg8_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_ahead1_;
  SEXP Rsh_Fir_reg_n_ahead2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // n_ahead1 = ld `n.ahead`
  Rsh_Fir_reg_n_ahead1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n_ahead2 = force? n_ahead1
  Rsh_Fir_reg_n_ahead2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_ahead1_);
  // checkMissing(n_ahead2)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_n_ahead2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // return n_ahead2
  return Rsh_Fir_reg_n_ahead2_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object17_;
  SEXP Rsh_Fir_reg_object18_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_object20_;
  SEXP Rsh_Fir_reg_dr32_;
  SEXP Rsh_Fir_reg_dc16_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_reg_r127_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(object18)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args161);
  // if c28 then L1() else L2(object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object18)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // r127 = `$`(object20, <sym model>)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args164);
  // goto L0(r127)
  // L0(r127)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r127_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_dr34_;
  SEXP Rsh_Fir_reg_dc17_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg___11_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_xm;
  SEXP Rsh_Fir_reg_xm1_;
  SEXP Rsh_Fir_reg_r131_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(z1)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args196);
  // if c29 then L1() else L2(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L2_;
  }

L0_:;
  // xm = ld xm
  Rsh_Fir_reg_xm = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // xm1 = force? xm
  Rsh_Fir_reg_xm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xm);
  // checkMissing(xm1)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_xm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // r131 = `+`(dx41, xm1)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_xm1_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args198);
  // return r131
  return Rsh_Fir_reg_r131_;

L1_:;
  // dr34 = tryDispatchBuiltin.1("[[", z1)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args199);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc17 then L3() else L2(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr34)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr34_;
    goto L2_;
  }

L2_:;
  // __11 = ldf `[[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r130 = dyn __11(z3, 1)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r130_;
  goto L0_;

L3_:;
  // dx40 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L0(dx40)
  // L0(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xtsp;
  SEXP Rsh_Fir_reg_xtsp1_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_xtsp3_;
  SEXP Rsh_Fir_reg_dr36_;
  SEXP Rsh_Fir_reg_dc18_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_reg___12_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_deltat;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_r136_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xtsp = ld xtsp
  Rsh_Fir_reg_xtsp = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xtsp1 = force? xtsp
  Rsh_Fir_reg_xtsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp);
  // checkMissing(xtsp1)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_xtsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(xtsp1)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args204);
  // if c30 then L1() else L2(xtsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp1)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_xtsp1_;
    goto L2_;
  }

L0_:;
  // deltat = ldf deltat
  Rsh_Fir_reg_deltat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // p11 = prom<V +>{
  //   rsd4 = ld rsd;
  //   rsd5 = force? rsd4;
  //   checkMissing(rsd5);
  //   return rsd5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_12, 0, NULL, CCP, RHO);
  // r135 = dyn deltat(p11)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deltat, 1, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names55, CCP, RHO);
  // r136 = `+`(dx43, r135)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args207);
  // return r136
  return Rsh_Fir_reg_r136_;

L1_:;
  // dr36 = tryDispatchBuiltin.1("[", xtsp1)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args208);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if dc18 then L3() else L2(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr36)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_dr36_;
    goto L2_;
  }

L2_:;
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r133 = dyn __12(xtsp3, 2)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_xtsp3_;
  Rsh_Fir_array_args210[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r133)
  // L0(r133)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r133_;
  goto L0_;

L3_:;
  // dx42 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // goto L0(dx42)
  // L0(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rsd4_;
  SEXP Rsh_Fir_reg_rsd5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // rsd4 = ld rsd
  Rsh_Fir_reg_rsd4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // rsd5 = force? rsd4
  Rsh_Fir_reg_rsd5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rsd4_);
  // checkMissing(rsd5)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_rsd5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // return rsd5
  return Rsh_Fir_reg_rsd5_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xtsp4_;
  SEXP Rsh_Fir_reg_xtsp5_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_xtsp7_;
  SEXP Rsh_Fir_reg_dr38_;
  SEXP Rsh_Fir_reg_dc19_;
  SEXP Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_reg_dx45_;
  SEXP Rsh_Fir_reg___13_;
  SEXP Rsh_Fir_reg_r138_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xtsp4 = ld xtsp
  Rsh_Fir_reg_xtsp4_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xtsp5 = force? xtsp4
  Rsh_Fir_reg_xtsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp4_);
  // checkMissing(xtsp5)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_xtsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(xtsp5)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args213);
  // if c31 then L1() else L2(xtsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp5)
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_xtsp5_;
    goto L2_;
  }

L0_:;
  // return dx45
  return Rsh_Fir_reg_dx45_;

L1_:;
  // dr38 = tryDispatchBuiltin.1("[", xtsp5)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args214);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if dc19 then L3() else L2(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr38)
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_dr38_;
    goto L2_;
  }

L2_:;
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r138 = dyn __13(xtsp7, 3)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_xtsp7_;
  Rsh_Fir_array_args216[1] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r138)
  // L0(r138)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r138_;
  goto L0_;

L3_:;
  // dx44 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // goto L0(dx44)
  // L0(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_dr40_;
  SEXP Rsh_Fir_reg_dc20_;
  SEXP Rsh_Fir_reg_dx46_;
  SEXP Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_reg___14_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_object21_;
  SEXP Rsh_Fir_reg_object22_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_dx49_;
  SEXP Rsh_Fir_reg_object24_;
  SEXP Rsh_Fir_reg_dr42_;
  SEXP Rsh_Fir_reg_dc21_;
  SEXP Rsh_Fir_reg_dx51_;
  SEXP Rsh_Fir_reg_dx52_;
  SEXP Rsh_Fir_reg_dx53_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_r146_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // sym17 = ldf sqrt
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // base17 = ldf sqrt in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args262);
  // if guard17 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r142
  return Rsh_Fir_reg_r142_;

L2_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(z5)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args264);
  // if c33 then L4() else L5(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L4()
    goto L4_;
  } else {
  // L5(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L5_;
  }

L3_:;
  // r141 = dyn base17(<lang `*`(`[[`(z, 2), `$`(object, sigma2))>)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args265, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L0(r141)
  // L0(r141)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r141_;
  goto L0_;

L1_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(object22)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args267);
  // if c34 then L8() else L9(dx47, object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L8()
    goto L8_;
  } else {
  // L9(dx47, object22)
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx47_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L9_;
  }

L4_:;
  // dr40 = tryDispatchBuiltin.1("[[", z5)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args268[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args268);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // if dc20 then L6() else L5(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr40)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr40_;
    goto L5_;
  }

L5_:;
  // __14 = ldf `[[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r143 = dyn __14(z7, 2)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L1(r143)
  // L1(r143)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r143_;
  goto L1_;

L6_:;
  // dx46 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // goto L1(dx46)
  // L1(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L1_;

L7_:;
  // r145 = `*`(dx52, dx53)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dx52_;
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args272);
  // r146 = sqrt(r145)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args273);
  // goto L0(r146)
  // L0(r146)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r146_;
  goto L0_;

L8_:;
  // dr42 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args274);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // if dc21 then L10() else L9(dx47, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dx47, dr42)
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx47_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr42_;
    goto L9_;
  }

L9_:;
  // r144 = `$`(object24, <sym sigma2>)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args276[1] = Rsh_const(CCP, 93);
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args276);
  // goto L7(dx49, r144)
  // L7(dx49, r144)
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r144_;
  goto L7_;

L10_:;
  // dx51 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty());
  // goto L7(dx47, dx51)
  // L7(dx47, dx51)
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx51_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xtsp8_;
  SEXP Rsh_Fir_reg_xtsp9_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_xtsp11_;
  SEXP Rsh_Fir_reg_dr44_;
  SEXP Rsh_Fir_reg_dc22_;
  SEXP Rsh_Fir_reg_dx54_;
  SEXP Rsh_Fir_reg_dx55_;
  SEXP Rsh_Fir_reg___15_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_deltat1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_reg_r151_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xtsp8 = ld xtsp
  Rsh_Fir_reg_xtsp8_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xtsp9 = force? xtsp8
  Rsh_Fir_reg_xtsp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp8_);
  // checkMissing(xtsp9)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_xtsp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(xtsp9)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args279);
  // if c35 then L1() else L2(xtsp9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp9)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_xtsp9_;
    goto L2_;
  }

L0_:;
  // deltat1 = ldf deltat
  Rsh_Fir_reg_deltat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // p15 = prom<V +>{
  //   rsd6 = ld rsd;
  //   rsd7 = force? rsd6;
  //   checkMissing(rsd7);
  //   return rsd7;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1768932914_16, 0, NULL, CCP, RHO);
  // r150 = dyn deltat1(p15)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deltat1_, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names78, CCP, RHO);
  // r151 = `+`(dx55, r150)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_args282[1] = Rsh_Fir_reg_r150_;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args282);
  // return r151
  return Rsh_Fir_reg_r151_;

L1_:;
  // dr44 = tryDispatchBuiltin.1("[", xtsp9)
  SEXP Rsh_Fir_array_args283[2];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args283[1] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args283);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty());
  // if dc22 then L3() else L2(dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr44)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_dr44_;
    goto L2_;
  }

L2_:;
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r148 = dyn __15(xtsp11, 2)
  SEXP Rsh_Fir_array_args285[2];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_xtsp11_;
  Rsh_Fir_array_args285[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L0(r148)
  // L0(r148)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r148_;
  goto L0_;

L3_:;
  // dx54 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // goto L0(dx54)
  // L0(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rsd6_;
  SEXP Rsh_Fir_reg_rsd7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // rsd6 = ld rsd
  Rsh_Fir_reg_rsd6_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // rsd7 = force? rsd6
  Rsh_Fir_reg_rsd7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rsd6_);
  // checkMissing(rsd7)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_rsd7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // return rsd7
  return Rsh_Fir_reg_rsd7_;
}
SEXP Rsh_Fir_user_promise_inner1768932914_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xtsp12_;
  SEXP Rsh_Fir_reg_xtsp13_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_xtsp15_;
  SEXP Rsh_Fir_reg_dr46_;
  SEXP Rsh_Fir_reg_dc23_;
  SEXP Rsh_Fir_reg_dx56_;
  SEXP Rsh_Fir_reg_dx57_;
  SEXP Rsh_Fir_reg___16_;
  SEXP Rsh_Fir_reg_r153_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1768932914/0: expected 0, got %d", NCAPTURES);

  // xtsp12 = ld xtsp
  Rsh_Fir_reg_xtsp12_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xtsp13 = force? xtsp12
  Rsh_Fir_reg_xtsp13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp12_);
  // checkMissing(xtsp13)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_xtsp13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(xtsp13)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args288);
  // if c36 then L1() else L2(xtsp13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp13)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_xtsp13_;
    goto L2_;
  }

L0_:;
  // return dx57
  return Rsh_Fir_reg_dx57_;

L1_:;
  // dr46 = tryDispatchBuiltin.1("[", xtsp13)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args289[1] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args289);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // if dc23 then L3() else L2(dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr46)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_dr46_;
    goto L2_;
  }

L2_:;
  // __16 = ldf `[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r153 = dyn __16(xtsp15, 3)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_xtsp15_;
  Rsh_Fir_array_args291[1] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args291, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L0(r153)
  // L0(r153)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_r153_;
  goto L0_;

L3_:;
  // dx56 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // goto L0(dx56)
  // L0(dx56)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx56_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_c1_2;
  SEXP Rsh_Fir_reg_NCOL;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r3_2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 95), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args300);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_reg_c1_2 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args301);
  // if c1 then L5() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_2)) {
  // L5()
    goto L5_;
  } else {
  // L1()
    goto L1_;
  }

L2_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 95), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L1_:;
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 96), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L4_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // c = `==`(x2, NULL)
  SEXP Rsh_Fir_array_args304[2];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args304[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args304);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_c2;
  goto L0_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 0.0
  return Rsh_const(CCP, 10);

D1_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, 0, NULL, CCP, RHO);
  // r3 = dyn NCOL(p)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_2;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 95), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
