#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner324950740_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner324950740_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner324950740_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner324950740_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner613390797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner613390797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner613390797_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_pairwise_prop_test;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner324950740
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner324950740_, RHO, CCP);
  // st `pairwise.prop.test` = r
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
  // st smokers = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(83.0, 90.0, 129.0, 70.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(83.0, 90.0, 129.0, 70.0)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
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

L1_:;
  // st patients = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // pairwise_prop_test = ldf `pairwise.prop.test`
  Rsh_Fir_reg_pairwise_prop_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L4_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c1(86.0, 93.0, 136.0, 82.0)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base1(86.0, 93.0, 136.0, 82.0)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 19 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L8_:;
  // p = prom<V +>{
  //   smokers = ld smokers;
  //   smokers1 = force? smokers;
  //   checkMissing(smokers1);
  //   return smokers1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   patients = ld patients;
  //   patients1 = force? patients;
  //   checkMissing(patients1);
  //   return patients1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn pairwise_prop_test(p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairwise_prop_test, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 25 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_smokers;
  SEXP Rsh_Fir_reg_smokers1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // smokers = ld smokers
  Rsh_Fir_reg_smokers = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // smokers1 = force? smokers
  Rsh_Fir_reg_smokers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_smokers);
  // checkMissing(smokers1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_smokers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return smokers1
  return Rsh_Fir_reg_smokers1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_patients;
  SEXP Rsh_Fir_reg_patients1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // patients = ld patients
  Rsh_Fir_reg_patients = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // patients1 = force? patients
  Rsh_Fir_reg_patients1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_patients);
  // checkMissing(patients1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_patients1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return patients1
  return Rsh_Fir_reg_patients1_;
}
SEXP Rsh_Fir_user_function_inner324950740_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner324950740 dynamic dispatch ([x, n, `p.adjust.method`, `...`])

  return Rsh_Fir_user_version_inner324950740_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner324950740_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner324950740 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner324950740/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_p_adjust_method;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_p_adjust_method_isMissing;
  SEXP Rsh_Fir_reg_p_adjust_method_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_rowSums;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_complete_cases;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_OK;
  SEXP Rsh_Fir_reg_OK1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_OK2_;
  SEXP Rsh_Fir_reg_OK3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_pairwise_table;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_METHOD;
  SEXP Rsh_Fir_reg_METHOD1_;
  SEXP Rsh_Fir_reg_DNAME2_;
  SEXP Rsh_Fir_reg_DNAME3_;
  SEXP Rsh_Fir_reg_PVAL;
  SEXP Rsh_Fir_reg_PVAL1_;
  SEXP Rsh_Fir_reg_p_adjust_method5_;
  SEXP Rsh_Fir_reg_p_adjust_method6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_p_adjust_method = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // p_adjust_method_isMissing = missing.0(p_adjust_method)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p_adjust_method;
  Rsh_Fir_reg_p_adjust_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if p_adjust_method_isMissing then L0() else L1(p_adjust_method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_p_adjust_method_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(p_adjust_method)
    Rsh_Fir_reg_p_adjust_method_orDefault = Rsh_Fir_reg_p_adjust_method;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   p_adjust_methods = ld `p.adjust.methods`;
  //   p_adjust_methods1 = force? p_adjust_methods;
  //   checkMissing(p_adjust_methods1);
  //   return p_adjust_methods1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_p_adjust_method_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st `p.adjust.method` = p_adjust_method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_p_adjust_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_p_adjust_method_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   p_adjust_method1 = ld `p.adjust.method`;
  //   p_adjust_method2 = force? p_adjust_method1;
  //   checkMissing(p_adjust_method2);
  //   return p_adjust_method2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_1, 0, NULL, CCP, RHO);
  // r2 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // st `p.adjust.method` = r2
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // st METHOD = "Pairwise comparison of proportions"
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 18), RHO);
  (void)(Rsh_const(CCP, 18));
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p2 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   substitute = ldf substitute in base;
  //   r5 = dyn substitute(<sym x>);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(<sym x>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_2, 0, NULL, CCP, RHO);
  // r7 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // st DNAME = r7
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym1 = ldf `is.matrix`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf `is.matrix` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L2_:;
  // c = `as.logical`(r9)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c then L25() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L25()
    goto L25_;
  } else {
  // L3()
    goto L3_;
  }

