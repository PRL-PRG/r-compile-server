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
SEXP Rsh_Fir_user_function_inner3464236862_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3464236862_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3464236862_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464236862_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_fit;
  SEXP Rsh_Fir_reg_fit1_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_setClass;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_myReg;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_fit4_;
  SEXP Rsh_Fir_reg_fit5_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_S3Part;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_as;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_as1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_class1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_as2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_class2_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_setClass1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_xlm;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_removeClass;
  SEXP Rsh_Fir_reg_r55_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3464236862
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3464236862_, RHO, CCP);
  // st S3Part = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   __ = ldf `::`;
  //   r1 = dyn __("datasets", "iris");
  //   c = `is.object`(r1);
  //   if c then L2() else L3(r1);
  // L0(dx1):
  //   return dx1;
  // L2():
  //   dr = tryDispatchBuiltin.1("[", r1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(r3):
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L5() else L6();
  // L1(r8):
  //   __1 = ldf `[` in base;
  //   r10 = dyn __1(r1, <missing>, r8);
  //   goto L0(r10);
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   c1 = ldf c in base;
  //   r9 = dyn c1("Sepal.Width", "Sepal.Length");
  //   goto L1(r9);
  // L6():
  //   r6 = dyn base("Sepal.Width", "Sepal.Length");
  //   goto L1(r6);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r12 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 6 [r12]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st sepal = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // lm = ldf lm
  Rsh_Fir_reg_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r13 = dyn __2(<sym sepal>, <lang `+`(`+`(Petal.Length, Petal.Width), Species)>);
  //   return r13;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   __3 = ldf `::`;
  //   r15 = dyn __3("datasets", "iris");
  //   return r15;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r17 = dyn lm[, data](p1, p2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 13 [r17]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st fit = r17
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf class
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf class in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // setClass = ldf setClass
  Rsh_Fir_reg_setClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L8_:;
  // fit = ld fit
  Rsh_Fir_reg_fit = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L9_:;
  // r18 = dyn base1(<sym fit>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D4_:;
  // deopt 17 [fit]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_fit;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // fit1 = force? fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit);
  // checkMissing(fit1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r20 = dyn class(fit1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_fit1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

L12_:;
  // p3 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   c2 = ldf c in base;
  //   r23 = dyn c2("character");
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base2[title]("character");
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r25 = dyn setClass[, slots, contains]("myReg", p3, "mlm")
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D5_:;
  // deopt 20 [r20]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0()
  // L0()
  goto L0_;

L13_:;
  // st myReg = r25
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // myReg = ldf myReg
  Rsh_Fir_reg_myReg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   fit2 = ld fit;
  //   fit3 = force? fit2;
  //   checkMissing(fit3);
  //   return fit3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r27 = dyn myReg[, title](p4, "Sepal Regression for iris data")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myReg, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 35 [r27]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // st fit2 = r27
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // fit4 = ld fit2
  Rsh_Fir_reg_fit4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 37 [fit4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_fit4_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // fit5 = force? fit4
  Rsh_Fir_reg_fit5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit4_);
  // checkMissing(fit5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_fit5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L1_:;
  // sym4 = ldf class
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf class in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L17_:;
  // S3Part = ldf S3Part
  Rsh_Fir_reg_S3Part = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

L18_:;
  // r28 = dyn base3(<lang S3Part(fit2)>, <lang as(fit2, "mlm")>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym5 = ldf class
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base5 = ldf class in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard5 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L19_:;
  // p5 = prom<V +>{
  //   fit6 = ld fit2;
  //   fit7 = force? fit6;
  //   checkMissing(fit7);
  //   return fit7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r31 = dyn S3Part(p5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_S3Part, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

L24_:;
  // as1 = ldf as
  Rsh_Fir_reg_as1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L26() else D16()
  // L26()
  goto L26_;

L25_:;
  // r35 = dyn base4(<lang as(fit2, "mlm")>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D12_:;
  // deopt 44 [r31]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // setClass1 = ldf setClass
  Rsh_Fir_reg_setClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L34() else D22()
  // L34()
  goto L34_;

L20_:;
  // as = ldf as
  Rsh_Fir_reg_as = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

L26_:;
  // p7 = prom<V +>{
  //   fit10 = ld fit2;
  //   fit11 = force? fit10;
  //   checkMissing(fit11);
  //   return fit11;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r38 = dyn as1(p7, "mlm")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L27() else D17()
  // L27()
  goto L27_;

L29_:;
  // as2 = ldf as
  Rsh_Fir_reg_as2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L31() else D19()
  // L31()
  goto L31_;

L30_:;
  // r40 = dyn base5(<lang as(fit2, "S3")>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D13_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 65 [r38]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p6 = prom<V +>{
  //   fit8 = ld fit2;
  //   fit9 = force? fit8;
  //   checkMissing(fit9);
  //   return fit9;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r33 = dyn as(p6, "mlm")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

L27_:;
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r39 = dyn class1(r38)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L28() else D18()
  // L28()
  goto L28_;

L31_:;
  // p8 = prom<V +>{
  //   fit12 = ld fit2;
  //   fit13 = force? fit12;
  //   checkMissing(fit13);
  //   return fit13;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r43 = dyn as2(p8, "S3")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L32() else D20()
  // L32()
  goto L32_;

L34_:;
  // p9 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r46):
  //   return r46;
  // L1():
  //   c3 = ldf c in base;
  //   r47 = dyn c3("numeric");
  //   goto L0(r47);
  // L2():
  //   r45 = dyn base6[eps]("numeric");
  //   goto L0(r45);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r49 = dyn setClass1[, slots, contains]("xlm", p9, "lm")
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass1_, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L35() else D23()
  // L35()
  goto L35_;

D14_:;
  // deopt 49 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 67 [r39]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 74 [r43]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 84 [r49]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L22_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r34 = dyn identical(r31, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args43[9];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[4] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[5] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[6] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args43[7] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[8] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[9];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

L28_:;
  // goto L2()
  // L2()
  goto L2_;

L32_:;
  // class2 = ldf class in base
  Rsh_Fir_reg_class2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r44 = dyn class2(r43)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L33() else D21()
  // L33()
  goto L33_;

L35_:;
  // st xlm = r49
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // xlm = ldf xlm
  Rsh_Fir_reg_xlm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L36() else D24()
  // L36()
  goto L36_;

D15_:;
  // deopt 58 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 76 [r44]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L1()
  // L1()
  goto L1_;

L33_:;
  // goto L3()
  // L3()
  goto L3_;

L36_:;
  // p10 = prom<V +>{
  //   fit14 = ld fit;
  //   fit15 = force? fit14;
  //   checkMissing(fit15);
  //   return fit15;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c4 = `is.object`(_Machine1);
  //   if c4 then L1() else L2(_Machine1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", _Machine1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(_Machine3):
  //   r51 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r51);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r53 = dyn xlm[, eps](p10, p11)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xlm, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L37() else D25()
  // L37()
  goto L37_;

