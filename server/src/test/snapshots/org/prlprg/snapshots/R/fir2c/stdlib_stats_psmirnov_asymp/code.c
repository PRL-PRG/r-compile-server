#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2992133739_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2992133739_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2992133739_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2992133739_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2992133739
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2992133739_, RHO, CCP);
  // st psmirnov_asymp = r
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
SEXP Rsh_Fir_user_function_inner2992133739_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2992133739 dynamic dispatch ([q, sizes, alternative, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner2992133739_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2992133739_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2992133739 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2992133739/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_sizes;  // sizes
  SEXP Rsh_Fir_reg_alternative;  // alternative
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_alternative_isMissing;  // alternative_isMissing
  SEXP Rsh_Fir_reg_alternative_orDefault;  // alternative_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_alternative1_;  // alternative1
  SEXP Rsh_Fir_reg_alternative2_;  // alternative2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_alternative3_;  // alternative3
  SEXP Rsh_Fir_reg_alternative4_;  // alternative4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sizes1_;  // sizes1
  SEXP Rsh_Fir_reg_sizes2_;  // sizes2
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sizes3_;  // sizes3
  SEXP Rsh_Fir_reg_sizes4_;  // sizes4
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_two_sided;  // two_sided
  SEXP Rsh_Fir_reg_two_sided1_;  // two_sided1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_C_pkolmogorov_two_limit;  // C_pkolmogorov_two_limit
  SEXP Rsh_Fir_reg_C_pkolmogorov_two_limit1_;  // C_pkolmogorov_two_limit1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg__Call;  // _Call
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_ret;  // ret
  SEXP Rsh_Fir_reg_ret1_;  // ret1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_ret2_;  // ret2
  SEXP Rsh_Fir_reg_ret3_;  // ret3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_log_p3_;  // log_p3
  SEXP Rsh_Fir_reg_log_p4_;  // log_p4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_ret4_;  // ret4
  SEXP Rsh_Fir_reg_ret5_;  // ret5
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_ret6_;  // ret6
  SEXP Rsh_Fir_reg_ret7_;  // ret7
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_lower_tail5_;  // lower_tail5
  SEXP Rsh_Fir_reg_lower_tail6_;  // lower_tail6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_ret8_;  // ret8
  SEXP Rsh_Fir_reg_ret9_;  // ret9
  SEXP Rsh_Fir_reg_ret10_;  // ret10
  SEXP Rsh_Fir_reg_ret11_;  // ret11
  SEXP Rsh_Fir_reg_r42_;  // r42

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_sizes = PARAMS[1];
  Rsh_Fir_reg_alternative = PARAMS[2];
  Rsh_Fir_reg_lower_tail = PARAMS[3];
  Rsh_Fir_reg_log_p = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st sizes = sizes
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sizes, RHO);
  (void)(Rsh_Fir_reg_sizes);
  // alternative_isMissing = missing.0(alternative)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_alternative;
  Rsh_Fir_reg_alternative_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if alternative_isMissing then L0() else L1(alternative)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_alternative_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(alternative)
    Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_alternative;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("two.sided", "less", "greater");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("two.sided", "less", "greater");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2992133739_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st alternative = alternative_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_alternative_orDefault, RHO);
  (void)(Rsh_Fir_reg_alternative_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if lower_tail_isMissing then L2(TRUE) else L2(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 8);
    goto L2_;
  } else {
  // L2(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L2_;
  }

L2_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if log_p_isMissing then L3(FALSE) else L3(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 10);
    goto L3_;
  } else {
  // L3(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L3_;
  }

L3_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L4_:;
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L5_:;
  // r16 = `/`(r13, r14)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st n = r16
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // two_sided = ld `two.sided`
  Rsh_Fir_reg_two_sided = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

L6_:;
  // sym6 = ldf expm1
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf expm1 in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard6 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L7_:;
  // st ret = r18
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

L8_:;
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st ret = r25
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // ret2 = ld ret
  Rsh_Fir_reg_ret2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L46() else D15()
  // L46()
  goto L46_;

L12_:;
  // r34 = `-`(<missing>, r29)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // st ret = r34
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // log_p3 = ld `log.p`
  Rsh_Fir_reg_log_p3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L52() else D18()
  // L52()
  goto L52_;

