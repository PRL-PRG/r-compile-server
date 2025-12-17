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
SEXP Rsh_Fir_user_function_inner2843011469_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2843011469_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_toeplitz;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_set_seed;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_rWishart;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_R;
  SEXP Rsh_Fir_reg_R1_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_apply;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_S4_;
  SEXP Rsh_Fir_reg_S5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_diag;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_tcrossprod;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_apply1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r42_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2843011469
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2843011469_, RHO, CCP);
  // st rWishart = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // toeplitz = ldf toeplitz
  Rsh_Fir_reg_toeplitz = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   return <real 1.0, 0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn toeplitz(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toeplitz, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st S = r2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // set_seed = ldf `set.seed`
  Rsh_Fir_reg_set_seed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn set_seed(11.0)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_set_seed, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // rWishart = ldf rWishart
  Rsh_Fir_reg_rWishart = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D4()
  // L6()
  goto L6_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   S = ld S;
  //   S1 = force? S;
  //   checkMissing(S1);
  //   return S1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn rWishart(1000.0, 20.0, p1)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rWishart, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D5()
  // L7()
  goto L7_;

D5_:;
  // deopt 17 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // st R = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

L8_:;
  // R = ld R
  Rsh_Fir_reg_R = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base(<sym R>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D6_:;
  // deopt 21 [R]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_R;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // R1 = force? R
  Rsh_Fir_reg_R1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R);
  // checkMissing(R1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_R1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn dim(R1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_R1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

L12_:;
  // p2 = prom<V +>{
  //   R2 = ld R;
  //   R3 = force? R2;
  //   checkMissing(R3);
  //   return R3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   mean = ld mean;
  //   mean1 = force? mean;
  //   checkMissing(mean1);
  //   return mean1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r12 = dyn apply(p2, p3, p4)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D7_:;
  // deopt 24 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0()
  // L0()
  goto L0_;

L13_:;
  // st mR = r12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p7 = prom<V +>{
  //   all_equal = ldf `all.equal`;
  //   p5 = prom<V +>{
  //     mR = ld mR;
  //     mR1 = force? mR;
  //     checkMissing(mR1);
  //     return mR1;
  //   };
  //   p6 = prom<V +>{
  //     S2 = ld S;
  //     S3 = force? S2;
  //     checkMissing(S3);
  //     r14 = `*`(20.0, S3);
  //     return r14;
  //   };
  //   r16 = dyn all_equal[, , tolerance](p5, p6, 0.009);
  //   return r16;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r18 = dyn stopifnot(p7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // S4 = ld S
  Rsh_Fir_reg_S4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L16() else D12()
  // L16()
  goto L16_;

D12_:;
  // deopt 37 [20.0, S4]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_S4_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // S5 = force? S4
  Rsh_Fir_reg_S5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S4_);
  // checkMissing(S5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_S5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r19 = `^`(S5, 2.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_S5_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args17);
  // sym1 = ldf tcrossprod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf tcrossprod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L1_:;
  // r31 = `+`(r26, r27)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args19);
  // r32 = `*`(r25, r31)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args20);
  // st Va = r32
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // apply1 = ldf apply
  Rsh_Fir_reg_apply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

L17_:;
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

L18_:;
  // r24 = dyn base1(<lang diag(S)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(20.0, r19, r24)
  // L1(20.0, r19, r24)
  Rsh_Fir_reg_r25_ = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r24_;
  goto L1_;

D13_:;
  // deopt 43 [20.0, r19]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p8 = prom<V +>{
  //   S6 = ld S;
  //   S7 = force? S6;
  //   checkMissing(S7);
  //   return S7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r29 = dyn diag(p8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

L22_:;
  // p9 = prom<V +>{
  //   R4 = ld R;
  //   R5 = force? R4;
  //   checkMissing(R5);
  //   return R5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   var = ld var;
  //   var1 = force? var;
  //   checkMissing(var1);
  //   return var1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r36 = dyn apply1(p9, p10, p11)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D14_:;
  // deopt 45 [20.0, r19, r29]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(45, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 56 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // tcrossprod = ldf tcrossprod in base
  Rsh_Fir_reg_tcrossprod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r30 = dyn tcrossprod(r29)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tcrossprod, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

L23_:;
  // st vR = r36
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D15_:;
  // deopt 47 [20.0, r19, r30]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(47, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(20.0, r19, r30)
  // L1(20.0, r19, r30)
  Rsh_Fir_reg_r25_ = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r30_;
  goto L1_;

