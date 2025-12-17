#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3180477695_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3180477695_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3180477695_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3180477695_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_Box_test;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_Box_test1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3180477695
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3180477695_, RHO, CCP);
  // st `Box.test` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn rnorm(100.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // Box_test = ldf `Box.test`
  Rsh_Fir_reg_Box_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn Box_test[, lag](p, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Box_test, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  // Box_test1 = ldf `Box.test`
  Rsh_Fir_reg_Box_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn Box_test1[, lag, type](p1, 1.0, "Ljung")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Box_test1_, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 21 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_function_inner3180477695_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3180477695 dynamic dispatch ([x, lag, type, fitdf])

  return Rsh_Fir_user_version_inner3180477695_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3180477695_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3180477695 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3180477695/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_lag;
  SEXP Rsh_Fir_reg_type;
  SEXP Rsh_Fir_reg_fitdf;
  SEXP Rsh_Fir_reg_lag_isMissing;
  SEXP Rsh_Fir_reg_lag_orDefault;
  SEXP Rsh_Fir_reg_type_isMissing;
  SEXP Rsh_Fir_reg_type_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_fitdf_isMissing;
  SEXP Rsh_Fir_reg_fitdf_orDefault;
  SEXP Rsh_Fir_reg_NCOL;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_lag1_;
  SEXP Rsh_Fir_reg_lag2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_acf;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_lag5_;
  SEXP Rsh_Fir_reg_lag6_;
  SEXP Rsh_Fir_reg_fitdf1_;
  SEXP Rsh_Fir_reg_fitdf2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_cor;
  SEXP Rsh_Fir_reg_cor1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_cor3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_lag7_;
  SEXP Rsh_Fir_reg_lag8_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_type3_;
  SEXP Rsh_Fir_reg_type4_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_obs;
  SEXP Rsh_Fir_reg_obs1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_pchisq;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_reg_lag11_;
  SEXP Rsh_Fir_reg_lag12_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_obs2_;
  SEXP Rsh_Fir_reg_obs3_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_sum2_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_pchisq1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r83_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_lag = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_fitdf = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // lag_isMissing = missing.0(lag)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_lag;
  Rsh_Fir_reg_lag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if lag_isMissing then L0(1.0) else L0(lag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lag_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_lag_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(lag)
    Rsh_Fir_reg_lag_orDefault = Rsh_Fir_reg_lag;
    goto L0_;
  }

L0_:;
  // st lag = lag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_lag_orDefault, RHO);
  (void)(Rsh_Fir_reg_lag_orDefault);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if type_isMissing then L1() else L2(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("Box-Pierce", "Ljung-Box");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("Box-Pierce", "Ljung-Box");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // fitdf_isMissing = missing.0(fitdf)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fitdf;
  Rsh_Fir_reg_fitdf_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if fitdf_isMissing then L3(0.0) else L3(fitdf)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fitdf_isMissing)) {
  // L3(0.0)
    Rsh_Fir_reg_fitdf_orDefault = Rsh_const(CCP, 11);
    goto L3_;
  } else {
  // L3(fitdf)
    Rsh_Fir_reg_fitdf_orDefault = Rsh_Fir_reg_fitdf;
    goto L3_;
  }

L3_:;
  // st fitdf = fitdf_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_fitdf_orDefault, RHO);
  (void)(Rsh_Fir_reg_fitdf_orDefault);
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_1, 0, NULL, CCP, RHO);
  // r5 = dyn NCOL(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // r6 = `>`(r5, 1.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args13);
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c1 then L18() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L18_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r7 = dyn stop("x is not a vector or univariate time series")
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L22_:;
  // p2 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   substitute = ldf substitute in base;
  //   r11 = dyn substitute(<sym x>);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1(<sym x>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_2, 0, NULL, CCP, RHO);
  // r13 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D3_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 15 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L5()
  // L5()
  goto L5_;

L23_:;
  // st DNAME = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L6_:;
  // st lag = r15
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L28() else D8()
  // L28()
  goto L28_;

L24_:;
  // lag1 = ld lag
  Rsh_Fir_reg_lag1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L25_:;
  // r14 = dyn base2(<sym lag>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D6_:;
  // deopt 19 [lag1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_lag1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // lag2 = force? lag1
  Rsh_Fir_reg_lag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag1_);
  // checkMissing(lag2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r16 = dyn as_integer(lag2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lag2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L28_:;
  // p3 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_3, 0, NULL, CCP, RHO);
  // r18 = dyn match_arg(p3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

D7_:;
  // deopt 22 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 27 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L6_;