L13_:;
  // lower_tail5 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L64() else D22()
  // L64()
  goto L64_;

L14_:;
  // sym8 = ldf log1p
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base8 = ldf log1p in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard8 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r36
  return Rsh_Fir_reg_r36_;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;

L17_:;
  // ret10 = ld ret
  Rsh_Fir_reg_ret10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   alternative1 = ld alternative;
  //   alternative2 = force? alternative1;
  //   checkMissing(alternative2);
  //   return alternative2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2992133739_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // st alternative = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // alternative3 = ld alternative
  Rsh_Fir_reg_alternative3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 5 [alternative3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_alternative3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // alternative4 = force? alternative3
  Rsh_Fir_reg_alternative4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative3_);
  // checkMissing(alternative4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_alternative4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r6 = `==`(alternative4, "two.sided")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_alternative4_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // st `two.sided` = r6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf prod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf prod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // sizes1 = ld sizes
  Rsh_Fir_reg_sizes1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base1(<sym sizes>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D3_:;
  // deopt 12 [sizes1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_sizes1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // sizes2 = force? sizes1
  Rsh_Fir_reg_sizes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes1_);
  // checkMissing(sizes2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sizes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn prod(sizes2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sizes2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L25_:;
  // sizes3 = ld sizes
  Rsh_Fir_reg_sizes3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L26_:;
  // r12 = dyn base2(<sym sizes>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r8, r12)
  // L5(r8, r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  goto L5_;

D5_:;
  // deopt 17 [r8, sizes3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_sizes3_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // sizes4 = force? sizes3
  Rsh_Fir_reg_sizes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes3_);
  // checkMissing(sizes4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sizes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r15 = dyn sum(sizes4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sizes4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 20 [r8, r15]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L5(r8, r15)
  // L5(r8, r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L5_;

D7_:;
  // deopt 23 [two_sided]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_two_sided;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // two_sided1 = force? two_sided
  Rsh_Fir_reg_two_sided1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_two_sided);
  // checkMissing(two_sided1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_two_sided1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(two_sided1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_two_sided1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L30() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L30()
    goto L30_;
  } else {
  // L6()
    goto L6_;
  }

L30_:;
  // sym3 = ldf `.Call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf `.Call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // C_pkolmogorov_two_limit = ld C_pkolmogorov_two_limit
  Rsh_Fir_reg_C_pkolmogorov_two_limit = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // r17 = dyn base3[, , , tol](<sym C_pkolmogorov_two_limit>, <lang `*`(sqrt(n), q)>, <sym lower.tail>, 1.0E-6)
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L7_;

D8_:;
  // deopt 27 [C_pkolmogorov_two_limit]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_pkolmogorov_two_limit;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L33_:;
  // C_pkolmogorov_two_limit1 = force? C_pkolmogorov_two_limit
  Rsh_Fir_reg_C_pkolmogorov_two_limit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_pkolmogorov_two_limit);
  // checkMissing(C_pkolmogorov_two_limit1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_C_pkolmogorov_two_limit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // sym4 = ldf sqrt
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base4 = ldf sqrt in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L35_:;
  // r19 = dyn base4(<sym n>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r19)
  // L8(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L8_;

D9_:;
  // deopt 30 [n]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r21 = sqrt(n1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L8_;

D10_:;
  // deopt 32 [r20, q1]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r22 = `*`(r20, q2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 35 [lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // _Call = ldf `.Call` in base
  Rsh_Fir_reg__Call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r23 = dyn _Call(C_pkolmogorov_two_limit1, r22, lower_tail2, 1.0E-6)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_C_pkolmogorov_two_limit1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Call, 4, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 40 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r23_;
  goto L7_;

D13_:;
  // deopt 42 [log_p1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L40_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(log_p2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_log_p2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c2 then L41() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L9()
    goto L9_;
  }

L41_:;
  // sym5 = ldf log
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf log in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard5 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // ret = ld ret
  Rsh_Fir_reg_ret = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

L43_:;
  // r24 = dyn base5(<sym ret>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

