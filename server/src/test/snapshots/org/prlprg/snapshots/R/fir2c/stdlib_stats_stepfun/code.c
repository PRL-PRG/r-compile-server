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
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3990970097_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3990970097_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3990970097_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3990970097_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_stepfun;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_stepfun1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_stepfun2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_stepfun3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sfun0_;
  SEXP Rsh_Fir_reg_sfun1_;
  SEXP Rsh_Fir_reg_summary;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_summary1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sfun4_;
  SEXP Rsh_Fir_reg_sfun5_;
  SEXP Rsh_Fir_reg_unclass;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_rbind;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r56_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3990970097
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3990970097_, RHO, CCP);
  // st stepfun = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
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
  // st y0 = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // stepfun = ldf stepfun
  Rsh_Fir_reg_stepfun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L2_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(1.0, 2.0, 4.0, 3.0)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(1.0, 2.0, 4.0, 3.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 10 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L5_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   y0 = ld y0;
  //   y1 = force? y0;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn stepfun[, , f](p, p1, 0.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stepfun, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 18 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // st sfun0 = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // stepfun1 = ldf stepfun
  Rsh_Fir_reg_stepfun1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   y2 = ld y0;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r9 = dyn stepfun1[, , f](p2, p3, 0.2)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stepfun1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 26 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // st `sfun.2` = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // stepfun2 = ldf stepfun
  Rsh_Fir_reg_stepfun2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   y4 = ld y0;
  //   y5 = force? y4;
  //   checkMissing(y5);
  //   return y5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r12 = dyn stepfun2[, , f](p4, p5, 1.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stepfun2_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 34 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st sfun1 = r12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // stepfun3 = ldf stepfun
  Rsh_Fir_reg_stepfun3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p6 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   y6 = ld y0;
  //   y7 = force? y6;
  //   checkMissing(y7);
  //   return y7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r15 = dyn stepfun3[, , right](p6, p7, TRUE)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stepfun3_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 42 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // st sfun1c = r15
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sfun0 = ld sfun0
  Rsh_Fir_reg_sfun0_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D9_:;
  // deopt 44 [sfun0]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_sfun0_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // sfun1 = force? sfun0
  Rsh_Fir_reg_sfun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sfun0_);
  // checkMissing(sfun1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sfun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   sfun2 = ld sfun0;
  //   sfun3 = force? sfun2;
  //   checkMissing(sfun3);
  //   return sfun3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r17 = dyn summary(p8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 49 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // summary1 = ldf summary
  Rsh_Fir_reg_summary1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L16() else D12()
  // L16()
  goto L16_;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p9 = prom<V +>{
  //   sfun_2 = ld `sfun.2`;
  //   sfun_3 = force? sfun_2;
  //   checkMissing(sfun_3);
  //   return sfun_3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r19 = dyn summary1(p9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L17() else D13()
  // L17()
  goto L17_;

D13_:;
  // deopt 53 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // sym1 = ldf unclass
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf unclass in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

L18_:;
  // sfun4 = ld sfun0
  Rsh_Fir_reg_sfun4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

L19_:;
  // r20 = dyn base1(<sym sfun0>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D14_:;
  // deopt 56 [sfun4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_sfun4_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // sfun5 = force? sfun4
  Rsh_Fir_reg_sfun5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sfun4_);
  // checkMissing(sfun5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sfun5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r22 = dyn unclass(sfun5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sfun5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

L22_:;
  // p11 = prom<V +>{
  //   environment = ldf environment;
  //   p10 = prom<V +>{
  //     sfun6 = ld sfun0;
  //     sfun7 = force? sfun6;
  //     checkMissing(sfun7);
  //     return sfun7;
  //   };
  //   r24 = dyn environment(p10);
  //   return r24;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r26 = dyn ls[envir](p11)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D15_:;
  // deopt 59 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1()
  // L1()
  goto L1_;

L23_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D18_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r27 = dyn seq[, , by](0.5, 3.5, 0.25)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 71 [r27]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // st x0 = r27
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // rbind = ldf rbind
  Rsh_Fir_reg_rbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L26() else D20()
  // L26()
  goto L26_;

