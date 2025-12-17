#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1738578249_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1738578249_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1738578249_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1738578249_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_isSealedMethod;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_isSealedClass;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_setClass;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_isSealedClass1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_isSealedClass2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_isSealedMethod1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_isSealedMethod2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_removeClass;
  SEXP Rsh_Fir_reg_r24_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1738578249
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1738578249_, RHO, CCP);
  // st isSealedMethod = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // isSealedMethod = ldf isSealedMethod
  Rsh_Fir_reg_isSealedMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("numeric", "character");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("numeric", "character");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn isSealedMethod("+", p)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedMethod, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // isSealedClass = ldf isSealedClass
  Rsh_Fir_reg_isSealedClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r6 = dyn isSealedClass("matrix")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedClass, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // setClass = ldf setClass
  Rsh_Fir_reg_setClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
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
  //   r9 = dyn c1("numeric", "numeric");
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1[x, y]("numeric", "numeric");
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r11 = dyn setClass[, slots]("track", p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // isSealedClass1 = ldf isSealedClass
  Rsh_Fir_reg_isSealedClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r12 = dyn isSealedClass1("track")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedClass1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // isSealedClass2 = ldf isSealedClass
  Rsh_Fir_reg_isSealedClass2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r13 = dyn isSealedClass2("A Name for an undefined Class")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedClass2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // isSealedMethod1 = ldf isSealedMethod
  Rsh_Fir_reg_isSealedMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   c2 = ldf c in base;
  //   r16 = dyn c2("track", "numeric");
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base2("track", "numeric");
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r18 = dyn isSealedMethod1("+", p2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedMethod1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 30 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // isSealedMethod2 = ldf isSealedMethod
  Rsh_Fir_reg_isSealedMethod2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   c3 = ldf c in base;
  //   r21 = dyn c3("numeric", "track");
  //   goto L0(r21);
  // L2():
  //   r19 = dyn base3("numeric", "track");
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r23 = dyn isSealedMethod2("+", p3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSealedMethod2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 35 [r23]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // removeClass = ldf removeClass
  Rsh_Fir_reg_removeClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r24 = dyn removeClass("track")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_removeClass, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 39 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("numeric", "character")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("numeric", "character")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
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
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r9 = dyn c1("numeric", "numeric")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1[x, y]("numeric", "numeric")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r16 = dyn c2("track", "numeric")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base2("track", "numeric")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
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
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r21 = dyn c3("numeric", "track")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L0_;

L2_:;
  // r19 = dyn base3("numeric", "track")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1738578249_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1738578249 dynamic dispatch ([f, signature, fdef, where])

  return Rsh_Fir_user_version_inner1738578249_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1738578249_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1738578249 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1738578249/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_signature;
  SEXP Rsh_Fir_reg_fdef;
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg_fdef_isMissing;
  SEXP Rsh_Fir_reg_fdef_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_getFunction;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_is_primitive;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_getMethod;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_is;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_is1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_matchSignature;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_signature5_;
  SEXP Rsh_Fir_reg_signature6_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_signature7_;
  SEXP Rsh_Fir_reg_signature8_;
  SEXP Rsh_Fir_reg__BasicClasses;
  SEXP Rsh_Fir_reg__BasicClasses1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_signature9_;
  SEXP Rsh_Fir_reg_signature10_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_signature12_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg__BasicClasses2_;
  SEXP Rsh_Fir_reg__BasicClasses3_;
  SEXP Rsh_Fir_reg_match1_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sealed;
  SEXP Rsh_Fir_reg_sealed1_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_f9_;
  SEXP Rsh_Fir_reg_f10_;
  SEXP Rsh_Fir_reg_getGroup;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_match2_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_f13_;
  SEXP Rsh_Fir_reg_f14_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_match3_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_sealed2_;
  SEXP Rsh_Fir_reg_sealed3_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_signature13_;
  SEXP Rsh_Fir_reg_signature14_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_signature15_;
  SEXP Rsh_Fir_reg_signature16_;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_signature18_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_c72_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg__BasicClasses4_;
  SEXP Rsh_Fir_reg__BasicClasses5_;
  SEXP Rsh_Fir_reg_match4_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_is_na3_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_sealed4_;
  SEXP Rsh_Fir_reg_sealed5_;

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_signature = PARAMS[1];
  Rsh_Fir_reg_fdef = PARAMS[2];
  Rsh_Fir_reg_where = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st signature = signature
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_signature, RHO);
  (void)(Rsh_Fir_reg_signature);
  // fdef_isMissing = missing.0(fdef)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_fdef;
  Rsh_Fir_reg_fdef_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args20);
  // if fdef_isMissing then L0() else L1(fdef)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fdef_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(fdef)
    Rsh_Fir_reg_fdef_orDefault = Rsh_Fir_reg_fdef;
    goto L1_;
  }

