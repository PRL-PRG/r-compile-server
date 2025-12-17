#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1166355896_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1166355896_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1166355896_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1166355896_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_setClass;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_setClass1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_setClass2_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_setClass3_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_setClass4_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_extends;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_selectSuperClasses;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_selectSuperClasses1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_selectSuperClasses2_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1166355896
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1166355896_, RHO, CCP);
  // st selectSuperClasses = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setClass = ldf setClass
  Rsh_Fir_reg_setClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn setClass("Root")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // setClass1 = ldf setClass
  Rsh_Fir_reg_setClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   c = ldf c in base;
  //   r4 = dyn c("integer");
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base[length]("integer");
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn setClass1[, contains, slots]("Base", "Root", p)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass1_, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // setClass2 = ldf setClass
  Rsh_Fir_reg_setClass2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c1 = ldf c in base;
  //   r9 = dyn c1("numeric");
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1[x]("numeric");
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r11 = dyn setClass2[, contains, slots]("A", "Base", p1)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass2_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // setClass3 = ldf setClass
  Rsh_Fir_reg_setClass3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   c2 = ldf c in base;
  //   r14 = dyn c2("character");
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2[y]("character");
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r16 = dyn setClass3[, contains, slots]("B", "Base", p2)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass3_, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // setClass4 = ldf setClass
  Rsh_Fir_reg_setClass4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p3 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c3 = ldf c in base;
  //   r19 = dyn c3("A", "B");
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base3("A", "B");
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r21 = dyn setClass4[, contains]("C", p3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass4_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 36 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // extends = ldf extends
  Rsh_Fir_reg_extends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r22 = dyn extends("C")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extends, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 40 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // selectSuperClasses = ldf selectSuperClasses
  Rsh_Fir_reg_selectSuperClasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r23 = dyn selectSuperClasses("C")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_selectSuperClasses, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 44 [r23]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // selectSuperClasses1 = ldf selectSuperClasses
  Rsh_Fir_reg_selectSuperClasses1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r24 = dyn selectSuperClasses1[, directOnly]("C", FALSE)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_selectSuperClasses1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // selectSuperClasses2 = ldf selectSuperClasses
  Rsh_Fir_reg_selectSuperClasses2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r25 = dyn selectSuperClasses2[, dropVirtual, directOnly]("C", TRUE, FALSE)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_selectSuperClasses2_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 58 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r4 = dyn c("integer")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base[length]("integer")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r9 = dyn c1("numeric")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1[x]("numeric")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r14 = dyn c2("character")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2[y]("character")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r19 = dyn c3("A", "B")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base3("A", "B")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1166355896_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1166355896 dynamic dispatch ([Class, dropVirtual, namesOnly, directOnly, simpleOnly, where])

  return Rsh_Fir_user_version_inner1166355896_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1166355896_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1166355896 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1166355896/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_Class;
  SEXP Rsh_Fir_reg_dropVirtual;
  SEXP Rsh_Fir_reg_namesOnly;
  SEXP Rsh_Fir_reg_directOnly;
  SEXP Rsh_Fir_reg_simpleOnly;
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg_dropVirtual_isMissing;
  SEXP Rsh_Fir_reg_dropVirtual_orDefault;
  SEXP Rsh_Fir_reg_namesOnly_isMissing;
  SEXP Rsh_Fir_reg_namesOnly_orDefault;
  SEXP Rsh_Fir_reg_directOnly_isMissing;
  SEXP Rsh_Fir_reg_directOnly_orDefault;
  SEXP Rsh_Fir_reg_simpleOnly_isMissing;
  SEXP Rsh_Fir_reg_simpleOnly_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_isClassDef;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_isClass;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg__selectSuperClasses;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r19_1;

  // Bind parameters
  Rsh_Fir_reg_Class = PARAMS[0];
  Rsh_Fir_reg_dropVirtual = PARAMS[1];
  Rsh_Fir_reg_namesOnly = PARAMS[2];
  Rsh_Fir_reg_directOnly = PARAMS[3];
  Rsh_Fir_reg_simpleOnly = PARAMS[4];
  Rsh_Fir_reg_where = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // dropVirtual_isMissing = missing.0(dropVirtual)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dropVirtual;
  Rsh_Fir_reg_dropVirtual_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args21);
  // if dropVirtual_isMissing then L0(FALSE) else L0(dropVirtual)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dropVirtual_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_dropVirtual_orDefault = Rsh_const(CCP, 17);
    goto L0_;
  } else {
  // L0(dropVirtual)
    Rsh_Fir_reg_dropVirtual_orDefault = Rsh_Fir_reg_dropVirtual;
    goto L0_;
  }