D20_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p12 = prom<V +>{
  //   x0 = ld x0;
  //   x1 = force? x0;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   sfun8 = ldf sfun0;
  //   p13 = prom<V +>{
  //     x2 = ld x0;
  //     x3 = force? x2;
  //     checkMissing(x3);
  //     return x3;
  //   };
  //   r30 = dyn sfun8(p13);
  //   return r30;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   sfun_4 = ldf `sfun.2`;
  //   p15 = prom<V +>{
  //     x4 = ld x0;
  //     x5 = force? x4;
  //     checkMissing(x5);
  //     return x5;
  //   };
  //   r33 = dyn sfun_4(p15);
  //   return r33;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   sfun9 = ldf sfun1;
  //   p17 = prom<V +>{
  //     x6 = ld x0;
  //     x7 = force? x6;
  //     checkMissing(x7);
  //     return x7;
  //   };
  //   r36 = dyn sfun9(p17);
  //   return r36;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   sfun1c = ldf sfun1c;
  //   p19 = prom<V +>{
  //     x8 = ld x0;
  //     x9 = force? x8;
  //     checkMissing(x9);
  //     return x9;
  //   };
  //   r39 = dyn sfun1c(p19);
  //   return r39;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // r41 = dyn rbind[x, `f.f0`, `f.f02`, `f.f1`, `f.f1c`](p12, p14, p16, p18, p20)
  SEXP Rsh_Fir_array_args33[5];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args33[3] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args33[4] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names17[5];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names17[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names17[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names17[4] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind, 5, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L27() else D21()
  // L27()
  goto L27_;

D21_:;
  // deopt 85 [r41]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L28() else D22()
  // L28()
  goto L28_;

D22_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p22 = prom<V +>{
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r43):
  //   return r43;
  // L2():
  //   y8 = ld y0;
  //   y9 = force? y8;
  //   checkMissing(y9);
  //   c1 = `is.object`(y9);
  //   if c1 then L4() else L5(y9);
  // L3():
  //   r42 = dyn base2(<lang `[`(y0, `-`(1.0))>, <lang sfun0(`:`(1.0, 3.0))>);
  //   goto L0(r42);
  // L1(dx1):
  //   sfun10 = ldf sfun0;
  //   p21 = prom<V +>{
  //     return <int 1, 2, 3>;
  //   };
  //   r46 = dyn sfun10(p21);
  //   identical = ldf identical in base;
  //   r47 = dyn identical(dx1, r46, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r47);
  // L4():
  //   dr = tryDispatchBuiltin.1("[", y9);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(y11):
  //   __ = ldf `[` in base;
  //   r44 = dyn __(y11, -1.0);
  //   goto L1(r44);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // p24 = prom<V +>{
  //   sym3 = ldf identical;
  //   base3 = ldf identical in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L2() else L3();
  // L0(r50):
  //   return r50;
  // L2():
  //   y12 = ld y0;
  //   y13 = force? y12;
  //   checkMissing(y13);
  //   c2 = `is.object`(y13);
  //   if c2 then L4() else L5(y13);
  // L3():
  //   r49 = dyn base3(<lang `[`(y0, `-`(4.0))>, <lang sfun1c(`:`(1.0, 3.0))>);
  //   goto L0(r49);
  // L1(dx3):
  //   sfun1c1 = ldf sfun1c;
  //   p23 = prom<V +>{
  //     return <int 1, 2, 3>;
  //   };
  //   r53 = dyn sfun1c1(p23);
  //   identical1 = ldf identical in base;
  //   r54 = dyn identical1(dx3, r53, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r54);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("[", y13);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(y15):
  //   __1 = ldf `[` in base;
  //   r51 = dyn __1(y15, -4.0);
  //   goto L1(r51);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r56 = dyn stopifnot(p22, p24)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L29() else D23()
  // L29()
  goto L29_;

D23_:;
  // deopt 90 [r56]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L29_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y0_;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y0 = ld y0
  Rsh_Fir_reg_y0_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y1 = force? y0
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y0_);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y0
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y4 = ld y0
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return y5
  return Rsh_Fir_reg_y5_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y6_;
  SEXP Rsh_Fir_reg_y7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y6 = ld y0
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return y7
  return Rsh_Fir_reg_y7_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun2_;
  SEXP Rsh_Fir_reg_sfun3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun2 = ld sfun0
  Rsh_Fir_reg_sfun2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // sfun3 = force? sfun2
  Rsh_Fir_reg_sfun3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sfun2_);
  // checkMissing(sfun3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sfun3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return sfun3
  return Rsh_Fir_reg_sfun3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun_2_;
  SEXP Rsh_Fir_reg_sfun_3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun_2 = ld `sfun.2`
  Rsh_Fir_reg_sfun_2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // sfun_3 = force? sfun_2
  Rsh_Fir_reg_sfun_3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sfun_2_);
  // checkMissing(sfun_3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sfun_3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return sfun_3
  return Rsh_Fir_reg_sfun_3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p10 = prom<V +>{
  //   sfun6 = ld sfun0;
  //   sfun7 = force? sfun6;
  //   checkMissing(sfun7);
  //   return sfun7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r24 = dyn environment(p10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun6_;
  SEXP Rsh_Fir_reg_sfun7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun6 = ld sfun0
  Rsh_Fir_reg_sfun6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // sfun7 = force? sfun6
  Rsh_Fir_reg_sfun7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sfun6_);
  // checkMissing(sfun7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sfun7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return sfun7
  return Rsh_Fir_reg_sfun7_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x0_;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x0 = ld x0
  Rsh_Fir_reg_x0_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // x1 = force? x0
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x0_);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun8_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun8 = ldf sfun0
  Rsh_Fir_reg_sfun8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p13 = prom<V +>{
  //   x2 = ld x0;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r30 = dyn sfun8(p13)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun8_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x0
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun_4_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun_4 = ldf `sfun.2`
  Rsh_Fir_reg_sfun_4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p15 = prom<V +>{
  //   x4 = ld x0;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r33 = dyn sfun_4(p15)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun_4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x0
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun9_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun9 = ldf sfun1
  Rsh_Fir_reg_sfun9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p17 = prom<V +>{
  //   x6 = ld x0;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r36 = dyn sfun9(p17)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun9_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x0
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sfun1c;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sfun1c = ldf sfun1c
  Rsh_Fir_reg_sfun1c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p19 = prom<V +>{
  //   x8 = ld x0;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r39 = dyn sfun1c(p19)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun1c, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x0
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_y9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sfun10_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L2_:;
  // y8 = ld y0
  Rsh_Fir_reg_y8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y9 = force? y8
  Rsh_Fir_reg_y9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y8_);
  // checkMissing(y9)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_y9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(y9)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c1 then L4() else L5(y9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L5(y9)
    Rsh_Fir_reg_y11_ = Rsh_Fir_reg_y9_;
    goto L5_;
  }

L3_:;
  // r42 = dyn base2(<lang `[`(y0, `-`(1.0))>, <lang sfun0(`:`(1.0, 3.0))>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;

L1_:;
  // sfun10 = ldf sfun0
  Rsh_Fir_reg_sfun10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p21 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r46 = dyn sfun10(p21)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun10_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r47 = dyn identical(dx1, r46, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names20[9];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_array_arg_names20[8] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r47_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", y9)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_y9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_y11_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r44 = dyn __(y11, -1.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_y11_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L1(r44)
  // L1(r44)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r44_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_reg_y13_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_y15_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sfun1c1_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard3 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r50
  return Rsh_Fir_reg_r50_;

L2_:;
  // y12 = ld y0
  Rsh_Fir_reg_y12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y13 = force? y12
  Rsh_Fir_reg_y13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y12_);
  // checkMissing(y13)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_y13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(y13)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c2 then L4() else L5(y13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L5(y13)
    Rsh_Fir_reg_y15_ = Rsh_Fir_reg_y13_;
    goto L5_;
  }

L3_:;
  // r49 = dyn base3(<lang `[`(y0, `-`(4.0))>, <lang sfun1c(`:`(1.0, 3.0))>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L0_;

L1_:;
  // sfun1c1 = ldf sfun1c
  Rsh_Fir_reg_sfun1c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p23 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main24, 0, NULL, CCP, RHO);
  // r53 = dyn sfun1c1(p23)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sfun1c1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r54 = dyn identical1(dx3, r53, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args49[9];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args49[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[8] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[9];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_array_arg_names24[7] = R_MissingArg;
  Rsh_Fir_array_arg_names24[8] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r54_;
  goto L0_;