L0_:;
  // p2 = prom<V +>{
  //   getGeneric = ldf getGeneric;
  //   p = prom<V +>{
  //     f1 = ld f;
  //     f2 = force? f1;
  //     checkMissing(f2);
  //     return f2;
  //   };
  //   p1 = prom<V +>{
  //     where1 = ld where;
  //     where2 = force? where1;
  //     checkMissing(where2);
  //     return where2;
  //   };
  //   r2 = dyn getGeneric[, , where](p, FALSE, p1);
  //   return r2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_, 0, NULL, CCP, RHO);
  // goto L1(p2)
  // L1(p2)
  Rsh_Fir_reg_fdef_orDefault = Rsh_Fir_reg_p2_1;
  goto L1_;

L1_:;
  // st fdef = fdef_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_fdef_orDefault, RHO);
  (void)(Rsh_Fir_reg_fdef_orDefault);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if where_isMissing then L2() else L3(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L3_;
  }

L2_:;
  // p4 = prom<V +>{
  //   topenv = ldf topenv;
  //   p3 = prom<V +>{
  //     parent_frame = ldf `parent.frame`;
  //     r4 = dyn parent_frame();
  //     return r4;
  //   };
  //   r6 = dyn topenv(p3);
  //   return r6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_3, 0, NULL, CCP, RHO);
  // goto L3(p4)
  // L3(p4)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p4_;
  goto L3_;

L3_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // getFunction = ldf getFunction
  Rsh_Fir_reg_getFunction = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p5 = prom<V +>{
  //   f3 = ld f;
  //   f4 = force? f3;
  //   checkMissing(f4);
  //   return f4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_6, 0, NULL, CCP, RHO);
  // r10 = dyn getFunction[, , , where](p5, TRUE, FALSE, p6)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args28[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getFunction, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

D1_:;
  // deopt 7 [r10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // st fGen = r10
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // is_primitive = ldf `is.primitive`
  Rsh_Fir_reg_is_primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p7 = prom<V +>{
  //   fGen = ld fGen;
  //   fGen1 = force? fGen;
  //   checkMissing(fGen1);
  //   return fGen1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_7, 0, NULL, CCP, RHO);
  // r12 = dyn is_primitive(p7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_primitive, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

D3_:;
  // deopt 12 [r12]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L35_:;
  // r13 = `!`(r12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args31);
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c then L36() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L36()
    goto L36_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L36_:;
  // getMethod = ldf getMethod
  Rsh_Fir_reg_getMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p8 = prom<V +>{
  //   f5 = ld f;
  //   f6 = force? f5;
  //   checkMissing(f6);
  //   return f6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   signature1 = ld signature;
  //   signature2 = force? signature1;
  //   checkMissing(signature2);
  //   return signature2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   fGen2 = ld fGen;
  //   fGen3 = force? fGen2;
  //   checkMissing(fGen3);
  //   return fGen3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_11, 0, NULL, CCP, RHO);
  // r18 = dyn getMethod[, , optional, where, fdef](p8, p9, TRUE, p10, p11)
  SEXP Rsh_Fir_array_args37[5];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args37[3] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args37[4] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[5];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names20[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names20[4] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getMethod, 5, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L43_:;
  // p13 = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_12, 0, NULL, CCP, RHO);
  // r24 = dyn is1(p13, "genericFunction")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D5_:;
  // deopt 24 [r18]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 38 [r24]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // st mdef = r18
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r18_1, RHO);
  (void)(Rsh_Fir_reg_r18_1);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L44_:;
  // c1 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c1 then L45() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L45()
    goto L45_;
  } else {
  // L6()
    goto L6_;
  }

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L39_:;
  // p12 = prom<V +>{
  //   mdef = ld mdef;
  //   mdef1 = force? mdef;
  //   checkMissing(mdef1);
  //   return mdef1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_13, 0, NULL, CCP, RHO);
  // r20 = dyn is(p12, "SealedMethodDefinition")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L45_:;
  // matchSignature = ldf matchSignature
  Rsh_Fir_reg_matchSignature = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D7_:;
  // deopt 30 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r32 = `==`(r30, 0)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args44);
  // c2 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c2 then L53() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L53()
    goto L53_;
  } else {
  // L9()
    goto L9_;
  }

L40_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_1;

L46_:;
  // p14 = prom<V +>{
  //   signature3 = ld signature;
  //   signature4 = force? signature3;
  //   checkMissing(signature4);
  //   return signature4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   fdef3 = ld fdef;
  //   fdef4 = force? fdef3;
  //   checkMissing(fdef4);
  //   return fdef4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_15, 0, NULL, CCP, RHO);
  // r27 = dyn matchSignature(p14, p15)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matchSignature, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L49_:;
  // signature5 = ld signature
  Rsh_Fir_reg_signature5_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

L50_:;
  // r29 = dyn base(<sym signature>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L8_;

D11_:;
  // deopt 43 [r27]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 49 [signature5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_signature5_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L9_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

L47_:;
  // st signature = r27
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L7()
  // L7()
  goto L7_;

L51_:;
  // signature6 = force? signature5
  Rsh_Fir_reg_signature6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature5_);
  // checkMissing(signature6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_signature6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r31 = dyn length(signature6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_signature6_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

