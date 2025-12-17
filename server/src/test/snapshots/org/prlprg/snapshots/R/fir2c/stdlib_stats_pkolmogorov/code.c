#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner314999968_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner314999968_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner314999968_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner314999968_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner314999968
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner314999968_, RHO, CCP);
  // st pkolmogorov = r
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
SEXP Rsh_Fir_user_function_inner314999968_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner314999968 dynamic dispatch ([q, size, `two.sided`, exact, `lower.tail`])

  return Rsh_Fir_user_version_inner314999968_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner314999968_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner314999968 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner314999968/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_two_sided;  // two_sided
  SEXP Rsh_Fir_reg_exact;  // exact
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_two_sided_isMissing;  // two_sided_isMissing
  SEXP Rsh_Fir_reg_two_sided_orDefault;  // two_sided_orDefault
  SEXP Rsh_Fir_reg_exact_isMissing;  // exact_isMissing
  SEXP Rsh_Fir_reg_exact_orDefault;  // exact_orDefault
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_q5_;  // q5
  SEXP Rsh_Fir_reg_q6_;  // q6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_exact1_;  // exact1
  SEXP Rsh_Fir_reg_exact2_;  // exact2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_two_sided1_;  // two_sided1
  SEXP Rsh_Fir_reg_two_sided2_;  // two_sided2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_pkolmogorov_two_exact;  // pkolmogorov_two_exact
  SEXP Rsh_Fir_reg_q7_;  // q7
  SEXP Rsh_Fir_reg_q8_;  // q8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_lower_tail5_;  // lower_tail5
  SEXP Rsh_Fir_reg_lower_tail6_;  // lower_tail6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_pkolmogorov_one_exact;  // pkolmogorov_one_exact
  SEXP Rsh_Fir_reg_q9_;  // q9
  SEXP Rsh_Fir_reg_q10_;  // q10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_size4_;  // size4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_lower_tail7_;  // lower_tail7
  SEXP Rsh_Fir_reg_lower_tail8_;  // lower_tail8
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_two_sided3_;  // two_sided3
  SEXP Rsh_Fir_reg_two_sided4_;  // two_sided4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_pkolmogorov_two_asymp;  // pkolmogorov_two_asymp
  SEXP Rsh_Fir_reg_q11_;  // q11
  SEXP Rsh_Fir_reg_q12_;  // q12
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_size5_;  // size5
  SEXP Rsh_Fir_reg_size6_;  // size6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_lower_tail9_;  // lower_tail9
  SEXP Rsh_Fir_reg_lower_tail10_;  // lower_tail10
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_pkolmogorov_one_asymp;  // pkolmogorov_one_asymp
  SEXP Rsh_Fir_reg_q13_;  // q13
  SEXP Rsh_Fir_reg_q14_;  // q14
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_size7_;  // size7
  SEXP Rsh_Fir_reg_size8_;  // size8
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_lower_tail11_;  // lower_tail11
  SEXP Rsh_Fir_reg_lower_tail12_;  // lower_tail12
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r30_;  // r30

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_size = PARAMS[1];
  Rsh_Fir_reg_two_sided = PARAMS[2];
  Rsh_Fir_reg_exact = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st size = size
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_size, RHO);
  (void)(Rsh_Fir_reg_size);
  // two_sided_isMissing = missing.0(two_sided)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_two_sided;
  Rsh_Fir_reg_two_sided_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if two_sided_isMissing then L0(TRUE) else L0(two_sided)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_two_sided_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_two_sided_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(two_sided)
    Rsh_Fir_reg_two_sided_orDefault = Rsh_Fir_reg_two_sided;
    goto L0_;
  }

L0_:;
  // st `two.sided` = two_sided_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_two_sided_orDefault, RHO);
  (void)(Rsh_Fir_reg_two_sided_orDefault);
  // exact_isMissing = missing.0(exact)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_exact;
  Rsh_Fir_reg_exact_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if exact_isMissing then L1(TRUE) else L1(exact)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_exact_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_exact_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(exact)
    Rsh_Fir_reg_exact_orDefault = Rsh_Fir_reg_exact;
    goto L1_;
  }

L1_:;
  // st exact = exact_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_exact_orDefault, RHO);
  (void)(Rsh_Fir_reg_exact_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if lower_tail_isMissing then L2(TRUE) else L2(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L2_;
  }

L2_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L3_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L18() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L6_:;
  // q5 = ld q
  Rsh_Fir_reg_q5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L8_:;
  // exact1 = ld exact
  Rsh_Fir_reg_exact1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

L11_:;
  // two_sided3 = ld `two.sided`
  Rsh_Fir_reg_two_sided3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L12_:;
  // pkolmogorov_one_exact = ldf pkolmogorov_one_exact
  Rsh_Fir_reg_pkolmogorov_one_exact = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L13_:;
  // pkolmogorov_one_asymp = ldf pkolmogorov_one_asymp
  Rsh_Fir_reg_pkolmogorov_one_asymp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

L14_:;
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L15_:;
  // r = dyn base(<sym q>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [q1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn is_na(q2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NA_REAL
  return Rsh_const(CCP, 10);

D2_:;
  // deopt 11 [q3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r5 = `<=`(q4, 0.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L22() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L22()
    goto L22_;
  } else {
  // L6()
    goto L6_;
  }