L4_:;
  // dr2 = tryDispatchBuiltin.1("[", y13)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_y15_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r51 = dyn __1(y15, -4.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_y15_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r51)
  // L1(r51)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r51_;
  goto L1_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_function_inner3990970097_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3990970097 dynamic dispatch ([x, y, f, ties, right])

  return Rsh_Fir_user_version_inner3990970097_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3990970097_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3990970097 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3990970097/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_ties;
  SEXP Rsh_Fir_reg_right;
  SEXP Rsh_Fir_reg_f_isMissing;
  SEXP Rsh_Fir_reg_f_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_ties_isMissing;
  SEXP Rsh_Fir_reg_ties_orDefault;
  SEXP Rsh_Fir_reg_right_isMissing;
  SEXP Rsh_Fir_reg_right_orDefault;
  SEXP Rsh_Fir_reg_is_unsorted;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_y1_1;
  SEXP Rsh_Fir_reg_y2_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_approxfun;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_rval;
  SEXP Rsh_Fir_reg_rval1_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r36_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_rval2_;
  SEXP Rsh_Fir_reg_rval3_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_f = PARAMS[2];
  Rsh_Fir_reg_ties = PARAMS[3];
  Rsh_Fir_reg_right = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // f_isMissing = missing.0(f)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_f;
  Rsh_Fir_reg_f_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args55);
  // if f_isMissing then L0() else L1(f)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_f_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(f)
    Rsh_Fir_reg_f_orDefault = Rsh_Fir_reg_f;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf `as.numeric`;
  //   base = ldf `as.numeric` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   right1 = ld right;
  //   right2 = force? right1;
  //   checkMissing(right2);
  //   as_numeric = ldf `as.numeric` in base;
  //   r2 = dyn as_numeric(right2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym right>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_f_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st f = f_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_f_orDefault, RHO);
  (void)(Rsh_Fir_reg_f_orDefault);
  // ties_isMissing = missing.0(ties)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_ties;
  Rsh_Fir_reg_ties_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args60);
  // if ties_isMissing then L2("ordered") else L2(ties)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ties_isMissing)) {
  // L2("ordered")
    Rsh_Fir_reg_ties_orDefault = Rsh_const(CCP, 47);
    goto L2_;
  } else {
  // L2(ties)
    Rsh_Fir_reg_ties_orDefault = Rsh_Fir_reg_ties;
    goto L2_;
  }

