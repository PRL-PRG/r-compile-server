#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2362538415_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2362538415_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2362538415_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2362538415_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_PP_test;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_cumsum;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_PP_test1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2362538415
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2362538415_, RHO, CCP);
  // st `PP.test` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn rnorm(1000.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // PP_test = ldf `PP.test`
  Rsh_Fir_reg_PP_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn PP_test(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_PP_test, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym = ldf cumsum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf cumsum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st y = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // PP_test1 = ldf `PP.test`
  Rsh_Fir_reg_PP_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

L5_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

D4_:;
  // deopt 14 [x2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn cumsum(x3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

L9_:;
  // p1 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn PP_test1(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_PP_test1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D5_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
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
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_function_inner2362538415_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2362538415 dynamic dispatch ([x, lshort])

  return Rsh_Fir_user_version_inner2362538415_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2362538415_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2362538415 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2362538415/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_lshort;
  SEXP Rsh_Fir_reg_lshort_isMissing;
  SEXP Rsh_Fir_reg_lshort_orDefault;
  SEXP Rsh_Fir_reg_NCOL;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_embed;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_yt;
  SEXP Rsh_Fir_reg_yt1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_res;
  SEXP Rsh_Fir_reg_res1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_res3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_coef;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_cf;
  SEXP Rsh_Fir_reg_cf1_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_cf3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_cf4_;
  SEXP Rsh_Fir_reg_cf5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_cf7_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_residuals;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_u;
  SEXP Rsh_Fir_reg_u1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_lshort1_;
  SEXP Rsh_Fir_reg_lshort2_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_trunc;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_trunc1_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_ssqru;
  SEXP Rsh_Fir_reg_ssqru1_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_ssqru4_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_C_pp_sum;
  SEXP Rsh_Fir_reg_C_pp_sum1_;
  SEXP Rsh_Fir_reg_u2_;
  SEXP Rsh_Fir_reg_u3_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_reg_n13_;
  SEXP Rsh_Fir_reg_n14_;
  SEXP Rsh_Fir_reg_n15_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_yt2_;
  SEXP Rsh_Fir_reg_yt3_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_n16_;
  SEXP Rsh_Fir_reg_n17_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_n20_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_yt4_;
  SEXP Rsh_Fir_reg_yt5_;
  SEXP Rsh_Fir_reg_n21_;
  SEXP Rsh_Fir_reg_n22_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sum2_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_n23_;
  SEXP Rsh_Fir_reg_n24_;
  SEXP Rsh_Fir_reg_n25_;
  SEXP Rsh_Fir_reg_n26_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_yt6_;
  SEXP Rsh_Fir_reg_yt7_;
  SEXP Rsh_Fir_reg_n27_;
  SEXP Rsh_Fir_reg_n28_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_sum3_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_yt8_;
  SEXP Rsh_Fir_reg_yt9_;
  SEXP Rsh_Fir_reg_sum4_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_n29_;
  SEXP Rsh_Fir_reg_n30_;
  SEXP Rsh_Fir_reg_n31_;
  SEXP Rsh_Fir_reg_n32_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_n33_;
  SEXP Rsh_Fir_reg_n34_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_yt10_;
  SEXP Rsh_Fir_reg_yt11_;
  SEXP Rsh_Fir_reg_sum5_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_trm1_;
  SEXP Rsh_Fir_reg_trm2_;
  SEXP Rsh_Fir_reg_trm3_;
  SEXP Rsh_Fir_reg_trm4_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_trm5_;
  SEXP Rsh_Fir_reg_trm6_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_trm7_;
  SEXP Rsh_Fir_reg_trm8_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_ssqru5_;
  SEXP Rsh_Fir_reg_ssqru6_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_ssqrtl;
  SEXP Rsh_Fir_reg_ssqrtl1_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_tstat;
  SEXP Rsh_Fir_reg_tstat1_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_n35_;
  SEXP Rsh_Fir_reg_n36_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_Dx;
  SEXP Rsh_Fir_reg_Dx1_;
  SEXP Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_r163_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_ssqrtl2_;
  SEXP Rsh_Fir_reg_ssqrtl3_;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_r166_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_ssqrtl4_;
  SEXP Rsh_Fir_reg_ssqrtl5_;
  SEXP Rsh_Fir_reg_ssqru7_;
  SEXP Rsh_Fir_reg_ssqru8_;
  SEXP Rsh_Fir_reg_r168_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r203_;
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_table1_;
  SEXP Rsh_Fir_reg_r204_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r205_;
  SEXP Rsh_Fir_reg_r206_;
  SEXP Rsh_Fir_reg_table2_;
  SEXP Rsh_Fir_reg_table3_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r207_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r209_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r210_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r211_;
  SEXP Rsh_Fir_reg_r212_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r213_;
  SEXP Rsh_Fir_reg_sym26_;
  SEXP Rsh_Fir_reg_base26_;
  SEXP Rsh_Fir_reg_guard26_;
  SEXP Rsh_Fir_reg_r214_;
  SEXP Rsh_Fir_reg_r215_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r216_;
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r218_;
  SEXP Rsh_Fir_reg_tablen2_;
  SEXP Rsh_Fir_reg_tablen3_;
  SEXP Rsh_Fir_reg_r219_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_approx;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r224_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r226_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_r227_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r228_;
  SEXP Rsh_Fir_reg_approx1_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r232_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r234_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_r235_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r236_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r237_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r242_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_lshort = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // lshort_isMissing = missing.0(lshort)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_lshort;
  Rsh_Fir_reg_lshort_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if lshort_isMissing then L0(TRUE) else L0(lshort)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lshort_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_lshort_orDefault = Rsh_const(CCP, 6);
    goto L0_;
  } else {
  // L0(lshort)
    Rsh_Fir_reg_lshort_orDefault = Rsh_Fir_reg_lshort;
    goto L0_;
  }

L0_:;
  // st lshort = lshort_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lshort_orDefault, RHO);
  (void)(Rsh_Fir_reg_lshort_orDefault);
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_, 0, NULL, CCP, RHO);
  // r1 = dyn NCOL(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // r2 = `>`(r1, 1.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args12);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c then L34() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

L34_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // r3 = dyn stop("x is not a vector or univariate time series")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L38_:;
  // p1 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   substitute = ldf substitute in base;
  //   r7 = dyn substitute(<sym x>);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base(<sym x>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_1, 0, NULL, CCP, RHO);
  // r9 = dyn deparse1(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D3_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L2()
  // L2()
  goto L2_;

L39_:;
  // st DNAME = r9
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // embed = ldf embed
  Rsh_Fir_reg_embed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_2, 0, NULL, CCP, RHO);
  // r11 = dyn embed(p2, 2.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_embed, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // st z = r11
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

D8_:;
  // deopt 23 [z]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(z1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c1 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L3_:;
  // st yt = dx1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

L43_:;
  // dr = tryDispatchBuiltin.1("[", z1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L45() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L45()
    goto L45_;
  } else {
  // L44()
    goto L44_;
  }

L44_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn __(z1, <missing>, 1.0)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L3_;

D9_:;
  // deopt 30 [z4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L46_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(z5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args28);
  // if c2 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L4_:;
  // st yt1 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard1 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L47_:;
  // dr2 = tryDispatchBuiltin.1("[", z5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L49() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L49()
    goto L49_;
  } else {
  // L48()
    goto L48_;
  }

L48_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r13 = dyn __1(z5, <missing>, 2.0)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r13_;
  goto L4_;

L5_:;
  // st n = r15
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L49_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L50_:;
  // yt = ld yt
  Rsh_Fir_reg_yt = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // r14 = dyn base1(<sym yt>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D10_:;
  // deopt 39 [yt]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_yt;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 45 [1, n]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L52_:;
  // yt1 = force? yt
  Rsh_Fir_reg_yt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt);
  // checkMissing(yt1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_yt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn length(yt1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_yt1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

L54_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r17 = `:`(1, n1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args38);
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

D11_:;
  // deopt 42 [r16]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 47 [r17, n2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L5_;

L55_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r18 = `/`(n3, 2.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args40);
  // r19 = `-`(r17, r18)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args41);
  // st u = r19
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // lm = ldf lm
  Rsh_Fir_reg_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p3 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r20 = dyn __2(<sym yt>, <lang `+`(`+`(1.0, u), yt1)>);
  //   return r20;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_3, 0, NULL, CCP, RHO);
  // r22 = dyn lm(p3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

D15_:;
  // deopt 56 [r22]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // st res = r22
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

D16_:;
  // deopt 58 [res]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L58_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(res1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args45);
  // if c3 then L60() else L61(res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L60()
    goto L60_;
  } else {
  // L61(res1)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L61_;
  }

L59_:;
  // r24 = `<`(dx5, 3.0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args46);
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c4 then L63() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L63()
    goto L63_;
  } else {
  // L6()
    goto L6_;
  }

L60_:;
  // dr4 = tryDispatchBuiltin.1("$", res1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr4)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // r23 = `$`(res3, <sym rank>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args50);
  // goto L59(r23)
  // L59(r23)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r23_;
  goto L59_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L62_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L59(dx4)
  // L59(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L59_;

L63_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // r25 = dyn stop1("singularities in regression")
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

L67_:;
  // p5 = prom<V +>{
  //   summary = ldf summary;
  //   p4 = prom<V +>{
  //     res4 = ld res;
  //     res5 = force? res4;
  //     checkMissing(res5);
  //     return res5;
  //   };
  //   r28 = dyn summary(p4);
  //   return r28;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_4, 0, NULL, CCP, RHO);
  // r30 = dyn coef(p5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

D18_:;
  // deopt 66 [r25]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 72 [r30]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L7()
  // L7()
  goto L7_;

L68_:;
  // st cf = r30
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // cf = ld cf
  Rsh_Fir_reg_cf = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

D21_:;
  // deopt 74 [cf]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_cf;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // cf1 = force? cf
  Rsh_Fir_reg_cf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cf);
  // checkMissing(cf1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_cf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(cf1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_cf1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c5 then L70() else L71(cf1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L70()
    goto L70_;
  } else {
  // L71(cf1)
    Rsh_Fir_reg_cf3_ = Rsh_Fir_reg_cf1_;
    goto L71_;
  }

L8_:;
  // r32 = `-`(dx7, 1.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args58);
  // cf4 = ld cf
  Rsh_Fir_reg_cf4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