L29_:;
  // st type = r18
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // acf = ldf acf
  Rsh_Fir_reg_acf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p4 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   lag3 = ld lag;
  //   lag4 = force? lag3;
  //   checkMissing(lag4);
  //   return lag4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   na_pass = ld `na.pass`;
  //   na_pass1 = force? na_pass;
  //   checkMissing(na_pass1);
  //   return na_pass1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_6, 0, NULL, CCP, RHO);
  // r22 = dyn acf[, `lag.max`, plot, `na.action`](p4, p5, FALSE, p6)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args29[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_acf, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D11_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // st cor = r22
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L7_:;
  // st n = r24
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard5 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L32_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L33_:;
  // r23 = dyn base3(<lang `!`(is.na(x))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L7_;

L8_:;
  // r28 = `!`(r26)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args34);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r29 = dyn sum(r28)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

L9_:;
  // st PARAMETER = r31
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // cor = ld cor
  Rsh_Fir_reg_cor = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

L34_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

L35_:;
  // r25 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L8_;

L39_:;
  // lag5 = ld lag
  Rsh_Fir_reg_lag5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L41() else D15()
  // L41()
  goto L41_;

L40_:;
  // r30 = dyn base5[df](<lang `-`(lag, fitdf)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9(r30)
  // L9(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L9_;

D12_:;
  // deopt 44 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 50 [r29]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 54 [lag5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_lag5_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 62 [cor]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_cor;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r27 = dyn is_na(x6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

L38_:;
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r29_;
  goto L7_;

L41_:;
  // lag6 = force? lag5
  Rsh_Fir_reg_lag6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag5_);
  // checkMissing(lag6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lag6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // fitdf1 = ld fitdf
  Rsh_Fir_reg_fitdf1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

L44_:;
  // cor1 = force? cor
  Rsh_Fir_reg_cor1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cor);
  // checkMissing(cor1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_cor1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(cor1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_cor1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c3 then L46() else L47(cor1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L46()
    goto L46_;
  } else {
  // L47(cor1)
    Rsh_Fir_reg_cor3_ = Rsh_Fir_reg_cor1_;
    goto L47_;
  }

D13_:;
  // deopt 47 [r27]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 55 [lag6, fitdf1]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_lag6_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_fitdf1_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L8(r27)
  // L8(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L8_;

L42_:;
  // fitdf2 = force? fitdf1
  Rsh_Fir_reg_fitdf2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitdf1_);
  // checkMissing(fitdf2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_fitdf2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r32 = `-`(lag6, fitdf2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_lag6_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_fitdf2_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args44);
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r33 = dyn c2(r32)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

L45_:;
  // c4 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c4 then L49() else L50(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L49()
    goto L49_;
  } else {
  // L50(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L50_;
  }

L46_:;
  // dr = tryDispatchBuiltin.1("$", cor1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_cor1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L48() else L47(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr)
    Rsh_Fir_reg_cor3_ = Rsh_Fir_reg_dr;
    goto L47_;
  }

L47_:;
  // r34 = `$`(cor3, <sym acf>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_cor3_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args49);
  // goto L45(r34)
  // L45(r34)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r34_;
  goto L45_;

D17_:;
  // deopt 60 [r33]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L10_:;
  // st obs = dx5
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L53() else D20()
  // L53()
  goto L53_;

L43_:;
  // goto L9(r33)
  // L9(r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L9_;

L48_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L45(dx)
  // L45(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L45_;

L49_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // lag7 = ld lag
  Rsh_Fir_reg_lag7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

D19_:;
  // deopt 66 [dx3, 2.0, lag7]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_lag7_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 73 [type3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

L52_:;
  // lag8 = force? lag7
  Rsh_Fir_reg_lag8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag7_);
  // checkMissing(lag8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_lag8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r35 = `+`(lag8, 1.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_lag8_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args55);
  // r36 = `:`(2.0, r35)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args56);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r37 = dyn __(dx3, r36)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L10(r37)
  // L10(r37)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L10_;

L53_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r38 = `==`(type4, "Box-Pierce")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args59);
  // c5 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c5 then L54() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L54()
    goto L54_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // st METHOD = "Box-Ljung test"
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_const(CCP, 40), RHO);
  (void)(Rsh_const(CCP, 40));
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L63() else D26()
  // L63()
  goto L63_;

L13_:;
  // l = ld STATISTIC
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L77() else D36()
  // L77()
  goto L77_;