L53_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 23);

D13_:;
  // deopt 52 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L8(r31)
  // L8(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L8_;

L55_:;
  // p16 = prom<V +>{
  //   f7 = ld f;
  //   f8 = force? f7;
  //   checkMissing(f8);
  //   return f8;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_16, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   _subsetFuns = ld `.subsetFuns`;
  //   _subsetFuns1 = force? _subsetFuns;
  //   checkMissing(_subsetFuns1);
  //   return _subsetFuns1;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_17, 0, NULL, CCP, RHO);
  // r35 = dyn _in_(p16, p17)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

D15_:;
  // deopt 61 [r35]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // c3 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c3 then L57() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L57()
    goto L57_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard3 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L57_:;
  // sym1 = ldf anyNA
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base1 = ldf anyNA in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard1 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L11_:;
  // r42 = `!`(r37)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args58);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;

L13_:;
  // r50 = `!`(r44)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args59);
  // st sealed = r50
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sealed = ld sealed
  Rsh_Fir_reg_sealed = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

L58_:;
  // sym2 = ldf match
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base2 = ldf match in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard2 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L59_:;
  // r36 = dyn base1(<lang match(signature, .BasicClasses)>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L11(r36)
  // L11(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L11_;

L67_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard4 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L68_:;
  // r43 = dyn base3(<lang match(`[[`(signature, 1), .BasicClasses)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L13(r43)
  // L13(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L13_;

D24_:;
  // deopt 96 [sealed]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_sealed;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L12_:;
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r41 = dyn anyNA(r39)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L14_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r49 = dyn is_na(r46)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

L60_:;
  // signature7 = ld signature
  Rsh_Fir_reg_signature7_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

L61_:;
  // r38 = dyn base2(<sym signature>, <sym .BasicClasses>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L12(r38)
  // L12(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L12_;

L69_:;
  // signature9 = ld signature
  Rsh_Fir_reg_signature9_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L70_:;
  // r45 = dyn base4(<lang `[[`(signature, 1)>, <sym .BasicClasses>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L14(r45)
  // L14(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L14_;

L78_:;
  // sealed1 = force? sealed
  Rsh_Fir_reg_sealed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sealed);
  // checkMissing(sealed1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sealed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(sealed1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sealed1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c5 then L79() else L16(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L79()
    goto L79_;
  } else {
  // L16(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L16_;
  }

D16_:;
  // deopt 66 [signature7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_signature7_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 75 [r41]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 81 [signature9]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_signature9_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 93 [r49]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L16_:;
  // c49 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c49 then L105() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L105()
    goto L105_;
  } else {
  // L24()
    goto L24_;
  }

L62_:;
  // signature8 = force? signature7
  Rsh_Fir_reg_signature8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature7_);
  // checkMissing(signature8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_signature8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // _BasicClasses = ld `.BasicClasses`
  Rsh_Fir_reg__BasicClasses = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

L65_:;
  // goto L11(r41)
  // L11(r41)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r41_;
  goto L11_;