L70_:;
  // dr6 = tryDispatchBuiltin.1("[", cf1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_cf1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L72() else L71(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr6)
    Rsh_Fir_reg_cf3_ = Rsh_Fir_reg_dr6_;
    goto L71_;
  }

L71_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r31 = dyn __3(cf3, 3.0, 1.0)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_cf3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L8(r31)
  // L8(r31)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r31_;
  goto L8_;

D22_:;
  // deopt 81 [r32, cf4]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_cf4_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L72_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L8(dx6)
  // L8(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

L73_:;
  // cf5 = force? cf4
  Rsh_Fir_reg_cf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cf4_);
  // checkMissing(cf5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_cf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(cf5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_cf5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c6 then L74() else L75(r32, cf5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L74()
    goto L74_;
  } else {
  // L75(r32, cf5)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_cf7_ = Rsh_Fir_reg_cf5_;
    goto L75_;
  }

L9_:;
  // r38 = `/`(r36, dx9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args65);
  // st tstat = r38
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // residuals = ldf residuals
  Rsh_Fir_reg_residuals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

L74_:;
  // dr8 = tryDispatchBuiltin.1("[", cf5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_cf5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc4 then L76() else L75(r32, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L76()
    goto L76_;
  } else {
  // L75(r32, dr8)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_cf7_ = Rsh_Fir_reg_dr8_;
    goto L75_;
  }

L75_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r37 = dyn __4(cf7, 3.0, 2.0)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_cf7_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L9(r34, r37)
  // L9(r34, r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r37_;
  goto L9_;

D23_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L9(r32, dx8)
  // L9(r32, dx8)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L9_;

L77_:;
  // p6 = prom<V +>{
  //   res6 = ld res;
  //   res7 = force? res6;
  //   checkMissing(res7);
  //   return res7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_6, 0, NULL, CCP, RHO);
  // r40 = dyn residuals(p6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_residuals, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

D24_:;
  // deopt 92 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // st u = r40
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard2 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L10_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L83() else D27()
  // L83()
  goto L83_;

L79_:;
  // u = ld u
  Rsh_Fir_reg_u = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L81() else D25()
  // L81()
  goto L81_;

L80_:;
  // r41 = dyn base2(<lang `^`(u, 2.0)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L10(r41)
  // L10(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L10_;

D25_:;
  // deopt 96 [u]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_u;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 101 [r42, n4]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L81_:;
  // u1 = force? u
  Rsh_Fir_reg_u1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u);
  // checkMissing(u1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_u1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r43 = `^`(u1, 2.0)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_u1_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args75);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r44 = dyn sum(r43)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L82() else D26()
  // L82()
  goto L82_;

L83_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r45 = `/`(r42, n5)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args78);
  // st ssqru = r45
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // lshort1 = ld lshort
  Rsh_Fir_reg_lshort1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L84() else D28()
  // L84()
  goto L84_;

D26_:;
  // deopt 101 [r44]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 105 [lshort1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_lshort1_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L10(r44)
  // L10(r44)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r44_;
  goto L10_;

L84_:;
  // lshort2 = force? lshort1
  Rsh_Fir_reg_lshort2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lshort1_);
  // checkMissing(lshort2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_lshort2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(lshort2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_lshort2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args80);
  // if c7 then L85() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L85()
    goto L85_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // sym4 = ldf trunc
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base4 = ldf trunc in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard4 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L13_:;
  // st l = r52
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // ssqru = ld ssqru
  Rsh_Fir_reg_ssqru = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

L85_:;
  // sym3 = ldf trunc
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base3 = ldf trunc in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard3 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

D33_:;
  // deopt 132 [ssqru]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_ssqru;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L13(r47)
  // L13(r47)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r47_;
  goto L13_;

L86_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L88() else D29()
  // L88()
  goto L88_;

L87_:;
  // r46 = dyn base3(<lang `*`(4.0, `^`(`(`(`/`(n, 100.0)), 0.25))>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L12(r46)
  // L12(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L12_;

L91_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

L92_:;
  // r53 = dyn base4(<lang `*`(12.0, `^`(`(`(`/`(n, 100.0)), 0.25))>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L13(r53)
  // L13(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L13_;

L95_:;
  // ssqru1 = force? ssqru
  Rsh_Fir_reg_ssqru1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqru);
  // checkMissing(ssqru1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_ssqru1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // sym5 = ldf `.Call`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base5 = ldf `.Call` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard5 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

D29_:;
  // deopt 110 [4.0, n6]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 122 [12.0, n8]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(122, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L14_:;
  // r61 = `+`(ssqru4, r59)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ssqru4_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args87);
  // st ssqrtl = r61
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L101() else D37()
  // L101()
  goto L101_;

L88_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r48 = `/`(n7, 100.0)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args89);
  // r49 = `^`(r48, 0.25)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args90);
  // r50 = `*`(4.0, r49)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args91);
  // trunc = ldf trunc in base
  Rsh_Fir_reg_trunc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r51 = dyn trunc(r50)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_trunc, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L89() else D30()
  // L89()
  goto L89_;

L93_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r54 = `/`(n9, 100.0)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args94);
  // r55 = `^`(r54, 0.25)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args95);
  // r56 = `*`(12.0, r55)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args96);
  // trunc1 = ldf trunc in base
  Rsh_Fir_reg_trunc1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r57 = dyn trunc1(r56)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_trunc1_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

L96_:;
  // C_pp_sum = ld C_pp_sum
  Rsh_Fir_reg_C_pp_sum = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L98() else D34()
  // L98()
  goto L98_;

L97_:;
  // r58 = dyn base5(<sym C_pp_sum>, <sym u>, <sym l>)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L14(ssqru1, r58)
  // L14(ssqru1, r58)
  Rsh_Fir_reg_ssqru4_ = Rsh_Fir_reg_ssqru1_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L14_;

D30_:;
  // deopt 118 [r51]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 130 [r57]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 134 [ssqru1, C_pp_sum]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_ssqru1_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_C_pp_sum;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 141 [n10]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L12(r51)
  // L12(r51)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  goto L12_;

L94_:;
  // goto L13(r57)
  // L13(r57)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r57_;
  goto L13_;

L98_:;
  // C_pp_sum1 = force? C_pp_sum
  Rsh_Fir_reg_C_pp_sum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_pp_sum);
  // checkMissing(C_pp_sum1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_C_pp_sum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // u2 = ld u
  Rsh_Fir_reg_u2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

L101_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r62 = `^`(n11, 2.0)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args101);
  // st n2 = r62
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // n12 = ld n2
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L102() else D38()
  // L102()
  goto L102_;

D35_:;
  // deopt 135 [ssqru1, C_pp_sum1, u2]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_ssqru1_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_C_pp_sum1_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_u2_;
  Rsh_Fir_deopt(135, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 146 [n12]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L99_:;
  // u3 = force? u2
  Rsh_Fir_reg_u3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u2_);
  // checkMissing(u3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_u3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L100() else D36()
  // L100()
  goto L100_;

L102_:;
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // n14 = ld n2
  Rsh_Fir_reg_n14_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L103() else D39()
  // L103()
  goto L103_;

D36_:;
  // deopt 136 [ssqru1, C_pp_sum1, u3, l]
  SEXP Rsh_Fir_array_deopt_stack35[4];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ssqru1_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_C_pp_sum1_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_u3_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_l;
  Rsh_Fir_deopt(136, 4, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 147 [n13, n14]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_n14_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L100_:;
  // l1 = force? l
  Rsh_Fir_reg_l1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l);
  // checkMissing(l1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_l1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // vargs = dots[u3, l1]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_u3_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r60 = `.Call`(C_pp_sum1, vargs, <missing>)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_C_pp_sum1_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args105[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args105);
  // goto L14(ssqru1, r60)
  // L14(ssqru1, r60)
  Rsh_Fir_reg_ssqru4_ = Rsh_Fir_reg_ssqru1_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L14_;

L103_:;
  // n15 = force? n14
  Rsh_Fir_reg_n15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n14_);
  // checkMissing(n15)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r63 = `-`(n15, 1.0)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_n15_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args107);
  // r64 = `*`(n13, r63)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args108);
  // sym6 = ldf sum
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base6 = ldf sum in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard6 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L15_:;
  // r72 = `*`(r68, r69)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args110);
  // r73 = `/`(r72, 12.0)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args111);
  // st trm1 = r73
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L108() else D42()
  // L108()
  goto L108_;

L104_:;
  // yt2 = ld yt1
  Rsh_Fir_reg_yt2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L106() else D40()
  // L106()
  goto L106_;

L105_:;
  // r67 = dyn base6(<lang `^`(yt1, 2.0)>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L15(r64, r67)
  // L15(r64, r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
  goto L15_;

D40_:;
  // deopt 153 [r64, yt2]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_yt2_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 163 [n16]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_n16_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L106_:;
  // yt3 = force? yt2
  Rsh_Fir_reg_yt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt2_);
  // checkMissing(yt3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_yt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // r70 = `^`(yt3, 2.0)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_yt3_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args114);
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r71 = dyn sum1(r70)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L107() else D41()
  // L107()
  goto L107_;

L108_:;
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // sym7 = ldf sum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base7 = ldf sum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard7 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

D41_:;
  // deopt 158 [r64, r71]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L16_:;
  // r79 = `^`(r75, 2.0)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args118);
  // r80 = `*`(n20, r79)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_n20_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args119);
  // st trm2 = r80
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // n23 = ld n
  Rsh_Fir_reg_n23_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L114() else D46()
  // L114()
  goto L114_;

L107_:;
  // goto L15(r64, r71)
  // L15(r64, r71)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r71_;
  goto L15_;

L109_:;
  // yt4 = ld yt1
  Rsh_Fir_reg_yt4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L111() else D43()
  // L111()
  goto L111_;

L110_:;
  // r74 = dyn base7(<lang `*`(yt1, `(`(`:`(1, n)))>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L16(n17, r74)
  // L16(n17, r74)
  Rsh_Fir_reg_n20_ = Rsh_Fir_reg_n17_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L16_;

D43_:;
  // deopt 166 [n17, yt4]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_yt4_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 178 [n23]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_n23_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L111_:;
  // yt5 = force? yt4
  Rsh_Fir_reg_yt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt4_);
  // checkMissing(yt5)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_yt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // n21 = ld n
  Rsh_Fir_reg_n21_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L112() else D44()
  // L112()
  goto L112_;

