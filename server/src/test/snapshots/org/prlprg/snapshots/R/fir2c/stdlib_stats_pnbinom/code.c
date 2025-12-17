#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3440223141_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3440223141_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3440223141
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3440223141_, RHO, CCP);
  // st pnbinom = r
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
SEXP Rsh_Fir_user_function_inner3440223141_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3440223141 dynamic dispatch ([q, size, prob, mu, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner3440223141_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3440223141_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3440223141 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3440223141/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_prob;  // prob
  SEXP Rsh_Fir_reg_mu;  // mu
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
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_C_pnbinom_mu;  // C_pnbinom_mu
  SEXP Rsh_Fir_reg_C_pnbinom_mu1_;  // C_pnbinom_mu1
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_mu1_;  // mu1
  SEXP Rsh_Fir_reg_mu2_;  // mu2
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_C_pnbinom;  // C_pnbinom
  SEXP Rsh_Fir_reg_C_pnbinom1_;  // C_pnbinom1
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_size4_;  // size4
  SEXP Rsh_Fir_reg_prob1_;  // prob1
  SEXP Rsh_Fir_reg_prob2_;  // prob2
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_log_p3_;  // log_p3
  SEXP Rsh_Fir_reg_log_p4_;  // log_p4
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_size = PARAMS[1];
  Rsh_Fir_reg_prob = PARAMS[2];
  Rsh_Fir_reg_mu = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];
  Rsh_Fir_reg_log_p = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st size = size
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_size, RHO);
  (void)(Rsh_Fir_reg_size);
  // st prob = prob
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_prob, RHO);
  (void)(Rsh_Fir_reg_prob);
  // st mu = mu
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_mu, RHO);
  (void)(Rsh_Fir_reg_mu);
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
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L11() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym3 = ldf `.Call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf `.Call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L4_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym2 = ldf `.Call`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `.Call` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;

L9_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn missing(<sym mu>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L10_:;
  // r = dyn base(<sym mu>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

L11_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r6 = dyn missing1(<sym prob>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L13_:;
  // r4 = dyn base1(<sym prob>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

L14_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

D0_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r8 = dyn stop("'prob' and 'mu' both specified")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 11 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L6()
  // L6()
  goto L6_;

L18_:;
  // C_pnbinom_mu = ld C_pnbinom_mu
  Rsh_Fir_reg_C_pnbinom_mu = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r10 = dyn base2(<sym C_pnbinom_mu>, <sym q>, <sym size>, <sym mu>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args15[6];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[6];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 6, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

D2_:;
  // deopt 15 [C_pnbinom_mu]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_pnbinom_mu;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // C_pnbinom_mu1 = force? C_pnbinom_mu
  Rsh_Fir_reg_C_pnbinom_mu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_pnbinom_mu);
  // checkMissing(C_pnbinom_mu1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 16 [C_pnbinom_mu1, q1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 17 [C_pnbinom_mu1, q2, size1]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_size1_;
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // mu1 = ld mu
  Rsh_Fir_reg_mu1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 18 [C_pnbinom_mu1, q2, size2, mu1]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_mu1_;
  Rsh_Fir_deopt(18, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // mu2 = force? mu1
  Rsh_Fir_reg_mu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu1_);
  // checkMissing(mu2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_mu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 19 [C_pnbinom_mu1, q2, size2, mu2, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack5[5];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(19, 5, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 20 [C_pnbinom_mu1, q2, size2, mu2, lower_tail2, log_p1]
  SEXP Rsh_Fir_array_deopt_stack6[6];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_deopt_stack6[5] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(20, 6, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // vargs = dots[q2, size2, mu2, lower_tail2, log_p2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_log_p2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r12 = `.Call`(C_pnbinom_mu1, vargs, <missing>)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_C_pnbinom_mu1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L7_;

L27_:;
  // C_pnbinom = ld C_pnbinom
  Rsh_Fir_reg_C_pnbinom = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

L28_:;
  // r13 = dyn base3(<sym C_pnbinom>, <sym q>, <sym size>, <sym prob>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args23[6];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[6];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 6, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D8_:;
  // deopt 24 [C_pnbinom]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_pnbinom;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // C_pnbinom1 = force? C_pnbinom
  Rsh_Fir_reg_C_pnbinom1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_pnbinom);
  // checkMissing(C_pnbinom1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_C_pnbinom1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

D9_:;
  // deopt 25 [C_pnbinom1, q3]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L30_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // size3 = ld size
  Rsh_Fir_reg_size3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 26 [C_pnbinom1, q4, size3]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_size3_;
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // size4 = force? size3
  Rsh_Fir_reg_size4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size3_);
  // checkMissing(size4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_size4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // prob1 = ld prob
  Rsh_Fir_reg_prob1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 27 [C_pnbinom1, q4, size4, prob1]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_prob1_;
  Rsh_Fir_deopt(27, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // prob2 = force? prob1
  Rsh_Fir_reg_prob2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob1_);
  // checkMissing(prob2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_prob2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

D12_:;
  // deopt 28 [C_pnbinom1, q4, size4, prob2, lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack11[5];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_prob2_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(28, 5, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L33_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // log_p3 = ld `log.p`
  Rsh_Fir_reg_log_p3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L34() else D13()
  // L34()
  goto L34_;

D13_:;
  // deopt 29 [C_pnbinom1, q4, size4, prob2, lower_tail4, log_p3]
  SEXP Rsh_Fir_array_deopt_stack12[6];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_prob2_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_deopt_stack12[5] = Rsh_Fir_reg_log_p3_;
  Rsh_Fir_deopt(29, 6, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // log_p4 = force? log_p3
  Rsh_Fir_reg_log_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p3_);
  // checkMissing(log_p4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_log_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[q4, size4, prob2, lower_tail4, log_p4]
  SEXP Rsh_Fir_array_vector_values1[5];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_vector_values1[2] = Rsh_Fir_reg_prob2_;
  Rsh_Fir_array_vector_values1[3] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_vector_values1[4] = Rsh_Fir_reg_log_p4_;
  SEXP Rsh_Fir_array_vector_names1[5];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_array_vector_names1[2] = R_MissingArg;
  Rsh_Fir_array_vector_names1[3] = R_MissingArg;
  Rsh_Fir_array_vector_names1[4] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values1, NULL);
  // r15 = `.Call`(C_pnbinom1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_C_pnbinom1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