D25_:;
  // deopt 91 [r53]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // st xfit = r53
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // __4 = ldf `@` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // dyn __4(<sym xfit>, <sym .S3Class>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names28, CCP, RHO));
  // removeClass = ldf removeClass
  Rsh_Fir_reg_removeClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L38() else D26()
  // L38()
  goto L38_;

D26_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r55 = dyn removeClass("myReg")
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_removeClass, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L39() else D27()
  // L39()
  goto L39_;

D27_:;
  // deopt 98 [r55]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r1 = dyn __("datasets", "iris")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L2() else L3(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L3(r1)
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r1_;
    goto L3_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L2_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r10 = dyn __1(r1, <missing>, r8)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L0_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r9 = dyn c1("Sepal.Width", "Sepal.Length")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L6_:;
  // r6 = dyn base("Sepal.Width", "Sepal.Length")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r13 = dyn __2(<sym sepal>, <lang `+`(`+`(Petal.Length, Petal.Width), Species)>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __3 = ldf `::`
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r15 = dyn __3("datasets", "iris")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r23 = dyn c2("character")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base2[title]("character")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit2_;
  SEXP Rsh_Fir_reg_fit3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit2 = ld fit
  Rsh_Fir_reg_fit2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // fit3 = force? fit2
  Rsh_Fir_reg_fit3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit2_);
  // checkMissing(fit3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_fit3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return fit3
  return Rsh_Fir_reg_fit3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit6_;
  SEXP Rsh_Fir_reg_fit7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit6 = ld fit2
  Rsh_Fir_reg_fit6_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // fit7 = force? fit6
  Rsh_Fir_reg_fit7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit6_);
  // checkMissing(fit7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_fit7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return fit7
  return Rsh_Fir_reg_fit7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit10_;
  SEXP Rsh_Fir_reg_fit11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit10 = ld fit2
  Rsh_Fir_reg_fit10_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // fit11 = force? fit10
  Rsh_Fir_reg_fit11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit10_);
  // checkMissing(fit11)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_fit11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return fit11
  return Rsh_Fir_reg_fit11_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit8_;
  SEXP Rsh_Fir_reg_fit9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit8 = ld fit2
  Rsh_Fir_reg_fit8_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // fit9 = force? fit8
  Rsh_Fir_reg_fit9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit8_);
  // checkMissing(fit9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_fit9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return fit9
  return Rsh_Fir_reg_fit9_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit12_;
  SEXP Rsh_Fir_reg_fit13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit12 = ld fit2
  Rsh_Fir_reg_fit12_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // fit13 = force? fit12
  Rsh_Fir_reg_fit13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit12_);
  // checkMissing(fit13)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_fit13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return fit13
  return Rsh_Fir_reg_fit13_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r47 = dyn c3("numeric")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L0_;

L2_:;
  // r45 = dyn base6[eps]("numeric")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fit14_;
  SEXP Rsh_Fir_reg_fit15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fit14 = ld fit
  Rsh_Fir_reg_fit14_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // fit15 = force? fit14
  Rsh_Fir_reg_fit15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit14_);
  // checkMissing(fit15)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_fit15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return fit15
  return Rsh_Fir_reg_fit15_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c4 then L1() else L2(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r51 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args50);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r51_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3464236862_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3464236862 dynamic dispatch ([object, strictS3, S3Class])

  return Rsh_Fir_user_version_inner3464236862_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3464236862_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3464236862 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3464236862/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_strictS3_;
  SEXP Rsh_Fir_reg_S3Class;
  SEXP Rsh_Fir_reg_strictS3_isMissing;
  SEXP Rsh_Fir_reg_strictS3_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_reg_isS4_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_object3_;
  SEXP Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_reg_getClass;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_extends;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_oldClassCase;
  SEXP Rsh_Fir_reg_oldClassCase1_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_defltS3Class;
  SEXP Rsh_Fir_reg_defltS3Class1_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg__S3Class;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_slotNames;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_extends1_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg__BasicClasses;
  SEXP Rsh_Fir_reg__BasicClasses1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r44_1;
  SEXP Rsh_Fir_reg_r45_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r46_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r47_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r49_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r51_1;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_S3Class5_;
  SEXP Rsh_Fir_reg_S3Class6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r53_1;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_object11_;
  SEXP Rsh_Fir_reg_object12_;
  SEXP Rsh_Fir_reg_typeof;
  SEXP Rsh_Fir_reg_r55_1;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_slotNames1_;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_defltS3Class2_;
  SEXP Rsh_Fir_reg_defltS3Class3_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_extends2_;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_strictS4_;
  SEXP Rsh_Fir_reg_strictS5_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_keepSlots;
  SEXP Rsh_Fir_reg_keepSlots1_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_keepSlots3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_keepSlots6_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_keepSlots9_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_keepSlots10_;
  SEXP Rsh_Fir_reg_keepSlots11_;
  SEXP Rsh_Fir_reg_match1_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg___3_1;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_slotNames2_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_deleteSlots;
  SEXP Rsh_Fir_reg_deleteSlots1_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_deleteSlots3_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_deleteSlots6_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_deleteSlots9_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_deleteSlots10_;
  SEXP Rsh_Fir_reg_deleteSlots11_;
  SEXP Rsh_Fir_reg_keepSlots12_;
  SEXP Rsh_Fir_reg_keepSlots13_;
  SEXP Rsh_Fir_reg_match2_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg___4_1;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_deleteSlots12_;
  SEXP Rsh_Fir_reg_deleteSlots13_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_strictS6_;
  SEXP Rsh_Fir_reg_strictS7_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg__notS4_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_S3Class15_;
  SEXP Rsh_Fir_reg_S3Class16_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_S3Class18_;
  SEXP Rsh_Fir_reg_S3Class19_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_S3Class21_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_class__1_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_object17_;
  SEXP Rsh_Fir_reg_object18_;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_strictS3_ = PARAMS[1];
  Rsh_Fir_reg_S3Class = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // strictS3_isMissing = missing.0(strictS3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_strictS3_;
  Rsh_Fir_reg_strictS3_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args55);
  // if strictS3_isMissing then L0(FALSE) else L0(strictS3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_strictS3_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_strictS3_orDefault = Rsh_const(CCP, 39);
    goto L0_;
  } else {
  // L0(strictS3)
    Rsh_Fir_reg_strictS3_orDefault = Rsh_Fir_reg_strictS3_;
    goto L0_;
  }