L114_:;
  // n24 = force? n23
  Rsh_Fir_reg_n24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n23_);
  // checkMissing(n24)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_n24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // n25 = ld n
  Rsh_Fir_reg_n25_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L115() else D47()
  // L115()
  goto L115_;

D44_:;
  // deopt 168 [n17, yt5, 1, n21]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_yt5_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_n21_;
  Rsh_Fir_deopt(168, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 179 [n24, n25]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_n24_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_n25_;
  Rsh_Fir_deopt(179, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L112_:;
  // n22 = force? n21
  Rsh_Fir_reg_n22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n21_);
  // checkMissing(n22)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_n22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r76 = `:`(1, n22)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_n22_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args124);
  // r77 = `*`(yt5, r76)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_yt5_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args125);
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r78 = dyn sum2(r77)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L113() else D45()
  // L113()
  goto L113_;

L115_:;
  // n26 = force? n25
  Rsh_Fir_reg_n26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n25_);
  // checkMissing(n26)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_n26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // r81 = `+`(n26, 1.0)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_n26_;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args128);
  // r82 = `*`(n24, r81)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_n24_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args129);
  // sym8 = ldf sum
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base8 = ldf sum in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard8 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

D45_:;
  // deopt 173 [n17, r78]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(173, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L17_:;
  // r91 = `*`(r86, r87)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args131);
  // sym9 = ldf sum
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base9 = ldf sum in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args132);
  // if guard9 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L113_:;
  // goto L16(n17, r78)
  // L16(n17, r78)
  Rsh_Fir_reg_n20_ = Rsh_Fir_reg_n17_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r78_;
  goto L16_;

L116_:;
  // yt6 = ld yt1
  Rsh_Fir_reg_yt6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L118() else D48()
  // L118()
  goto L118_;

L117_:;
  // r85 = dyn base8(<lang `*`(yt1, `(`(`:`(1, n)))>)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L17(r82, r85)
  // L17(r82, r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r85_;
  goto L17_;

D48_:;
  // deopt 185 [r82, yt6]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_yt6_;
  Rsh_Fir_deopt(185, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L18_:;
  // r98 = `*`(r95, r96)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args134);
  // st trm3 = r98
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_r98_, RHO);
  (void)(Rsh_Fir_reg_r98_);
  // n29 = ld n
  Rsh_Fir_reg_n29_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L125() else D53()
  // L125()
  goto L125_;

L118_:;
  // yt7 = force? yt6
  Rsh_Fir_reg_yt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt6_);
  // checkMissing(yt7)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_yt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // n27 = ld n
  Rsh_Fir_reg_n27_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L119() else D49()
  // L119()
  goto L119_;

L121_:;
  // yt8 = ld yt1
  Rsh_Fir_reg_yt8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L123() else D51()
  // L123()
  goto L123_;

L122_:;
  // r94 = dyn base9(<sym yt1>)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L18(r91, r94)
  // L18(r91, r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r94_;
  goto L18_;

D49_:;
  // deopt 187 [r82, yt7, 1, n27]
  SEXP Rsh_Fir_array_deopt_stack46[4];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_yt7_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_n27_;
  Rsh_Fir_deopt(187, 4, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 195 [r91, yt8]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_yt8_;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 201 [n29]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_n29_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L119_:;
  // n28 = force? n27
  Rsh_Fir_reg_n28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n27_);
  // checkMissing(n28)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_n28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // r88 = `:`(1, n28)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_n28_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args138);
  // r89 = `*`(yt7, r88)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_yt7_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args139);
  // sum3 = ldf sum in base
  Rsh_Fir_reg_sum3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r90 = dyn sum3(r89)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum3_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L120() else D50()
  // L120()
  goto L120_;

L123_:;
  // yt9 = force? yt8
  Rsh_Fir_reg_yt9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt8_);
  // checkMissing(yt9)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_yt9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // sum4 = ldf sum in base
  Rsh_Fir_reg_sum4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r97 = dyn sum4(yt9)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_yt9_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum4_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L124() else D52()
  // L124()
  goto L124_;

L125_:;
  // n30 = force? n29
  Rsh_Fir_reg_n30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n29_);
  // checkMissing(n30)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_n30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // n31 = ld n
  Rsh_Fir_reg_n31_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L126() else D54()
  // L126()
  goto L126_;

D50_:;
  // deopt 192 [r82, r90]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(192, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 198 [r91, r97]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(198, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 202 [n30, n31]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_n30_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_n31_;
  Rsh_Fir_deopt(202, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L17(r82, r90)
  // L17(r82, r90)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r90_;
  goto L17_;

L124_:;
  // goto L18(r91, r97)
  // L18(r91, r97)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L18_;

L126_:;
  // n32 = force? n31
  Rsh_Fir_reg_n32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n31_);
  // checkMissing(n32)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_n32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // r99 = `+`(n32, 1.0)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_n32_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args145);
  // r100 = `*`(n30, r99)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_n30_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args146);
  // n33 = ld n
  Rsh_Fir_reg_n33_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L127() else D55()
  // L127()
  goto L127_;

D55_:;
  // deopt 207 [r100, 2.0, n33]
  SEXP Rsh_Fir_array_deopt_stack52[3];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_n33_;
  Rsh_Fir_deopt(207, 3, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L127_:;
  // n34 = force? n33
  Rsh_Fir_reg_n34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n33_);
  // checkMissing(n34)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_n34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // r101 = `*`(2.0, n34)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_n34_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args148);
  // r102 = `+`(r101, 1.0)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args149);
  // r103 = `*`(r100, r102)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args150);
  // sym10 = ldf sum
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf sum in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard10 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L19_:;
  // r110 = `^`(r108, 2.0)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args152);
  // r111 = `*`(r107, r110)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args153);
  // r112 = `/`(r111, 6.0)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args154);
  // st trm4 = r112
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // trm1 = ld trm1
  Rsh_Fir_reg_trm1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L132() else D58()
  // L132()
  goto L132_;

L128_:;
  // yt10 = ld yt1
  Rsh_Fir_reg_yt10_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L130() else D56()
  // L130()
  goto L130_;

L129_:;
  // r106 = dyn base10(<sym yt1>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L19(r103, r106)
  // L19(r103, r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r106_;
  goto L19_;

D56_:;
  // deopt 214 [r103, yt10]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_yt10_;
  Rsh_Fir_deopt(214, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 224 [trm1]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_trm1_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L130_:;
  // yt11 = force? yt10
  Rsh_Fir_reg_yt11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yt10_);
  // checkMissing(yt11)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_yt11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // sum5 = ldf sum in base
  Rsh_Fir_reg_sum5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r109 = dyn sum5(yt11)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_yt11_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum5_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L131() else D57()
  // L131()
  goto L131_;

L132_:;
  // trm2 = force? trm1
  Rsh_Fir_reg_trm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trm1_);
  // checkMissing(trm2)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_trm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // trm3 = ld trm2
  Rsh_Fir_reg_trm3_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L133() else D59()
  // L133()
  goto L133_;

D57_:;
  // deopt 217 [r103, r109]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(217, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 225 [trm2, trm3]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_trm2_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_trm3_;
  Rsh_Fir_deopt(225, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L19(r103, r109)
  // L19(r103, r109)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r109_;
  goto L19_;

L133_:;
  // trm4 = force? trm3
  Rsh_Fir_reg_trm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trm3_);
  // checkMissing(trm4)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_trm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // r113 = `-`(trm2, trm4)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_trm2_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_trm4_;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args160);
  // trm5 = ld trm3
  Rsh_Fir_reg_trm5_ = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // check L134() else D60()
  // L134()
  goto L134_;

D60_:;
  // deopt 227 [r113, trm5]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_trm5_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L134_:;
  // trm6 = force? trm5
  Rsh_Fir_reg_trm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trm5_);
  // checkMissing(trm6)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_trm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // r114 = `+`(r113, trm6)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_trm6_;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args162);
  // trm7 = ld trm4
  Rsh_Fir_reg_trm7_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L135() else D61()
  // L135()
  goto L135_;

D61_:;
  // deopt 229 [r114, trm7]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_trm7_;
  Rsh_Fir_deopt(229, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L135_:;
  // trm8 = force? trm7
  Rsh_Fir_reg_trm8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trm7_);
  // checkMissing(trm8)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_trm8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // r115 = `-`(r114, trm8)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_trm8_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args164);
  // st Dx = r115
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r115_, RHO);
  (void)(Rsh_Fir_reg_r115_);
  // sym11 = ldf sqrt
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base11 = ldf sqrt in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args165);
  // if guard11 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L20_:;
  // sym12 = ldf sqrt
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base12 = ldf sqrt in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard12 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L136_:;
  // ssqru5 = ld ssqru
  Rsh_Fir_reg_ssqru5_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L138() else D62()
  // L138()
  goto L138_;

L137_:;
  // r116 = dyn base11(<sym ssqru>)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L20(r116)
  // L20(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L20_;

D62_:;
  // deopt 234 [ssqru5]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_ssqru5_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L21_:;
  // r125 = `/`(r122, r123)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_r123_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args168);
  // tstat = ld tstat
  Rsh_Fir_reg_tstat = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L142() else D64()
  // L142()
  goto L142_;

L138_:;
  // ssqru6 = force? ssqru5
  Rsh_Fir_reg_ssqru6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqru5_);
  // checkMissing(ssqru6)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_ssqru6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // r118 = sqrt(ssqru6)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_ssqru6_;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args170);
  // goto L20(r118)
  // L20(r118)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r118_;
  goto L20_;

L139_:;
  // ssqrtl = ld ssqrtl
  Rsh_Fir_reg_ssqrtl = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L141() else D63()
  // L141()
  goto L141_;

L140_:;
  // r121 = dyn base12(<sym ssqrtl>)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L21(r117, r121)
  // L21(r117, r121)
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r121_;
  goto L21_;

