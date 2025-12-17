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
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1618591243_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1618591243_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1618591243_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1618591243_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_with;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_boxplot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_with1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r60_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1618591243
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1618591243_, RHO, CCP);
  // st `reorder.default` = r
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
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // sym1 = ldf with
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf with in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L3_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // st bymedian = r6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // boxplot = ldf boxplot
  Rsh_Fir_reg_boxplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L5_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L7_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

L8_:;
  // r5 = dyn base1(<sym InsectSprays>, <lang reorder(spray, count, median)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0()
  // L0()
  goto L0_;

L9_:;
  // p1 = prom<V +>{
  //   InsectSprays = ld InsectSprays;
  //   InsectSprays1 = force? InsectSprays;
  //   checkMissing(InsectSprays1);
  //   return InsectSprays1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   reorder = ldf reorder;
  //   p2 = prom<V +>{
  //     spray = ld spray;
  //     spray1 = force? spray;
  //     checkMissing(spray1);
  //     return spray1;
  //   };
  //   p3 = prom<V +>{
  //     count = ld count;
  //     count1 = force? count;
  //     checkMissing(count1);
  //     return count1;
  //   };
  //   p4 = prom<V +>{
  //     median = ld median;
  //     median1 = force? median;
  //     checkMissing(median1);
  //     return median1;
  //   };
  //   r11 = dyn reorder(p2, p3, p4);
  //   return r11;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r13 = dyn with(p1, p5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