L2_:;
  // st ties = ties_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_ties_orDefault, RHO);
  (void)(Rsh_Fir_reg_ties_orDefault);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args61);
  // if right_isMissing then L3(FALSE) else L3(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 38);
    goto L3_;
  } else {
  // L3(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L3_;
  }

L3_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // is_unsorted = ldf `is.unsorted`
  Rsh_Fir_reg_is_unsorted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_1, 0, NULL, CCP, RHO);
  // r5 = dyn is_unsorted(p1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_unsorted, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L15_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // if c then L16() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L16()
    goto L16_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L16_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // st n = r9
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L17_:;
  // r6 = dyn stop("stepfun: 'x' must be ordered increasingly")
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L20_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L21_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L6_;

D3_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 12 [x3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 17 [n]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L5()
  // L5()
  goto L5_;

L22_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r10 = dyn length(x4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

L24_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r11 = `<`(n1, 1.0)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args71);
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c1 then L25() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L25()
    goto L25_;
  } else {
  // L7()
    goto L7_;
  }

D5_:;
  // deopt 15 [r10]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

L23_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L6_;

L25_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 27 [n2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L26_:;
  // r12 = dyn stop1("'x' must have length >= 1")
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L29_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r14 = `+`(n3, 1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args75);
  // st n1 = r14
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

D8_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L9_:;
  // n4 = ld n1
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

L27_:;
  // goto L8()
  // L8()
  goto L8_;

L30_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_1 = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L32() else D10()
  // L32()
  goto L32_;

L31_:;
  // r15 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L9_;

D10_:;
  // deopt 34 [y1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_y1_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 37 [r16, n4]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L32_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_1);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_y2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r17 = dyn length1(y2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_y2_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L34_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r18 = `!=`(r16, n5)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args81);
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c2 then L35() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L35()
    goto L35_;
  } else {
  // L10()
    goto L10_;
  }