L71_:;
  // signature10 = force? signature9
  Rsh_Fir_reg_signature10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature9_);
  // checkMissing(signature10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_signature10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(signature10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_signature10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args73);
  // if c4 then L72() else L73(signature10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L72()
    goto L72_;
  } else {
  // L73(signature10)
    Rsh_Fir_reg_signature12_ = Rsh_Fir_reg_signature10_;
    goto L73_;
  }

L77_:;
  // goto L13(r49)
  // L13(r49)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r49_;
  goto L13_;

L79_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard5 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

D17_:;
  // deopt 68 [_BasicClasses]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg__BasicClasses;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L15_:;
  // _BasicClasses2 = ld `.BasicClasses`
  Rsh_Fir_reg__BasicClasses2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L75() else D21()
  // L75()
  goto L75_;

L17_:;
  // r62 = `!`(r52)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args75);
  // c18 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c18 then L20(c10, c18) else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L20(c10, c18)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L20_;
  } else {
  // L92()
    goto L92_;
  }

L24_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // sealed4 = ld sealed
  Rsh_Fir_reg_sealed4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L127() else D42()
  // L127()
  goto L127_;

L63_:;
  // _BasicClasses1 = force? _BasicClasses
  Rsh_Fir_reg__BasicClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BasicClasses);
  // checkMissing(_BasicClasses1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg__BasicClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r40 = dyn match(signature8, _BasicClasses1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args78[4];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_signature8_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg__BasicClasses1_;
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args78[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

L72_:;
  // dr = tryDispatchBuiltin.1("[[", signature10)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_signature10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc then L74() else L73(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr)
    Rsh_Fir_reg_signature12_ = Rsh_Fir_reg_dr;
    goto L73_;
  }

L73_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r47 = dyn __(signature12, 1)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_signature12_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L15(r47)
  // L15(r47)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r47_;
  goto L15_;

L80_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard6 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // r51 = dyn base5(<lang match("Ops", c(f, getGroup(f, TRUE)))>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L17(c5, r51)
  // L17(c5, r51)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L17_;

L105_:;
  // sealed2 = ld sealed
  Rsh_Fir_reg_sealed2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L106() else D35()
  // L106()
  goto L106_;

D18_:;
  // deopt 73 [r40]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 86 [_BasicClasses2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg__BasicClasses2_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 143 [sealed2]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_sealed2_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 176 [sealed4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_sealed4_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L18_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r61 = dyn is_na1(r54)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L91() else D30()
  // L91()
  goto L91_;

L20_:;
  // c46 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // c47 = `&&`(c19, c46)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args86);
  // goto L16(c47)
  // L16(c47)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c47_;
  goto L16_;

L64_:;
  // goto L12(r40)
  // L12(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L12_;

L74_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

L75_:;
  // _BasicClasses3 = force? _BasicClasses2
  Rsh_Fir_reg__BasicClasses3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BasicClasses2_);
  // checkMissing(_BasicClasses3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg__BasicClasses3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r48 = dyn match1(dx1, _BasicClasses3, NA_INT, NULL)
  SEXP Rsh_Fir_array_args89[4];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg__BasicClasses3_;
  Rsh_Fir_array_args89[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args89[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names37[4];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

L82_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L83_:;
  // r53 = dyn base6("Ops", <lang c(f, getGroup(f, TRUE))>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L18(c5, r53)
  // L18(c5, r53)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L18_;

L92_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard8 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L106_:;
  // sealed3 = force? sealed2
  Rsh_Fir_reg_sealed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sealed2_);
  // checkMissing(sealed3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sealed3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c50 = `as.logical`(sealed3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sealed3_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // if c50 then L107() else L25(c50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L107()
    goto L107_;
  } else {
  // L25(c50)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c50_;
    goto L25_;
  }

L127_:;
  // sealed5 = force? sealed4
  Rsh_Fir_reg_sealed5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sealed4_);
  // checkMissing(sealed5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sealed5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return sealed5
  return Rsh_Fir_reg_sealed5_;

