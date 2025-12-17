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
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1026646083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1026646083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1026646083_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1026646083_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_title;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_title1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_title2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_matplot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_axis;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_abline;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r56_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1026646083
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1026646083_, RHO, CCP);
  // st title = r
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
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn plot[, main](p, "")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // title = ldf title
  Rsh_Fir_reg_title = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r3 = dyn title[main]("Stopping Distance versus Speed")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_title, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   cars2 = ld cars;
  //   cars3 = force? cars2;
  //   checkMissing(cars3);
  //   return cars3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn plot1[, main](p1, "")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 19 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // title1 = ldf title
  Rsh_Fir_reg_title1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   list = ldf list in base;
  //   r8 = dyn list("Stopping Distance versus Speed", 1.5, "red", 3.0);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base[, cex, col, font]("Stopping Distance versus Speed", 1.5, "red", 3.0);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn title1[main](p2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_title1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r11 = dyn plot2[, `col.axis`, `col.lab`](1.0, "sky blue", "thistle")
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 32 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // title2 = ldf title
  Rsh_Fir_reg_title2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r12 = dyn title2[, sub, `cex.main`, `font.main`, `col.main`, `cex.sub`, `font.sub`, `col.sub`]("Main Title", "subtitle", 2.0, 4.0, "blue", 0.75, 3.0, "red")
  SEXP Rsh_Fir_array_args10[8];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names7[8];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names7[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names7[5] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names7[6] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names7[7] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_title2_, 8, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 50 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   return -4.0;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r14 = dyn seq[, , `length.out`](p3, 4.0, 101.0)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 57 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // st x = r14
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   sym1 = ldf sin;
  //   base1 = ldf sin in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   r17 = sin(x1);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base1(<sym x>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf cos;
  //   base2 = ldf cos in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   r21 = cos(x3);
  //   goto L0(r21);
  // L2():
  //   r19 = dyn base2(<sym x>);
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r23 = dyn cbind(p4, p5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 63 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // st y = r23
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // matplot = ldf matplot
  Rsh_Fir_reg_matplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p6 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym3 = ldf expression;
  //   base3 = ldf expression in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   expression = ldf expression in base;
  //   r28 = dyn expression(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base3(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym4 = ldf expression;
  //   base4 = ldf expression in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   expression1 = ldf expression in base;
  //   r32 = dyn expression1(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>);
  //   goto L0(r32);
  // L2():
  //   r30 = dyn base4(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   sym5 = ldf expression;
  //   base5 = ldf expression in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   expression2 = ldf expression in base;
  //   r36 = dyn expression2(<lang paste("Phase Angle ", phi)>);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base5(<lang paste("Phase Angle ", phi)>);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r38 = dyn matplot[, , type, xaxt, main, ylab, xlab, `col.main`](p6, p7, "l", "n", p8, p9, p10, "blue")
  SEXP Rsh_Fir_array_args32[8];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args32[4] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args32[5] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args32[6] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args32[7] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names18[8];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names18[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names18[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names18[5] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names18[6] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names18[7] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matplot, 8, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 81 [r38]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // axis = ldf axis
  Rsh_Fir_reg_axis = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L18() else D18()
  // L18()
  goto L18_;

D18_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p11 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r40):
  //   return r40;
  // L1():
  //   c = ldf c in base;
  //   r41 = dyn c(-3.141592653589793, -1.5707963267948966, 0.0, 1.5707963267948966, 3.141592653589793);
  //   goto L0(r41);
  // L2():
  //   r39 = dyn base6(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
  //   goto L0(r39);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym7 = ldf expression;
  //   base7 = ldf expression in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   expression3 = ldf expression in base;
  //   r45 = dyn expression3(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
  //   goto L0(r45);
  // L2():
  //   r43 = dyn base7(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
  //   goto L0(r43);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r47 = dyn axis[, at, labels](1.0, p11, p12)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axis, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L19() else D19()
  // L19()
  goto L19_;

D19_:;
  // deopt 89 [r47]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L19_:;
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L20() else D20()
  // L20()
  goto L20_;

D20_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p13 = prom<V +>{
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r51, r52):
  //   r54 = `*`(r51, r52);
  //   return r54;
  // L1():
  //   c1 = ldf c in base;
  //   r53 = dyn c1(-1.0, 1.0);
  //   goto L0(1.5707963267948966, r53);
  // L2():
  //   r50 = dyn base8(<lang `-`(1.0)>, 1.0);
  //   goto L0(1.5707963267948966, r50);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r56 = dyn abline[h, v, lty, lwd, col](0.0, p13, 2.0, 0.1, "gray70")
  SEXP Rsh_Fir_array_args44[5];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args44[4] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_arg_names26[3] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names26[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 5, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L21() else D21()
  // L21()
  goto L21_;

D21_:;
  // deopt 102 [r56]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars;
  SEXP Rsh_Fir_reg_cars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars = ld cars
  Rsh_Fir_reg_cars = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // cars1 = force? cars
  Rsh_Fir_reg_cars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars);
  // checkMissing(cars1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_cars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return cars1
  return Rsh_Fir_reg_cars1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars2_;
  SEXP Rsh_Fir_reg_cars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars2 = ld cars
  Rsh_Fir_reg_cars2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // cars3 = force? cars2
  Rsh_Fir_reg_cars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars2_);
  // checkMissing(cars3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_cars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return cars3
  return Rsh_Fir_reg_cars3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r8 = dyn list("Stopping Distance versus Speed", 1.5, "red", 3.0)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base[, cex, col, font]("Stopping Distance versus Speed", 1.5, "red", 3.0)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -4.0
  return Rsh_const(CCP, 32);
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf sin
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base1 = ldf sin in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r17 = sin(x1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(176, RHO, 1, Rsh_Fir_array_args14);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf cos
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base2 = ldf cos in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r21 = cos(x3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(175, RHO, 1, Rsh_Fir_array_args18);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L0_;

L2_:;
  // r19 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf expression
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base3 = ldf expression in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r28 = dyn expression(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base3(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_expression1_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf expression
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base4 = ldf expression in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // expression1 = ldf expression in base
  Rsh_Fir_reg_expression1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r32 = dyn expression1(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // r30 = dyn base4(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_expression2_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf expression
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base5 = ldf expression in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // expression2 = ldf expression in base
  Rsh_Fir_reg_expression2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r36 = dyn expression2(<lang paste("Phase Angle ", phi)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base5(<lang paste("Phase Angle ", phi)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r41 = dyn c(-3.141592653589793, -1.5707963267948966, 0.0, 1.5707963267948966, 3.141592653589793)
  SEXP Rsh_Fir_array_args34[5];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names19[5];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 5, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L0_;

L2_:;
  // r39 = dyn base6(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>)
  SEXP Rsh_Fir_array_args35[5];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names20[5];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 5, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_expression3_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf expression
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base7 = ldf expression in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_;

L1_:;
  // expression3 = ldf expression in base
  Rsh_Fir_reg_expression3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r45 = dyn expression3(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>)
  SEXP Rsh_Fir_array_args37[5];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args37[4] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names21[5];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression3_, 5, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L0_;

L2_:;
  // r43 = dyn base7(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>)
  SEXP Rsh_Fir_array_args38[5];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args38[4] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names22[5];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 5, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r54 = `*`(r51, r52)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args41);
  // return r54
  return Rsh_Fir_reg_r54_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r53 = dyn c1(-1.0, 1.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(1.5707963267948966, r53)
  // L0(1.5707963267948966, r53)
  Rsh_Fir_reg_r51_ = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L0_;

L2_:;
  // r50 = dyn base8(<lang `-`(1.0)>, 1.0)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(1.5707963267948966, r50)
  // L0(1.5707963267948966, r50)
  Rsh_Fir_reg_r51_ = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1026646083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1026646083 dynamic dispatch ([main, sub, xlab, ylab, line, outer, `...`])

  return Rsh_Fir_user_version_inner1026646083_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1026646083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1026646083 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1026646083/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_main;
  SEXP Rsh_Fir_reg_sub;
  SEXP Rsh_Fir_reg_xlab;
  SEXP Rsh_Fir_reg_ylab;
  SEXP Rsh_Fir_reg_line;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_main_isMissing;
  SEXP Rsh_Fir_reg_main_orDefault;
  SEXP Rsh_Fir_reg_sub_isMissing;
  SEXP Rsh_Fir_reg_sub_orDefault;
  SEXP Rsh_Fir_reg_xlab_isMissing;
  SEXP Rsh_Fir_reg_xlab_orDefault;
  SEXP Rsh_Fir_reg_ylab_isMissing;
  SEXP Rsh_Fir_reg_ylab_orDefault;
  SEXP Rsh_Fir_reg_line_isMissing;
  SEXP Rsh_Fir_reg_line_orDefault;
  SEXP Rsh_Fir_reg_outer_isMissing;
  SEXP Rsh_Fir_reg_outer_orDefault;
  SEXP Rsh_Fir_reg_as_graphicsAnnot;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_as_graphicsAnnot1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_as_graphicsAnnot2_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_as_graphicsAnnot3_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg__External_graphics;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r20_1;

  // Bind parameters
  Rsh_Fir_reg_main = PARAMS[0];
  Rsh_Fir_reg_sub = PARAMS[1];
  Rsh_Fir_reg_xlab = PARAMS[2];
  Rsh_Fir_reg_ylab = PARAMS[3];
  Rsh_Fir_reg_line = PARAMS[4];
  Rsh_Fir_reg_outer = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // main_isMissing = missing.0(main)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_main;
  Rsh_Fir_reg_main_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args45);
  // if main_isMissing then L0(NULL) else L0(main)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_main_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_main_orDefault = Rsh_const(CCP, 74);
    goto L0_;
  } else {
  // L0(main)
    Rsh_Fir_reg_main_orDefault = Rsh_Fir_reg_main;
    goto L0_;
  }

L0_:;
  // st main = main_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_main_orDefault, RHO);
  (void)(Rsh_Fir_reg_main_orDefault);
  // sub_isMissing = missing.0(sub)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sub;
  Rsh_Fir_reg_sub_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args46);
  // if sub_isMissing then L1(NULL) else L1(sub)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sub_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_sub_orDefault = Rsh_const(CCP, 74);
    goto L1_;
  } else {
  // L1(sub)
    Rsh_Fir_reg_sub_orDefault = Rsh_Fir_reg_sub;
    goto L1_;
  }

L1_:;
  // st sub = sub_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_sub_orDefault, RHO);
  (void)(Rsh_Fir_reg_sub_orDefault);
  // xlab_isMissing = missing.0(xlab)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_xlab;
  Rsh_Fir_reg_xlab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args47);
  // if xlab_isMissing then L2(NULL) else L2(xlab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlab_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_xlab_orDefault = Rsh_const(CCP, 74);
    goto L2_;
  } else {
  // L2(xlab)
    Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_xlab;
    goto L2_;
  }

L2_:;
  // st xlab = xlab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_xlab_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlab_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args48);
  // if ylab_isMissing then L3(NULL) else L3(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 74);
    goto L3_;
  } else {
  // L3(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L3_;
  }

L3_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // line_isMissing = missing.0(line)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_line;
  Rsh_Fir_reg_line_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args49);
  // if line_isMissing then L4(NA_LGL) else L4(line)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_line_isMissing)) {
  // L4(NA_LGL)
    Rsh_Fir_reg_line_orDefault = Rsh_const(CCP, 75);
    goto L4_;
  } else {
  // L4(line)
    Rsh_Fir_reg_line_orDefault = Rsh_Fir_reg_line;
    goto L4_;
  }