D63_:;
  // deopt 237 [r117, ssqrtl]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_ssqrtl;
  Rsh_Fir_deopt(237, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 240 [r125, tstat]
  SEXP Rsh_Fir_array_deopt_stack61[2];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_tstat;
  Rsh_Fir_deopt(240, 2, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L141_:;
  // ssqrtl1 = force? ssqrtl
  Rsh_Fir_reg_ssqrtl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqrtl);
  // checkMissing(ssqrtl1)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_ssqrtl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r124 = sqrt(ssqrtl1)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_ssqrtl1_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args173);
  // goto L21(r117, r124)
  // L21(r117, r124)
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r124_;
  goto L21_;

L142_:;
  // tstat1 = force? tstat
  Rsh_Fir_reg_tstat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tstat);
  // checkMissing(tstat1)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_tstat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // r126 = `*`(r125, tstat1)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_tstat1_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args175);
  // n35 = ld n
  Rsh_Fir_reg_n35_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L143() else D65()
  // L143()
  goto L143_;

D65_:;
  // deopt 242 [r126, n35]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_n35_;
  Rsh_Fir_deopt(242, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L143_:;
  // n36 = force? n35
  Rsh_Fir_reg_n36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n35_);
  // checkMissing(n36)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_n36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // r127 = `^`(n36, 3.0)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_n36_;
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args177);
  // sym13 = ldf sqrt
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base13 = ldf sqrt in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args178);
  // if guard13 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L22_:;
  // r140 = `*`(r137, r138)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_r138_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args179);
  // sym14 = ldf sqrt
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base14 = ldf sqrt in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args180);
  // if guard14 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L144_:;
  // r139 = sqrt(3.0)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args181);
  // goto L22(r126, r127, 4.0, r139)
  // L22(r126, r127, 4.0, r139)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r127_;
  Rsh_Fir_reg_r137_ = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r139_;
  goto L22_;

L145_:;
  // r134 = dyn base13(3.0)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L22(r126, r127, 4.0, r134)
  // L22(r126, r127, 4.0, r134)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r127_;
  Rsh_Fir_reg_r137_ = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r134_;
  goto L22_;

L23_:;
  // r153 = `*`(r150, r151)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_r151_;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args183);
  // sym15 = ldf sqrt
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base15 = ldf sqrt in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args184);
  // if guard15 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L146_:;
  // Dx = ld Dx
  Rsh_Fir_reg_Dx = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L148() else D66()
  // L148()
  goto L148_;

L147_:;
  // r147 = dyn base14(<sym Dx>)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L23(r135, r136, r140, r147)
  // L23(r135, r136, r140, r147)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r140_;
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r147_;
  goto L23_;

D66_:;
  // deopt 251 [r135, r136, r140, Dx]
  SEXP Rsh_Fir_array_deopt_stack63[4];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r136_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_r140_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_Dx;
  Rsh_Fir_deopt(251, 4, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L24_:;
  // r166 = `*`(r163, r164)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_r164_;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args186);
  // r167 = `/`(r162, r166)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args187);
  // ssqrtl4 = ld ssqrtl
  Rsh_Fir_reg_ssqrtl4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L152() else D68()
  // L152()
  goto L152_;

L148_:;
  // Dx1 = force? Dx
  Rsh_Fir_reg_Dx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Dx);
  // checkMissing(Dx1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_Dx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // r152 = sqrt(Dx1)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_Dx1_;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args189);
  // goto L23(r135, r136, r140, r152)
  // L23(r135, r136, r140, r152)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r140_;
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r152_;
  goto L23_;

L149_:;
  // ssqrtl2 = ld ssqrtl
  Rsh_Fir_reg_ssqrtl2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L151() else D67()
  // L151()
  goto L151_;

L150_:;
  // r160 = dyn base15(<sym ssqrtl>)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L24(r148, r149, r153, r160)
  // L24(r148, r149, r153, r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r148_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r153_;
  Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r160_;
  goto L24_;

D67_:;
  // deopt 255 [r148, r149, r153, ssqrtl2]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r149_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_r153_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_ssqrtl2_;
  Rsh_Fir_deopt(255, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 259 [r161, r167, ssqrtl4]
  SEXP Rsh_Fir_array_deopt_stack65[3];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_ssqrtl4_;
  Rsh_Fir_deopt(259, 3, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L151_:;
  // ssqrtl3 = force? ssqrtl2
  Rsh_Fir_reg_ssqrtl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqrtl2_);
  // checkMissing(ssqrtl3)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_ssqrtl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // r165 = sqrt(ssqrtl3)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_ssqrtl3_;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args192);
  // goto L24(r148, r149, r153, r165)
  // L24(r148, r149, r153, r165)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r148_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r153_;
  Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r165_;
  goto L24_;

L152_:;
  // ssqrtl5 = force? ssqrtl4
  Rsh_Fir_reg_ssqrtl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqrtl4_);
  // checkMissing(ssqrtl5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_ssqrtl5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // ssqru7 = ld ssqru
  Rsh_Fir_reg_ssqru7_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L153() else D69()
  // L153()
  goto L153_;

D69_:;
  // deopt 260 [r161, r167, ssqrtl5, ssqru7]
  SEXP Rsh_Fir_array_deopt_stack66[4];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_ssqrtl5_;
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_ssqru7_;
  Rsh_Fir_deopt(260, 4, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L153_:;
  // ssqru8 = force? ssqru7
  Rsh_Fir_reg_ssqru8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ssqru7_);
  // checkMissing(ssqru8)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_ssqru8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // r168 = `-`(ssqrtl5, ssqru8)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_ssqrtl5_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_ssqru8_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args195);
  // r169 = `*`(r167, r168)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_r168_;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args196);
  // r170 = `-`(r161, r169)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_r169_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args197);
  // st STAT = r170
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r170_, RHO);
  (void)(Rsh_Fir_reg_r170_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L154() else D70()
  // L154()
  goto L154_;

D70_:;
  // deopt 267 []
  Rsh_Fir_deopt(267, 0, NULL, CCP, RHO);
  return R_NilValue;

L154_:;
  // p7 = prom<V +>{
  //   sym16 = ldf c;
  //   base16 = ldf c in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r172):
  //   return r172;
  // L1():
  //   c8 = ldf c in base;
  //   r173 = dyn c8(4.38, 4.15, 4.04, 3.99, 3.98, 3.96);
  //   goto L0(r173);
  // L2():
  //   r171 = dyn base16(4.38, 4.15, 4.04, 3.99, 3.98, 3.96);
  //   goto L0(r171);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym17 = ldf c;
  //   base17 = ldf c in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L1() else L2();
  // L0(r176):
  //   return r176;
  // L1():
  //   c9 = ldf c in base;
  //   r177 = dyn c9(3.95, 3.8, 3.73, 3.69, 3.68, 3.66);
  //   goto L0(r177);
  // L2():
  //   r175 = dyn base17(3.95, 3.8, 3.73, 3.69, 3.68, 3.66);
  //   goto L0(r175);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym18 = ldf c;
  //   base18 = ldf c in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L1() else L2();
  // L0(r180):
  //   return r180;
  // L1():
  //   c10 = ldf c in base;
  //   r181 = dyn c10(3.6, 3.5, 3.45, 3.43, 3.42, 3.41);
  //   goto L0(r181);
  // L2():
  //   r179 = dyn base18(3.6, 3.5, 3.45, 3.43, 3.42, 3.41);
  //   goto L0(r179);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   sym19 = ldf c;
  //   base19 = ldf c in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L1() else L2();
  // L0(r184):
  //   return r184;
  // L1():
  //   c11 = ldf c in base;
  //   r185 = dyn c11(3.24, 3.18, 3.15, 3.13, 3.13, 3.12);
  //   goto L0(r185);
  // L2():
  //   r183 = dyn base19(3.24, 3.18, 3.15, 3.13, 3.13, 3.12);
  //   goto L0(r183);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym20 = ldf c;
  //   base20 = ldf c in base;
  //   guard20 = `==`.4(sym20, base20);
  //   if guard20 then L1() else L2();
  // L0(r188):
  //   return r188;
  // L1():
  //   c12 = ldf c in base;
  //   r189 = dyn c12(1.14, 1.19, 1.22, 1.23, 1.24, 1.25);
  //   goto L0(r189);
  // L2():
  //   r187 = dyn base20(1.14, 1.19, 1.22, 1.23, 1.24, 1.25);
  //   goto L0(r187);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym21 = ldf c;
  //   base21 = ldf c in base;
  //   guard21 = `==`.4(sym21, base21);
  //   if guard21 then L1() else L2();
  // L0(r192):
  //   return r192;
  // L1():
  //   c13 = ldf c in base;
  //   r193 = dyn c13(0.8, 0.87, 0.9, 0.92, 0.93, 0.94);
  //   goto L0(r193);
  // L2():
  //   r191 = dyn base21(0.8, 0.87, 0.9, 0.92, 0.93, 0.94);
  //   goto L0(r191);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   sym22 = ldf c;
  //   base22 = ldf c in base;
  //   guard22 = `==`.4(sym22, base22);
  //   if guard22 then L1() else L2();
  // L0(r196):
  //   return r196;
  // L1():
  //   c14 = ldf c in base;
  //   r197 = dyn c14(0.5, 0.58, 0.62, 0.64, 0.65, 0.66);
  //   goto L0(r197);
  // L2():
  //   r195 = dyn base22(0.5, 0.58, 0.62, 0.64, 0.65, 0.66);
  //   goto L0(r195);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   sym23 = ldf c;
  //   base23 = ldf c in base;
  //   guard23 = `==`.4(sym23, base23);
  //   if guard23 then L1() else L2();
  // L0(r200):
  //   return r200;
  // L1():
  //   c15 = ldf c in base;
  //   r201 = dyn c15(0.15, 0.24, 0.28, 0.31, 0.32, 0.33);
  //   goto L0(r201);
  // L2():
  //   r199 = dyn base23(0.15, 0.24, 0.28, 0.31, 0.32, 0.33);
  //   goto L0(r199);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_14, 0, NULL, CCP, RHO);
  // r203 = dyn cbind(p7, p8, p9, p10, p11, p12, p13, p14)
  SEXP Rsh_Fir_array_args222[8];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args222[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args222[3] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args222[4] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args222[5] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args222[6] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args222[7] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names61[8];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_array_arg_names61[3] = R_MissingArg;
  Rsh_Fir_array_arg_names61[4] = R_MissingArg;
  Rsh_Fir_array_arg_names61[5] = R_MissingArg;
  Rsh_Fir_array_arg_names61[6] = R_MissingArg;
  Rsh_Fir_array_arg_names61[7] = R_MissingArg;
  Rsh_Fir_reg_r203_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 8, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L155() else D71()
  // L155()
  goto L155_;

D71_:;
  // deopt 276 [r203]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r203_;
  Rsh_Fir_deopt(276, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L155_:;
  // st table = r203
  Rsh_Fir_store(Rsh_const(CCP, 114), Rsh_Fir_reg_r203_, RHO);
  (void)(Rsh_Fir_reg_r203_);
  // table = ld table
  Rsh_Fir_reg_table = Rsh_Fir_load(Rsh_const(CCP, 114), RHO);
  // check L156() else D72()
  // L156()
  goto L156_;

D72_:;
  // deopt 278 [table]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_table;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L156_:;
  // table1 = force? table
  Rsh_Fir_reg_table1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table);
  // checkMissing(table1)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_table1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // r204 = `-`(<missing>, table1)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_table1_;
  Rsh_Fir_reg_r204_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args224);
  // st table = r204
  Rsh_Fir_store(Rsh_const(CCP, 114), Rsh_Fir_reg_r204_, RHO);
  (void)(Rsh_Fir_reg_r204_);
  // sym24 = ldf dim
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 115), RHO);
  // base24 = ldf dim in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 115), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args225);
  // if guard24 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L25_:;
  // c16 = `is.object`(r206)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_r206_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args226);
  // if c16 then L161() else L162(r206)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L161()
    goto L161_;
  } else {
  // L162(r206)
    Rsh_Fir_reg_r209_ = Rsh_Fir_reg_r206_;
    goto L162_;
  }