D22_:;
  // deopt 91 [r48]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 119 [c13, r61]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L19_:;
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r60 = dyn match2("Ops", r56, NA_INT, NULL)
  SEXP Rsh_Fir_array_args96[4];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args96[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args96[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L90() else D29()
  // L90()
  goto L90_;

L21_:;
  // r72 = `!`(r64)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args97);
  // c42 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args98);
  // c43 = `||`(c28, c42)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args99);
  // goto L20(c27, c43)
  // L20(c27, c43)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c43_;
  goto L20_;

L25_:;
  // c59 = `as.logical`(c52)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args100);
  // if c59 then L113() else L27(c59)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L113()
    goto L113_;
  } else {
  // L27(c59)
    Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c59_;
    goto L27_;
  }

L76_:;
  // goto L14(r48)
  // L14(r48)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r48_;
  goto L14_;

L84_:;
  // f9 = ld f
  Rsh_Fir_reg_f9_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L86() else D25()
  // L86()
  goto L86_;

L85_:;
  // r55 = dyn base7(<sym f>, <lang getGroup(f, TRUE)>)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L19(c5, r55)
  // L19(c5, r55)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L19_;

L91_:;
  // goto L17(c13, r61)
  // L17(c13, r61)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r61_;
  goto L17_;

L93_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard9 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L94_:;
  // r63 = dyn base8(<lang match(f, c("%*%", "crossprod", "tcrossprod"))>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L21(c10, c18, r63)
  // L21(c10, c18, r63)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L21_;

L107_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard11 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

D25_:;
  // deopt 105 [c5, f9]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_f9_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 117 [c16, r60]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L22_:;
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r71 = dyn is_na2(r66)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L102() else D34()
  // L102()
  goto L102_;

L26_:;
  // r76 = `>`(r74, 1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args106);
  // c56 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args107);
  // c57 = `&&`(c55, c56)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args108);
  // goto L25(c57)
  // L25(c57)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c57_;
  goto L25_;

L27_:;
  // st sealed = c61
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_c61_, RHO);
  (void)(Rsh_Fir_reg_c61_);
  // goto L31()
  // L31()
  goto L31_;

L86_:;
  // f10 = force? f9
  Rsh_Fir_reg_f10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f9_);
  // checkMissing(f10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_f10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // getGroup = ldf getGroup
  Rsh_Fir_reg_getGroup = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L87() else D26()
  // L87()
  goto L87_;

L90_:;
  // goto L18(c16, r60)
  // L18(c16, r60)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r60_;
  goto L18_;

L95_:;
  // f13 = ld f
  Rsh_Fir_reg_f13_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L97() else D31()
  // L97()
  goto L97_;

L96_:;
  // r65 = dyn base9(<sym f>, <lang c("%*%", "crossprod", "tcrossprod")>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L22(c10, c18, r65)
  // L22(c10, c18, r65)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L22_;

L108_:;
  // signature13 = ld signature
  Rsh_Fir_reg_signature13_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L110() else D36()
  // L110()
  goto L110_;

L109_:;
  // r73 = dyn base11(<sym signature>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L26(c50, r73)
  // L26(c50, r73)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L26_;

L113_:;
  // sym12 = ldf `is.na`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base12 = ldf `is.na` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard12 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

D26_:;
  // deopt 108 [c5]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 125 [c10, c18, f13]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_f13_;
  Rsh_Fir_deopt(125, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 139 [c33, c34, r71]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(139, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 147 [c50, signature13]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_signature13_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L28_:;
  // r84 = `!`(r78)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args113);
  // c73 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args114);
  // c74 = `&&`(c64, c73)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args115);
  // goto L27(c74)
  // L27(c74)
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c74_;
  goto L27_;

L87_:;
  // p18 = prom<V +>{
  //   f11 = ld f;
  //   f12 = force? f11;
  //   checkMissing(f12);
  //   return f12;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_18, 0, NULL, CCP, RHO);
  // r58 = dyn getGroup(p18, TRUE)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGroup, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L88() else D27()
  // L88()
  goto L88_;

L97_:;
  // f14 = force? f13
  Rsh_Fir_reg_f14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f13_);
  // checkMissing(f14)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_f14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard10 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L102_:;
  // goto L21(c33, c34, r71)
  // L21(c33, c34, r71)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r71_;
  goto L21_;

L110_:;
  // signature14 = force? signature13
  Rsh_Fir_reg_signature14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature13_);
  // checkMissing(signature14)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_signature14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r75 = dyn length1(signature14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_signature14_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L111() else D37()
  // L111()
  goto L111_;

L114_:;
  // sym13 = ldf match
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base13 = ldf match in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard13 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L115_:;
  // r77 = dyn base12(<lang match(`[[`(signature, 2), .BasicClasses)>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L28(c59, r77)
  // L28(c59, r77)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L28_;