L0_:;
  // st strictS3 = strictS3_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_strictS3_orDefault, RHO);
  (void)(Rsh_Fir_reg_strictS3_orDefault);
  // st S3Class = S3Class
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_S3Class, RHO);
  (void)(Rsh_Fir_reg_S3Class);
  // sym = ldf isS4
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base = ldf isS4 in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args57);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // if c then L40() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L40()
    goto L40_;
  } else {
  // L2()
    goto L2_;
  }

L36_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L38() else D0()
  // L38()
  goto L38_;

L37_:;
  // r = dyn base(<sym object>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L2_:;
  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

L38_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r2 = dyn isS4(object2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L39() else D1()
  // L39()
  goto L39_;

L40_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L41() else D2()
  // L41()
  goto L41_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 [object3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L41_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object4
  return Rsh_Fir_reg_object4_;

L44_:;
  // p = prom<V +>{
  //   sym1 = ldf class;
  //   base1 = ldf class in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   class = ldf class in base;
  //   r8 = dyn class(object6);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<sym object>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_, 0, NULL, CCP, RHO);
  // r10 = dyn getClass(p)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L45() else D4()
  // L45()
  goto L45_;

D4_:;
  // deopt 15 [r10]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L45_:;
  // st classDef = r10
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // extends = ldf extends
  Rsh_Fir_reg_extends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L46() else D5()
  // L46()
  goto L46_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p1 = prom<V +>{
  //   classDef = ld classDef;
  //   classDef1 = force? classDef;
  //   checkMissing(classDef1);
  //   return classDef1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_1, 0, NULL, CCP, RHO);
  // r12 = dyn extends(p1, "oldClass")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extends, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L47() else D6()
  // L47()
  goto L47_;

D6_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L47_:;
  // st oldClassCase = r12
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r12_1, RHO);
  (void)(Rsh_Fir_reg_r12_1);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard2 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L4_:;
  // st defltS3Class = r14
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // oldClassCase = ld oldClassCase
  Rsh_Fir_reg_oldClassCase = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L48_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r15 = dyn missing(<sym S3Class>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L4_;

L49_:;
  // r13 = dyn base2(<sym S3Class>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L4_;

D7_:;
  // deopt 27 [oldClassCase]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_oldClassCase;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L50_:;
  // oldClassCase1 = force? oldClassCase
  Rsh_Fir_reg_oldClassCase1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldClassCase);
  // checkMissing(oldClassCase1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_oldClassCase1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(oldClassCase1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_oldClassCase1_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args74);
  // if c1 then L51() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L51()
    goto L51_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym3 = ldf all
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base3 = ldf all in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard3 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L8_:;
  // defltS3Class2 = ld defltS3Class
  Rsh_Fir_reg_defltS3Class2_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L97() else D28()
  // L97()
  goto L97_;

L51_:;
  // defltS3Class = ld defltS3Class
  Rsh_Fir_reg_defltS3Class = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

D8_:;
  // deopt 29 [defltS3Class]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_defltS3Class;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 100 [defltS3Class2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_defltS3Class2_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L9_:;
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c4 then L72() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L72()
    goto L72_;
  } else {
  // L12()
    goto L12_;
  }

L52_:;
  // defltS3Class1 = force? defltS3Class
  Rsh_Fir_reg_defltS3Class1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defltS3Class);
  // checkMissing(defltS3Class1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_defltS3Class1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(defltS3Class1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_defltS3Class1_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // if c2 then L53() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L53()
    goto L53_;
  } else {
  // L6()
    goto L6_;
  }

L60_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L61_:;
  // r23 = dyn base3(<lang is.na(match(extends(classDef), .BasicClasses))>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_1;
  goto L9_;

L97_:;
  // defltS3Class3 = force? defltS3Class2
  Rsh_Fir_reg_defltS3Class3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defltS3Class2_);
  // checkMissing(defltS3Class3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_defltS3Class3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c10 = `as.logical`(defltS3Class3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_defltS3Class3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c10 then L20(c10) else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L20(c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c10_;
    goto L20_;
  } else {
  // L98()
    goto L98_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // slotNames = ldf slotNames
  Rsh_Fir_reg_slotNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L10_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r33 = dyn all(r26)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L71() else D18()
  // L71()
  goto L71_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L20_:;
  // r64 = `!`(c11)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args85);
  // c16 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // if c16 then L102() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L102()
    goto L102_;
  } else {
  // L21()
    goto L21_;
  }

L53_:;
  // _S3Class = ldf `.S3Class`
  Rsh_Fir_reg__S3Class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L54() else D9()
  // L54()
  goto L54_;

L62_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L63_:;
  // r25 = dyn base4(<lang match(extends(classDef), .BasicClasses)>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_1;
  goto L10_;

L72_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L73() else D19()
  // L73()
  goto L73_;

L98_:;
  // extends2 = ldf extends
  Rsh_Fir_reg_extends2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 62 [r33]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 103 [c10]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L11_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r32 = dyn is_na(r28)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L70() else D17()
  // L70()
  goto L70_;

L14_:;
  // c5 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r45_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c5 then L78() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L78()
    goto L78_;
  } else {
  // L15()
    goto L15_;
  }

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // strictS4 = ld strictS3
  Rsh_Fir_reg_strictS4_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L106() else D33()
  // L106()
  goto L106_;

L54_:;
  // p2 = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   return object8;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_2, 0, NULL, CCP, RHO);
  // r17 = dyn _S3Class(p2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__S3Class, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L55() else D10()
  // L55()
  goto L55_;

L57_:;
  // p3 = prom<V +>{
  //   S3Class1 = ld S3Class;
  //   S3Class2 = force? S3Class1;
  //   checkMissing(S3Class2);
  //   c3 = `is.object`(S3Class2);
  //   if c3 then L1() else L2(S3Class2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", S3Class2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(S3Class4):
  //   __ = ldf `[[` in base;
  //   r19 = dyn __(S3Class4, 1);
  //   goto L0(r19);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_3, 0, NULL, CCP, RHO);
  // r21 = dyn slotNames(p3)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

L64_:;
  // extends1 = ldf extends
  Rsh_Fir_reg_extends1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L66() else D13()
  // L66()
  goto L66_;

L65_:;
  // r27 = dyn base5(<lang extends(classDef)>, <sym .BasicClasses>)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r27_1;
  goto L11_;

L71_:;
  // goto L9(r33)
  // L9(r33)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r33_1;
  goto L9_;

