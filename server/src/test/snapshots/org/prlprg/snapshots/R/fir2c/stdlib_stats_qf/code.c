#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3067045236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3067045236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3067045236
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3067045236_, RHO, CCP);
  // st qf = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3067045236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3067045236 dynamic dispatch ([p, df1, df2, ncp, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner3067045236_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3067045236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3067045236 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3067045236/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_df2_;  // df2
  SEXP Rsh_Fir_reg_ncp;  // ncp
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_qf;  // C_qf
  SEXP Rsh_Fir_reg_C_qf1_;  // C_qf1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_df3_;  // df3
  SEXP Rsh_Fir_reg_df4_;  // df4
  SEXP Rsh_Fir_reg_df5_;  // df5
  SEXP Rsh_Fir_reg_df6_;  // df6
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_C_qnf;  // C_qnf
  SEXP Rsh_Fir_reg_C_qnf1_;  // C_qnf1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_df7_;  // df7
  SEXP Rsh_Fir_reg_df8_;  // df8
  SEXP Rsh_Fir_reg_df9_;  // df9
  SEXP Rsh_Fir_reg_df10_;  // df10
  SEXP Rsh_Fir_reg_ncp1_;  // ncp1
  SEXP Rsh_Fir_reg_ncp2_;  // ncp2
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_log_p3_;  // log_p3
  SEXP Rsh_Fir_reg_log_p4_;  // log_p4
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_p = PARAMS[0];
  Rsh_Fir_reg_df1_ = PARAMS[1];
  Rsh_Fir_reg_df2_ = PARAMS[2];
  Rsh_Fir_reg_ncp = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];
  Rsh_Fir_reg_log_p = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_p, RHO);
  (void)(Rsh_Fir_reg_p);
  // st df1 = df1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_df1_, RHO);
  (void)(Rsh_Fir_reg_df1_);
  // st df2 = df2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_df2_, RHO);
  (void)(Rsh_Fir_reg_df2_);
  // st ncp = ncp
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ncp, RHO);
  (void)(Rsh_Fir_reg_ncp);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lower_tail_isMissing then L0(TRUE) else L0(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L0_;
  }

L0_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if log_p_isMissing then L1(FALSE) else L1(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 7);
    goto L1_;
  } else {
  // L1(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L1_;
  }

L1_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L8() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym2 = ldf `.Call`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `.Call` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L6_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn missing(<sym ncp>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L7_:;
  // r = dyn base(<sym ncp>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

L8_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // C_qf = ld C_qf
  Rsh_Fir_reg_C_qf = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base1(<sym C_qf>, <sym p>, <sym df1>, <sym df2>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args8[6];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[6];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 6, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D0_:;
  // deopt 4 [C_qf]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_qf;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // C_qf1 = force? C_qf
  Rsh_Fir_reg_C_qf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_qf);
  // checkMissing(C_qf1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_C_qf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // p1 = ld p
  Rsh_Fir_reg_p1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 [C_qf1, p1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // df3 = ld df1
  Rsh_Fir_reg_df3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [C_qf1, p2, df3]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_df3_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // df4 = force? df3
  Rsh_Fir_reg_df4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df3_);
  // checkMissing(df4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_df4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // df5 = ld df2
  Rsh_Fir_reg_df5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 7 [C_qf1, p2, df4, df5]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_df5_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // df6 = force? df5
  Rsh_Fir_reg_df6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df5_);
  // checkMissing(df6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_df6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 8 [C_qf1, p2, df4, df6, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_df6_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(8, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 9 [C_qf1, p2, df4, df6, lower_tail2, log_p1]
  SEXP Rsh_Fir_array_deopt_stack5[6];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_df6_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_deopt_stack5[5] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(9, 6, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // vargs = dots[p2, df4, df6, lower_tail2, log_p2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_df6_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_log_p2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_qf1, vargs, <missing>)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_C_qf1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L4_;

L18_:;
  // C_qnf = ld C_qnf
  Rsh_Fir_reg_C_qnf = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base2(<sym C_qnf>, <sym p>, <sym df1>, <sym df2>, <sym ncp>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args16[7];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args16[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args16[6] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[7];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 7, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

D6_:;
  // deopt 13 [C_qnf]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_qnf;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // C_qnf1 = force? C_qnf
  Rsh_Fir_reg_C_qnf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_qnf);
  // checkMissing(C_qnf1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_C_qnf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 14 [C_qnf1, p3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // df7 = ld df1
  Rsh_Fir_reg_df7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 15 [C_qnf1, p4, df7]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_df7_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // df8 = force? df7
  Rsh_Fir_reg_df8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df7_);
  // checkMissing(df8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_df8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // df9 = ld df2
  Rsh_Fir_reg_df9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 16 [C_qnf1, p4, df8, df9]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_df9_;
  Rsh_Fir_deopt(16, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // df10 = force? df9
  Rsh_Fir_reg_df10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df9_);
  // checkMissing(df10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_df10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // ncp1 = ld ncp
  Rsh_Fir_reg_ncp1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

D10_:;
  // deopt 17 [C_qnf1, p4, df8, df10, ncp1]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_ncp1_;
  Rsh_Fir_deopt(17, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // ncp2 = force? ncp1
  Rsh_Fir_reg_ncp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncp1_);
  // checkMissing(ncp2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ncp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

D11_:;
  // deopt 18 [C_qnf1, p4, df8, df10, ncp2, lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack11[6];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_deopt_stack11[5] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(18, 6, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // log_p3 = ld `log.p`
  Rsh_Fir_reg_log_p3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 19 [C_qnf1, p4, df8, df10, ncp2, lower_tail4, log_p3]
  SEXP Rsh_Fir_array_deopt_stack12[7];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_deopt_stack12[5] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_deopt_stack12[6] = Rsh_Fir_reg_log_p3_;
  Rsh_Fir_deopt(19, 7, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L26_:;
  // log_p4 = force? log_p3
  Rsh_Fir_reg_log_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p3_);
  // checkMissing(log_p4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_log_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[p4, df8, df10, ncp2, lower_tail4, log_p4]
  SEXP Rsh_Fir_array_vector_values1[6];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_vector_values1[2] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_vector_values1[3] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_vector_values1[4] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_vector_values1[5] = Rsh_Fir_reg_log_p4_;
  SEXP Rsh_Fir_array_vector_names1[6];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_array_vector_names1[2] = R_MissingArg;
  Rsh_Fir_array_vector_names1[3] = R_MissingArg;
  Rsh_Fir_array_vector_names1[4] = R_MissingArg;
  Rsh_Fir_array_vector_names1[5] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 6, Rsh_Fir_array_vector_values1, NULL);
  // r8 = `.Call`(C_qnf1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_C_qnf1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