L24_:;
  // p15 = prom<V +>{
  //   all_equal1 = ldf `all.equal`;
  //   p12 = prom<V +>{
  //     vR = ld vR;
  //     vR1 = force? vR;
  //     checkMissing(vR1);
  //     return vR1;
  //   };
  //   p13 = prom<V +>{
  //     Va = ld Va;
  //     Va1 = force? Va;
  //     checkMissing(Va1);
  //     return Va1;
  //   };
  //   p14 = prom<V +>{
  //     return 0.0625;
  //   };
  //   r40 = dyn all_equal1[, , tolerance](p12, p13, p14);
  //   return r40;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r42 = dyn stopifnot1(p15)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 61 [r42]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <real 1.0, 0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S;
  SEXP Rsh_Fir_reg_S1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // S = ld S
  Rsh_Fir_reg_S = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // S1 = force? S
  Rsh_Fir_reg_S1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S);
  // checkMissing(S1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_S1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return S1
  return Rsh_Fir_reg_S1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R2_;
  SEXP Rsh_Fir_reg_R3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // R2 = ld R
  Rsh_Fir_reg_R2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // R3 = force? R2
  Rsh_Fir_reg_R3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R2_);
  // checkMissing(R3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_R3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return R3
  return Rsh_Fir_reg_R3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 11);
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_mean1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mean = ld mean
  Rsh_Fir_reg_mean = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // mean1 = force? mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean);
  // checkMissing(mean1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_mean1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return mean1
  return Rsh_Fir_reg_mean1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // p5 = prom<V +>{
  //   mR = ld mR;
  //   mR1 = force? mR;
  //   checkMissing(mR1);
  //   return mR1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   S2 = ld S;
  //   S3 = force? S2;
  //   checkMissing(S3);
  //   r14 = `*`(20.0, S3);
  //   return r14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r16 = dyn all_equal[, , tolerance](p5, p6, 0.009)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mR;
  SEXP Rsh_Fir_reg_mR1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mR = ld mR
  Rsh_Fir_reg_mR = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // mR1 = force? mR
  Rsh_Fir_reg_mR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mR);
  // checkMissing(mR1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return mR1
  return Rsh_Fir_reg_mR1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S2_;
  SEXP Rsh_Fir_reg_S3_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // S2 = ld S
  Rsh_Fir_reg_S2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // S3 = force? S2
  Rsh_Fir_reg_S3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S2_);
  // checkMissing(S3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_S3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r14 = `*`(20.0, S3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_S3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args13);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_S6_;
  SEXP Rsh_Fir_reg_S7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // S6 = ld S
  Rsh_Fir_reg_S6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // S7 = force? S6
  Rsh_Fir_reg_S7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S6_);
  // checkMissing(S7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_S7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return S7
  return Rsh_Fir_reg_S7_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R4_;
  SEXP Rsh_Fir_reg_R5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // R4 = ld R
  Rsh_Fir_reg_R4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // R5 = force? R4
  Rsh_Fir_reg_R5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R4_);
  // checkMissing(R5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_R5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return R5
  return Rsh_Fir_reg_R5_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 11);
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_var;
  SEXP Rsh_Fir_reg_var1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // var = ld var
  Rsh_Fir_reg_var = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // var1 = force? var
  Rsh_Fir_reg_var1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var);
  // checkMissing(var1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_var1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return var1
  return Rsh_Fir_reg_var1_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_equal1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_equal1 = ldf `all.equal`
  Rsh_Fir_reg_all_equal1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // p12 = prom<V +>{
  //   vR = ld vR;
  //   vR1 = force? vR;
  //   checkMissing(vR1);
  //   return vR1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   Va = ld Va;
  //   Va1 = force? Va;
  //   checkMissing(Va1);
  //   return Va1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   return 0.0625;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r40 = dyn all_equal1[, , tolerance](p12, p13, p14)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal1_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vR;
  SEXP Rsh_Fir_reg_vR1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // vR = ld vR
  Rsh_Fir_reg_vR = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // vR1 = force? vR
  Rsh_Fir_reg_vR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vR);
  // checkMissing(vR1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_vR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return vR1
  return Rsh_Fir_reg_vR1_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Va;
  SEXP Rsh_Fir_reg_Va1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Va = ld Va
  Rsh_Fir_reg_Va = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // Va1 = force? Va
  Rsh_Fir_reg_Va1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Va);
  // checkMissing(Va1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_Va1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return Va1
  return Rsh_Fir_reg_Va1_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 0.0625
  return Rsh_const(CCP, 25);
}
SEXP Rsh_Fir_user_function_inner2843011469_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2843011469 dynamic dispatch ([n, df, Sigma])

  return Rsh_Fir_user_version_inner2843011469_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2843011469_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2843011469 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2843011469/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_df;
  SEXP Rsh_Fir_reg_Sigma;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_C_rWishart;
  SEXP Rsh_Fir_reg_C_rWishart1_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_df1_;
  SEXP Rsh_Fir_reg_df2_;
  SEXP Rsh_Fir_reg_Sigma1_;
  SEXP Rsh_Fir_reg_Sigma2_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_df = PARAMS[1];
  Rsh_Fir_reg_Sigma = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st df = df
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_df, RHO);
  (void)(Rsh_Fir_reg_df);
  // st Sigma = Sigma
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_Sigma, RHO);
  (void)(Rsh_Fir_reg_Sigma);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // C_rWishart = ld C_rWishart
  Rsh_Fir_reg_C_rWishart = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym C_rWishart>, <sym n>, <sym df>, <sym Sigma>)
  SEXP Rsh_Fir_array_args33[4];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 4, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [C_rWishart]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_C_rWishart;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L3_:;
  // C_rWishart1 = force? C_rWishart
  Rsh_Fir_reg_C_rWishart1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rWishart);
  // checkMissing(C_rWishart1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_C_rWishart1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 2 [C_rWishart1, n1]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_C_rWishart1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L4_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // df1 = ld df
  Rsh_Fir_reg_df1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 3 [C_rWishart1, n2, df1]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_rWishart1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_df1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L5_:;
  // df2 = force? df1
  Rsh_Fir_reg_df2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df1_);
  // checkMissing(df2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_df2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // Sigma1 = ld Sigma
  Rsh_Fir_reg_Sigma1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 4 [C_rWishart1, n2, df2, Sigma1]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_rWishart1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_df2_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_Sigma1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L6_:;
  // Sigma2 = force? Sigma1
  Rsh_Fir_reg_Sigma2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Sigma1_);
  // checkMissing(Sigma2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_Sigma2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, df2, Sigma2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_df2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_Sigma2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_rWishart1, vargs, <missing>)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_C_rWishart1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args38);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