L73_:;
  // p7 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p6 = prom<V +>{
  //     dQuote = ldf dQuote;
  //     p5 = prom<V +>{
  //       sym6 = ldf class;
  //       base6 = ldf class in base;
  //       guard6 = `==`.4(sym6, base6);
  //       if guard6 then L1() else L2();
  //     L0(r35):
  //       return r35;
  //     L1():
  //       object9 = ld object;
  //       object10 = force? object9;
  //       checkMissing(object10);
  //       class1 = ldf class in base;
  //       r36 = dyn class1(object10);
  //       goto L0(r36);
  //     L2():
  //       r34 = dyn base6(<sym object>);
  //       goto L0(r34);
  //     };
  //     r38 = dyn dQuote(p5);
  //     return r38;
  //   };
  //   r40 = dyn gettextf("S3Part() is only defined for classes set up by setOldCLass(), basic classes or subclasses of these:  not true of class %s", p6);
  //   return r40;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_4, 0, NULL, CCP, RHO);
  // r42 = dyn stop[, domain](p7, NA_LGL)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = Rsh_const(CCP, 75);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L74() else D20()
  // L74()
  goto L74_;

L76_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r46 = dyn missing1(<sym S3Class>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r46_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L14(r46)
  // L14(r46)
  Rsh_Fir_reg_r45_1 = Rsh_Fir_reg_r46_1;
  goto L14_;

L77_:;
  // r44 = dyn base7(<sym S3Class>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r44_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L14(r44)
  // L14(r44)
  Rsh_Fir_reg_r45_1 = Rsh_Fir_reg_r44_1;
  goto L14_;

L99_:;
  // p9 = prom<V +>{
  //   classDef4 = ld classDef;
  //   classDef5 = force? classDef4;
  //   checkMissing(classDef5);
  //   return classDef5;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_7, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   S3Class11 = ld S3Class;
  //   S3Class12 = force? S3Class11;
  //   checkMissing(S3Class12);
  //   return S3Class12;
  // }
  Rsh_Fir_reg_p10_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_8, 0, NULL, CCP, RHO);
  // r63 = dyn extends2(p9, p10)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extends2_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L100() else D30()
  // L100()
  goto L100_;

L102_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L103() else D31()
  // L103()
  goto L103_;

D10_:;
  // deopt 34 [r17]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 60 [r32]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 68 [r42]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 106 [c10, r63]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 117 [strictS4]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_strictS4_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L15_:;
  // slotNames1 = ldf slotNames
  Rsh_Fir_reg_slotNames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L95() else D26()
  // L95()
  goto L95_;

L55_:;
  // st S3Class = r17
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // goto L7()
  // L7()
  goto L7_;

L58_:;
  // st keepSlots = r21
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_r21_1, RHO);
  (void)(Rsh_Fir_reg_r21_1);
  // goto L8()
  // L8()
  goto L8_;

L66_:;
  // p4 = prom<V +>{
  //   classDef2 = ld classDef;
  //   classDef3 = force? classDef2;
  //   checkMissing(classDef3);
  //   return classDef3;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_9, 0, NULL, CCP, RHO);
  // r30 = dyn extends1(p4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extends1_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L67() else D14()
  // L67()
  goto L67_;

L70_:;
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r32_;
  goto L10_;

L74_:;
  // goto L13()
  // L13()
  goto L13_;

L78_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r47 = dyn __1(<sym classDef>, <sym slots>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r47_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names55, CCP, RHO);
  // c6 = `is.object`(r47)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r47_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args116);
  // if c6 then L80() else L81(r47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L80()
    goto L80_;
  } else {
  // L81(r47)
    Rsh_Fir_reg_r49_1 = Rsh_Fir_reg_r47_1;
    goto L81_;
  }

L100_:;
  // c13 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args117);
  // c14 = `||`(c10, c13)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args118);
  // goto L20(c14)
  // L20(c14)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c14_;
  goto L20_;

L103_:;
  // p15 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p12 = prom<V +>{
  //     dQuote1 = ldf dQuote;
  //     p11 = prom<V +>{
  //       sym10 = ldf class;
  //       base10 = ldf class in base;
  //       guard10 = `==`.4(sym10, base10);
  //       if guard10 then L1() else L2();
  //     L0(r66):
  //       return r66;
  //     L1():
  //       object13 = ld object;
  //       object14 = force? object13;
  //       checkMissing(object14);
  //       class2 = ldf class in base;
  //       r67 = dyn class2(object14);
  //       goto L0(r67);
  //     L2():
  //       r65 = dyn base10(<sym object>);
  //       goto L0(r65);
  //     };
  //     r69 = dyn dQuote1(p11);
  //     return r69;
  //   };
  //   p14 = prom<V +>{
  //     dQuote2 = ldf dQuote;
  //     p13 = prom<V +>{
  //       S3Class13 = ld S3Class;
  //       S3Class14 = force? S3Class13;
  //       checkMissing(S3Class14);
  //       return S3Class14;
  //     };
  //     r72 = dyn dQuote2(p13);
  //     return r72;
  //   };
  //   r74 = dyn gettextf1("the 'S3Class' argument must be a superclass of %s:  not true of class %s", p12, p14);
  //   return r74;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_10, 0, NULL, CCP, RHO);
  // r76 = dyn stop1[, domain](p15, NA_LGL)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = Rsh_const(CCP, 75);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L104() else D32()
  // L104()
  goto L104_;

L106_:;
  // strictS5 = force? strictS4
  Rsh_Fir_reg_strictS5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strictS4_);
  // checkMissing(strictS5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_strictS5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(strictS5)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_strictS5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args129);
  // if c17 then L107() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L107()
    goto L107_;
  } else {
  // L23()
    goto L23_;
  }

D14_:;
  // deopt 52 [r30]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 114 [r76]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // slotNames2 = ldf slotNames
  Rsh_Fir_reg_slotNames2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L120() else D38()
  // L120()
  goto L120_;

L67_:;
  // _BasicClasses = ld `.BasicClasses`
  Rsh_Fir_reg__BasicClasses = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

L79_:;
  // st S3Class = dx3
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_dx3_1, RHO);
  (void)(Rsh_Fir_reg_dx3_1);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 78), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard8 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L80_:;
  // dr2 = tryDispatchBuiltin.1("$", r47)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_r47_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args131);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc1 then L82() else L81(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr2)
    Rsh_Fir_reg_r49_1 = Rsh_Fir_reg_dr2_1;
    goto L81_;
  }

L81_:;
  // r50 = `$`(r49, <sym .Data>)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r49_1;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 79);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args133);
  // goto L79(r50)
  // L79(r50)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r50_;
  goto L79_;

L95_:;
  // p8 = prom<V +>{
  //   S3Class7 = ld S3Class;
  //   S3Class8 = force? S3Class7;
  //   checkMissing(S3Class8);
  //   c9 = `is.object`(S3Class8);
  //   if c9 then L1() else L2(S3Class8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", S3Class8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(S3Class10):
  //   __2 = ldf `[[` in base;
  //   r58 = dyn __2(S3Class10, 1);
  //   goto L0(r58);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_15, 0, NULL, CCP, RHO);
  // r60 = dyn slotNames1(p8)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames1_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L96() else D27()
  // L96()
  goto L96_;