D27_:;
  // deopt 111 [c5, r58]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 150 [c50, r75]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(150, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L23_:;
  // match3 = ldf match in base
  Rsh_Fir_reg_match3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r70 = dyn match3(f14, r68, NA_INT, NULL)
  SEXP Rsh_Fir_array_args124[4];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_f14_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args124[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args124[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names48[4];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_array_arg_names48[3] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match3_, 4, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L101() else D33()
  // L101()
  goto L101_;

L29_:;
  // is_na3 = ldf `is.na` in base
  Rsh_Fir_reg_is_na3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r83 = dyn is_na3(r80)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na3_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L124() else D41()
  // L124()
  goto L124_;

L88_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r59 = dyn c17(f10, r58)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_f10_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L89() else D28()
  // L89()
  goto L89_;

L98_:;
  // c41 = ldf c in base
  Rsh_Fir_reg_c41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r69 = dyn c41("%*%", "crossprod", "tcrossprod")
  SEXP Rsh_Fir_array_args127[3];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args127[2] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c41_, 3, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

L99_:;
  // r67 = dyn base10("%*%", "crossprod", "tcrossprod")
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args128[2] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L23(c10, c18, r67)
  // L23(c10, c18, r67)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L23_;

L111_:;
  // goto L26(c50, r75)
  // L26(c50, r75)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L26_;

L116_:;
  // signature15 = ld signature
  Rsh_Fir_reg_signature15_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L118() else D38()
  // L118()
  goto L118_;

L117_:;
  // r79 = dyn base13(<lang `[[`(signature, 2)>, <sym .BasicClasses>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L29(c59, r79)
  // L29(c59, r79)
  Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L29_;

D28_:;
  // deopt 113 [c5, r59]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 133 [c10, c18, r69]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 137 [c39, c40, r70]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(137, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 158 [c59, signature15]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c59_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_signature15_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 170 [c67, r83]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c67_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(170, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L19(c5, r59)
  // L19(c5, r59)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r59_;
  goto L19_;

L100_:;
  // goto L23(c10, c18, r69)
  // L23(c10, c18, r69)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L23_;

L101_:;
  // goto L22(c39, c40, r70)
  // L22(c39, c40, r70)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r70_;
  goto L22_;

L118_:;
  // signature16 = force? signature15
  Rsh_Fir_reg_signature16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature15_);
  // checkMissing(signature16)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_signature16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c68 = `is.object`(signature16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_signature16_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args131);
  // if c68 then L119() else L120(c59, signature16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L119()
    goto L119_;
  } else {
  // L120(c59, signature16)
    Rsh_Fir_reg_c70_ = Rsh_Fir_reg_c59_;
    Rsh_Fir_reg_signature18_ = Rsh_Fir_reg_signature16_;
    goto L120_;
  }

L124_:;
  // goto L28(c67, r83)
  // L28(c67, r83)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c67_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r83_;
  goto L28_;

L30_:;
  // _BasicClasses4 = ld `.BasicClasses`
  Rsh_Fir_reg__BasicClasses4_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L122() else D39()
  // L122()
  goto L122_;

L119_:;
  // dr2 = tryDispatchBuiltin.1("[[", signature16)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_signature16_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc1 then L121() else L120(c59, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L121()
    goto L121_;
  } else {
  // L120(c59, dr2)
    Rsh_Fir_reg_c70_ = Rsh_Fir_reg_c59_;
    Rsh_Fir_reg_signature18_ = Rsh_Fir_reg_dr2_;
    goto L120_;
  }

L120_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r81 = dyn __1(signature18, 2)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_signature18_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L30(c70, r81)
  // L30(c70, r81)
  Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r81_;
  goto L30_;

D39_:;
  // deopt 163 [c72, _BasicClasses4]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c72_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg__BasicClasses4_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L121_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L30(c59, dx2)
  // L30(c59, dx2)
  Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L30_;