L54_:;
  // st METHOD = "Box-Pierce test"
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_const(CCP, 44), RHO);
  (void)(Rsh_const(CCP, 44));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L55() else D21()
  // L55()
  goto L55_;

D21_:;
  // deopt 80 [n]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 102 [n5]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 142 ["X-squared", l, "X-squared"]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_const(CCP, 45);
  Rsh_Fir_deopt(142, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L55_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // sym6 = ldf sum
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf sum in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard6 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L63_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L64() else D27()
  // L64()
  goto L64_;

L77_:;
  // r78 = dyn names__(l, NULL, "X-squared")
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L78() else D37()
  // L78()
  goto L78_;

D27_:;
  // deopt 103 [n6, n7]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 144 ["X-squared", r78]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L12_:;
  // r43 = `*`(n4, r40)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args65);
  // st STATISTIC = r43
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // pchisq = ldf pchisq
  Rsh_Fir_reg_pchisq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L60() else D24()
  // L60()
  goto L60_;

L56_:;
  // obs = ld obs
  Rsh_Fir_reg_obs = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L58() else D22()
  // L58()
  goto L58_;

L57_:;
  // r39 = dyn base6(<lang `^`(obs, 2.0)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(n1, r39)
  // L12(n1, r39)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L12_;

L64_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r50 = `+`(n8, 2.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args68);
  // r51 = `*`(n6, r50)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args69);
  // sym7 = ldf sum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf sum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard7 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L78_:;
  // st STATISTIC = r78
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L79() else D38()
  // L79()
  goto L79_;

D22_:;
  // deopt 83 [n1, obs]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_obs;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 93 [1.0]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_const(CCP, 4);
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 147 []
  Rsh_Fir_deopt(147, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r72 = `*`(r55, r56)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args71);
  // st STATISTIC = r72
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // pchisq1 = ldf pchisq
  Rsh_Fir_reg_pchisq1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L75() else D34()
  // L75()
  goto L75_;

L58_:;
  // obs1 = force? obs
  Rsh_Fir_reg_obs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obs);
  // checkMissing(obs1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_obs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r41 = `^`(obs1, 2.0)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_obs1_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args73);
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r42 = dyn sum1(r41)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L59() else D23()
  // L59()
  goto L59_;

L60_:;
  // p7 = prom<V +>{
  //   STATISTIC = ld STATISTIC;
  //   STATISTIC1 = force? STATISTIC;
  //   checkMissing(STATISTIC1);
  //   return STATISTIC1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   lag9 = ld lag;
  //   lag10 = force? lag9;
  //   checkMissing(lag10);
  //   fitdf3 = ld fitdf;
  //   fitdf4 = force? fitdf3;
  //   checkMissing(fitdf4);
  //   r45 = `-`(lag10, fitdf4);
  //   return r45;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_8, 0, NULL, CCP, RHO);
  // r47 = dyn pchisq(p7, p8)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pchisq, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L61() else D25()
  // L61()
  goto L61_;

L65_:;
  // sym8 = ldf `seq.int`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base8 = ldf `seq.int` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard8 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L66_:;
  // r54 = dyn base7(<lang `*`(`/`(1.0, seq.int(`-`(n, 1.0), `-`(n, lag))), `^`(obs, 2.0))>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L14(r51, r54)
  // L14(r51, r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r54_;
  goto L14_;

L79_:;
  // p11 = prom<V +>{
  //   sym9 = ldf list;
  //   base9 = ldf list in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r80):
  //   return r80;
  // L1():
  //   STATISTIC4 = ld STATISTIC;
  //   STATISTIC5 = force? STATISTIC4;
  //   checkMissing(STATISTIC5);
  //   PARAMETER = ld PARAMETER;
  //   PARAMETER1 = force? PARAMETER;
  //   checkMissing(PARAMETER1);
  //   PVAL = ld PVAL;
  //   PVAL1 = force? PVAL;
  //   checkMissing(PVAL1);
  //   METHOD = ld METHOD;
  //   METHOD1 = force? METHOD;
  //   checkMissing(METHOD1);
  //   DNAME = ld DNAME;
  //   DNAME1 = force? DNAME;
  //   checkMissing(DNAME1);
  //   list = ldf list in base;
  //   r81 = dyn list(STATISTIC5, PARAMETER1, PVAL1, METHOD1, DNAME1);
  //   goto L0(r81);
  // L2():
  //   r79 = dyn base9[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
  //   goto L0(r79);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_9, 0, NULL, CCP, RHO);
  // r83 = dyn structure[, class](p11, "htest")
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L80() else D39()
  // L80()
  goto L80_;