L4_:;
  // st line = line_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_line_orDefault, RHO);
  (void)(Rsh_Fir_reg_line_orDefault);
  // outer_isMissing = missing.0(outer)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_outer;
  Rsh_Fir_reg_outer_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args50);
  // if outer_isMissing then L5(FALSE) else L5(outer)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outer_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_outer_orDefault = Rsh_const(CCP, 77);
    goto L5_;
  } else {
  // L5(outer)
    Rsh_Fir_reg_outer_orDefault = Rsh_Fir_reg_outer;
    goto L5_;
  }

L5_:;
  // st outer = outer_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_outer_orDefault, RHO);
  (void)(Rsh_Fir_reg_outer_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 79), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // as_graphicsAnnot = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   main1 = ld main;
  //   main2 = force? main1;
  //   checkMissing(main2);
  //   return main2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_, 0, NULL, CCP, RHO);
  // r1 = dyn as_graphicsAnnot(p)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // st main = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // as_graphicsAnnot1 = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   sub1 = ld sub;
  //   sub2 = force? sub1;
  //   checkMissing(sub2);
  //   return sub2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_1, 0, NULL, CCP, RHO);
  // r3 = dyn as_graphicsAnnot1(p1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L11_:;
  // st sub = r3
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // as_graphicsAnnot2 = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = prom<V +>{
  //   xlab1 = ld xlab;
  //   xlab2 = force? xlab1;
  //   checkMissing(xlab2);
  //   return xlab2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_2, 0, NULL, CCP, RHO);
  // r5 = dyn as_graphicsAnnot2(p2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L13_:;
  // st xlab = r5
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // as_graphicsAnnot3 = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p3 = prom<V +>{
  //   ylab1 = ld ylab;
  //   ylab2 = force? ylab1;
  //   checkMissing(ylab2);
  //   return ylab2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_3, 0, NULL, CCP, RHO);
  // r7 = dyn as_graphicsAnnot3(p3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot3_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 18 [r7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L15_:;
  // st ylab = r7
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // sym = ldf `.External.graphics`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // base = ldf `.External.graphics` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L6_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L16_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base(<sym C_title>, <sym main>, <sym sub>, <sym xlab>, <sym ylab>, <sym line>, <sym outer>, <sym ...>)
  SEXP Rsh_Fir_array_args61[8];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args61[3] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args61[4] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args61[5] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args61[6] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args61[7] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names31[8];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_array_arg_names31[4] = R_MissingArg;
  Rsh_Fir_array_arg_names31[5] = R_MissingArg;
  Rsh_Fir_array_arg_names31[6] = R_MissingArg;
  Rsh_Fir_array_arg_names31[7] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 8, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_1;