L21_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L2_;

D4_:;
  // deopt 15 [x1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L3_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

L7_:;
  // complete_cases = ldf `complete.cases`
  Rsh_Fir_reg_complete_cases = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L53() else D21()
  // L53()
  goto L53_;

L23_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r10 = dyn is_matrix(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L25_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D5_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L2_;

L26_:;
  // p3 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_3, 0, NULL, CCP, RHO);
  // r12 = dyn ncol(p3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L39_:;
  // p5 = prom<V +>{
  //   DNAME = ld DNAME;
  //   DNAME1 = force? DNAME;
  //   checkMissing(DNAME1);
  //   return DNAME1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_4, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   deparse2 = ldf deparse1;
  //   p6 = prom<V +>{
  //     sym2 = ldf substitute;
  //     base2 = ldf substitute in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r21):
  //     return r21;
  //   L1():
  //     substitute1 = ldf substitute in base;
  //     r22 = dyn substitute1(<sym n>);
  //     goto L0(r22);
  //   L2():
  //     r20 = dyn base2(<sym n>);
  //     goto L0(r20);
  //   };
  //   r24 = dyn deparse2(p6);
  //   return r24;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_5, 0, NULL, CCP, RHO);
  // r26 = dyn paste(p5, "out of", p7)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

L53_:;
  // p8 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_7, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_8, 0, NULL, CCP, RHO);
  // r40 = dyn complete_cases(p8, p9)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complete_cases, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L54() else D22()
  // L54()
  goto L54_;

D7_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 48 [r26]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 72 [r40]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // r13 = `!=`(r12, 2.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args33);
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c1 then L28() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L28()
    goto L28_;
  } else {
  // L4()
    goto L4_;
  }

L40_:;
  // st DNAME = r26
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L54_:;
  // st OK = r40
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L55() else D23()
  // L55()
  goto L55_;

D23_:;
  // deopt 74 [x15]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // rowSums = ldf rowSums
  Rsh_Fir_reg_rowSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L32() else D10()
  // L32()
  goto L32_;

L8_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L28_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

L41_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

L42_:;
  // r27 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r27)
  // L8(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L8_;

L55_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x16)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args39);
  // if c4 then L56() else L57(x16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L56()
    goto L56_;
  } else {
  // L57(x16)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    goto L57_;
  }

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 52 [x11]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // r36 = `!=`(r33, r34)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args40);
  // c3 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c3 then L49() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L49()
    goto L49_;
  } else {
  // L10()
    goto L10_;
  }

L11_:;
  // st x = dx4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L60() else D25()
  // L60()
  goto L60_;

L29_:;
  // r14 = dyn stop("'x' must have 2 columns")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L32_:;
  // p4 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_9, 0, NULL, CCP, RHO);
  // r17 = dyn rowSums(p4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowSums, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L43_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r29 = dyn length(x12)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L44() else D16()
  // L44()
  goto L44_;

L45_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L47() else D17()
  // L47()
  goto L47_;

L46_:;
  // r32 = dyn base4(<sym n>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L9(r28, r32)
  // L9(r28, r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L9_;

L56_:;
  // dr2 = tryDispatchBuiltin.1("[", x16)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr2)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // OK = ld OK
  Rsh_Fir_reg_OK = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