L157_:;
  // table2 = ld table
  Rsh_Fir_reg_table2_ = Rsh_Fir_load(Rsh_const(CCP, 114), RHO);
  // check L159() else D73()
  // L159()
  goto L159_;

L158_:;
  // r205 = dyn base24(<sym table>)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 114);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r205_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L25(r205)
  // L25(r205)
  Rsh_Fir_reg_r206_ = Rsh_Fir_reg_r205_;
  goto L25_;

D73_:;
  // deopt 284 [table2]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_table2_;
  Rsh_Fir_deopt(284, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L26_:;
  // st tablen = dx11
  Rsh_Fir_store(Rsh_const(CCP, 116), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym25 = ldf c
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base25 = ldf c in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args228);
  // if guard25 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L159_:;
  // table3 = force? table2
  Rsh_Fir_reg_table3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table2_);
  // checkMissing(table3)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_table3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 115), RHO);
  // r207 = dyn dim(table3)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_table3_;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r207_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L160() else D74()
  // L160()
  goto L160_;

L161_:;
  // dr10 = tryDispatchBuiltin.1("[", r206)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_r206_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args231);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // if dc5 then L163() else L162(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L163()
    goto L163_;
  } else {
  // L162(dr10)
    Rsh_Fir_reg_r209_ = Rsh_Fir_reg_dr10_;
    goto L162_;
  }

L162_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r210 = dyn __5(r209, 2)
  SEXP Rsh_Fir_array_args233[2];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_r209_;
  Rsh_Fir_array_args233[1] = Rsh_const(CCP, 117);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r210_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L26(r210)
  // L26(r210)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r210_;
  goto L26_;

D74_:;
  // deopt 287 [r207]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r207_;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L27_:;
  // st tableT = r212
  Rsh_Fir_store(Rsh_const(CCP, 118), Rsh_Fir_reg_r212_, RHO);
  (void)(Rsh_Fir_reg_r212_);
  // sym26 = ldf c
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base26 = ldf c in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args234);
  // if guard26 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L160_:;
  // goto L25(r207)
  // L25(r207)
  Rsh_Fir_reg_r206_ = Rsh_Fir_reg_r207_;
  goto L25_;

L163_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // goto L26(dx10)
  // L26(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L26_;

L164_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r213 = dyn c17(25.0, 50.0, 100.0, 250.0, 500.0, 100000.0)
  SEXP Rsh_Fir_array_args236[6];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 119);
  Rsh_Fir_array_args236[1] = Rsh_const(CCP, 120);
  Rsh_Fir_array_args236[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args236[3] = Rsh_const(CCP, 121);
  Rsh_Fir_array_args236[4] = Rsh_const(CCP, 122);
  Rsh_Fir_array_args236[5] = Rsh_const(CCP, 123);
  SEXP Rsh_Fir_array_arg_names65[6];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_array_arg_names65[3] = R_MissingArg;
  Rsh_Fir_array_arg_names65[4] = R_MissingArg;
  Rsh_Fir_array_arg_names65[5] = R_MissingArg;
  Rsh_Fir_reg_r213_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 6, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L166() else D75()
  // L166()
  goto L166_;

L165_:;
  // r211 = dyn base25(25.0, 50.0, 100.0, 250.0, 500.0, 100000.0)
  SEXP Rsh_Fir_array_args237[6];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 119);
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 120);
  Rsh_Fir_array_args237[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args237[3] = Rsh_const(CCP, 121);
  Rsh_Fir_array_args237[4] = Rsh_const(CCP, 122);
  Rsh_Fir_array_args237[5] = Rsh_const(CCP, 123);
  SEXP Rsh_Fir_array_arg_names66[6];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_array_arg_names66[3] = R_MissingArg;
  Rsh_Fir_array_arg_names66[4] = R_MissingArg;
  Rsh_Fir_array_arg_names66[5] = R_MissingArg;
  Rsh_Fir_reg_r211_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 6, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L27(r211)
  // L27(r211)
  Rsh_Fir_reg_r212_ = Rsh_Fir_reg_r211_;
  goto L27_;

D75_:;
  // deopt 301 [r213]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r213_;
  Rsh_Fir_deopt(301, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L28_:;
  // st tablep = r215
  Rsh_Fir_store(Rsh_const(CCP, 124), Rsh_Fir_reg_r215_, RHO);
  (void)(Rsh_Fir_reg_r215_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 125), RHO);
  // check L170() else D77()
  // L170()
  goto L170_;

L166_:;
  // goto L27(r213)
  // L27(r213)
  Rsh_Fir_reg_r212_ = Rsh_Fir_reg_r213_;
  goto L27_;

L167_:;
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r216 = dyn c18(0.01, 0.025, 0.05, 0.1, 0.9, 0.95, 0.975, 0.99)
  SEXP Rsh_Fir_array_args238[8];
  Rsh_Fir_array_args238[0] = Rsh_const(CCP, 126);
  Rsh_Fir_array_args238[1] = Rsh_const(CCP, 127);
  Rsh_Fir_array_args238[2] = Rsh_const(CCP, 128);
  Rsh_Fir_array_args238[3] = Rsh_const(CCP, 129);
  Rsh_Fir_array_args238[4] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args238[5] = Rsh_const(CCP, 130);
  Rsh_Fir_array_args238[6] = Rsh_const(CCP, 131);
  Rsh_Fir_array_args238[7] = Rsh_const(CCP, 132);
  SEXP Rsh_Fir_array_arg_names67[8];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_array_arg_names67[3] = R_MissingArg;
  Rsh_Fir_array_arg_names67[4] = R_MissingArg;
  Rsh_Fir_array_arg_names67[5] = R_MissingArg;
  Rsh_Fir_array_arg_names67[6] = R_MissingArg;
  Rsh_Fir_array_arg_names67[7] = R_MissingArg;
  Rsh_Fir_reg_r216_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 8, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L169() else D76()
  // L169()
  goto L169_;

L168_:;
  // r214 = dyn base26(0.01, 0.025, 0.05, 0.1, 0.9, 0.95, 0.975, 0.99)
  SEXP Rsh_Fir_array_args239[8];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 126);
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 127);
  Rsh_Fir_array_args239[2] = Rsh_const(CCP, 128);
  Rsh_Fir_array_args239[3] = Rsh_const(CCP, 129);
  Rsh_Fir_array_args239[4] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args239[5] = Rsh_const(CCP, 130);
  Rsh_Fir_array_args239[6] = Rsh_const(CCP, 131);
  Rsh_Fir_array_args239[7] = Rsh_const(CCP, 132);
  SEXP Rsh_Fir_array_arg_names68[8];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_array_arg_names68[2] = R_MissingArg;
  Rsh_Fir_array_arg_names68[3] = R_MissingArg;
  Rsh_Fir_array_arg_names68[4] = R_MissingArg;
  Rsh_Fir_array_arg_names68[5] = R_MissingArg;
  Rsh_Fir_array_arg_names68[6] = R_MissingArg;
  Rsh_Fir_array_arg_names68[7] = R_MissingArg;
  Rsh_Fir_reg_r214_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 8, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L28(r214)
  // L28(r214)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r214_;
  goto L28_;

D76_:;
  // deopt 314 [r216]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r216_;
  Rsh_Fir_deopt(314, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 317 []
  Rsh_Fir_deopt(317, 0, NULL, CCP, RHO);
  return R_NilValue;

L169_:;
  // goto L28(r216)
  // L28(r216)
  Rsh_Fir_reg_r215_ = Rsh_Fir_reg_r216_;
  goto L28_;

L170_:;
  // p15 = prom<V +>{
  //   tablen = ld tablen;
  //   tablen1 = force? tablen;
  //   checkMissing(tablen1);
  //   return tablen1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_15, 0, NULL, CCP, RHO);
  // r218 = dyn numeric(p15)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r218_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L171() else D78()
  // L171()
  goto L171_;

D78_:;
  // deopt 319 [r218]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r218_;
  Rsh_Fir_deopt(319, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L171_:;
  // st tableipl = r218
  Rsh_Fir_store(Rsh_const(CCP, 133), Rsh_Fir_reg_r218_, RHO);
  (void)(Rsh_Fir_reg_r218_);
  // tablen2 = ld tablen
  Rsh_Fir_reg_tablen2_ = Rsh_Fir_load(Rsh_const(CCP, 116), RHO);
  // check L172() else D79()
  // L172()
  goto L172_;

D79_:;
  // deopt 322 [1, tablen2]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_tablen2_;
  Rsh_Fir_deopt(322, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L172_:;
  // tablen3 = force? tablen2
  Rsh_Fir_reg_tablen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tablen2_);
  // checkMissing(tablen3)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_tablen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r219 = `:`(1, tablen3)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_tablen3_;
  Rsh_Fir_reg_r219_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args243);
  // s = toForSeq(r219)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_r219_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // l2 = length(s)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args245);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 134);
  // goto L29(i)
  // L29(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L29_;

L29_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args246[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args246);
  // c19 = `<`.1(l2, i2)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args247);
  // if c19 then L173() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L173()
    goto L173_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // x5 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args248[4];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args248[2] = Rsh_const(CCP, 135);
  Rsh_Fir_array_args248[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x5_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args248);
  // st i = x5
  Rsh_Fir_store(Rsh_const(CCP, 136), Rsh_Fir_reg_x5_, RHO);
  (void)(Rsh_Fir_reg_x5_);
  // approx = ldf approx
  Rsh_Fir_reg_approx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 137), RHO);
  // check L174() else D80()
  // L174()
  goto L174_;