L18_:;
  // p4 = prom<V +>{
  //   C_title = ld C_title;
  //   C_title1 = force? C_title;
  //   checkMissing(C_title1);
  //   return C_title1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   main3 = ld main;
  //   main4 = force? main3;
  //   checkMissing(main4);
  //   return main4;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sub3 = ld sub;
  //   sub4 = force? sub3;
  //   checkMissing(sub4);
  //   return sub4;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   xlab3 = ld xlab;
  //   xlab4 = force? xlab3;
  //   checkMissing(xlab4);
  //   return xlab4;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   ylab3 = ld ylab;
  //   ylab4 = force? ylab3;
  //   checkMissing(ylab4);
  //   return ylab4;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   line1 = ld line;
  //   line2 = force? line1;
  //   checkMissing(line2);
  //   return line2;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   outer1 = ld outer;
  //   outer2 = force? outer1;
  //   checkMissing(outer2);
  //   return outer2;
  // }
  Rsh_Fir_reg_p10_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1026646083_10, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 79), RHO);
  // r17 = dyn _External_graphics[, , , , , , , `...`](p4, p5, p6, p7, p8, p9, p10, ddd1)
  SEXP Rsh_Fir_array_args69[8];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args69[3] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args69[4] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args69[5] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_array_args69[6] = Rsh_Fir_reg_p10_1;
  Rsh_Fir_array_args69[7] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names32[8];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_array_arg_names32[6] = R_MissingArg;
  Rsh_Fir_array_arg_names32[7] = Rsh_const(CCP, 79);
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 8, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