L22_:;
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 16 [1.0, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r6 = `-`(1.0, lower_tail2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

D4_:;
  // deopt 22 [q5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // q6 = force? q5
  Rsh_Fir_reg_q6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q5_);
  // checkMissing(q6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_q6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r9 = `>`(q6, 1.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_q6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L8()
    goto L8_;
  }

L27_:;
  // sym1 = ldf `as.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `as.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L29_:;
  // r10 = dyn base1(<sym lower.tail>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L9(r10)
  // L9(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L9_;

D5_:;
  // deopt 28 [lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn as_numeric(lower_tail4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_lower_tail4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 31 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L9(r12)
  // L9(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L9_;

D7_:;
  // deopt 35 [exact1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_exact1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // exact2 = force? exact1
  Rsh_Fir_reg_exact2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact1_);
  // checkMissing(exact2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_exact2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(exact2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_exact2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c3 then L35() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L35()
    goto L35_;
  } else {
  // L11()
    goto L11_;
  }

L35_:;
  // two_sided1 = ld `two.sided`
  Rsh_Fir_reg_two_sided1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

D8_:;
  // deopt 37 [two_sided1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_two_sided1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // two_sided2 = force? two_sided1
  Rsh_Fir_reg_two_sided2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_two_sided1_);
  // checkMissing(two_sided2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_two_sided2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(two_sided2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_two_sided2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c4 then L37() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L37()
    goto L37_;
  } else {
  // L12()
    goto L12_;
  }

L37_:;
  // pkolmogorov_two_exact = ldf pkolmogorov_two_exact
  Rsh_Fir_reg_pkolmogorov_two_exact = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p = prom<V +>{
  //   q7 = ld q;
  //   q8 = force? q7;
  //   checkMissing(q8);
  //   return q8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_, CCP, RHO);
  // p1 = prom<V +>{
  //   size1 = ld size;
  //   size2 = force? size1;
  //   checkMissing(size2);
  //   return size2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_1, CCP, RHO);
  // p2 = prom<V +>{
  //   lower_tail5 = ld `lower.tail`;
  //   lower_tail6 = force? lower_tail5;
  //   checkMissing(lower_tail6);
  //   return lower_tail6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_2, CCP, RHO);
  // r18 = dyn pkolmogorov_two_exact(p, p1, p2)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pkolmogorov_two_exact, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

D11_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   q9 = ld q;
  //   q10 = force? q9;
  //   checkMissing(q10);
  //   return q10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_3, CCP, RHO);
  // p4 = prom<V +>{
  //   size3 = ld size;
  //   size4 = force? size3;
  //   checkMissing(size4);
  //   return size4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_4, CCP, RHO);
  // p5 = prom<V +>{
  //   lower_tail7 = ld `lower.tail`;
  //   lower_tail8 = force? lower_tail7;
  //   checkMissing(lower_tail8);
  //   return lower_tail8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_5, CCP, RHO);
  // r22 = dyn pkolmogorov_one_exact(p3, p4, p5)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pkolmogorov_one_exact, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 50 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

D13_:;
  // deopt 51 [two_sided3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_two_sided3_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L44_:;
  // two_sided4 = force? two_sided3
  Rsh_Fir_reg_two_sided4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_two_sided3_);
  // checkMissing(two_sided4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_two_sided4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(two_sided4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_two_sided4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c5 then L45() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L45()
    goto L45_;
  } else {
  // L13()
    goto L13_;
  }