D11_:;
  // deopt 37 [r17]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // approxfun = ldf approxfun
  Rsh_Fir_reg_approxfun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

L33_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_1;
  goto L9_;

L35_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

D13_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r19 = dyn stop2("'y' must be one longer than 'x'")
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

L39_:;
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   c3 = `is.object`(y4);
  //   if c3 then L3() else L4(y4);
  // L0(dx1):
  //   return dx1;
  // L3():
  //   dr = tryDispatchBuiltin.1("[", y4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L5() else L4(dr);
  // L4(y6):
  //   right3 = ld right;
  //   right4 = force? right3;
  //   checkMissing(right4);
  //   c4 = `as.logical`(right4);
  //   if c4 then L6() else L1();
  // L1():
  //   goto L2(y6, 1.0);
  // L2(y9, n8):
  //   r22 = `-`(<missing>, n8);
  //   __ = ldf `[` in base;
  //   r23 = dyn __(y9, r22);
  //   goto L0(r23);
  // L5():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L6():
  //   n6 = ld n1;
  //   n7 = force? n6;
  //   checkMissing(n7);
  //   goto L2(y6, n7);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   y10 = ld y;
  //   y11 = force? y10;
  //   checkMissing(y11);
  //   c5 = `is.object`(y11);
  //   if c5 then L1() else L2(y11);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", y11);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(y13):
  //   __1 = ldf `[` in base;
  //   r25 = dyn __1(y13, 1);
  //   goto L0(r25);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   y14 = ld y;
  //   y15 = force? y14;
  //   checkMissing(y15);
  //   c6 = `is.object`(y15);
  //   if c6 then L1() else L2(y15);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", y15);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(y17):
  //   n9 = ld n1;
  //   n10 = force? n9;
  //   __2 = ldf `[` in base;
  //   r27 = dyn __2(y17, n10);
  //   goto L0(r27);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   ties1 = ld ties;
  //   ties2 = force? ties1;
  //   checkMissing(ties2);
  //   return ties2;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3990970097_7, 0, NULL, CCP, RHO);
  // r31 = dyn approxfun[, , method, yleft, yright, f, ties](p2, p3, "constant", p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args109[7];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args109[2] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args109[3] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args109[4] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args109[5] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args109[6] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names40[7];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_arg_names40[3] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names40[4] = Rsh_const(CCP, 63);
  Rsh_Fir_array_arg_names40[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names40[6] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_approxfun, 7, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L40() else D16()
  // L40()
  goto L40_;

D14_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 [r31]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L11()
  // L11()
  goto L11_;

L40_:;
  // st rval = r31
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L12_:;
  // l = ld rval
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L48() else D20()
  // L48()
  goto L48_;

L41_:;
  // sym4 = ldf class
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base4 = ldf class in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L42_:;
  // r32 = dyn base3("stepfun", <lang class(rval)>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_r33_1 = Rsh_Fir_reg_r32_;
  goto L12_;

D20_:;
  // deopt 74 [r33, l, r33]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L13_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r37 = dyn c7("stepfun", r35)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L47() else D19()
  // L47()
  goto L47_;

L43_:;
  // rval = ld rval
  Rsh_Fir_reg_rval = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

L44_:;
  // r34 = dyn base4(<sym rval>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L13_;

L48_:;
  // r38 = dyn class__(l, NULL, r33)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

D17_:;
  // deopt 67 [rval]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_rval;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 72 [r37]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 76 [r33, r38]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L45_:;
  // rval1 = force? rval
  Rsh_Fir_reg_rval1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval);
  // checkMissing(rval1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_rval1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r36 = dyn class(rval1)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_rval1_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L46() else D18()
  // L46()
  goto L46_;

L47_:;
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r33_1 = Rsh_Fir_reg_r37_;
  goto L12_;

L49_:;
  // st rval = r38
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L50() else D22()
  // L50()
  goto L50_;

D18_:;
  // deopt 70 [r36]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r36_1;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_1;
  goto L13_;

L50_:;
  // r39 = dyn sys_call()
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // check L51() else D23()
  // L51()
  goto L51_;

D23_:;
  // deopt 80 [r39]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L51_:;
  // l1 = ld rval
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L52() else D24()
  // L52()
  goto L52_;