L20_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r20 = dyn invisible()
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

L21_:;
  // r18 = dyn base1()
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 0, NULL, NULL, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_;
  goto L7_;

D9_:;
  // deopt 31 [r17]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 35 [r20]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L6()
  // L6()
  goto L6_;

L22_:;
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_1;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_main1_;
  SEXP Rsh_Fir_reg_main2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // main1 = ld main
  Rsh_Fir_reg_main1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // main2 = force? main1
  Rsh_Fir_reg_main2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_main1_);
  // checkMissing(main2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_main2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return main2
  return Rsh_Fir_reg_main2_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sub1_;
  SEXP Rsh_Fir_reg_sub2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // sub1 = ld sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // sub2 = force? sub1
  Rsh_Fir_reg_sub2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub1_);
  // checkMissing(sub2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sub2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return sub2
  return Rsh_Fir_reg_sub2_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xlab1_;
  SEXP Rsh_Fir_reg_xlab2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // xlab1 = ld xlab
  Rsh_Fir_reg_xlab1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // xlab2 = force? xlab1
  Rsh_Fir_reg_xlab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab1_);
  // checkMissing(xlab2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xlab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return xlab2
  return Rsh_Fir_reg_xlab2_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ylab1_;
  SEXP Rsh_Fir_reg_ylab2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return ylab2
  return Rsh_Fir_reg_ylab2_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_C_title;
  SEXP Rsh_Fir_reg_C_title1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // C_title = ld C_title
  Rsh_Fir_reg_C_title = Rsh_Fir_load(Rsh_const(CCP, 83), RHO);
  // C_title1 = force? C_title
  Rsh_Fir_reg_C_title1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_title);
  // checkMissing(C_title1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_C_title1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return C_title1
  return Rsh_Fir_reg_C_title1_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_main3_;
  SEXP Rsh_Fir_reg_main4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // main3 = ld main
  Rsh_Fir_reg_main3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // main4 = force? main3
  Rsh_Fir_reg_main4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_main3_);
  // checkMissing(main4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_main4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return main4
  return Rsh_Fir_reg_main4_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sub3_;
  SEXP Rsh_Fir_reg_sub4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // sub3 = ld sub
  Rsh_Fir_reg_sub3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // sub4 = force? sub3
  Rsh_Fir_reg_sub4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub3_);
  // checkMissing(sub4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sub4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return sub4
  return Rsh_Fir_reg_sub4_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xlab3_;
  SEXP Rsh_Fir_reg_xlab4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // xlab3 = ld xlab
  Rsh_Fir_reg_xlab3_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // xlab4 = force? xlab3
  Rsh_Fir_reg_xlab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab3_);
  // checkMissing(xlab4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_xlab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return xlab4
  return Rsh_Fir_reg_xlab4_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ylab3_;
  SEXP Rsh_Fir_reg_ylab4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // ylab3 = ld ylab
  Rsh_Fir_reg_ylab3_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // ylab4 = force? ylab3
  Rsh_Fir_reg_ylab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab3_);
  // checkMissing(ylab4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ylab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return ylab4
  return Rsh_Fir_reg_ylab4_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_line1_;
  SEXP Rsh_Fir_reg_line2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // line1 = ld line
  Rsh_Fir_reg_line1_ = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // line2 = force? line1
  Rsh_Fir_reg_line2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line1_);
  // checkMissing(line2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_line2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return line2
  return Rsh_Fir_reg_line2_;
}
SEXP Rsh_Fir_user_promise_inner1026646083_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_outer1_;
  SEXP Rsh_Fir_reg_outer2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1026646083/0: expected 0, got %d", NCAPTURES);

  // outer1 = ld outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // outer2 = force? outer1
  Rsh_Fir_reg_outer2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer1_);
  // checkMissing(outer2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_outer2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return outer2
  return Rsh_Fir_reg_outer2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