D9_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 34 [r17]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 55 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 57 [r28, n1]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 76 [x18, OK]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_OK;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 80 [n5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L7()
  // L7()
  goto L7_;

L30_:;
  // goto L5()
  // L5()
  goto L5_;

L33_:;
  // st n = r17
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

L44_:;
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L8_;

L47_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r35 = dyn length1(n2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

L49_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

L58_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L11(dx3)
  // L11(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L11_;

L59_:;
  // OK1 = force? OK
  Rsh_Fir_reg_OK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r41 = dyn __1(x18, OK1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_OK1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(r41)
  // L11(r41)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r41_;
  goto L11_;

L60_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(n6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args55);
  // if c5 then L61() else L62(n6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L61()
    goto L61_;
  } else {
  // L62(n6)
    Rsh_Fir_reg_n8_ = Rsh_Fir_reg_n6_;
    goto L62_;
  }

D12_:;
  // deopt 36 [x7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 60 [r28, r35]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // st n = dx6
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard5 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L34_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args58);
  // if c2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L48_:;
  // goto L9(r28, r35)
  // L9(r28, r35)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L9_;

L50_:;
  // r37 = dyn stop1("'x' and 'n' must have the same length")
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L51() else D20()
  // L51()
  goto L51_;

L61_:;
  // dr4 = tryDispatchBuiltin.1("[", n6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc2 then L63() else L62(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr4)
    Rsh_Fir_reg_n8_ = Rsh_Fir_reg_dr4_;
    goto L62_;
  }

L62_:;
  // OK2 = ld OK
  Rsh_Fir_reg_OK2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L64() else D26()
  // L64()
  goto L64_;

D20_:;
  // deopt 65 [r37]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 82 [n8, OK2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_OK2_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L6_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L7()
  // L7()
  goto L7_;

L13_:;
  // r46 = `<`(r44, 2)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args62);
  // c6 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c6 then L69() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L69()
    goto L69_;
  } else {
  // L14()
    goto L14_;
  }

L35_:;
  // dr = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r18 = dyn __(x8, <missing>, 1.0)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L6_;

L51_:;
  // goto L7()
  // L7()
  goto L7_;

L63_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L12(dx5)
  // L12(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L12_;

L64_:;
  // OK3 = force? OK2
  Rsh_Fir_reg_OK3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r42 = dyn __2(n8, OK3)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_OK3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(r42)
  // L12(r42)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r42_;
  goto L12_;

L65_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L67() else D27()
  // L67()
  goto L67_;

L66_:;
  // r43 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(r43)
  // L13(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L13_;

D27_:;
  // deopt 88 [x19]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // r49 = clos inner613390797
  Rsh_Fir_reg_r49_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner613390797_, RHO, CCP);
  // st `compare.levels` = r49
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L73() else D31()
  // L73()
  goto L73_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L67_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r45 = dyn length2(x20)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L68() else D28()
  // L68()
  goto L68_;

L69_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L70() else D29()
  // L70()
  goto L70_;

D28_:;
  // deopt 91 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L13(r45)
  // L13(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L13_;

L70_:;
  // r47 = dyn stop2("too few groups")
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L71() else D30()
  // L71()
  goto L71_;

L73_:;
  // p10 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r51):
  //   return r51;
  // L1():
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   names = ldf names in base;
  //   r52 = dyn names(x22);
  //   goto L0(r52);
  // L2():
  //   r50 = dyn base6(<sym x>);
  //   goto L0(r50);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym7 = ldf seq_along;
  //   base7 = ldf seq_along in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r55):
  //   return r55;
  // L1():
  //   x23 = ld x;
  //   x24 = force? x23;
  //   checkMissing(x24);
  //   r56 = seq_along(x24);
  //   goto L0(r56);
  // L2():
  //   r54 = dyn base7(<sym x>);
  //   goto L0(r54);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_11, 0, NULL, CCP, RHO);
  // r58 = dyn ____(p10, p11)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L74() else D32()
  // L74()
  goto L74_;

D30_:;
  // deopt 97 [r47]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 107 [r58]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L15()
  // L15()
  goto L15_;

L74_:;
  // st `level.names` = r58
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // pairwise_table = ldf `pairwise.table`
  Rsh_Fir_reg_pairwise_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L75() else D33()
  // L75()
  goto L75_;