L11_:;
  // p6 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r14 = dyn __(<sym count>, <sym bymedian>);
  //   return r14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   InsectSprays2 = ld InsectSprays;
  //   InsectSprays3 = force? InsectSprays2;
  //   checkMissing(InsectSprays3);
  //   return InsectSprays3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r17 = dyn boxplot[, data, xlab, ylab, main, varwidth, col](p6, p7, "Type of spray", "Insect count", "InsectSprays data", TRUE, "lightgray")
  SEXP Rsh_Fir_array_args14[7];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[7];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names6[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names6[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names6[6] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_boxplot, 7, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D3_:;
  // deopt 13 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L1_;

L12_:;
  // sym2 = ldf with
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf with in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L2_:;
  // st bymedianR = r19
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

L13_:;
  // with1 = ldf with
  Rsh_Fir_reg_with1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

L14_:;
  // r18 = dyn base2(<sym InsectSprays>, <lang reorder(spray, count, median, decreasing=TRUE)>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r18)
  // L2(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L2_;

D6_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p8 = prom<V +>{
  //   InsectSprays4 = ld InsectSprays;
  //   InsectSprays5 = force? InsectSprays4;
  //   checkMissing(InsectSprays5);
  //   return InsectSprays5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   reorder1 = ldf reorder;
  //   p9 = prom<V +>{
  //     spray2 = ld spray;
  //     spray3 = force? spray2;
  //     checkMissing(spray3);
  //     return spray3;
  //   };
  //   p10 = prom<V +>{
  //     count2 = ld count;
  //     count3 = force? count2;
  //     checkMissing(count3);
  //     return count3;
  //   };
  //   p11 = prom<V +>{
  //     median2 = ld median;
  //     median3 = force? median2;
  //     checkMissing(median3);
  //     return median3;
  //   };
  //   r24 = dyn reorder1[, , , decreasing](p9, p10, p11, TRUE);
  //   return r24;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r26 = dyn with1(p8, p12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

L17_:;
  // p17 = prom<V +>{
  //   sym3 = ldf identical;
  //   base3 = ldf identical in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L10() else L11();
  // L0():
  //   sym6 = ldf identical;
  //   base6 = ldf identical in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L16() else L17();
  // L10():
  //   sym4 = ldf attr;
  //   base4 = ldf attr in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L12() else L13();
  // L11():
  //   r27 = dyn base3(<lang `<-`(sc, attr(bymedian, "scores"))>, <lang attr(bymedianR, "scores")>);
  //   goto L0();
  // L1(r30):
  //   st sc = r30;
  //   sym5 = ldf attr;
  //   base5 = ldf attr in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L14() else L15();
  // L3():
  //   sym8 = ldf identical;
  //   base8 = ldf identical in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L23() else L24();
  // L12():
  //   bymedian = ld bymedian;
  //   bymedian1 = force? bymedian;
  //   checkMissing(bymedian1);
  //   attr = ldf attr in base;
  //   r31 = dyn attr(bymedian1, "scores");
  //   goto L1(r31);
  // L13():
  //   r29 = dyn base4(<sym bymedian>, "scores");
  //   goto L1(r29);
  // L16():
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L18() else L19();
  // L17():
  //   r36 = dyn base6(<lang `<-`(nms, names(sc))>, <lang `[`(LETTERS, `:`(1.0, 6.0))>);
  //   goto L3();
  // L2(r33):
  //   identical = ldf identical in base;
  //   r35 = dyn identical(r30, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L4(r39):
  //   st nms = r39;
  //   LETTERS = ld LETTERS;
  //   LETTERS1 = force? LETTERS;
  //   checkMissing(LETTERS1);
  //   c = `is.object`(LETTERS1);
  //   if c then L20() else L21(LETTERS1);
  // L6():
  //   sym9 = ldf identical;
  //   base9 = ldf identical in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L28() else L29();
  // L14():
  //   bymedianR = ld bymedianR;
  //   bymedianR1 = force? bymedianR;
  //   checkMissing(bymedianR1);
  //   attr1 = ldf attr in base;
  //   r34 = dyn attr1(bymedianR1, "scores");
  //   goto L2(r34);
  // L15():
  //   r32 = dyn base5(<sym bymedianR>, "scores");
  //   goto L2(r32);
  // L18():
  //   sc = ld sc;
  //   sc1 = force? sc;
  //   checkMissing(sc1);
  //   names = ldf names in base;
  //   r40 = dyn names(sc1);
  //   goto L4(r40);
  // L19():
  //   r38 = dyn base7(<sym sc>);
  //   goto L4(r38);
  // L23():
  //   levels = ldf levels;
  //   p13 = prom<V +>{
  //     bymedian2 = ld bymedian;
  //     bymedian3 = force? bymedian2;
  //     checkMissing(bymedian3);
  //     return bymedian3;
  //   };
  //   r46 = dyn levels(p13);
  //   nms = ld nms;
  //   nms1 = force? nms;
  //   checkMissing(nms1);
  //   c1 = `is.object`(nms1);
  //   if c1 then L25() else L26(nms1);
  // L24():
  //   r43 = dyn base8(<lang levels(bymedian)>, <lang `[`(nms, `<-`(isc, order(sc)))>);
  //   goto L6();
  // L5(dx1):
  //   identical1 = ldf identical in base;
  //   r42 = dyn identical1(r39, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L3();
  // L7(dx3):
  //   identical2 = ldf identical in base;
  //   r50 = dyn identical2(r46, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L6();
  // L8(r52):
  //   return r52;
  // L20():
  //   dr = tryDispatchBuiltin.1("[", LETTERS1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L22() else L21(dr);
  // L21(LETTERS3):
  //   __1 = ldf `[` in base;
  //   r41 = dyn __1(LETTERS3, <int 1, 2, 3, 4, 5, 6>);
  //   goto L5(r41);
  // L25():
  //   dr2 = tryDispatchBuiltin.1("[", nms1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L27() else L26(dr2);
  // L26(nms3):
  //   order = ldf order;
  //   p14 = prom<V +>{
  //     sc2 = ld sc;
  //     sc3 = force? sc2;
  //     checkMissing(sc3);
  //     return sc3;
  //   };
  //   r48 = dyn order(p14);
  //   st isc = r48;
  //   __2 = ldf `[` in base;
  //   r49 = dyn __2(nms3, r48);
  //   goto L7(r49);
  // L28():
  //   levels1 = ldf levels;
  //   p15 = prom<V +>{
  //     bymedianR2 = ld bymedianR;
  //     bymedianR3 = force? bymedianR2;
  //     checkMissing(bymedianR3);
  //     return bymedianR3;
  //   };
  //   r54 = dyn levels1(p15);
  //   nms4 = ld nms;
  //   nms5 = force? nms4;
  //   checkMissing(nms5);
  //   c2 = `is.object`(nms5);
  //   if c2 then L30() else L31(nms5);
  // L29():
  //   r51 = dyn base9(<lang levels(bymedianR)>, <lang `[`(nms, rev(isc))>);
  //   goto L8(r51);
  // L9(dx5):
  //   identical3 = ldf identical in base;
  //   r58 = dyn identical3(r54, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L8(r58);
  // L22():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L5(dx);
  // L27():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L7(dx2);
  // L30():
  //   dr4 = tryDispatchBuiltin.1("[", nms5);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L32() else L31(dr4);
  // L31(nms7):
  //   rev = ldf rev;
  //   p16 = prom<V +>{
  //     isc = ld isc;
  //     isc1 = force? isc;
  //     checkMissing(isc1);
  //     return isc1;
  //   };
  //   r56 = dyn rev(p16);
  //   __3 = ldf `[` in base;
  //   r57 = dyn __3(nms7, r56);
  //   goto L9(r57);
  // L32():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L9(dx4);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r60 = dyn stopifnot[exprs](p17)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D7_:;
  // deopt 36 [r26]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 42 [r60]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r26)
  // L2(r26)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r26_;
  goto L2_;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r60
  return Rsh_Fir_reg_r60_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_InsectSprays;
  SEXP Rsh_Fir_reg_InsectSprays1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // InsectSprays = ld InsectSprays
  Rsh_Fir_reg_InsectSprays = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // InsectSprays1 = force? InsectSprays
  Rsh_Fir_reg_InsectSprays1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_InsectSprays);
  // checkMissing(InsectSprays1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_InsectSprays1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return InsectSprays1
  return Rsh_Fir_reg_InsectSprays1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_reorder;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // reorder = ldf reorder
  Rsh_Fir_reg_reorder = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p2 = prom<V +>{
  //   spray = ld spray;
  //   spray1 = force? spray;
  //   checkMissing(spray1);
  //   return spray1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   count = ld count;
  //   count1 = force? count;
  //   checkMissing(count1);
  //   return count1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   median = ld median;
  //   median1 = force? median;
  //   checkMissing(median1);
  //   return median1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r11 = dyn reorder(p2, p3, p4)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reorder, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_spray;
  SEXP Rsh_Fir_reg_spray1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // spray = ld spray
  Rsh_Fir_reg_spray = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // spray1 = force? spray
  Rsh_Fir_reg_spray1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spray);
  // checkMissing(spray1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_spray1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return spray1
  return Rsh_Fir_reg_spray1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_count;
  SEXP Rsh_Fir_reg_count1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // count = ld count
  Rsh_Fir_reg_count = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // count1 = force? count
  Rsh_Fir_reg_count1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count);
  // checkMissing(count1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_count1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return count1
  return Rsh_Fir_reg_count1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_median;
  SEXP Rsh_Fir_reg_median1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // median = ld median
  Rsh_Fir_reg_median = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // median1 = force? median
  Rsh_Fir_reg_median1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_median);
  // checkMissing(median1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_median1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return median1
  return Rsh_Fir_reg_median1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r14 = dyn __(<sym count>, <sym bymedian>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_InsectSprays2_;
  SEXP Rsh_Fir_reg_InsectSprays3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // InsectSprays2 = ld InsectSprays
  Rsh_Fir_reg_InsectSprays2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // InsectSprays3 = force? InsectSprays2
  Rsh_Fir_reg_InsectSprays3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_InsectSprays2_);
  // checkMissing(InsectSprays3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_InsectSprays3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return InsectSprays3
  return Rsh_Fir_reg_InsectSprays3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_InsectSprays4_;
  SEXP Rsh_Fir_reg_InsectSprays5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // InsectSprays4 = ld InsectSprays
  Rsh_Fir_reg_InsectSprays4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // InsectSprays5 = force? InsectSprays4
  Rsh_Fir_reg_InsectSprays5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_InsectSprays4_);
  // checkMissing(InsectSprays5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_InsectSprays5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return InsectSprays5
  return Rsh_Fir_reg_InsectSprays5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_reorder1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // reorder1 = ldf reorder
  Rsh_Fir_reg_reorder1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p9 = prom<V +>{
  //   spray2 = ld spray;
  //   spray3 = force? spray2;
  //   checkMissing(spray3);
  //   return spray3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   count2 = ld count;
  //   count3 = force? count2;
  //   checkMissing(count3);
  //   return count3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   median2 = ld median;
  //   median3 = force? median2;
  //   checkMissing(median3);
  //   return median3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r24 = dyn reorder1[, , , decreasing](p9, p10, p11, TRUE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reorder1_, 4, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_spray2_;
  SEXP Rsh_Fir_reg_spray3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // spray2 = ld spray
  Rsh_Fir_reg_spray2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // spray3 = force? spray2
  Rsh_Fir_reg_spray3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spray2_);
  // checkMissing(spray3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_spray3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return spray3
  return Rsh_Fir_reg_spray3_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_count2_;
  SEXP Rsh_Fir_reg_count3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // count2 = ld count
  Rsh_Fir_reg_count2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // count3 = force? count2
  Rsh_Fir_reg_count3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count2_);
  // checkMissing(count3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_count3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return count3
  return Rsh_Fir_reg_count3_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_median2_;
  SEXP Rsh_Fir_reg_median3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // median2 = ld median
  Rsh_Fir_reg_median2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // median3 = force? median2
  Rsh_Fir_reg_median3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_median2_);
  // checkMissing(median3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_median3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return median3
  return Rsh_Fir_reg_median3_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_bymedian;
  SEXP Rsh_Fir_reg_bymedian1_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_bymedianR;
  SEXP Rsh_Fir_reg_bymedianR1_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sc;
  SEXP Rsh_Fir_reg_sc1_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_LETTERS3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_levels;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_nms;
  SEXP Rsh_Fir_reg_nms1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_nms3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_levels1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_nms4_;
  SEXP Rsh_Fir_reg_nms5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_nms7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_rev;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r58_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard6 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L10_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // r27 = dyn base3(<lang `<-`(sc, attr(bymedian, "scores"))>, <lang attr(bymedianR, "scores")>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // st sc = r30
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard5 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L3_:;
  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard8 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L12_:;
  // bymedian = ld bymedian
  Rsh_Fir_reg_bymedian = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // bymedian1 = force? bymedian
  Rsh_Fir_reg_bymedian1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bymedian);
  // checkMissing(bymedian1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_bymedian1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r31 = dyn attr(bymedian1, "scores")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_bymedian1_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r31)
  // L1(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L1_;