L122_:;
  // _BasicClasses5 = force? _BasicClasses4
  Rsh_Fir_reg__BasicClasses5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BasicClasses4_);
  // checkMissing(_BasicClasses5)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg__BasicClasses5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // match4 = ldf match in base
  Rsh_Fir_reg_match4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r82 = dyn match4(dx3, _BasicClasses5, NA_INT, NULL)
  SEXP Rsh_Fir_array_args137[4];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg__BasicClasses5_;
  Rsh_Fir_array_args137[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args137[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names55[4];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_array_arg_names55[3] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match4_, 4, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L123() else D40()
  // L123()
  goto L123_;

D40_:;
  // deopt 168 [c72, r82]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_c72_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L29(c72, r82)
  // L29(c72, r82)
  Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c72_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r82_;
  goto L29_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getGeneric;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_2, 0, NULL, CCP, RHO);
  // r2 = dyn getGeneric[, , where](p, FALSE, p1)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner1738578249_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_topenv;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // topenv = ldf topenv
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p3 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r4 = dyn parent_frame();
  //   return r4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738578249_4, 0, NULL, CCP, RHO);
  // r6 = dyn topenv(p3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner1738578249_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // r4 = dyn parent_frame()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_reg_f4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return f4
  return Rsh_Fir_reg_f4_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_reg_where4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fGen;
  SEXP Rsh_Fir_reg_fGen1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // fGen = ld fGen
  Rsh_Fir_reg_fGen = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fGen1 = force? fGen
  Rsh_Fir_reg_fGen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fGen);
  // checkMissing(fGen1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fGen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return fGen1
  return Rsh_Fir_reg_fGen1_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f5_;
  SEXP Rsh_Fir_reg_f6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // f5 = ld f
  Rsh_Fir_reg_f5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f6 = force? f5
  Rsh_Fir_reg_f6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f5_);
  // checkMissing(f6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_f6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return f6
  return Rsh_Fir_reg_f6_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_signature1_;
  SEXP Rsh_Fir_reg_signature2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // signature1 = ld signature
  Rsh_Fir_reg_signature1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // signature2 = force? signature1
  Rsh_Fir_reg_signature2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature1_);
  // checkMissing(signature2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_signature2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return signature2
  return Rsh_Fir_reg_signature2_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where5_;
  SEXP Rsh_Fir_reg_where6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fGen2_;
  SEXP Rsh_Fir_reg_fGen3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // fGen2 = ld fGen
  Rsh_Fir_reg_fGen2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fGen3 = force? fGen2
  Rsh_Fir_reg_fGen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fGen2_);
  // checkMissing(fGen3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fGen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return fGen3
  return Rsh_Fir_reg_fGen3_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdef1_;
  SEXP Rsh_Fir_reg_fdef2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mdef;
  SEXP Rsh_Fir_reg_mdef1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // mdef = ld mdef
  Rsh_Fir_reg_mdef = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // mdef1 = force? mdef
  Rsh_Fir_reg_mdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdef);
  // checkMissing(mdef1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_mdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return mdef1
  return Rsh_Fir_reg_mdef1_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_signature3_;
  SEXP Rsh_Fir_reg_signature4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // signature3 = ld signature
  Rsh_Fir_reg_signature3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // signature4 = force? signature3
  Rsh_Fir_reg_signature4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature3_);
  // checkMissing(signature4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_signature4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return signature4
  return Rsh_Fir_reg_signature4_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdef3_;
  SEXP Rsh_Fir_reg_fdef4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // fdef3 = ld fdef
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // fdef4 = force? fdef3
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef3_);
  // checkMissing(fdef4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_fdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return fdef4
  return Rsh_Fir_reg_fdef4_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f7_;
  SEXP Rsh_Fir_reg_f8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // f7 = ld f
  Rsh_Fir_reg_f7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f8 = force? f7
  Rsh_Fir_reg_f8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f7_);
  // checkMissing(f8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_f8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return f8
  return Rsh_Fir_reg_f8_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__subsetFuns;
  SEXP Rsh_Fir_reg__subsetFuns1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // _subsetFuns = ld `.subsetFuns`
  Rsh_Fir_reg__subsetFuns = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // _subsetFuns1 = force? _subsetFuns
  Rsh_Fir_reg__subsetFuns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__subsetFuns);
  // checkMissing(_subsetFuns1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg__subsetFuns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return _subsetFuns1
  return Rsh_Fir_reg__subsetFuns1_;
}
SEXP Rsh_Fir_user_promise_inner1738578249_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f11_;
  SEXP Rsh_Fir_reg_f12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1738578249/0: expected 0, got %d", NCAPTURES);

  // f11 = ld f
  Rsh_Fir_reg_f11_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f12 = force? f11
  Rsh_Fir_reg_f12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f11_);
  // checkMissing(f12)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_f12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return f12
  return Rsh_Fir_reg_f12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