D33_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p12 = prom<V +>{
  //   compare_levels = ld `compare.levels`;
  //   compare_levels1 = force? compare_levels;
  //   checkMissing(compare_levels1);
  //   return compare_levels1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   level_names = ld `level.names`;
  //   level_names1 = force? level_names;
  //   checkMissing(level_names1);
  //   return level_names1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   p_adjust_method3 = ld `p.adjust.method`;
  //   p_adjust_method4 = force? p_adjust_method3;
  //   checkMissing(p_adjust_method4);
  //   return p_adjust_method4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_14, 0, NULL, CCP, RHO);
  // r62 = dyn pairwise_table(p12, p13, p14)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairwise_table, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L76() else D34()
  // L76()
  goto L76_;

D34_:;
  // deopt 114 [r62]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L76_:;
  // st PVAL = r62
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard8 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L16_:;
  // st ans = r64
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // l = ld ans
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L84() else D40()
  // L84()
  goto L84_;

L77_:;
  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L79() else D35()
  // L79()
  goto L79_;

L78_:;
  // r63 = dyn base8[method, `data.name`, `p.value`, `p.adjust.method`](<sym METHOD>, <sym DNAME>, <sym PVAL>, <sym p.adjust.method>)
  SEXP Rsh_Fir_array_args88[4];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args88[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names35[4];
  Rsh_Fir_array_arg_names35[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names35[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 4, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L16(r63)
  // L16(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L16_;

D35_:;
  // deopt 118 [METHOD]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_METHOD;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 136 ["pairwise.htest", l, "pairwise.htest"]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_const(CCP, 54);
  Rsh_Fir_deopt(136, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L79_:;
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_METHOD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // DNAME2 = ld DNAME
  Rsh_Fir_reg_DNAME2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L80() else D36()
  // L80()
  goto L80_;

L84_:;
  // r66 = dyn class__(l, NULL, "pairwise.htest")
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L85() else D41()
  // L85()
  goto L85_;

D36_:;
  // deopt 121 [DNAME2]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_DNAME2_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 138 ["pairwise.htest", r66]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(138, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L80_:;
  // DNAME3 = force? DNAME2
  Rsh_Fir_reg_DNAME3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME2_);
  // checkMissing(DNAME3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_DNAME3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // PVAL = ld PVAL
  Rsh_Fir_reg_PVAL = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L81() else D37()
  // L81()
  goto L81_;

L85_:;
  // st ans = r66
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L86() else D42()
  // L86()
  goto L86_;

D37_:;
  // deopt 124 [PVAL]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_PVAL;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 140 [ans]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L81_:;
  // PVAL1 = force? PVAL
  Rsh_Fir_reg_PVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PVAL);
  // checkMissing(PVAL1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_PVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // p_adjust_method5 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method5_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L82() else D38()
  // L82()
  goto L82_;

L86_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;

D38_:;
  // deopt 127 [p_adjust_method5]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_p_adjust_method5_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L82_:;
  // p_adjust_method6 = force? p_adjust_method5
  Rsh_Fir_reg_p_adjust_method6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method5_);
  // checkMissing(p_adjust_method6)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p_adjust_method6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r65 = dyn list(METHOD1, DNAME3, PVAL1, p_adjust_method6)
  SEXP Rsh_Fir_array_args95[4];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_METHOD1_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_DNAME3_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_PVAL1_;
  Rsh_Fir_array_args95[3] = Rsh_Fir_reg_p_adjust_method6_;
  SEXP Rsh_Fir_array_arg_names37[4];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L83() else D39()
  // L83()
  goto L83_;

D39_:;
  // deopt 131 [r65]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L16(r65)
  // L16(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L16_;
}
SEXP Rsh_Fir_user_promise_inner324950740_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_methods;
  SEXP Rsh_Fir_reg_p_adjust_methods1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // p_adjust_methods = ld `p.adjust.methods`
  Rsh_Fir_reg_p_adjust_methods = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // p_adjust_methods1 = force? p_adjust_methods
  Rsh_Fir_reg_p_adjust_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_methods);
  // checkMissing(p_adjust_methods1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p_adjust_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return p_adjust_methods1
  return Rsh_Fir_reg_p_adjust_methods1_;
}
SEXP Rsh_Fir_user_promise_inner324950740_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_method1_;
  SEXP Rsh_Fir_reg_p_adjust_method2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // p_adjust_method1 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // p_adjust_method2 = force? p_adjust_method1
  Rsh_Fir_reg_p_adjust_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method1_);
  // checkMissing(p_adjust_method2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p_adjust_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return p_adjust_method2
  return Rsh_Fir_reg_p_adjust_method2_;
}
SEXP Rsh_Fir_user_promise_inner324950740_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // sym = ldf substitute
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_1;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L2_:;
  // r3 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner324950740_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner324950740_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_DNAME;
  SEXP Rsh_Fir_reg_DNAME1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return DNAME1
  return Rsh_Fir_reg_DNAME1_;
}
SEXP Rsh_Fir_user_promise_inner324950740_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // deparse2 = ldf deparse1
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p6 = prom<V +>{
  //   sym2 = ldf substitute;
  //   base2 = ldf substitute in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r22 = dyn substitute1(<sym n>);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base2(<sym n>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner324950740_6, 0, NULL, CCP, RHO);
  // r24 = dyn deparse2(p6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner324950740_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_substitute1_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r22 = dyn substitute1(<sym n>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner324950740_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner324950740_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner324950740_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner324950740_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r51
  return Rsh_Fir_reg_r51_;

L1_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r52 = dyn names(x22)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L0_;

L2_:;
  // r50 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner324950740_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf seq_along
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base7 = ldf seq_along in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r55
  return Rsh_Fir_reg_r55_;

L1_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r56 = seq_along(x24)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args80);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L0_;