L173_:;
  // approx1 = ldf approx
  Rsh_Fir_reg_approx1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 137), RHO);
  // check L184() else D83()
  // L184()
  goto L184_;

D80_:;
  // deopt 326 [i2]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(326, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

D83_:;
  // deopt 343 []
  Rsh_Fir_deopt(343, 0, NULL, CCP, RHO);
  return R_NilValue;

L174_:;
  // p16 = prom<V +>{
  //   tableT = ld tableT;
  //   tableT1 = force? tableT;
  //   checkMissing(tableT1);
  //   return tableT1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_16, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   table4 = ld table;
  //   table5 = force? table4;
  //   checkMissing(table5);
  //   c20 = `is.object`(table5);
  //   if c20 then L1() else L2();
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", table5);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2();
  // L2():
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __6 = ldf `[` in base;
  //   r221 = dyn __6(table5, <missing>, i6);
  //   goto L0(r221);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   n37 = ld n;
  //   n38 = force? n37;
  //   checkMissing(n38);
  //   return n38;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_18, 0, NULL, CCP, RHO);
  // r224 = dyn approx[, , , rule](p16, p17, p18, 2.0)
  SEXP Rsh_Fir_array_args257[4];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args257[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args257[2] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args257[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names71[4];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = R_MissingArg;
  Rsh_Fir_array_arg_names71[3] = Rsh_const(CCP, 138);
  Rsh_Fir_reg_r224_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_approx, 4, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L175() else D81()
  // L175()
  goto L175_;

L184_:;
  // p19 = prom<V +>{
  //   tableipl = ld tableipl;
  //   tableipl1 = force? tableipl;
  //   checkMissing(tableipl1);
  //   return tableipl1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_19, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   tablep = ld tablep;
  //   tablep1 = force? tablep;
  //   checkMissing(tablep1);
  //   return tablep1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_20, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   STAT = ld STAT;
  //   STAT1 = force? STAT;
  //   checkMissing(STAT1);
  //   return STAT1;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_21, 0, NULL, CCP, RHO);
  // r232 = dyn approx1[, , , rule](p19, p20, p21, 2.0)
  SEXP Rsh_Fir_array_args261[4];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args261[2] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args261[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names72[4];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_array_arg_names72[2] = R_MissingArg;
  Rsh_Fir_array_arg_names72[3] = Rsh_const(CCP, 138);
  Rsh_Fir_reg_r232_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_approx1_, 4, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L185() else D84()
  // L185()
  goto L185_;

D81_:;
  // deopt 332 [i2, r224]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_r224_;
  Rsh_Fir_deopt(332, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

D84_:;
  // deopt 349 [r232]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r232_;
  Rsh_Fir_deopt(349, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L175_:;
  // c21 = `is.object`(r224)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_r224_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args262);
  // if c21 then L177() else L178(i2, r224)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L177()
    goto L177_;
  } else {
  // L178(i2, r224)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r226_ = Rsh_Fir_reg_r224_;
    goto L178_;
  }

L185_:;
  // c23 = `is.object`(r232)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_r232_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args263);
  // if c23 then L187() else L188(r232)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L187()
    goto L187_;
  } else {
  // L188(r232)
    Rsh_Fir_reg_r234_ = Rsh_Fir_reg_r232_;
    goto L188_;
  }

L176_:;
  // l3 = ld tableipl
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 133), RHO);
  // c22 = `is.object`(l3)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args264);
  // if c22 then L180() else L181(i10, dx15, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L180()
    goto L180_;
  } else {
  // L181(i10, dx15, l3)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L181_;
  }

L177_:;
  // dr14 = tryDispatchBuiltin.1("$", r224)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_r224_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args265);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if dc7 then L179() else L178(i2, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L179()
    goto L179_;
  } else {
  // L178(i2, dr14)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r226_ = Rsh_Fir_reg_dr14_;
    goto L178_;
  }

L178_:;
  // r227 = `$`(r226, <sym y>)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_r226_;
  Rsh_Fir_array_args267[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r227_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args267);
  // goto L176(i8, r227)
  // L176(i8, r227)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r227_;
  goto L176_;

L186_:;
  // st PVAL = dx23
  Rsh_Fir_store(Rsh_const(CCP, 139), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // l6 = ld l
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L190() else D85()
  // L190()
  goto L190_;

L187_:;
  // dr18 = tryDispatchBuiltin.1("$", r232)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args268[1] = Rsh_Fir_reg_r232_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args268);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // if dc9 then L189() else L188(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L189()
    goto L189_;
  } else {
  // L188(dr18)
    Rsh_Fir_reg_r234_ = Rsh_Fir_reg_dr18_;
    goto L188_;
  }

L188_:;
  // r235 = `$`(r234, <sym y>)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_r234_;
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r235_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args270);
  // goto L186(r235)
  // L186(r235)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r235_;
  goto L186_;

D85_:;
  // deopt 352 [l6]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_deopt(352, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L30_:;
  // st tableipl = dx21
  Rsh_Fir_store(Rsh_const(CCP, 133), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L29(i14)
  // L29(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L29_;

L179_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // goto L176(i2, dx14)
  // L176(i2, dx14)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L176_;

L180_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l3, dx15)
  SEXP Rsh_Fir_array_args272[3];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 140);
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args272[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args272);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if dc8 then L182() else L181(i10, dx15, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L182()
    goto L182_;
  } else {
  // L181(i10, dx15, dr16)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr16_;
    goto L181_;
  }

L181_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 136), RHO);
  // check L183() else D82()
  // L183()
  goto L183_;

L189_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // goto L186(dx22)
  // L186(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L186_;

L190_:;
  // l7 = force? l6
  Rsh_Fir_reg_l7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l6_);
  // checkMissing(l7)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_l7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // st PARAMETER = l7
  Rsh_Fir_store(Rsh_const(CCP, 141), Rsh_Fir_reg_l7_, RHO);
  (void)(Rsh_Fir_reg_l7_);
  // st METHOD = "Phillips-Perron Unit Root Test"
  Rsh_Fir_store(Rsh_const(CCP, 143), Rsh_const(CCP, 142), RHO);
  (void)(Rsh_const(CCP, 142));
  // l8 = ld STAT
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 144), RHO);
  // check L191() else D86()
  // L191()
  goto L191_;

D82_:;
  // deopt 335 [i12, dx17, l5, dx15, i15]
  SEXP Rsh_Fir_array_deopt_stack79[5];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack79[2] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack79[3] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack79[4] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(335, 5, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

D86_:;
  // deopt 361 ["Dickey-Fuller", l8, "Dickey-Fuller"]
  SEXP Rsh_Fir_array_deopt_stack80[3];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_const(CCP, 145);
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_const(CCP, 145);
  Rsh_Fir_deopt(361, 3, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L182_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // goto L30(i10, dx19)
  // L30(i10, dx19)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L30_;

L183_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 146), RHO);
  // r228 = dyn ___(l5, dx15, i16)
  SEXP Rsh_Fir_array_args277[3];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args277[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args277[2] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r228_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L30(i12, r228)
  // L30(i12, r228)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r228_;
  goto L30_;

L191_:;
  // r236 = dyn names__(l8, NULL, "Dickey-Fuller")
  SEXP Rsh_Fir_array_args278[3];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args278[1] = Rsh_const(CCP, 135);
  Rsh_Fir_array_args278[2] = Rsh_const(CCP, 145);
  SEXP Rsh_Fir_array_arg_names74[3];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_reg_r236_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args278, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L192() else D87()
  // L192()
  goto L192_;

D87_:;
  // deopt 363 ["Dickey-Fuller", r236]
  SEXP Rsh_Fir_array_deopt_stack81[2];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_const(CCP, 145);
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_r236_;
  Rsh_Fir_deopt(363, 2, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L192_:;
  // st STAT = r236
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r236_, RHO);
  (void)(Rsh_Fir_reg_r236_);
  // l9 = ld PARAMETER
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 141), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 144), RHO);
  // check L193() else D88()
  // L193()
  goto L193_;

D88_:;
  // deopt 368 ["Truncation lag parameter", l9, "Truncation lag parameter"]
  SEXP Rsh_Fir_array_deopt_stack82[3];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_const(CCP, 147);
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack82[2] = Rsh_const(CCP, 147);
  Rsh_Fir_deopt(368, 3, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L193_:;
  // r237 = dyn names__1(l9, NULL, "Truncation lag parameter")
  SEXP Rsh_Fir_array_args279[3];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args279[1] = Rsh_const(CCP, 135);
  Rsh_Fir_array_args279[2] = Rsh_const(CCP, 147);
  SEXP Rsh_Fir_array_arg_names75[3];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_array_arg_names75[2] = R_MissingArg;
  Rsh_Fir_reg_r237_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L194() else D89()
  // L194()
  goto L194_;

D89_:;
  // deopt 370 ["Truncation lag parameter", r237]
  SEXP Rsh_Fir_array_deopt_stack83[2];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_const(CCP, 147);
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_r237_;
  Rsh_Fir_deopt(370, 2, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L194_:;
  // st PARAMETER = r237
  Rsh_Fir_store(Rsh_const(CCP, 141), Rsh_Fir_reg_r237_, RHO);
  (void)(Rsh_Fir_reg_r237_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 148), RHO);
  // check L195() else D90()
  // L195()
  goto L195_;

D90_:;
  // deopt 373 []
  Rsh_Fir_deopt(373, 0, NULL, CCP, RHO);
  return R_NilValue;

L195_:;
  // p22 = prom<V +>{
  //   sym27 = ldf list;
  //   base27 = ldf list in base;
  //   guard27 = `==`.4(sym27, base27);
  //   if guard27 then L1() else L2();
  // L0(r239):
  //   return r239;
  // L1():
  //   STAT2 = ld STAT;
  //   STAT3 = force? STAT2;
  //   checkMissing(STAT3);
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
  //   r240 = dyn list(STAT3, PARAMETER1, PVAL1, METHOD1, DNAME1);
  //   goto L0(r240);
  // L2():
  //   r238 = dyn base27[statistic, parameter, `p.value`, method, `data.name`](<sym STAT>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
  //   goto L0(r238);
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_22, 0, NULL, CCP, RHO);
  // r242 = dyn structure[, class](p22, "htest")
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args288[1] = Rsh_const(CCP, 155);
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = Rsh_const(CCP, 156);
  Rsh_Fir_reg_r242_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names78, CCP, RHO);
  // check L196() else D91()
  // L196()
  goto L196_;

