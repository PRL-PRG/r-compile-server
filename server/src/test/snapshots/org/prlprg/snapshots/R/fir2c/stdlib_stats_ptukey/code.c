#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner27988425_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner27988425_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner27988425
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner27988425_, RHO, CCP);
  // st ptukey = r
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
SEXP Rsh_Fir_user_function_inner27988425_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner27988425 dynamic dispatch ([q, nmeans, df, nranges, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner27988425_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner27988425_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner27988425 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner27988425/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_nmeans;  // nmeans
  SEXP Rsh_Fir_reg_df;  // df
  SEXP Rsh_Fir_reg_nranges;  // nranges
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_nranges_isMissing;  // nranges_isMissing
  SEXP Rsh_Fir_reg_nranges_orDefault;  // nranges_orDefault
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_ptukey;  // C_ptukey
  SEXP Rsh_Fir_reg_C_ptukey1_;  // C_ptukey1
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_nranges1_;  // nranges1
  SEXP Rsh_Fir_reg_nranges2_;  // nranges2
  SEXP Rsh_Fir_reg_nmeans1_;  // nmeans1
  SEXP Rsh_Fir_reg_nmeans2_;  // nmeans2
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_df2_;  // df2
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_nmeans = PARAMS[1];
  Rsh_Fir_reg_df = PARAMS[2];
  Rsh_Fir_reg_nranges = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];
  Rsh_Fir_reg_log_p = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st nmeans = nmeans
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_nmeans, RHO);
  (void)(Rsh_Fir_reg_nmeans);
  // st df = df
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_df, RHO);
  (void)(Rsh_Fir_reg_df);
  // nranges_isMissing = missing.0(nranges)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nranges;
  Rsh_Fir_reg_nranges_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nranges_isMissing then L0(1.0) else L0(nranges)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nranges_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_nranges_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(nranges)
    Rsh_Fir_reg_nranges_orDefault = Rsh_Fir_reg_nranges;
    goto L0_;
  }

L0_:;
  // st nranges = nranges_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_nranges_orDefault, RHO);
  (void)(Rsh_Fir_reg_nranges_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lower_tail_isMissing then L1(TRUE) else L1(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 6);
    goto L1_;
  } else {
  // L1(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L1_;
  }

L1_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if log_p_isMissing then L2(FALSE) else L2(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 8);
    goto L2_;
  } else {
  // L2(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L2_;
  }

L2_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // C_ptukey = ld C_ptukey
  Rsh_Fir_reg_C_ptukey = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_ptukey>, <sym q>, <sym nranges>, <sym nmeans>, <sym df>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args4[7];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[6] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[7];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 7, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [C_ptukey]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_ptukey;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // C_ptukey1 = force? C_ptukey
  Rsh_Fir_reg_C_ptukey1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_ptukey);
  // checkMissing(C_ptukey1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_C_ptukey1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 2 [C_ptukey1, q1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // nranges1 = ld nranges
  Rsh_Fir_reg_nranges1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 3 [C_ptukey1, q2, nranges1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_nranges1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // nranges2 = force? nranges1
  Rsh_Fir_reg_nranges2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nranges1_);
  // checkMissing(nranges2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_nranges2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // nmeans1 = ld nmeans
  Rsh_Fir_reg_nmeans1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 4 [C_ptukey1, q2, nranges2, nmeans1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_nranges2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_nmeans1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // nmeans2 = force? nmeans1
  Rsh_Fir_reg_nmeans2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmeans1_);
  // checkMissing(nmeans2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nmeans2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // df1 = ld df
  Rsh_Fir_reg_df1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 5 [C_ptukey1, q2, nranges2, nmeans2, df1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_nranges2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_nmeans2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_df1_;
  Rsh_Fir_deopt(5, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // df2 = force? df1
  Rsh_Fir_reg_df2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df1_);
  // checkMissing(df2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_df2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 6 [C_ptukey1, q2, nranges2, nmeans2, df2, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack5[6];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_nranges2_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_nmeans2_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_df2_;
  Rsh_Fir_array_deopt_stack5[5] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(6, 6, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 7 [C_ptukey1, q2, nranges2, nmeans2, df2, lower_tail2, log_p1]
  SEXP Rsh_Fir_array_deopt_stack6[7];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_nranges2_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_nmeans2_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_df2_;
  Rsh_Fir_array_deopt_stack6[5] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_deopt_stack6[6] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(7, 7, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // vargs = dots[q2, nranges2, nmeans2, df2, lower_tail2, log_p2]
  SEXP Rsh_Fir_array_vector_values[6];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_nranges2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_nmeans2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_df2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_vector_values[5] = Rsh_Fir_reg_log_p2_;
  SEXP Rsh_Fir_array_vector_names[6];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_array_vector_names[5] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 6, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_ptukey1, vargs, <missing>)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_C_ptukey1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