L2_:;
  // r54 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner324950740_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_compare_levels;
  SEXP Rsh_Fir_reg_compare_levels1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // compare_levels = ld `compare.levels`
  Rsh_Fir_reg_compare_levels = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // compare_levels1 = force? compare_levels
  Rsh_Fir_reg_compare_levels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_compare_levels);
  // checkMissing(compare_levels1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_compare_levels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return compare_levels1
  return Rsh_Fir_reg_compare_levels1_;
}
SEXP Rsh_Fir_user_promise_inner324950740_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_level_names;
  SEXP Rsh_Fir_reg_level_names1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // level_names = ld `level.names`
  Rsh_Fir_reg_level_names = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // level_names1 = force? level_names
  Rsh_Fir_reg_level_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level_names);
  // checkMissing(level_names1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_level_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return level_names1
  return Rsh_Fir_reg_level_names1_;
}
SEXP Rsh_Fir_user_promise_inner324950740_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_method3_;
  SEXP Rsh_Fir_reg_p_adjust_method4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner324950740/0: expected 0, got %d", NCAPTURES);

  // p_adjust_method3 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // p_adjust_method4 = force? p_adjust_method3
  Rsh_Fir_reg_p_adjust_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method3_);
  // checkMissing(p_adjust_method4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p_adjust_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return p_adjust_method4
  return Rsh_Fir_reg_p_adjust_method4_;
}
SEXP Rsh_Fir_user_function_inner613390797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner613390797 dynamic dispatch ([i, j])

  return Rsh_Fir_user_version_inner613390797_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner613390797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner613390797 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner613390797/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_prop_test;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx4_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg_r13_1;

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];
  Rsh_Fir_reg_j = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // prop_test = ldf `prop.test`
  Rsh_Fir_reg_prop_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   c = `is.object`(x1);
  //   if c then L2() else L3(x1);
  // L0(dx1):
  //   return dx1;
  // L2():
  //   dr = tryDispatchBuiltin.1("[", x1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(x3):
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L5() else L6();
  // L1(x6, r1):
  //   __ = ldf `[` in base;
  //   r3 = dyn __(x6, r1);
  //   goto L0(r3);
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   i1 = ld i;
  //   i2 = force? i1;
  //   checkMissing(i2);
  //   j1 = ld j;
  //   j2 = force? j1;
  //   checkMissing(j2);
  //   c1 = ldf c in base;
  //   r2 = dyn c1(i2, j2);
  //   goto L1(x3, r2);
  // L6():
  //   r = dyn base(<sym i>, <sym j>);
  //   goto L1(x3, r);
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   c2 = `is.object`(n1);
  //   if c2 then L2() else L3(n1);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", n1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(n3):
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L1(n6, r6):
  //   __1 = ldf `[` in base;
  //   r8 = dyn __1(n6, r6);
  //   goto L0(r8);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   i3 = ld i;
  //   i4 = force? i3;
  //   checkMissing(i4);
  //   j3 = ld j;
  //   j4 = force? j3;
  //   checkMissing(j4);
  //   c3 = ldf c in base;
  //   r7 = dyn c3(i4, j4);
  //   goto L1(n3, r7);
  // L6():
  //   r5 = dyn base1(<sym i>, <sym j>);
  //   goto L1(n3, r5);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_1, 0, NULL, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // r10 = dyn prop_test[, , `...`](p, p1, ddd)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prop_test, 3, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r10]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L1_:;
  // c4 = `is.object`(r10)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c4 then L3() else L4(r10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L3()
    goto L3_;
  } else {
  // L4(r10)
    Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r10_1;
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx5
  return Rsh_Fir_reg_dx5_1;

L3_:;
  // dr4 = tryDispatchBuiltin.1("$", r10)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc2 then L5() else L4(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr4)
    Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_dr4_1;
    goto L4_;
  }