L104_:;
  // goto L22()
  // L22()
  goto L22_;

L107_:;
  // keepSlots = ld keepSlots
  Rsh_Fir_reg_keepSlots = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L108() else D34()
  // L108()
  goto L108_;

D15_:;
  // deopt 53 [_BasicClasses]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg__BasicClasses;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 98 [r60]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 119 [keepSlots]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_keepSlots;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 139 []
  Rsh_Fir_deopt(139, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // c8 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args141);
  // if c8 then L86() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L86()
    goto L86_;
  } else {
  // L17()
    goto L17_;
  }

L68_:;
  // _BasicClasses1 = force? _BasicClasses
  Rsh_Fir_reg__BasicClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BasicClasses);
  // checkMissing(_BasicClasses1)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg__BasicClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r31 = dyn match(r30, _BasicClasses1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args143[4];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg__BasicClasses1_;
  Rsh_Fir_array_args143[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args143[3] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names64[4];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_array_arg_names64[3] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

L82_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L79(dx2)
  // L79(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L79_;

L83_:;
  // S3Class5 = ld S3Class
  Rsh_Fir_reg_S3Class5_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

L84_:;
  // r51 = dyn base8(<sym S3Class>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r51_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L16(r51)
  // L16(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_1;
  goto L16_;

L96_:;
  // st keepSlots = r60
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // goto L8()
  // L8()
  goto L8_;

L108_:;
  // keepSlots1 = force? keepSlots
  Rsh_Fir_reg_keepSlots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keepSlots);
  // checkMissing(keepSlots1)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_keepSlots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(keepSlots1)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_keepSlots1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args147);
  // if c18 then L109() else L110(keepSlots1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L109()
    goto L109_;
  } else {
  // L110(keepSlots1)
    Rsh_Fir_reg_keepSlots3_ = Rsh_Fir_reg_keepSlots1_;
    goto L110_;
  }

L120_:;
  // p16 = prom<V +>{
  //   classDef6 = ld classDef;
  //   classDef7 = force? classDef6;
  //   checkMissing(classDef7);
  //   return classDef7;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_16, 0, NULL, CCP, RHO);
  // r86 = dyn slotNames2(p16)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames2_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L121() else D39()
  // L121()
  goto L121_;

D16_:;
  // deopt 58 [r31]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 79 [S3Class5]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_S3Class5_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 141 [r86]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L92() else D24()
  // L92()
  goto L92_;

L24_:;
  // st keepSlots = dx7
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L27()
  // L27()
  goto L27_;

L69_:;
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r31_1;
  goto L11_;

L85_:;
  // S3Class6 = force? S3Class5
  Rsh_Fir_reg_S3Class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class5_);
  // checkMissing(S3Class6)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_S3Class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c7 = `==`(S3Class6, NULL)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_S3Class6_;
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 81);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args151);
  // goto L16(c7)
  // L16(c7)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_c7_;
  goto L16_;

L86_:;
  // sym9 = ldf typeof
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base9 = ldf typeof in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args152);
  // if guard9 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L109_:;
  // dr6 = tryDispatchBuiltin.1("[", keepSlots1)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_keepSlots1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc3 then L111() else L110(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L111()
    goto L111_;
  } else {
  // L110(dr6)
    Rsh_Fir_reg_keepSlots3_ = Rsh_Fir_reg_dr6_;
    goto L110_;
  }

L110_:;
  // sym11 = ldf `is.na`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base11 = ldf `is.na` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard11 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L121_:;
  // st deleteSlots = r86
  Rsh_Fir_store(Rsh_const(CCP, 84), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // deleteSlots = ld deleteSlots
  Rsh_Fir_reg_deleteSlots = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L122() else D40()
  // L122()
  goto L122_;

D24_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 143 [deleteSlots]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_deleteSlots;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L18_:;
  // st S3Class = r54
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // goto L19()
  // L19()
  goto L19_;

L25_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r84 = dyn __3(keepSlots6, r79)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_keepSlots6_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_1, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L24(r84)
  // L24(r84)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r84_;
  goto L24_;

L87_:;
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L89() else D22()
  // L89()
  goto L89_;

L88_:;
  // r53 = dyn base9(<sym object>)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r53_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L18(r53)
  // L18(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_1;
  goto L18_;

L92_:;
  // r57 = dyn character()
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L93() else D25()
  // L93()
  goto L93_;

L111_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L24(dx6)
  // L24(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L24_;

L112_:;
  // sym12 = ldf match
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base12 = ldf match in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard12 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L113_:;
  // r78 = dyn base11(<lang match(keepSlots, ".S3Class")>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L25(keepSlots3, r78)
  // L25(keepSlots3, r78)
  Rsh_Fir_reg_keepSlots6_ = Rsh_Fir_reg_keepSlots3_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L25_;

L122_:;
  // deleteSlots1 = force? deleteSlots
  Rsh_Fir_reg_deleteSlots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deleteSlots);
  // checkMissing(deleteSlots1)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_deleteSlots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(deleteSlots1)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_deleteSlots1_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args162);
  // if c19 then L123() else L124(deleteSlots1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L123()
    goto L123_;
  } else {
  // L124(deleteSlots1)
    Rsh_Fir_reg_deleteSlots3_ = Rsh_Fir_reg_deleteSlots1_;
    goto L124_;
  }

D22_:;
  // deopt 84 [object11]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_object11_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 93 [r57]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L26_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r83 = dyn is_na1(r81)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L118() else D37()
  // L118()
  goto L118_;

L28_:;
  // st deleteSlots = dx10
  Rsh_Fir_store(Rsh_const(CCP, 84), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // deleteSlots12 = ld deleteSlots
  Rsh_Fir_reg_deleteSlots12_ = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L134() else D45()
  // L134()
  goto L134_;

L89_:;
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r55 = dyn typeof(object12)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_object12_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r55_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L90() else D23()
  // L90()
  goto L90_;

L93_:;
  // st keepSlots = r57
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // goto L8()
  // L8()
  goto L8_;

L114_:;
  // keepSlots10 = ld keepSlots
  Rsh_Fir_reg_keepSlots10_ = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L116() else D35()
  // L116()
  goto L116_;

L115_:;
  // r80 = dyn base12(<sym keepSlots>, ".S3Class")
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L26(keepSlots3, r80)
  // L26(keepSlots3, r80)
  Rsh_Fir_reg_keepSlots9_ = Rsh_Fir_reg_keepSlots3_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L26_;

L123_:;
  // dr8 = tryDispatchBuiltin.1("[", deleteSlots1)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_deleteSlots1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc4 then L125() else L124(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L125()
    goto L125_;
  } else {
  // L124(dr8)
    Rsh_Fir_reg_deleteSlots3_ = Rsh_Fir_reg_dr8_;
    goto L124_;
  }