D24_:;
  // deopt 82 [r39, l1, r39]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L52_:;
  // r40 = dyn attr__(l1, NULL, "call", r39)
  SEXP Rsh_Fir_array_args118[4];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args118[2] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args118[3] = Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_array_arg_names46[4];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L53() else D25()
  // L53()
  goto L53_;

D25_:;
  // deopt 85 [r39, r40]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L53_:;
  // st rval = r40
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // rval2 = ld rval
  Rsh_Fir_reg_rval2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L54() else D26()
  // L54()
  goto L54_;

D26_:;
  // deopt 87 [rval2]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_rval2_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L54_:;
  // rval3 = force? rval2
  Rsh_Fir_reg_rval3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval2_);
  // checkMissing(rval3)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_rval3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return rval3
  return Rsh_Fir_reg_rval3_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_right1_;
  SEXP Rsh_Fir_reg_right2_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.numeric`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base = ldf `as.numeric` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
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
  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r2 = dyn as_numeric(right2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_right2_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym right>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner3990970097_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_1;
}
SEXP Rsh_Fir_user_promise_inner3990970097_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y3_1;
  SEXP Rsh_Fir_reg_y4_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_y6_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_right3_;
  SEXP Rsh_Fir_reg_right4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_y9_1;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // y3 = ld y
  Rsh_Fir_reg_y3_1 = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_1);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_y4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(y4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_y4_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args86);
  // if c3 then L3() else L4(y4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L3()
    goto L3_;
  } else {
  // L4(y4)
    Rsh_Fir_reg_y6_1 = Rsh_Fir_reg_y4_1;
    goto L4_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L3_:;
  // dr = tryDispatchBuiltin.1("[", y4)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_y4_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_y6_1 = Rsh_Fir_reg_dr1;
    goto L4_;
  }

L4_:;
  // right3 = ld right
  Rsh_Fir_reg_right3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // right4 = force? right3
  Rsh_Fir_reg_right4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right3_);
  // checkMissing(right4)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_right4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(right4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_right4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c4 then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2(y6, 1.0)
  // L2(y6, 1.0)
  Rsh_Fir_reg_y9_1 = Rsh_Fir_reg_y6_1;
  Rsh_Fir_reg_n8_ = Rsh_const(CCP, 3);
  goto L2_;

L2_:;
  // r22 = `-`(<missing>, n8)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args91);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r23 = dyn __(y9, r22)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_y9_1;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r23_;
  goto L0_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L6_:;
  // n6 = ld n1
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // goto L2(y6, n7)
  // L2(y6, n7)
  Rsh_Fir_reg_y9_1 = Rsh_Fir_reg_y6_1;
  Rsh_Fir_reg_n8_ = Rsh_Fir_reg_n7_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_y11_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_y13_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // y11 = force? y10
  Rsh_Fir_reg_y11_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_y11_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(y11)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_y11_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args96);
  // if c5 then L1() else L2(y11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y11)
    Rsh_Fir_reg_y13_1 = Rsh_Fir_reg_y11_1;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_1;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", y11)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_y11_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_y13_1 = Rsh_Fir_reg_dr2_1;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r25 = dyn __1(y13, 1)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_y13_1;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r25_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y14_;
  SEXP Rsh_Fir_reg_y15_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_y17_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r27_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // y14 = ld y
  Rsh_Fir_reg_y14_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // y15 = force? y14
  Rsh_Fir_reg_y15_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y14_);
  // checkMissing(y15)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_y15_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(y15)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_y15_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args102);
  // if c6 then L1() else L2(y15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y15)
    Rsh_Fir_reg_y17_ = Rsh_Fir_reg_y15_1;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", y15)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_y15_1;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_y17_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // n9 = ld n1
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r27 = dyn __2(y17, n10)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_y17_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_1;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner3990970097_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ties1_;
  SEXP Rsh_Fir_reg_ties2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3990970097/0: expected 0, got %d", NCAPTURES);

  // ties1 = ld ties
  Rsh_Fir_reg_ties1_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // ties2 = force? ties1
  Rsh_Fir_reg_ties2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ties1_);
  // checkMissing(ties2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_ties2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return ties2
  return Rsh_Fir_reg_ties2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