D23_:;
  // deopt 88 [n1, r42]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 96 [1.0, r47]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 133 [1.0]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 4);
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 151 [r83]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L15_:;
  // r68 = `/`(r63, r64)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args91);
  // obs2 = ld obs
  Rsh_Fir_reg_obs2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L73() else D32()
  // L73()
  goto L73_;

L59_:;
  // goto L12(n1, r42)
  // L12(n1, r42)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L12_;

L61_:;
  // r48 = `-`(1.0, r47)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args92);
  // st PVAL = r48
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // goto L13()
  // L13()
  goto L13_;

L67_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L69() else D28()
  // L69()
  goto L69_;

L68_:;
  // r61 = dyn base8(<lang `-`(n, 1.0)>, <lang `-`(n, lag)>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L15(r51, 1.0, r61)
  // L15(r51, 1.0, r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r63_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r61_;
  goto L15_;

L75_:;
  // p9 = prom<V +>{
  //   STATISTIC2 = ld STATISTIC;
  //   STATISTIC3 = force? STATISTIC2;
  //   checkMissing(STATISTIC3);
  //   return STATISTIC3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   lag13 = ld lag;
  //   lag14 = force? lag13;
  //   checkMissing(lag14);
  //   fitdf5 = ld fitdf;
  //   fitdf6 = force? fitdf5;
  //   checkMissing(fitdf6);
  //   r74 = `-`(lag14, fitdf6);
  //   return r74;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3180477695_11, 0, NULL, CCP, RHO);
  // r76 = dyn pchisq1(p9, p10)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pchisq1_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L76() else D35()
  // L76()
  goto L76_;

L80_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r83
  return Rsh_Fir_reg_r83_;

D28_:;
  // deopt 112 [r51, 1.0, n9]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 122 [r62, r68, obs2]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_obs2_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 136 [1.0, r76]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L69_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r65 = `-`(n10, 1.0)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args100);
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L70() else D29()
  // L70()
  goto L70_;

L73_:;
  // obs3 = force? obs2
  Rsh_Fir_reg_obs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obs2_);
  // checkMissing(obs3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_obs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // r69 = `^`(obs3, 2.0)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_obs3_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args102);
  // r70 = `*`(r68, r69)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args103);
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r71 = dyn sum2(r70)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L74() else D33()
  // L74()
  goto L74_;

L76_:;
  // r77 = `-`(1.0, r76)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args105);
  // st PVAL = r77
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // goto L13()
  // L13()
  goto L13_;

D29_:;
  // deopt 116 [r51, 1.0, n11]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_n11_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 128 [r62, r71]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L70_:;
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // lag11 = ld lag
  Rsh_Fir_reg_lag11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L71() else D30()
  // L71()
  goto L71_;

L74_:;
  // goto L14(r62, r71)
  // L14(r62, r71)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r71_;
  goto L14_;

D30_:;
  // deopt 117 [r51, 1.0, n12, lag11]
  SEXP Rsh_Fir_array_deopt_stack35[4];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_lag11_;
  Rsh_Fir_deopt(117, 4, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L71_:;
  // lag12 = force? lag11
  Rsh_Fir_reg_lag12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag11_);
  // checkMissing(lag12)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_lag12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r66 = `-`(n12, lag12)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_lag12_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args108);
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r67 = dyn seq_int(r65, r66)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L72() else D31()
  // L72()
  goto L72_;