L45_:;
  // pkolmogorov_two_asymp = ldf pkolmogorov_two_asymp
  Rsh_Fir_reg_pkolmogorov_two_asymp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p6 = prom<V +>{
  //   q11 = ld q;
  //   q12 = force? q11;
  //   checkMissing(q12);
  //   return q12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_6, CCP, RHO);
  // p7 = prom<V +>{
  //   size5 = ld size;
  //   size6 = force? size5;
  //   checkMissing(size6);
  //   return size6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_7, CCP, RHO);
  // p8 = prom<V +>{
  //   lower_tail9 = ld `lower.tail`;
  //   lower_tail10 = force? lower_tail9;
  //   checkMissing(lower_tail10);
  //   return lower_tail10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_8, CCP, RHO);
  // r26 = dyn pkolmogorov_two_asymp(p6, p7, p8)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pkolmogorov_two_asymp, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L47() else D15()
  // L47()
  goto L47_;

D15_:;
  // deopt 58 [r26]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p9 = prom<V +>{
  //   q13 = ld q;
  //   q14 = force? q13;
  //   checkMissing(q14);
  //   return q14;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_9, CCP, RHO);
  // p10 = prom<V +>{
  //   size7 = ld size;
  //   size8 = force? size7;
  //   checkMissing(size8);
  //   return size8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_10, CCP, RHO);
  // p11 = prom<V +>{
  //   lower_tail11 = ld `lower.tail`;
  //   lower_tail12 = force? lower_tail11;
  //   checkMissing(lower_tail12);
  //   return lower_tail12;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner314999968_11, CCP, RHO);
  // r30 = dyn pkolmogorov_one_asymp(p9, p10, p11)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pkolmogorov_one_asymp, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 64 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner314999968_(SEXP CCP, SEXP RHO) {
  // q7 = ld q
  Rsh_Fir_reg_q7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q8 = force? q7
  Rsh_Fir_reg_q8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q7_);
  // checkMissing(q8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_q8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return q8
  return Rsh_Fir_reg_q8_;
}
SEXP Rsh_Fir_user_promise_inner314999968_1(SEXP CCP, SEXP RHO) {
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return size2
  return Rsh_Fir_reg_size2_;
}
SEXP Rsh_Fir_user_promise_inner314999968_2(SEXP CCP, SEXP RHO) {
  // lower_tail5 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower_tail6 = force? lower_tail5
  Rsh_Fir_reg_lower_tail6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail5_);
  // checkMissing(lower_tail6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_lower_tail6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return lower_tail6
  return Rsh_Fir_reg_lower_tail6_;
}
SEXP Rsh_Fir_user_promise_inner314999968_3(SEXP CCP, SEXP RHO) {
  // q9 = ld q
  Rsh_Fir_reg_q9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q10 = force? q9
  Rsh_Fir_reg_q10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q9_);
  // checkMissing(q10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_q10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return q10
  return Rsh_Fir_reg_q10_;
}
SEXP Rsh_Fir_user_promise_inner314999968_4(SEXP CCP, SEXP RHO) {
  // size3 = ld size
  Rsh_Fir_reg_size3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // size4 = force? size3
  Rsh_Fir_reg_size4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size3_);
  // checkMissing(size4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_size4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return size4
  return Rsh_Fir_reg_size4_;
}
SEXP Rsh_Fir_user_promise_inner314999968_5(SEXP CCP, SEXP RHO) {
  // lower_tail7 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower_tail8 = force? lower_tail7
  Rsh_Fir_reg_lower_tail8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail7_);
  // checkMissing(lower_tail8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_lower_tail8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return lower_tail8
  return Rsh_Fir_reg_lower_tail8_;
}
SEXP Rsh_Fir_user_promise_inner314999968_6(SEXP CCP, SEXP RHO) {
  // q11 = ld q
  Rsh_Fir_reg_q11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q12 = force? q11
  Rsh_Fir_reg_q12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q11_);
  // checkMissing(q12)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_q12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return q12
  return Rsh_Fir_reg_q12_;
}
SEXP Rsh_Fir_user_promise_inner314999968_7(SEXP CCP, SEXP RHO) {
  // size5 = ld size
  Rsh_Fir_reg_size5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // size6 = force? size5
  Rsh_Fir_reg_size6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size5_);
  // checkMissing(size6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_size6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return size6
  return Rsh_Fir_reg_size6_;
}
SEXP Rsh_Fir_user_promise_inner314999968_8(SEXP CCP, SEXP RHO) {
  // lower_tail9 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower_tail10 = force? lower_tail9
  Rsh_Fir_reg_lower_tail10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail9_);
  // checkMissing(lower_tail10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_lower_tail10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return lower_tail10
  return Rsh_Fir_reg_lower_tail10_;
}
SEXP Rsh_Fir_user_promise_inner314999968_9(SEXP CCP, SEXP RHO) {
  // q13 = ld q
  Rsh_Fir_reg_q13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q14 = force? q13
  Rsh_Fir_reg_q14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q13_);
  // checkMissing(q14)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_q14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return q14
  return Rsh_Fir_reg_q14_;
}
SEXP Rsh_Fir_user_promise_inner314999968_10(SEXP CCP, SEXP RHO) {
  // size7 = ld size
  Rsh_Fir_reg_size7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // size8 = force? size7
  Rsh_Fir_reg_size8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size7_);
  // checkMissing(size8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_size8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return size8
  return Rsh_Fir_reg_size8_;
}
SEXP Rsh_Fir_user_promise_inner314999968_11(SEXP CCP, SEXP RHO) {
  // lower_tail11 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower_tail12 = force? lower_tail11
  Rsh_Fir_reg_lower_tail12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail11_);
  // checkMissing(lower_tail12)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lower_tail12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return lower_tail12
  return Rsh_Fir_reg_lower_tail12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