L124_:;
  // sym13 = ldf `is.na`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base13 = ldf `is.na` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args169);
  // if guard13 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

D23_:;
  // deopt 87 [r55]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r55_1;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 125 [keepSlots3, keepSlots10]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_keepSlots3_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_keepSlots10_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 133 [keepSlots9, r83]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_keepSlots9_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 161 [deleteSlots12]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_deleteSlots12_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L29_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r93 = dyn __4(deleteSlots6, r88)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_deleteSlots6_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_1, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L28(r93)
  // L28(r93)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r93_;
  goto L28_;

L90_:;
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_1;
  goto L18_;

L116_:;
  // keepSlots11 = force? keepSlots10
  Rsh_Fir_reg_keepSlots11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keepSlots10_);
  // checkMissing(keepSlots11)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_keepSlots11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r82 = dyn match1(keepSlots11, ".S3Class", NA_INT, NULL)
  SEXP Rsh_Fir_array_args172[4];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_keepSlots11_;
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args172[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args172[3] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names74[4];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_array_arg_names74[3] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L117() else D36()
  // L117()
  goto L117_;

L118_:;
  // goto L25(keepSlots9, r83)
  // L25(keepSlots9, r83)
  Rsh_Fir_reg_keepSlots6_ = Rsh_Fir_reg_keepSlots9_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r83_;
  goto L25_;

L125_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L28(dx9)
  // L28(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L28_;

L126_:;
  // sym14 = ldf match
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base14 = ldf match in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args174);
  // if guard14 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L127_:;
  // r87 = dyn base13(<lang match(deleteSlots, keepSlots)>)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L29(deleteSlots3, r87)
  // L29(deleteSlots3, r87)
  Rsh_Fir_reg_deleteSlots6_ = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L29_;

L134_:;
  // deleteSlots13 = force? deleteSlots12
  Rsh_Fir_reg_deleteSlots13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deleteSlots12_);
  // checkMissing(deleteSlots13)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_deleteSlots13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // s = toForSeq(deleteSlots13)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_deleteSlots13_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args178);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 88);
  // goto L31(i)
  // L31(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L31_;

D36_:;
  // deopt 131 [keepSlots3, r82]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_keepSlots3_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L30_:;
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r92 = dyn is_na2(r90)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L133() else D44()
  // L133()
  goto L133_;

L31_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args180);
  // c20 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args181);
  // if c20 then L135() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L135()
    goto L135_;
  } else {
  // L32()
    goto L32_;
  }

L117_:;
  // goto L26(keepSlots3, r82)
  // L26(keepSlots3, r82)
  Rsh_Fir_reg_keepSlots9_ = Rsh_Fir_reg_keepSlots3_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L26_;

L128_:;
  // deleteSlots10 = ld deleteSlots
  Rsh_Fir_reg_deleteSlots10_ = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L130() else D41()
  // L130()
  goto L130_;

L129_:;
  // r89 = dyn base14(<sym deleteSlots>, <sym keepSlots>)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args182[1] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L30(deleteSlots3, r89)
  // L30(deleteSlots3, r89)
  Rsh_Fir_reg_deleteSlots9_ = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L30_;

D41_:;
  // deopt 149 [deleteSlots3, deleteSlots10]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_deleteSlots10_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 158 [deleteSlots9, r92]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_deleteSlots9_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L32_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args183[4];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args183[2] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args183[3] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args183);
  // st slot = x
  Rsh_Fir_store(Rsh_const(CCP, 89), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // l1 = ld object
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 90), RHO);
  // check L136() else D46()
  // L136()
  goto L136_;

L130_:;
  // deleteSlots11 = force? deleteSlots10
  Rsh_Fir_reg_deleteSlots11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deleteSlots10_);
  // checkMissing(deleteSlots11)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_deleteSlots11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // keepSlots12 = ld keepSlots
  Rsh_Fir_reg_keepSlots12_ = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L131() else D42()
  // L131()
  goto L131_;

L133_:;
  // goto L29(deleteSlots9, r92)
  // L29(deleteSlots9, r92)
  Rsh_Fir_reg_deleteSlots6_ = Rsh_Fir_reg_deleteSlots9_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r92_;
  goto L29_;

L135_:;
  // strictS6 = ld strictS3
  Rsh_Fir_reg_strictS6_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L138() else D48()
  // L138()
  goto L138_;

D42_:;
  // deopt 151 [deleteSlots3, keepSlots12]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_keepSlots12_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 166 [i2, NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_const(CCP, 81);
  Rsh_Fir_deopt(166, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 174 [strictS6]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_strictS6_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L131_:;
  // keepSlots13 = force? keepSlots12
  Rsh_Fir_reg_keepSlots13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keepSlots12_);
  // checkMissing(keepSlots13)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_keepSlots13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r91 = dyn match2(deleteSlots11, keepSlots13, NA_INT, NULL)
  SEXP Rsh_Fir_array_args186[4];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_deleteSlots11_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_keepSlots13_;
  Rsh_Fir_array_args186[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args186[3] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names78[4];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_array_arg_names78[2] = R_MissingArg;
  Rsh_Fir_array_arg_names78[3] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names78, CCP, RHO);
  // check L132() else D43()
  // L132()
  goto L132_;

L136_:;
  // p17 = prom<V +>{
  //   slot = ld slot;
  //   slot1 = force? slot;
  //   checkMissing(slot1);
  //   return slot1;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_17, 0, NULL, CCP, RHO);
  // r95 = dyn attr__(l1, NULL, p17, NULL)
  SEXP Rsh_Fir_array_args188[4];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args188[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args188[3] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names79[4];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_array_arg_names79[3] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L137() else D47()
  // L137()
  goto L137_;

L138_:;
  // strictS7 = force? strictS6
  Rsh_Fir_reg_strictS7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strictS6_);
  // checkMissing(strictS7)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_strictS7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c21 = `as.logical`(strictS7)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_strictS7_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args190);
  // if c21 then L139() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L139()
    goto L139_;
  } else {
  // L33()
    goto L33_;
  }

D43_:;
  // deopt 156 [deleteSlots3, r91]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 169 [i2, NULL, r95]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(169, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L33_:;
  // S3Class18 = ld S3Class
  Rsh_Fir_reg_S3Class18_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L146() else D54()
  // L146()
  goto L146_;

L34_:;
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L152() else D57()
  // L152()
  goto L152_;

L132_:;
  // goto L30(deleteSlots3, r91)
  // L30(deleteSlots3, r91)
  Rsh_Fir_reg_deleteSlots9_ = Rsh_Fir_reg_deleteSlots3_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L30_;