L4_:;
  // r13 = `$`(r12, <sym p.value>)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args122);
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r13_1;
  goto L2_;

L5_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L2(dx4)
  // L2(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner613390797_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_c1_2;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r3_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args97);
  // if c then L2() else L3(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L2()
    goto L2_;
  } else {
  // L3(x1)
    Rsh_Fir_reg_x3_1 = Rsh_Fir_reg_x1_1;
    goto L3_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L2_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_x3_1 = Rsh_Fir_reg_dr1;
    goto L3_;
  }

L3_:;
  // sym = ldf c
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r3 = dyn __(x6, r1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r3_2;
  goto L0_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L5_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn c1(i2, j2)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_2, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L1(x3, r2)
  // L1(x3, r2)
  Rsh_Fir_reg_x6_1 = Rsh_Fir_reg_x3_1;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_2;
  goto L1_;

L6_:;
  // r = dyn base(<sym i>, <sym j>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L1(x3, r)
  // L1(x3, r)
  Rsh_Fir_reg_x6_1 = Rsh_Fir_reg_x3_1;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner613390797_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_n1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_n3_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_n6_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r8_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // n = ld n
  Rsh_Fir_reg_n1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_n1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(n1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args108);
  // if c2 then L2() else L3(n1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L2()
    goto L2_;
  } else {
  // L3(n1)
    Rsh_Fir_reg_n3_1 = Rsh_Fir_reg_n1_1;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_1;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", n1)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args109);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_n3_1 = Rsh_Fir_reg_dr2_1;
    goto L3_;
  }

L3_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r8 = dyn __1(n6, r6)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_n6_1;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r8_1;
  goto L0_;

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r7 = dyn c3(i4, j4)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_1, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L1(n3, r7)
  // L1(n3, r7)
  Rsh_Fir_reg_n6_1 = Rsh_Fir_reg_n3_1;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_1;
  goto L1_;

L6_:;
  // r5 = dyn base1(<sym i>, <sym j>)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L1(n3, r5)
  // L1(n3, r5)
  Rsh_Fir_reg_n6_1 = Rsh_Fir_reg_n3_1;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_2;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