D91_:;
  // deopt 377 [r242]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r242_;
  Rsh_Fir_deopt(377, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L196_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r242
  return Rsh_Fir_reg_r242_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner2362538415_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym = ldf substitute
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_1;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r7 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r20 = dyn __2(<sym yt>, <lang `+`(`+`(1.0, u), yt1)>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_summary;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p4 = prom<V +>{
  //   res4 = ld res;
  //   res5 = force? res4;
  //   checkMissing(res5);
  //   return res5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2362538415_5, 0, NULL, CCP, RHO);
  // r28 = dyn summary(p4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_res4_;
  SEXP Rsh_Fir_reg_res5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // checkMissing(res5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return res5
  return Rsh_Fir_reg_res5_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_res6_;
  SEXP Rsh_Fir_reg_res7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // res6 = ld res
  Rsh_Fir_reg_res6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // res7 = force? res6
  Rsh_Fir_reg_res7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res6_);
  // checkMissing(res7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_res7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return res7
  return Rsh_Fir_reg_res7_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r173_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args198);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r172
  return Rsh_Fir_reg_r172_;

L1_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r173 = dyn c8(4.38, 4.15, 4.04, 3.99, 3.98, 3.96)
  SEXP Rsh_Fir_array_args199[6];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args199[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args199[2] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args199[3] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args199[4] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args199[5] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names45[6];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_array_arg_names45[3] = R_MissingArg;
  Rsh_Fir_array_arg_names45[4] = R_MissingArg;
  Rsh_Fir_array_arg_names45[5] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 6, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r173)
  // L0(r173)
  Rsh_Fir_reg_r172_ = Rsh_Fir_reg_r173_;
  goto L0_;

L2_:;
  // r171 = dyn base16(4.38, 4.15, 4.04, 3.99, 3.98, 3.96)
  SEXP Rsh_Fir_array_args200[6];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args200[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args200[2] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args200[3] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args200[4] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args200[5] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names46[6];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_array_arg_names46[4] = R_MissingArg;
  Rsh_Fir_array_arg_names46[5] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 6, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r171)
  // L0(r171)
  Rsh_Fir_reg_r172_ = Rsh_Fir_reg_r171_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r175_;
  SEXP Rsh_Fir_reg_r176_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r177_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args201);
  // if guard17 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r176
  return Rsh_Fir_reg_r176_;

L1_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r177 = dyn c9(3.95, 3.8, 3.73, 3.69, 3.68, 3.66)
  SEXP Rsh_Fir_array_args202[6];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args202[2] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args202[3] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args202[4] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args202[5] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names47[6];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_array_arg_names47[3] = R_MissingArg;
  Rsh_Fir_array_arg_names47[4] = R_MissingArg;
  Rsh_Fir_array_arg_names47[5] = R_MissingArg;
  Rsh_Fir_reg_r177_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 6, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r177)
  // L0(r177)
  Rsh_Fir_reg_r176_ = Rsh_Fir_reg_r177_;
  goto L0_;

L2_:;
  // r175 = dyn base17(3.95, 3.8, 3.73, 3.69, 3.68, 3.66)
  SEXP Rsh_Fir_array_args203[6];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args203[1] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args203[2] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args203[3] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args203[4] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args203[5] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names48[6];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_array_arg_names48[3] = R_MissingArg;
  Rsh_Fir_array_arg_names48[4] = R_MissingArg;
  Rsh_Fir_array_arg_names48[5] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 6, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r175)
  // L0(r175)
  Rsh_Fir_reg_r176_ = Rsh_Fir_reg_r175_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r179_;
  SEXP Rsh_Fir_reg_r180_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r181_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym18 = ldf c
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base18 = ldf c in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args204);
  // if guard18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r180
  return Rsh_Fir_reg_r180_;

L1_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r181 = dyn c10(3.6, 3.5, 3.45, 3.43, 3.42, 3.41)
  SEXP Rsh_Fir_array_args205[6];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args205[2] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args205[3] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args205[4] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args205[5] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names49[6];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_array_arg_names49[3] = R_MissingArg;
  Rsh_Fir_array_arg_names49[4] = R_MissingArg;
  Rsh_Fir_array_arg_names49[5] = R_MissingArg;
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 6, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r181)
  // L0(r181)
  Rsh_Fir_reg_r180_ = Rsh_Fir_reg_r181_;
  goto L0_;

L2_:;
  // r179 = dyn base18(3.6, 3.5, 3.45, 3.43, 3.42, 3.41)
  SEXP Rsh_Fir_array_args206[6];
  Rsh_Fir_array_args206[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args206[2] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args206[3] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args206[4] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args206[5] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names50[6];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_array_arg_names50[3] = R_MissingArg;
  Rsh_Fir_array_arg_names50[4] = R_MissingArg;
  Rsh_Fir_array_arg_names50[5] = R_MissingArg;
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 6, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r179)
  // L0(r179)
  Rsh_Fir_reg_r180_ = Rsh_Fir_reg_r179_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r183_;
  SEXP Rsh_Fir_reg_r184_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r185_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args207);
  // if guard19 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r184
  return Rsh_Fir_reg_r184_;

L1_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r185 = dyn c11(3.24, 3.18, 3.15, 3.13, 3.13, 3.12)
  SEXP Rsh_Fir_array_args208[6];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args208[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args208[2] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args208[3] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args208[4] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args208[5] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names51[6];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_array_arg_names51[3] = R_MissingArg;
  Rsh_Fir_array_arg_names51[4] = R_MissingArg;
  Rsh_Fir_array_arg_names51[5] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 6, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r185)
  // L0(r185)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r185_;
  goto L0_;

L2_:;
  // r183 = dyn base19(3.24, 3.18, 3.15, 3.13, 3.13, 3.12)
  SEXP Rsh_Fir_array_args209[6];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args209[2] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args209[3] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args209[4] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args209[5] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names52[6];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_array_arg_names52[3] = R_MissingArg;
  Rsh_Fir_array_arg_names52[4] = R_MissingArg;
  Rsh_Fir_array_arg_names52[5] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 6, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r183)
  // L0(r183)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r183_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r187_;
  SEXP Rsh_Fir_reg_r188_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r189_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args210);
  // if guard20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r188
  return Rsh_Fir_reg_r188_;

L1_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r189 = dyn c12(1.14, 1.19, 1.22, 1.23, 1.24, 1.25)
  SEXP Rsh_Fir_array_args211[6];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args211[1] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args211[2] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args211[3] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args211[4] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args211[5] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names53[6];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_array_arg_names53[3] = R_MissingArg;
  Rsh_Fir_array_arg_names53[4] = R_MissingArg;
  Rsh_Fir_array_arg_names53[5] = R_MissingArg;
  Rsh_Fir_reg_r189_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 6, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L0(r189)
  // L0(r189)
  Rsh_Fir_reg_r188_ = Rsh_Fir_reg_r189_;
  goto L0_;

L2_:;
  // r187 = dyn base20(1.14, 1.19, 1.22, 1.23, 1.24, 1.25)
  SEXP Rsh_Fir_array_args212[6];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args212[2] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args212[3] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args212[4] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args212[5] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names54[6];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_array_arg_names54[3] = R_MissingArg;
  Rsh_Fir_array_arg_names54[4] = R_MissingArg;
  Rsh_Fir_array_arg_names54[5] = R_MissingArg;
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 6, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L0(r187)
  // L0(r187)
  Rsh_Fir_reg_r188_ = Rsh_Fir_reg_r187_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r191_;
  SEXP Rsh_Fir_reg_r192_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r193_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args213);
  // if guard21 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r192
  return Rsh_Fir_reg_r192_;

L1_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r193 = dyn c13(0.8, 0.87, 0.9, 0.92, 0.93, 0.94)
  SEXP Rsh_Fir_array_args214[6];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args214[1] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args214[2] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args214[3] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args214[4] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args214[5] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names55[6];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_array_arg_names55[3] = R_MissingArg;
  Rsh_Fir_array_arg_names55[4] = R_MissingArg;
  Rsh_Fir_array_arg_names55[5] = R_MissingArg;
  Rsh_Fir_reg_r193_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 6, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r193)
  // L0(r193)
  Rsh_Fir_reg_r192_ = Rsh_Fir_reg_r193_;
  goto L0_;

L2_:;
  // r191 = dyn base21(0.8, 0.87, 0.9, 0.92, 0.93, 0.94)
  SEXP Rsh_Fir_array_args215[6];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args215[1] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args215[2] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args215[3] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args215[4] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args215[5] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names56[6];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_array_arg_names56[3] = R_MissingArg;
  Rsh_Fir_array_arg_names56[4] = R_MissingArg;
  Rsh_Fir_array_arg_names56[5] = R_MissingArg;
  Rsh_Fir_reg_r191_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 6, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r191)
  // L0(r191)
  Rsh_Fir_reg_r192_ = Rsh_Fir_reg_r191_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r195_;
  SEXP Rsh_Fir_reg_r196_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r197_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym22 = ldf c
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base22 = ldf c in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args216);
  // if guard22 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r196
  return Rsh_Fir_reg_r196_;