L137_:;
  // st object = r95
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // goto L31(i2)
  // L31(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L31_;

L139_:;
  // _notS4 = ldf `.notS4`
  Rsh_Fir_reg__notS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // check L140() else D49()
  // L140()
  goto L140_;

D49_:;
  // deopt 177 []
  Rsh_Fir_deopt(177, 0, NULL, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 188 [S3Class18]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_S3Class18_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 198 [object17]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L140_:;
  // p18 = prom<V +>{
  //   object15 = ld object;
  //   object16 = force? object15;
  //   checkMissing(object16);
  //   return object16;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_18, 0, NULL, CCP, RHO);
  // r97 = dyn _notS4(p18)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__notS4_, 1, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L141() else D50()
  // L141()
  goto L141_;

L146_:;
  // S3Class19 = force? S3Class18
  Rsh_Fir_reg_S3Class19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class18_);
  // checkMissing(S3Class19)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_S3Class19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(S3Class19)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_S3Class19_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args194);
  // if c22 then L147() else L148(S3Class19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L147()
    goto L147_;
  } else {
  // L148(S3Class19)
    Rsh_Fir_reg_S3Class21_ = Rsh_Fir_reg_S3Class19_;
    goto L148_;
  }

L152_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object18
  return Rsh_Fir_reg_object18_;

D50_:;
  // deopt 179 [r97]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L35_:;
  // l3 = ld object
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 92), RHO);
  // check L150() else D55()
  // L150()
  goto L150_;

L141_:;
  // st object = r97
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r97_, RHO);
  (void)(Rsh_Fir_reg_r97_);
  // S3Class15 = ld S3Class
  Rsh_Fir_reg_S3Class15_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L142() else D51()
  // L142()
  goto L142_;

L147_:;
  // dr10 = tryDispatchBuiltin.1("[[", S3Class19)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_S3Class19_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args196);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if dc5 then L149() else L148(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L149()
    goto L149_;
  } else {
  // L148(dr10)
    Rsh_Fir_reg_S3Class21_ = Rsh_Fir_reg_dr10_;
    goto L148_;
  }

L148_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r99 = dyn __5(S3Class21, 1)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_S3Class21_;
  Rsh_Fir_array_args198[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L35(r99)
  // L35(r99)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r99_;
  goto L35_;

D51_:;
  // deopt 181 [S3Class15]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_S3Class15_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 194 [dx12, l3, dx12]
  SEXP Rsh_Fir_array_deopt_stack60[3];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack60[2] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_deopt(194, 3, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L142_:;
  // S3Class16 = force? S3Class15
  Rsh_Fir_reg_S3Class16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class15_);
  // checkMissing(S3Class16)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_S3Class16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // l2 = ld object
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 92), RHO);
  // check L143() else D52()
  // L143()
  goto L143_;

L149_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // goto L35(dx11)
  // L35(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L35_;

L150_:;
  // r100 = dyn class__1(l3, NULL, dx12)
  SEXP Rsh_Fir_array_args201[3];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args201[2] = Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_array_arg_names82[3];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_array_arg_names82[2] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L151() else D56()
  // L151()
  goto L151_;

D52_:;
  // deopt 184 [S3Class16, l2, S3Class16]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_S3Class16_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_S3Class16_;
  Rsh_Fir_deopt(184, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 196 [dx12, r100]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(196, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L143_:;
  // r98 = dyn class__(l2, NULL, S3Class16)
  SEXP Rsh_Fir_array_args202[3];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args202[2] = Rsh_Fir_reg_S3Class16_;
  SEXP Rsh_Fir_array_arg_names83[3];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_array_arg_names83[2] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L144() else D53()
  // L144()
  goto L144_;

L151_:;
  // st object = r100
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r100_, RHO);
  (void)(Rsh_Fir_reg_r100_);
  // goto L34()
  // L34()
  goto L34_;

D53_:;
  // deopt 186 [S3Class16, r98]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_S3Class16_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L144_:;
  // st object = r98
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r98_, RHO);
  (void)(Rsh_Fir_reg_r98_);
  // goto L34()
  // L34()
  goto L34_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_object5_;
  SEXP Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_reg_class1;
  SEXP Rsh_Fir_reg_r8_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf class
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf class in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
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
  return Rsh_Fir_reg_r7_;

L1_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r8 = dyn class(object6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_1;
  goto L0_;

L2_:;
  // r6 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_classDef;
  SEXP Rsh_Fir_reg_classDef1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // classDef = ld classDef
  Rsh_Fir_reg_classDef = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // classDef1 = force? classDef
  Rsh_Fir_reg_classDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef);
  // checkMissing(classDef1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_classDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return classDef1
  return Rsh_Fir_reg_classDef1_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object7_;
  SEXP Rsh_Fir_reg_object8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return object8
  return Rsh_Fir_reg_object8_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S3Class1_;
  SEXP Rsh_Fir_reg_S3Class2_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_S3Class4_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // S3Class1 = ld S3Class
  Rsh_Fir_reg_S3Class1_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // S3Class2 = force? S3Class1
  Rsh_Fir_reg_S3Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class1_);
  // checkMissing(S3Class2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_S3Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(S3Class2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_S3Class2_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c3 then L1() else L2(S3Class2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(S3Class2)
    Rsh_Fir_reg_S3Class4_ = Rsh_Fir_reg_S3Class2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", S3Class2)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_S3Class2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args95);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_S3Class4_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r19 = dyn __(S3Class4, 1)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_S3Class4_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r40_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // p6 = prom<V +>{
  //   dQuote = ldf dQuote;
  //   p5 = prom<V +>{
  //     sym6 = ldf class;
  //     base6 = ldf class in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L1() else L2();
  //   L0(r35):
  //     return r35;
  //   L1():
  //     object9 = ld object;
  //     object10 = force? object9;
  //     checkMissing(object10);
  //     class1 = ldf class in base;
  //     r36 = dyn class1(object10);
  //     goto L0(r36);
  //   L2():
  //     r34 = dyn base6(<sym object>);
  //     goto L0(r34);
  //   };
  //   r38 = dyn dQuote(p5);
  //   return r38;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_5, 0, NULL, CCP, RHO);
  // r40 = dyn gettextf("S3Part() is only defined for classes set up by setOldCLass(), basic classes or subclasses of these:  not true of class %s", p6)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names49, CCP, RHO);
  // return r40
  return Rsh_Fir_reg_r40_1;
}
SEXP Rsh_Fir_user_promise_inner3464236862_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r38_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // dQuote = ldf dQuote
  Rsh_Fir_reg_dQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // p5 = prom<V +>{
  //   sym6 = ldf class;
  //   base6 = ldf class in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   class1 = ldf class in base;
  //   r36 = dyn class1(object10);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base6(<sym object>);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_6, 0, NULL, CCP, RHO);
  // r38 = dyn dQuote(p5)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names48, CCP, RHO);
  // return r38
  return Rsh_Fir_reg_r38_1;
}
SEXP Rsh_Fir_user_promise_inner3464236862_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_object9_;
  SEXP Rsh_Fir_reg_object10_;
  SEXP Rsh_Fir_reg_class1_1;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf class
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf class in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_1;