L13_:;
  // r29 = dyn base4(<sym bymedian>, "scores")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r29)
  // L1(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L1_;

L16_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard7 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L17_:;
  // r36 = dyn base6(<lang `<-`(nms, names(sc))>, <lang `[`(LETTERS, `:`(1.0, 6.0))>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

L2_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r35 = dyn identical(r30, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args34[9];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args34[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names14[9];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_array_arg_names14[8] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L4_:;
  // st nms = r39
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c = `is.object`(LETTERS1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c then L20() else L21(LETTERS1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L21(LETTERS1)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_LETTERS1_;
    goto L21_;
  }

L6_:;
  // sym9 = ldf identical
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base9 = ldf identical in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard9 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L14_:;
  // bymedianR = ld bymedianR
  Rsh_Fir_reg_bymedianR = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // bymedianR1 = force? bymedianR
  Rsh_Fir_reg_bymedianR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bymedianR);
  // checkMissing(bymedianR1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_bymedianR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r34 = dyn attr1(bymedianR1, "scores")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_bymedianR1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(r34)
  // L2(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L2_;

L15_:;
  // r32 = dyn base5(<sym bymedianR>, "scores")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r32)
  // L2(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L2_;

L18_:;
  // sc = ld sc
  Rsh_Fir_reg_sc = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // sc1 = force? sc
  Rsh_Fir_reg_sc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc);
  // checkMissing(sc1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r40 = dyn names(sc1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sc1_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L4(r40)
  // L4(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L4_;

L19_:;
  // r38 = dyn base7(<sym sc>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r38)
  // L4(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L4_;

L23_:;
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p13 = prom<V +>{
  //   bymedian2 = ld bymedian;
  //   bymedian3 = force? bymedian2;
  //   checkMissing(bymedian3);
  //   return bymedian3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r46 = dyn levels(p13)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(nms1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c1 then L25() else L26(nms1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L26(nms1)
    Rsh_Fir_reg_nms3_ = Rsh_Fir_reg_nms1_;
    goto L26_;
  }

L24_:;
  // r43 = dyn base8(<lang levels(bymedian)>, <lang `[`(nms, `<-`(isc, order(sc)))>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

L5_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r42 = dyn identical1(r39, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args49[9];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args49[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names21[9];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

L7_:;
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r50 = dyn identical2(r46, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args50[9];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args50[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args50[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args50[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args50[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args50[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

L8_:;
  // return r52
  return Rsh_Fir_reg_r52_;

L20_:;
  // dr = tryDispatchBuiltin.1("[", LETTERS1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r41 = dyn __1(LETTERS3, <int 1, 2, 3, 4, 5, 6>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_LETTERS3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L5(r41)
  // L5(r41)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r41_;
  goto L5_;

L25_:;
  // dr2 = tryDispatchBuiltin.1("[", nms1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc1 then L27() else L26(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr2)
    Rsh_Fir_reg_nms3_ = Rsh_Fir_reg_dr2_;
    goto L26_;
  }

L26_:;
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // p14 = prom<V +>{
  //   sc2 = ld sc;
  //   sc3 = force? sc2;
  //   checkMissing(sc3);
  //   return sc3;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r48 = dyn order(p14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names24, CCP, RHO);
  // st isc = r48
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r49 = dyn __2(nms3, r48)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_nms3_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L7(r49)
  // L7(r49)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r49_;
  goto L7_;

L28_:;
  // levels1 = ldf levels
  Rsh_Fir_reg_levels1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p15 = prom<V +>{
  //   bymedianR2 = ld bymedianR;
  //   bymedianR3 = force? bymedianR2;
  //   checkMissing(bymedianR3);
  //   return bymedianR3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r54 = dyn levels1(p15)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names26, CCP, RHO);
  // nms4 = ld nms
  Rsh_Fir_reg_nms4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // nms5 = force? nms4
  Rsh_Fir_reg_nms5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms4_);
  // checkMissing(nms5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_nms5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(nms5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nms5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args62);
  // if c2 then L30() else L31(nms5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L31(nms5)
    Rsh_Fir_reg_nms7_ = Rsh_Fir_reg_nms5_;
    goto L31_;
  }

L29_:;
  // r51 = dyn base9(<lang levels(bymedianR)>, <lang `[`(nms, rev(isc))>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L8(r51)
  // L8(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L8_;

L9_:;
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r58 = dyn identical3(r54, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args64[9];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args64[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args64[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args64[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args64[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args64[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args64[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names28[9];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L8(r58)
  // L8(r58)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r58_;
  goto L8_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L27_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

L30_:;
  // dr4 = tryDispatchBuiltin.1("[", nms5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_nms5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc2 then L32() else L31(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr4)
    Rsh_Fir_reg_nms7_ = Rsh_Fir_reg_dr4_;
    goto L31_;
  }

L31_:;
  // rev = ldf rev
  Rsh_Fir_reg_rev = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // p16 = prom<V +>{
  //   isc = ld isc;
  //   isc1 = force? isc;
  //   checkMissing(isc1);
  //   return isc1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r56 = dyn rev(p16)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names29, CCP, RHO);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r57 = dyn __3(nms7, r56)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_nms7_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L9(r57)
  // L9(r57)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r57_;
  goto L9_;

L32_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L9(dx4)
  // L9(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bymedian2_;
  SEXP Rsh_Fir_reg_bymedian3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bymedian2 = ld bymedian
  Rsh_Fir_reg_bymedian2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // bymedian3 = force? bymedian2
  Rsh_Fir_reg_bymedian3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bymedian2_);
  // checkMissing(bymedian3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_bymedian3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return bymedian3
  return Rsh_Fir_reg_bymedian3_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sc2_;
  SEXP Rsh_Fir_reg_sc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sc2 = ld sc
  Rsh_Fir_reg_sc2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // sc3 = force? sc2
  Rsh_Fir_reg_sc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc2_);
  // checkMissing(sc3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return sc3
  return Rsh_Fir_reg_sc3_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bymedianR2_;
  SEXP Rsh_Fir_reg_bymedianR3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bymedianR2 = ld bymedianR
  Rsh_Fir_reg_bymedianR2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // bymedianR3 = force? bymedianR2
  Rsh_Fir_reg_bymedianR3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bymedianR2_);
  // checkMissing(bymedianR3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_bymedianR3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return bymedianR3
  return Rsh_Fir_reg_bymedianR3_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_isc;
  SEXP Rsh_Fir_reg_isc1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // isc = ld isc
  Rsh_Fir_reg_isc = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // isc1 = force? isc
  Rsh_Fir_reg_isc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isc);
  // checkMissing(isc1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_isc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return isc1
  return Rsh_Fir_reg_isc1_;
}
SEXP Rsh_Fir_user_function_inner1618591243_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1618591243 dynamic dispatch ([x, X, FUN, `...`, order, decreasing])

  return Rsh_Fir_user_version_inner1618591243_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1618591243_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1618591243 version 0 (*, *, *, dots, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1618591243/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_FUN;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_order1;
  SEXP Rsh_Fir_reg_decreasing;
  SEXP Rsh_Fir_reg_FUN_isMissing;
  SEXP Rsh_Fir_reg_FUN_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_order_isMissing;
  SEXP Rsh_Fir_reg_order_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_decreasing_isMissing;
  SEXP Rsh_Fir_reg_decreasing_orDefault;
  SEXP Rsh_Fir_reg_tapply;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_reg_r19_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_X = PARAMS[1];
  Rsh_Fir_reg_FUN = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_order1 = PARAMS[4];
  Rsh_Fir_reg_decreasing = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // FUN_isMissing = missing.0(FUN)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_FUN;
  Rsh_Fir_reg_FUN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args74);
  // if FUN_isMissing then L0() else L1(FUN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_FUN_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(FUN)
    Rsh_Fir_reg_FUN_orDefault = Rsh_Fir_reg_FUN;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   mean = ld mean;
  //   mean1 = force? mean;
  //   checkMissing(mean1);
  //   return mean1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_FUN_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st FUN = FUN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_FUN_orDefault, RHO);
  (void)(Rsh_Fir_reg_FUN_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // order_isMissing = missing.0(order)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_order1;
  Rsh_Fir_reg_order_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args76);
  // if order_isMissing then L2() else L3(order)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_order_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(order)
    Rsh_Fir_reg_order_orDefault = Rsh_Fir_reg_order1;
    goto L3_;
  }

L2_:;
  // p2 = prom<V +>{
  //   is_ordered = ldf `is.ordered`;
  //   p1 = prom<V +>{
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     return x2;
  //   };
  //   r2 = dyn is_ordered(p1);
  //   return r2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_1, 0, NULL, CCP, RHO);
  // goto L3(p2)
  // L3(p2)
  Rsh_Fir_reg_order_orDefault = Rsh_Fir_reg_p2_1;
  goto L3_;

L3_:;
  // st order = order_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_order_orDefault, RHO);
  (void)(Rsh_Fir_reg_order_orDefault);
  // decreasing_isMissing = missing.0(decreasing)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_decreasing;
  Rsh_Fir_reg_decreasing_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args79);
  // if decreasing_isMissing then L4(FALSE) else L4(decreasing)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_decreasing_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_const(CCP, 37);
    goto L4_;
  } else {
  // L4(decreasing)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_Fir_reg_decreasing;
    goto L4_;
  }

L4_:;
  // st decreasing = decreasing_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_decreasing_orDefault, RHO);
  (void)(Rsh_Fir_reg_decreasing_orDefault);
  // tapply = ldf tapply
  Rsh_Fir_reg_tapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p3 = prom<V +>{
  //   X1 = ld X;
  //   X2 = force? X1;
  //   checkMissing(X2);
  //   return X2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_5, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // r7 = dyn tapply[X, INDEX, FUN, `...`](p3, p4, p5, ddd1)
  SEXP Rsh_Fir_array_args83[4];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args83[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_arg_names33[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_arg_names33[3] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tapply, 4, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L6_:;
  // st scores = r7
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p10 = prom<V +>{
  //   order1 = ld order;
  //   order2 = force? order1;
  //   checkMissing(order2);
  //   c = `as.logical`(order2);
  //   if c then L2() else L0();
  // L0():
  //   factor = ld factor;
  //   factor1 = force? factor;
  //   checkMissing(factor1);
  //   goto L1(factor1);
  // L1(ordered2):
  //   checkFun.0(ordered2);
  //   ordered3 = ordered2 as cls;
  //   p6 = prom<V +>{
  //     x5 = ld x;
  //     x6 = force? x5;
  //     checkMissing(x6);
  //     return x6;
  //   };
  //   p9 = prom<V +>{
  //     sym = ldf names;
  //     base = ldf names in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r10):
  //     return r10;
  //   L1():
  //     sort = ldf sort;
  //     p7 = prom<V +>{
  //       scores = ld scores;
  //       scores1 = force? scores;
  //       checkMissing(scores1);
  //       return scores1;
  //     };
  //     p8 = prom<V +>{
  //       decreasing1 = ld decreasing;
  //       decreasing2 = force? decreasing1;
  //       checkMissing(decreasing2);
  //       return decreasing2;
  //     };
  //     r13 = dyn sort[, decreasing, `na.last`](p7, p8, TRUE);
  //     names = ldf names in base;
  //     r14 = dyn names(r13);
  //     goto L0(r14);
  //   L2():
  //     r9 = dyn base(<lang sort(scores, decreasing=decreasing, na.last=TRUE)>);
  //     goto L0(r9);
  //   };
  //   r16 = dyn ordered3[, levels](p6, p9);
  //   return r16;
  // L2():
  //   ordered = ld ordered;
  //   ordered1 = force? ordered;
  //   checkMissing(ordered1);
  //   goto L1(ordered1);
  // }
  Rsh_Fir_reg_p10_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_6, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   scores2 = ld scores;
  //   scores3 = force? scores2;
  //   checkMissing(scores3);
  //   return scores3;
  // }
  Rsh_Fir_reg_p11_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_11, 0, NULL, CCP, RHO);
  // r19 = dyn structure[, scores](p10, p11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p10_1;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 16 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_1;
}
SEXP Rsh_Fir_user_promise_inner1618591243_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_mean1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // mean = ld mean
  Rsh_Fir_reg_mean = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // mean1 = force? mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean);
  // checkMissing(mean1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_mean1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return mean1
  return Rsh_Fir_reg_mean1_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_is_ordered;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // is_ordered = ldf `is.ordered`
  Rsh_Fir_reg_is_ordered = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_2, 0, NULL, CCP, RHO);
  // r2 = dyn is_ordered(p1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_ordered, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X1_;
  SEXP Rsh_Fir_reg_X2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return X2
  return Rsh_Fir_reg_X2_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN1_;
  SEXP Rsh_Fir_reg_FUN2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order1_;
  SEXP Rsh_Fir_reg_order2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_ordered;
  SEXP Rsh_Fir_reg_ordered1_;
  SEXP Rsh_Fir_reg_ordered2_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_factor1_;
  SEXP Rsh_Fir_reg_ordered3_;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // order1 = ld order
  Rsh_Fir_reg_order1_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // order2 = force? order1
  Rsh_Fir_reg_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order1_);
  // checkMissing(order2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(order2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_order2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // if c then L2() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2()
    goto L2_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // factor = ld factor
  Rsh_Fir_reg_factor = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // factor1 = force? factor
  Rsh_Fir_reg_factor1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_factor);
  // checkMissing(factor1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_factor1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // goto L1(factor1)
  // L1(factor1)
  Rsh_Fir_reg_ordered2_ = Rsh_Fir_reg_factor1_;
  goto L1_;

L1_:;
  // checkFun.0(ordered2)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ordered2_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args87));
  // ordered3 = ordered2 as cls
  Rsh_Fir_reg_ordered3_ = Rsh_Fir_cast(Rsh_Fir_reg_ordered2_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p6 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_7, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym = ldf names;
  //   base = ldf names in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   sort = ldf sort;
  //   p7 = prom<V +>{
  //     scores = ld scores;
  //     scores1 = force? scores;
  //     checkMissing(scores1);
  //     return scores1;
  //   };
  //   p8 = prom<V +>{
  //     decreasing1 = ld decreasing;
  //     decreasing2 = force? decreasing1;
  //     checkMissing(decreasing2);
  //     return decreasing2;
  //   };
  //   r13 = dyn sort[, decreasing, `na.last`](p7, p8, TRUE);
  //   names = ldf names in base;
  //   r14 = dyn names(r13);
  //   goto L0(r14);
  // L2():
  //   r9 = dyn base(<lang sort(scores, decreasing=decreasing, na.last=TRUE)>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_8, 0, NULL, CCP, RHO);
  // r16 = dyn ordered3[, levels](p6, p9)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ordered3_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names37, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;

L2_:;
  // ordered = ld ordered
  Rsh_Fir_reg_ordered = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // ordered1 = force? ordered
  Rsh_Fir_reg_ordered1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ordered);
  // checkMissing(ordered1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_ordered1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // goto L1(ordered1)
  // L1(ordered1)
  Rsh_Fir_reg_ordered2_ = Rsh_Fir_reg_ordered1_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_names1;
  SEXP Rsh_Fir_reg_r14_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // sym = ldf names
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // p7 = prom<V +>{
  //   scores = ld scores;
  //   scores1 = force? scores;
  //   checkMissing(scores1);
  //   return scores1;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_9, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   decreasing1 = ld decreasing;
  //   decreasing2 = force? decreasing1;
  //   checkMissing(decreasing2);
  //   return decreasing2;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1618591243_10, 0, NULL, CCP, RHO);
  // r13 = dyn sort[, decreasing, `na.last`](p7, p8, TRUE)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names34[2] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names34, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r14 = dyn names(r13)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r14_1;
  goto L0_;

L2_:;
  // r9 = dyn base(<lang sort(scores, decreasing=decreasing, na.last=TRUE)>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_scores;
  SEXP Rsh_Fir_reg_scores1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // scores = ld scores
  Rsh_Fir_reg_scores = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // scores1 = force? scores
  Rsh_Fir_reg_scores1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scores);
  // checkMissing(scores1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_scores1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return scores1
  return Rsh_Fir_reg_scores1_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_decreasing1_;
  SEXP Rsh_Fir_reg_decreasing2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // decreasing1 = ld decreasing
  Rsh_Fir_reg_decreasing1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // decreasing2 = force? decreasing1
  Rsh_Fir_reg_decreasing2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing1_);
  // checkMissing(decreasing2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_decreasing2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return decreasing2
  return Rsh_Fir_reg_decreasing2_;
}
SEXP Rsh_Fir_user_promise_inner1618591243_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_scores2_;
  SEXP Rsh_Fir_reg_scores3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1618591243/0: expected 0, got %d", NCAPTURES);

  // scores2 = ld scores
  Rsh_Fir_reg_scores2_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // scores3 = force? scores2
  Rsh_Fir_reg_scores3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scores2_);
  // checkMissing(scores3)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_scores3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return scores3
  return Rsh_Fir_reg_scores3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