L1_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r197 = dyn c14(0.5, 0.58, 0.62, 0.64, 0.65, 0.66)
  SEXP Rsh_Fir_array_args217[6];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args217[1] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args217[2] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args217[3] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args217[4] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args217[5] = Rsh_const(CCP, 107);
  SEXP Rsh_Fir_array_arg_names57[6];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_array_arg_names57[3] = R_MissingArg;
  Rsh_Fir_array_arg_names57[4] = R_MissingArg;
  Rsh_Fir_array_arg_names57[5] = R_MissingArg;
  Rsh_Fir_reg_r197_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 6, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r197)
  // L0(r197)
  Rsh_Fir_reg_r196_ = Rsh_Fir_reg_r197_;
  goto L0_;

L2_:;
  // r195 = dyn base22(0.5, 0.58, 0.62, 0.64, 0.65, 0.66)
  SEXP Rsh_Fir_array_args218[6];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args218[1] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args218[2] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args218[3] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args218[4] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args218[5] = Rsh_const(CCP, 107);
  SEXP Rsh_Fir_array_arg_names58[6];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_array_arg_names58[2] = R_MissingArg;
  Rsh_Fir_array_arg_names58[3] = R_MissingArg;
  Rsh_Fir_array_arg_names58[4] = R_MissingArg;
  Rsh_Fir_array_arg_names58[5] = R_MissingArg;
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 6, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L0(r195)
  // L0(r195)
  Rsh_Fir_reg_r196_ = Rsh_Fir_reg_r195_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r199_;
  SEXP Rsh_Fir_reg_r200_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r201_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym23 = ldf c
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base23 = ldf c in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args219);
  // if guard23 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r200
  return Rsh_Fir_reg_r200_;

L1_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r201 = dyn c15(0.15, 0.24, 0.28, 0.31, 0.32, 0.33)
  SEXP Rsh_Fir_array_args220[6];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args220[1] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args220[2] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args220[3] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args220[4] = Rsh_const(CCP, 112);
  Rsh_Fir_array_args220[5] = Rsh_const(CCP, 113);
  SEXP Rsh_Fir_array_arg_names59[6];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_array_arg_names59[3] = R_MissingArg;
  Rsh_Fir_array_arg_names59[4] = R_MissingArg;
  Rsh_Fir_array_arg_names59[5] = R_MissingArg;
  Rsh_Fir_reg_r201_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 6, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r201)
  // L0(r201)
  Rsh_Fir_reg_r200_ = Rsh_Fir_reg_r201_;
  goto L0_;

L2_:;
  // r199 = dyn base23(0.15, 0.24, 0.28, 0.31, 0.32, 0.33)
  SEXP Rsh_Fir_array_args221[6];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args221[1] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args221[2] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args221[3] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args221[4] = Rsh_const(CCP, 112);
  Rsh_Fir_array_args221[5] = Rsh_const(CCP, 113);
  SEXP Rsh_Fir_array_arg_names60[6];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_array_arg_names60[3] = R_MissingArg;
  Rsh_Fir_array_arg_names60[4] = R_MissingArg;
  Rsh_Fir_array_arg_names60[5] = R_MissingArg;
  Rsh_Fir_reg_r199_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 6, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L0(r199)
  // L0(r199)
  Rsh_Fir_reg_r200_ = Rsh_Fir_reg_r199_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tablen;
  SEXP Rsh_Fir_reg_tablen1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // tablen = ld tablen
  Rsh_Fir_reg_tablen = Rsh_Fir_load(Rsh_const(CCP, 116), RHO);
  // tablen1 = force? tablen
  Rsh_Fir_reg_tablen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tablen);
  // checkMissing(tablen1)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_tablen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // return tablen1
  return Rsh_Fir_reg_tablen1_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tableT;
  SEXP Rsh_Fir_reg_tableT1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // tableT = ld tableT
  Rsh_Fir_reg_tableT = Rsh_Fir_load(Rsh_const(CCP, 118), RHO);
  // tableT1 = force? tableT
  Rsh_Fir_reg_tableT1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tableT);
  // checkMissing(tableT1)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_tableT1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty()));
  // return tableT1
  return Rsh_Fir_reg_tableT1_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_table4_;
  SEXP Rsh_Fir_reg_table5_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r221_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // table4 = ld table
  Rsh_Fir_reg_table4_ = Rsh_Fir_load(Rsh_const(CCP, 114), RHO);
  // table5 = force? table4
  Rsh_Fir_reg_table5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table4_);
  // checkMissing(table5)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_table5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(table5)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_table5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args251);
  // if c20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", table5)
  SEXP Rsh_Fir_array_args252[2];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args252[1] = Rsh_Fir_reg_table5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args252);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 136), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r221 = dyn __6(table5, <missing>, i6)
  SEXP Rsh_Fir_array_args254[3];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_table5_;
  Rsh_Fir_array_args254[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args254[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names70[3];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_array_arg_names70[2] = R_MissingArg;
  Rsh_Fir_reg_r221_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L0(r221)
  // L0(r221)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r221_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n37_;
  SEXP Rsh_Fir_reg_n38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // n37 = ld n
  Rsh_Fir_reg_n37_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // n38 = force? n37
  Rsh_Fir_reg_n38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n37_);
  // checkMissing(n38)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_n38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // return n38
  return Rsh_Fir_reg_n38_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tableipl;
  SEXP Rsh_Fir_reg_tableipl1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // tableipl = ld tableipl
  Rsh_Fir_reg_tableipl = Rsh_Fir_load(Rsh_const(CCP, 133), RHO);
  // tableipl1 = force? tableipl
  Rsh_Fir_reg_tableipl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tableipl);
  // checkMissing(tableipl1)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_tableipl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // return tableipl1
  return Rsh_Fir_reg_tableipl1_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tablep;
  SEXP Rsh_Fir_reg_tablep1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // tablep = ld tablep
  Rsh_Fir_reg_tablep = Rsh_Fir_load(Rsh_const(CCP, 124), RHO);
  // tablep1 = force? tablep
  Rsh_Fir_reg_tablep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tablep);
  // checkMissing(tablep1)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_tablep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // return tablep1
  return Rsh_Fir_reg_tablep1_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_STAT;
  SEXP Rsh_Fir_reg_STAT1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // STAT = ld STAT
  Rsh_Fir_reg_STAT = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // STAT1 = force? STAT
  Rsh_Fir_reg_STAT1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STAT);
  // checkMissing(STAT1)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_STAT1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // return STAT1
  return Rsh_Fir_reg_STAT1_;
}
SEXP Rsh_Fir_user_promise_inner2362538415_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym27_;
  SEXP Rsh_Fir_reg_base27_;
  SEXP Rsh_Fir_reg_guard27_;
  SEXP Rsh_Fir_reg_r238_;
  SEXP Rsh_Fir_reg_r239_;
  SEXP Rsh_Fir_reg_STAT2_;
  SEXP Rsh_Fir_reg_STAT3_;
  SEXP Rsh_Fir_reg_PARAMETER;
  SEXP Rsh_Fir_reg_PARAMETER1_;
  SEXP Rsh_Fir_reg_PVAL;
  SEXP Rsh_Fir_reg_PVAL1_;
  SEXP Rsh_Fir_reg_METHOD;
  SEXP Rsh_Fir_reg_METHOD1_;
  SEXP Rsh_Fir_reg_DNAME;
  SEXP Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r240_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2362538415/0: expected 0, got %d", NCAPTURES);

  // sym27 = ldf list
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 149), RHO);
  // base27 = ldf list in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 149), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args280);
  // if guard27 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r239
  return Rsh_Fir_reg_r239_;

L1_:;
  // STAT2 = ld STAT
  Rsh_Fir_reg_STAT2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // STAT3 = force? STAT2
  Rsh_Fir_reg_STAT3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STAT2_);
  // checkMissing(STAT3)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_STAT3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty()));
  // PARAMETER = ld PARAMETER
  Rsh_Fir_reg_PARAMETER = Rsh_Fir_load(Rsh_const(CCP, 141), RHO);
  // PARAMETER1 = force? PARAMETER
  Rsh_Fir_reg_PARAMETER1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PARAMETER);
  // checkMissing(PARAMETER1)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_PARAMETER1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // PVAL = ld PVAL
  Rsh_Fir_reg_PVAL = Rsh_Fir_load(Rsh_const(CCP, 139), RHO);
  // PVAL1 = force? PVAL
  Rsh_Fir_reg_PVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PVAL);
  // checkMissing(PVAL1)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_PVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty()));
  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD = Rsh_Fir_load(Rsh_const(CCP, 143), RHO);
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_METHOD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 149), RHO);
  // r240 = dyn list(STAT3, PARAMETER1, PVAL1, METHOD1, DNAME1)
  SEXP Rsh_Fir_array_args286[5];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_STAT3_;
  Rsh_Fir_array_args286[1] = Rsh_Fir_reg_PARAMETER1_;
  Rsh_Fir_array_args286[2] = Rsh_Fir_reg_PVAL1_;
  Rsh_Fir_array_args286[3] = Rsh_Fir_reg_METHOD1_;
  Rsh_Fir_array_args286[4] = Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_array_arg_names76[5];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_array_arg_names76[3] = R_MissingArg;
  Rsh_Fir_array_arg_names76[4] = R_MissingArg;
  Rsh_Fir_reg_r240_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 5, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L0(r240)
  // L0(r240)
  Rsh_Fir_reg_r239_ = Rsh_Fir_reg_r240_;
  goto L0_;

L2_:;
  // r238 = dyn base27[statistic, parameter, `p.value`, method, `data.name`](<sym STAT>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>)
  SEXP Rsh_Fir_array_args287[5];
  Rsh_Fir_array_args287[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args287[1] = Rsh_const(CCP, 141);
  Rsh_Fir_array_args287[2] = Rsh_const(CCP, 139);
  Rsh_Fir_array_args287[3] = Rsh_const(CCP, 143);
  Rsh_Fir_array_args287[4] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names77[5];
  Rsh_Fir_array_arg_names77[0] = Rsh_const(CCP, 150);
  Rsh_Fir_array_arg_names77[1] = Rsh_const(CCP, 151);
  Rsh_Fir_array_arg_names77[2] = Rsh_const(CCP, 152);
  Rsh_Fir_array_arg_names77[3] = Rsh_const(CCP, 153);
  Rsh_Fir_array_arg_names77[4] = Rsh_const(CCP, 154);
  Rsh_Fir_reg_r238_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 5, Rsh_Fir_array_args287, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L0(r238)
  // L0(r238)
  Rsh_Fir_reg_r239_ = Rsh_Fir_reg_r238_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