L0_:;
  // st dropVirtual = dropVirtual_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dropVirtual_orDefault, RHO);
  (void)(Rsh_Fir_reg_dropVirtual_orDefault);
  // namesOnly_isMissing = missing.0(namesOnly)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_namesOnly;
  Rsh_Fir_reg_namesOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args22);
  // if namesOnly_isMissing then L1(TRUE) else L1(namesOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_namesOnly_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_namesOnly_orDefault = Rsh_const(CCP, 19);
    goto L1_;
  } else {
  // L1(namesOnly)
    Rsh_Fir_reg_namesOnly_orDefault = Rsh_Fir_reg_namesOnly;
    goto L1_;
  }

L1_:;
  // st namesOnly = namesOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_namesOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_namesOnly_orDefault);
  // directOnly_isMissing = missing.0(directOnly)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_directOnly;
  Rsh_Fir_reg_directOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if directOnly_isMissing then L2(TRUE) else L2(directOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_directOnly_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_directOnly_orDefault = Rsh_const(CCP, 19);
    goto L2_;
  } else {
  // L2(directOnly)
    Rsh_Fir_reg_directOnly_orDefault = Rsh_Fir_reg_directOnly;
    goto L2_;
  }

L2_:;
  // st directOnly = directOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_directOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_directOnly_orDefault);
  // simpleOnly_isMissing = missing.0(simpleOnly)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_simpleOnly;
  Rsh_Fir_reg_simpleOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if simpleOnly_isMissing then L3() else L4(simpleOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_simpleOnly_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(simpleOnly)
    Rsh_Fir_reg_simpleOnly_orDefault = Rsh_Fir_reg_simpleOnly;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   directOnly1 = ld directOnly;
  //   directOnly2 = force? directOnly1;
  //   checkMissing(directOnly2);
  //   return directOnly2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_, 0, NULL, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_simpleOnly_orDefault = Rsh_Fir_reg_p1;
  goto L4_;

L4_:;
  // st simpleOnly = simpleOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_simpleOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_simpleOnly_orDefault);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args26);
  // if where_isMissing then L5() else L6(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   topenv = ldf topenv;
  //   p1 = prom<V +>{
  //     parent_frame = ldf `parent.frame`;
  //     r1 = dyn parent_frame();
  //     return r1;
  //   };
  //   r3 = dyn topenv(p1);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_1, 0, NULL, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p2_1;
  goto L6_;

L6_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // isClassDef = ldf isClassDef
  Rsh_Fir_reg_isClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p3 = prom<V +>{
  //   Class1 = ld Class;
  //   Class2 = force? Class1;
  //   checkMissing(Class2);
  //   return Class2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_3, 0, NULL, CCP, RHO);
  // r6 = dyn isClassDef(p3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isClassDef, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 [r6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L11_:;
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c then L12() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L12()
    goto L12_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // isClass = ldf isClass
  Rsh_Fir_reg_isClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L8_:;
  // st ext = r8
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // _selectSuperClasses = ldf `.selectSuperClasses`
  Rsh_Fir_reg__selectSuperClasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L12_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r7 = dyn __(<sym Class>, <sym contains>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L8(r7)
  // L8(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L8_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   Class3 = ld Class;
  //   Class4 = force? Class3;
  //   checkMissing(Class4);
  //   return Class4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_5, 0, NULL, CCP, RHO);
  // r11 = dyn isClass[, where](p4, p5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isClass, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L20_:;
  // p6 = prom<V +>{
  //   ext = ld ext;
  //   ext1 = force? ext;
  //   checkMissing(ext1);
  //   return ext1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   dropVirtual1 = ld dropVirtual;
  //   dropVirtual2 = force? dropVirtual1;
  //   checkMissing(dropVirtual2);
  //   return dropVirtual2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   namesOnly1 = ld namesOnly;
  //   namesOnly2 = force? namesOnly1;
  //   checkMissing(namesOnly2);
  //   return namesOnly2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   directOnly3 = ld directOnly;
  //   directOnly4 = force? directOnly3;
  //   checkMissing(directOnly4);
  //   return directOnly4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   simpleOnly1 = ld simpleOnly;
  //   simpleOnly2 = force? simpleOnly1;
  //   checkMissing(simpleOnly2);
  //   return simpleOnly2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_10, 0, NULL, CCP, RHO);
  // r19 = dyn _selectSuperClasses[, dropVirtual, namesOnly, directOnly, simpleOnly](p6, p7, p8, p9, p10)
  SEXP Rsh_Fir_array_args40[5];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args40[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args40[4] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names21[5];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names21[4] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__selectSuperClasses, 5, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D3_:;
  // deopt 11 [r11]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L15_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c1 then L16() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L16()
    goto L16_;
  } else {
  // L9()
    goto L9_;
  }

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_1;

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L16_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r12 = dyn __1(<lang getClass(Class, where=where)>, <sym contains>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r12_1;
  goto L8_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r13 = dyn stop("'Class' must be a valid class definition or class")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 17 [r13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r13_1;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_directOnly1_;
  SEXP Rsh_Fir_reg_directOnly2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // directOnly1 = ld directOnly
  Rsh_Fir_reg_directOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // directOnly2 = force? directOnly1
  Rsh_Fir_reg_directOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_directOnly1_);
  // checkMissing(directOnly2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_directOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return directOnly2
  return Rsh_Fir_reg_directOnly2_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_topenv;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // topenv = ldf topenv
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r1 = dyn parent_frame();
  //   return r1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1166355896_2, 0, NULL, CCP, RHO);
  // r3 = dyn topenv(p1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner1166355896_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r1 = dyn parent_frame()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner1166355896_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class1_;
  SEXP Rsh_Fir_reg_Class2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // Class1 = ld Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // Class2 = force? Class1
  Rsh_Fir_reg_Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1_);
  // checkMissing(Class2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return Class2
  return Rsh_Fir_reg_Class2_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class3_;
  SEXP Rsh_Fir_reg_Class4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // Class3 = ld Class
  Rsh_Fir_reg_Class3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // Class4 = force? Class3
  Rsh_Fir_reg_Class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class3_);
  // checkMissing(Class4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_Class4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return Class4
  return Rsh_Fir_reg_Class4_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ext;
  SEXP Rsh_Fir_reg_ext1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // ext = ld ext
  Rsh_Fir_reg_ext = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // ext1 = force? ext
  Rsh_Fir_reg_ext1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext);
  // checkMissing(ext1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ext1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return ext1
  return Rsh_Fir_reg_ext1_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dropVirtual1_;
  SEXP Rsh_Fir_reg_dropVirtual2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // dropVirtual1 = ld dropVirtual
  Rsh_Fir_reg_dropVirtual1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // dropVirtual2 = force? dropVirtual1
  Rsh_Fir_reg_dropVirtual2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dropVirtual1_);
  // checkMissing(dropVirtual2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dropVirtual2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return dropVirtual2
  return Rsh_Fir_reg_dropVirtual2_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_namesOnly1_;
  SEXP Rsh_Fir_reg_namesOnly2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // namesOnly1 = ld namesOnly
  Rsh_Fir_reg_namesOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // namesOnly2 = force? namesOnly1
  Rsh_Fir_reg_namesOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namesOnly1_);
  // checkMissing(namesOnly2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_namesOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return namesOnly2
  return Rsh_Fir_reg_namesOnly2_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_directOnly3_;
  SEXP Rsh_Fir_reg_directOnly4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // directOnly3 = ld directOnly
  Rsh_Fir_reg_directOnly3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // directOnly4 = force? directOnly3
  Rsh_Fir_reg_directOnly4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_directOnly3_);
  // checkMissing(directOnly4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_directOnly4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return directOnly4
  return Rsh_Fir_reg_directOnly4_;
}
SEXP Rsh_Fir_user_promise_inner1166355896_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_simpleOnly1_;
  SEXP Rsh_Fir_reg_simpleOnly2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1166355896/0: expected 0, got %d", NCAPTURES);

  // simpleOnly1 = ld simpleOnly
  Rsh_Fir_reg_simpleOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // simpleOnly2 = force? simpleOnly1
  Rsh_Fir_reg_simpleOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simpleOnly1_);
  // checkMissing(simpleOnly2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_simpleOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return simpleOnly2
  return Rsh_Fir_reg_simpleOnly2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