L1_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r36 = dyn class1(object10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_object10_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_1, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_1 = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base6(<sym object>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_1 = Rsh_Fir_reg_r34_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_classDef4_;
  SEXP Rsh_Fir_reg_classDef5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // classDef4 = ld classDef
  Rsh_Fir_reg_classDef4_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // classDef5 = force? classDef4
  Rsh_Fir_reg_classDef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef4_);
  // checkMissing(classDef5)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_classDef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return classDef5
  return Rsh_Fir_reg_classDef5_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S3Class11_;
  SEXP Rsh_Fir_reg_S3Class12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // S3Class11 = ld S3Class
  Rsh_Fir_reg_S3Class11_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // S3Class12 = force? S3Class11
  Rsh_Fir_reg_S3Class12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class11_);
  // checkMissing(S3Class12)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_S3Class12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return S3Class12
  return Rsh_Fir_reg_S3Class12_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_classDef2_;
  SEXP Rsh_Fir_reg_classDef3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // classDef2 = ld classDef
  Rsh_Fir_reg_classDef2_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // classDef3 = force? classDef2
  Rsh_Fir_reg_classDef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef2_);
  // checkMissing(classDef3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_classDef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return classDef3
  return Rsh_Fir_reg_classDef3_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // p12 = prom<V +>{
  //   dQuote1 = ldf dQuote;
  //   p11 = prom<V +>{
  //     sym10 = ldf class;
  //     base10 = ldf class in base;
  //     guard10 = `==`.4(sym10, base10);
  //     if guard10 then L1() else L2();
  //   L0(r66):
  //     return r66;
  //   L1():
  //     object13 = ld object;
  //     object14 = force? object13;
  //     checkMissing(object14);
  //     class2 = ldf class in base;
  //     r67 = dyn class2(object14);
  //     goto L0(r67);
  //   L2():
  //     r65 = dyn base10(<sym object>);
  //     goto L0(r65);
  //   };
  //   r69 = dyn dQuote1(p11);
  //   return r69;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_11, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   dQuote2 = ldf dQuote;
  //   p13 = prom<V +>{
  //     S3Class13 = ld S3Class;
  //     S3Class14 = force? S3Class13;
  //     checkMissing(S3Class14);
  //     return S3Class14;
  //   };
  //   r72 = dyn dQuote2(p13);
  //   return r72;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_13, 0, NULL, CCP, RHO);
  // r74 = dyn gettextf1("the 'S3Class' argument must be a superclass of %s:  not true of class %s", p12, p14)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names60[3];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names60, CCP, RHO);
  // return r74
  return Rsh_Fir_reg_r74_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote1_;
  SEXP Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_reg_r69_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // dQuote1 = ldf dQuote
  Rsh_Fir_reg_dQuote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // p11 = prom<V +>{
  //   sym10 = ldf class;
  //   base10 = ldf class in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r66):
  //   return r66;
  // L1():
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   class2 = ldf class in base;
  //   r67 = dyn class2(object14);
  //   goto L0(r67);
  // L2():
  //   r65 = dyn base10(<sym object>);
  //   goto L0(r65);
  // }
  Rsh_Fir_reg_p11_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_12, 0, NULL, CCP, RHO);
  // r69 = dyn dQuote1(p11)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote1_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names58, CCP, RHO);
  // return r69
  return Rsh_Fir_reg_r69_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_object13_;
  SEXP Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_reg_class2_1;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf class
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base10 = ldf class in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r66
  return Rsh_Fir_reg_r66_;

L1_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // class2 = ldf class in base
  Rsh_Fir_reg_class2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r67 = dyn class2(object14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class2_1, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L0_;

L2_:;
  // r65 = dyn base10(<sym object>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote2_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r72_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // dQuote2 = ldf dQuote
  Rsh_Fir_reg_dQuote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // p13 = prom<V +>{
  //   S3Class13 = ld S3Class;
  //   S3Class14 = force? S3Class13;
  //   checkMissing(S3Class14);
  //   return S3Class14;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464236862_14, 0, NULL, CCP, RHO);
  // r72 = dyn dQuote2(p13)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote2_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names59, CCP, RHO);
  // return r72
  return Rsh_Fir_reg_r72_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S3Class13_;
  SEXP Rsh_Fir_reg_S3Class14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // S3Class13 = ld S3Class
  Rsh_Fir_reg_S3Class13_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // S3Class14 = force? S3Class13
  Rsh_Fir_reg_S3Class14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class13_);
  // checkMissing(S3Class14)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_S3Class14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return S3Class14
  return Rsh_Fir_reg_S3Class14_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S3Class7_;
  SEXP Rsh_Fir_reg_S3Class8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_S3Class10_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___2_1;
  SEXP Rsh_Fir_reg_r58_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // S3Class7 = ld S3Class
  Rsh_Fir_reg_S3Class7_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // S3Class8 = force? S3Class7
  Rsh_Fir_reg_S3Class8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Class7_);
  // checkMissing(S3Class8)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_S3Class8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(S3Class8)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_S3Class8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args135);
  // if c9 then L1() else L2(S3Class8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(S3Class8)
    Rsh_Fir_reg_S3Class10_ = Rsh_Fir_reg_S3Class8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", S3Class8)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_S3Class8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_S3Class10_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r58 = dyn __2(S3Class10, 1)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_S3Class10_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r58_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_classDef6_;
  SEXP Rsh_Fir_reg_classDef7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // classDef6 = ld classDef
  Rsh_Fir_reg_classDef6_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // classDef7 = force? classDef6
  Rsh_Fir_reg_classDef7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef6_);
  // checkMissing(classDef7)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_classDef7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return classDef7
  return Rsh_Fir_reg_classDef7_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_slot;
  SEXP Rsh_Fir_reg_slot1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // slot = ld slot
  Rsh_Fir_reg_slot = Rsh_Fir_load(Rsh_const(CCP, 89), RHO);
  // slot1 = force? slot
  Rsh_Fir_reg_slot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slot);
  // checkMissing(slot1)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_slot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // return slot1
  return Rsh_Fir_reg_slot1_;
}
SEXP Rsh_Fir_user_promise_inner3464236862_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object15_;
  SEXP Rsh_Fir_reg_object16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464236862/0: expected 0, got %d", NCAPTURES);

  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // return object16
  return Rsh_Fir_reg_object16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