D14_:;
  // deopt 45 [ret]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_ret;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L44_:;
  // ret1 = force? ret
  Rsh_Fir_reg_ret1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret);
  // checkMissing(ret1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ret1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r26 = log(ret1, 2.718281828459045)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ret1_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L10_;

D15_:;
  // deopt 51 [ret2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_ret2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L46_:;
  // ret3 = force? ret2
  Rsh_Fir_reg_ret3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret2_);
  // checkMissing(ret3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ret3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret3
  return Rsh_Fir_reg_ret3_;

L48_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L49_:;
  // r28 = dyn base6(<lang `*`(`*`(`-`(2.0), n), `^`(q, 2.0))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L12_;

D16_:;
  // deopt 55 [-2.0, n2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L50_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r30 = `*`(-2.0, n3)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D17()
  // L51()
  goto L51_;

D17_:;
  // deopt 57 [r30, q3]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L51_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r31 = `^`(q4, 2.0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // r32 = `*`(r30, r31)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // r33 = expm1(r32)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(173, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r33_;
  goto L12_;

D18_:;
  // deopt 65 [log_p3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_log_p3_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L52_:;
  // log_p4 = force? log_p3
  Rsh_Fir_reg_log_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p3_);
  // checkMissing(log_p4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_log_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(log_p4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_log_p4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c3 then L53() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L53()
    goto L53_;
  } else {
  // L13()
    goto L13_;
  }

L53_:;
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 67 [lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L54_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(lower_tail4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c4 then L55() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L55()
    goto L55_;
  } else {
  // L14()
    goto L14_;
  }

L55_:;
  // sym7 = ldf log
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base7 = ldf log in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard7 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // ret4 = ld ret
  Rsh_Fir_reg_ret4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L58() else D20()
  // L58()
  goto L58_;

L57_:;
  // r35 = dyn base7(<sym ret>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L15(r35)
  // L15(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L15_;

D20_:;
  // deopt 70 [ret4]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_ret4_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L58_:;
  // ret5 = force? ret4
  Rsh_Fir_reg_ret5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret4_);
  // checkMissing(ret5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ret5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r37 = log(ret5, 2.718281828459045)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ret5_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L15_;

L60_:;
  // ret6 = ld ret
  Rsh_Fir_reg_ret6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L62() else D21()
  // L62()
  goto L62_;

L61_:;
  // r38 = dyn base8(<lang `-`(ret)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

D21_:;
  // deopt 74 [ret6]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_ret6_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L62_:;
  // ret7 = force? ret6
  Rsh_Fir_reg_ret7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret6_);
  // checkMissing(ret7)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_ret7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r40 = `-`(<missing>, ret7)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_ret7_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // r41 = log1p(r40)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(174, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L16(r41)
  // L16(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L16_;

D22_:;
  // deopt 78 [lower_tail5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_lower_tail5_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L64_:;
  // lower_tail6 = force? lower_tail5
  Rsh_Fir_reg_lower_tail6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail5_);
  // checkMissing(lower_tail6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_lower_tail6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(lower_tail6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_lower_tail6_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c5 then L65() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L65()
    goto L65_;
  } else {
  // L17()
    goto L17_;
  }

L65_:;
  // ret8 = ld ret
  Rsh_Fir_reg_ret8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

D23_:;
  // deopt 80 [ret8]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_ret8_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L66_:;
  // ret9 = force? ret8
  Rsh_Fir_reg_ret9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret8_);
  // checkMissing(ret9)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_ret9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret9
  return Rsh_Fir_reg_ret9_;

D24_:;
  // deopt 83 [1.0, ret10]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_ret10_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L68_:;
  // ret11 = force? ret10
  Rsh_Fir_reg_ret11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret10_);
  // checkMissing(ret11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_ret11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r42 = `-`(1.0, ret11)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_ret11_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_inner2992133739_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn c("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2992133739_1(SEXP CCP, SEXP RHO) {
  // alternative1 = ld alternative
  Rsh_Fir_reg_alternative1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // alternative2 = force? alternative1
  Rsh_Fir_reg_alternative2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative1_);
  // checkMissing(alternative2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_alternative2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return alternative2
  return Rsh_Fir_reg_alternative2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