D31_:;
  // deopt 121 [r51, 1.0, r67]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(121, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L15(r51, 1.0, r67)
  // L15(r51, 1.0, r67)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r63_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r67_;
  goto L15_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn c("Box-Pierce", "Ljung-Box")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("Box-Pierce", "Ljung-Box")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner3180477695_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r11 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_reg_type2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lag3_;
  SEXP Rsh_Fir_reg_lag4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // lag3 = ld lag
  Rsh_Fir_reg_lag3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lag4 = force? lag3
  Rsh_Fir_reg_lag4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag3_);
  // checkMissing(lag4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_lag4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return lag4
  return Rsh_Fir_reg_lag4_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_na_pass;
  SEXP Rsh_Fir_reg_na_pass1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // na_pass = ld `na.pass`
  Rsh_Fir_reg_na_pass = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // na_pass1 = force? na_pass
  Rsh_Fir_reg_na_pass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_pass);
  // checkMissing(na_pass1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_na_pass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return na_pass1
  return Rsh_Fir_reg_na_pass1_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_STATISTIC;
  SEXP Rsh_Fir_reg_STATISTIC1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // STATISTIC = ld STATISTIC
  Rsh_Fir_reg_STATISTIC = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // STATISTIC1 = force? STATISTIC
  Rsh_Fir_reg_STATISTIC1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STATISTIC);
  // checkMissing(STATISTIC1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_STATISTIC1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return STATISTIC1
  return Rsh_Fir_reg_STATISTIC1_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lag9_;
  SEXP Rsh_Fir_reg_lag10_;
  SEXP Rsh_Fir_reg_fitdf3_;
  SEXP Rsh_Fir_reg_fitdf4_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // lag9 = ld lag
  Rsh_Fir_reg_lag9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lag10 = force? lag9
  Rsh_Fir_reg_lag10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag9_);
  // checkMissing(lag10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_lag10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // fitdf3 = ld fitdf
  Rsh_Fir_reg_fitdf3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // fitdf4 = force? fitdf3
  Rsh_Fir_reg_fitdf4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitdf3_);
  // checkMissing(fitdf4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_fitdf4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r45 = `-`(lag10, fitdf4)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_lag10_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_fitdf4_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args78);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_STATISTIC4_;
  SEXP Rsh_Fir_reg_STATISTIC5_;
  SEXP Rsh_Fir_reg_PARAMETER;
  SEXP Rsh_Fir_reg_PARAMETER1_;
  SEXP Rsh_Fir_reg_PVAL;
  SEXP Rsh_Fir_reg_PVAL1_;
  SEXP Rsh_Fir_reg_METHOD;
  SEXP Rsh_Fir_reg_METHOD1_;
  SEXP Rsh_Fir_reg_DNAME;
  SEXP Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r81_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r80
  return Rsh_Fir_reg_r80_;

L1_:;
  // STATISTIC4 = ld STATISTIC
  Rsh_Fir_reg_STATISTIC4_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // STATISTIC5 = force? STATISTIC4
  Rsh_Fir_reg_STATISTIC5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STATISTIC4_);
  // checkMissing(STATISTIC5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_STATISTIC5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // PARAMETER = ld PARAMETER
  Rsh_Fir_reg_PARAMETER = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // PARAMETER1 = force? PARAMETER
  Rsh_Fir_reg_PARAMETER1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PARAMETER);
  // checkMissing(PARAMETER1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_PARAMETER1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // PVAL = ld PVAL
  Rsh_Fir_reg_PVAL = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // PVAL1 = force? PVAL
  Rsh_Fir_reg_PVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PVAL);
  // checkMissing(PVAL1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_PVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_METHOD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r81 = dyn list(STATISTIC5, PARAMETER1, PVAL1, METHOD1, DNAME1)
  SEXP Rsh_Fir_array_args88[5];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_STATISTIC5_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_PARAMETER1_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_PVAL1_;
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_METHOD1_;
  Rsh_Fir_array_args88[4] = Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 5, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L0_;

L2_:;
  // r79 = dyn base9[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>)
  SEXP Rsh_Fir_array_args89[5];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args89[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args89[3] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args89[4] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names27[5];
  Rsh_Fir_array_arg_names27[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_arg_names27[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_arg_names27[4] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 5, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_STATISTIC2_;
  SEXP Rsh_Fir_reg_STATISTIC3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // STATISTIC2 = ld STATISTIC
  Rsh_Fir_reg_STATISTIC2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // STATISTIC3 = force? STATISTIC2
  Rsh_Fir_reg_STATISTIC3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STATISTIC2_);
  // checkMissing(STATISTIC3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_STATISTIC3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return STATISTIC3
  return Rsh_Fir_reg_STATISTIC3_;
}
SEXP Rsh_Fir_user_promise_inner3180477695_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lag13_;
  SEXP Rsh_Fir_reg_lag14_;
  SEXP Rsh_Fir_reg_fitdf5_;
  SEXP Rsh_Fir_reg_fitdf6_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3180477695/0: expected 0, got %d", NCAPTURES);

  // lag13 = ld lag
  Rsh_Fir_reg_lag13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lag14 = force? lag13
  Rsh_Fir_reg_lag14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag13_);
  // checkMissing(lag14)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_lag14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // fitdf5 = ld fitdf
  Rsh_Fir_reg_fitdf5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // fitdf6 = force? fitdf5
  Rsh_Fir_reg_fitdf6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitdf5_);
  // checkMissing(fitdf6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_fitdf6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // r74 = `-`(lag14, fitdf6)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_lag14_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_fitdf6_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args97);
  // return r74
  return Rsh_Fir_reg_r74_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
