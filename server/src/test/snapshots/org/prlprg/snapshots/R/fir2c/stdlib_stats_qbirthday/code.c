#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3941777471_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3941777471_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3941777471_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3941777471_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner3941777471
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3941777471_, RHO, CCP);
  // st qbirthday = r
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
SEXP Rsh_Fir_user_function_inner3941777471_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3941777471 dynamic dispatch ([prob, classes, coincident])

  return Rsh_Fir_user_version_inner3941777471_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3941777471_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3941777471 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3941777471/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_prob;  // prob
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_coincident;  // coincident
  SEXP Rsh_Fir_reg_prob_isMissing;  // prob_isMissing
  SEXP Rsh_Fir_reg_prob_orDefault;  // prob_orDefault
  SEXP Rsh_Fir_reg_classes_isMissing;  // classes_isMissing
  SEXP Rsh_Fir_reg_classes_orDefault;  // classes_orDefault
  SEXP Rsh_Fir_reg_coincident_isMissing;  // coincident_isMissing
  SEXP Rsh_Fir_reg_coincident_orDefault;  // coincident_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_prob1_;  // prob1
  SEXP Rsh_Fir_reg_prob2_;  // prob2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_prob3_;  // prob3
  SEXP Rsh_Fir_reg_prob4_;  // prob4
  SEXP Rsh_Fir_reg_coincident1_;  // coincident1
  SEXP Rsh_Fir_reg_coincident2_;  // coincident2
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_prob5_;  // prob5
  SEXP Rsh_Fir_reg_prob6_;  // prob6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_N;  // N
  SEXP Rsh_Fir_reg_N1_;  // N1
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_pbirthday;  // pbirthday
  SEXP Rsh_Fir_reg_N2_;  // N2
  SEXP Rsh_Fir_reg_N3_;  // N3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_prob7_;  // prob7
  SEXP Rsh_Fir_reg_prob8_;  // prob8
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_N4_;  // N4
  SEXP Rsh_Fir_reg_N5_;  // N5
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_pbirthday1_;  // pbirthday1
  SEXP Rsh_Fir_reg_N6_;  // N6
  SEXP Rsh_Fir_reg_N7_;  // N7
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_prob9_;  // prob9
  SEXP Rsh_Fir_reg_prob10_;  // prob10
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_N8_;  // N8
  SEXP Rsh_Fir_reg_N9_;  // N9
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_pbirthday2_;  // pbirthday2
  SEXP Rsh_Fir_reg_N10_;  // N10
  SEXP Rsh_Fir_reg_N11_;  // N11
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_k12_;  // k12
  SEXP Rsh_Fir_reg_k13_;  // k13
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_prob11_;  // prob11
  SEXP Rsh_Fir_reg_prob12_;  // prob12
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_N12_;  // N12
  SEXP Rsh_Fir_reg_N13_;  // N13
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_pbirthday3_;  // pbirthday3
  SEXP Rsh_Fir_reg_N14_;  // N14
  SEXP Rsh_Fir_reg_N15_;  // N15
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_k14_;  // k14
  SEXP Rsh_Fir_reg_k15_;  // k15
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_prob13_;  // prob13
  SEXP Rsh_Fir_reg_prob14_;  // prob14
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_N16_;  // N16
  SEXP Rsh_Fir_reg_N17_;  // N17
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_N18_;  // N18
  SEXP Rsh_Fir_reg_N19_;  // N19

  // Bind parameters
  Rsh_Fir_reg_prob = PARAMS[0];
  Rsh_Fir_reg_classes = PARAMS[1];
  Rsh_Fir_reg_coincident = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // prob_isMissing = missing.0(prob)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_prob;
  Rsh_Fir_reg_prob_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if prob_isMissing then L0(0.5) else L0(prob)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_prob_isMissing)) {
  // L0(0.5)
    Rsh_Fir_reg_prob_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(prob)
    Rsh_Fir_reg_prob_orDefault = Rsh_Fir_reg_prob;
    goto L0_;
  }

L0_:;
  // st prob = prob_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_prob_orDefault, RHO);
  (void)(Rsh_Fir_reg_prob_orDefault);
  // classes_isMissing = missing.0(classes)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_reg_classes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if classes_isMissing then L1(365.0) else L1(classes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classes_isMissing)) {
  // L1(365.0)
    Rsh_Fir_reg_classes_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(classes)
    Rsh_Fir_reg_classes_orDefault = Rsh_Fir_reg_classes;
    goto L1_;
  }

L1_:;
  // st classes = classes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_classes_orDefault, RHO);
  (void)(Rsh_Fir_reg_classes_orDefault);
  // coincident_isMissing = missing.0(coincident)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_coincident;
  Rsh_Fir_reg_coincident_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if coincident_isMissing then L2(2.0) else L2(coincident)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_coincident_isMissing)) {
  // L2(2.0)
    Rsh_Fir_reg_coincident_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(coincident)
    Rsh_Fir_reg_coincident_orDefault = Rsh_Fir_reg_coincident;
    goto L2_;
  }

L2_:;
  // st coincident = coincident_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_coincident_orDefault, RHO);
  (void)(Rsh_Fir_reg_coincident_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L3_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L27() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L27()
    goto L27_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // coincident1 = ld coincident
  Rsh_Fir_reg_coincident1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L6_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L8_:;
  // sym1 = ldf exp
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf exp in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L10_:;
  // st N = r16
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym6 = ldf ceiling
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf ceiling in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard6 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L11_:;
  // r24 = `*`(r21, r22)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // sym3 = ldf lgamma
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf lgamma in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L12_:;
  // r32 = `+`(r28, r29)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // sym4 = ldf log
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf log in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L13_:;
  // r47 = `+`(r36, r37)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // k6 = ld k
  Rsh_Fir_reg_k6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L14_:;
  // r45 = `-`(<missing>, r42)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // r46 = log(r45, 2.718281828459045)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L13(r41, r46)
  // L13(r41, r46)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r46_;
  goto L13_;

L15_:;
  // st N = r51
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // pbirthday = ldf pbirthday
  Rsh_Fir_reg_pbirthday = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

L16_:;
  // pbirthday2 = ldf pbirthday
  Rsh_Fir_reg_pbirthday2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

L17_:;
  // goto L19()
  // L19()
  goto L19_;

L18_:;
  // pbirthday1 = ldf pbirthday
  Rsh_Fir_reg_pbirthday1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

L19_:;
  // N18 = ld N
  Rsh_Fir_reg_N18_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L86() else D32()
  // L86()
  goto L86_;

L20_:;
  // goto L19()
  // L19()
  goto L19_;

L21_:;
  // goto L19()
  // L19()
  goto L19_;

L22_:;
  // pbirthday3 = ldf pbirthday
  Rsh_Fir_reg_pbirthday3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

L23_:;
  // prob1 = ld prob
  Rsh_Fir_reg_prob1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym prob>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [prob1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_prob1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // prob2 = force? prob1
  Rsh_Fir_reg_prob2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob1_);
  // checkMissing(prob2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_prob2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn length(prob2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_prob2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L26() else D1()
  // L26()
  goto L26_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L27_:;
  // prob3 = ld prob
  Rsh_Fir_reg_prob3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

D2_:;
  // deopt 7 [prob3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_prob3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // prob4 = force? prob3
  Rsh_Fir_reg_prob4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob3_);
  // checkMissing(prob4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_prob4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return prob4
  return Rsh_Fir_reg_prob4_;

D3_:;
  // deopt 12 [coincident1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_coincident1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L31_:;
  // coincident2 = force? coincident1
  Rsh_Fir_reg_coincident2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coincident1_);
  // checkMissing(coincident2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_coincident2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // st k = coincident2
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_coincident2_, RHO);
  (void)(Rsh_Fir_reg_coincident2_);
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 15 [classes1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // st c = classes2
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_classes2_, RHO);
  (void)(Rsh_Fir_reg_classes2_);
  // prob5 = ld prob
  Rsh_Fir_reg_prob5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 18 [prob5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_prob5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // prob6 = force? prob5
  Rsh_Fir_reg_prob6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob5_);
  // checkMissing(prob6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_prob6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // st p = prob6
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_prob6_, RHO);
  (void)(Rsh_Fir_reg_prob6_);
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 21 [p]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r6 = `<=`(p1, 0.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L6()
    goto L6_;
  }

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 20);

D7_:;
  // deopt 30 [p2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r9 = `>=`(p3, 1.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c2 then L39() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L8()
    goto L8_;
  }

L39_:;
  // c3 = ld c
  Rsh_Fir_reg_c3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 34 [c3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L40_:;
  // c4 = force? c3
  Rsh_Fir_reg_c4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c3_);
  // checkMissing(c4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

D9_:;
  // deopt 35 [c4, k]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r10 = `-`(k1, 1.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // r11 = `*`(c4, r10)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // r12 = `+`(r11, 1.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

L44_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r15 = dyn base1(<lang `/`(`(`(`+`(`+`(`*`(`(`(`-`(k, 1.0)), log(c)), lgamma(`+`(k, 1.0))), log(`-`(log1p(`-`(p)))))), k)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L10_;

D10_:;
  // deopt 46 [k2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r17 = `-`(k3, 1.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // c5 = ld c
  Rsh_Fir_reg_c5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

L48_:;
  // r20 = dyn base2(<sym c>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L11(r17, r20)
  // L11(r17, r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
  goto L11_;

D11_:;
  // deopt 50 [r17, c5]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // c6 = force? c5
  Rsh_Fir_reg_c6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c5_);
  // checkMissing(c6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r23 = log(c6, 2.718281828459045)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L11(r17, r23)
  // L11(r17, r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

L50_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

L51_:;
  // r27 = dyn base3(<lang `+`(k, 1.0)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L12(r24, r27)
  // L12(r24, r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
  goto L12_;

D12_:;
  // deopt 54 [r24, k4]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L52_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // checkMissing(k5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_k5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r30 = `+`(k5, 1.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_k5_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // r31 = lgamma(r30)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(187, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L12(r24, r31)
  // L12(r24, r31)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r31_;
  goto L12_;

L53_:;
  // sym5 = ldf log1p
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf log1p in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L54_:;
  // r35 = dyn base4(<lang `-`(log1p(`-`(p)))>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L13(r32, r35)
  // L13(r32, r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r35_;
  goto L13_;

L55_:;
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L56_:;
  // r40 = dyn base5(<lang `-`(p)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L14(r32, r40)
  // L14(r32, r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
  goto L14_;

D13_:;
  // deopt 61 [r32, p4]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r43 = `-`(<missing>, p5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // r44 = log1p(r43)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(174, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L14(r32, r44)
  // L14(r32, r44)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r44_;
  goto L14_;

D14_:;
  // deopt 67 [r47, k6]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_k6_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L58_:;
  // k7 = force? k6
  Rsh_Fir_reg_k7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k6_);
  // checkMissing(k7)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_k7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r48 = `/`(r47, k7)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_k7_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // r49 = exp(r48)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(172, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L10(r49)
  // L10(r49)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r49_;
  goto L10_;

L59_:;
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L61() else D15()
  // L61()
  goto L61_;

L60_:;
  // r50 = dyn base6(<sym N>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L15(r50)
  // L15(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L15_;

D15_:;
  // deopt 73 [N]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r52 = ceiling(N1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_N1_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(168, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L15(r52)
  // L15(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L15_;

D16_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p6 = prom<V +>{
  //   N2 = ld N;
  //   N3 = force? N2;
  //   checkMissing(N3);
  //   return N3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_, CCP, RHO);
  // p7 = prom<V +>{
  //   c7 = ld c;
  //   c8 = force? c7;
  //   checkMissing(c8);
  //   return c8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_1, CCP, RHO);
  // p8 = prom<V +>{
  //   k8 = ld k;
  //   k9 = force? k8;
  //   checkMissing(k9);
  //   return k9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_2, CCP, RHO);
  // r56 = dyn pbirthday(p6, p7, p8)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pbirthday, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

D17_:;
  // deopt 82 [r56]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L63_:;
  // prob7 = ld prob
  Rsh_Fir_reg_prob7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

D18_:;
  // deopt 82 [r56, prob7]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_prob7_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L64_:;
  // prob8 = force? prob7
  Rsh_Fir_reg_prob8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob7_);
  // checkMissing(prob8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_prob8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r57 = `<`(r56, prob8)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_prob8_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c9 then L65() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L65()
    goto L65_;
  } else {
  // L16()
    goto L16_;
  }

L65_:;
  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 85 [N4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_N4_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L66_:;
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r58 = `+`(N5, 1.0)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_N5_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // st N = r58
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // goto L18()
  // L18()
  goto L18_;

D20_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p9 = prom<V +>{
  //   N6 = ld N;
  //   N7 = force? N6;
  //   checkMissing(N7);
  //   return N7;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_3, CCP, RHO);
  // p10 = prom<V +>{
  //   c10 = ld c;
  //   c11 = force? c10;
  //   checkMissing(c11);
  //   return c11;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_4, CCP, RHO);
  // p11 = prom<V +>{
  //   k10 = ld k;
  //   k11 = force? k10;
  //   checkMissing(k11);
  //   return k11;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_5, CCP, RHO);
  // r62 = dyn pbirthday1(p9, p10, p11)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pbirthday1_, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L68() else D21()
  // L68()
  goto L68_;

D21_:;
  // deopt 95 [r62]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L68_:;
  // prob9 = ld prob
  Rsh_Fir_reg_prob9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

D22_:;
  // deopt 95 [r62, prob9]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_prob9_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L69_:;
  // prob10 = force? prob9
  Rsh_Fir_reg_prob10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob9_);
  // checkMissing(prob10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_prob10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r63 = `<`(r62, prob10)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_prob10_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c12 then L70() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L70()
    goto L70_;
  } else {
  // L17()
    goto L17_;
  }

L70_:;
  // N8 = ld N
  Rsh_Fir_reg_N8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L71() else D23()
  // L71()
  goto L71_;

D23_:;
  // deopt 98 [N8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_N8_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // N9 = force? N8
  Rsh_Fir_reg_N9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N8_);
  // checkMissing(N9)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_N9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r64 = `+`(N9, 1.0)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // st N = r64
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // goto L18()
  // L18()
  goto L18_;

D24_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p12 = prom<V +>{
  //   N10 = ld N;
  //   N11 = force? N10;
  //   checkMissing(N11);
  //   r66 = `-`(N11, 1.0);
  //   return r66;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_6, CCP, RHO);
  // p13 = prom<V +>{
  //   c13 = ld c;
  //   c14 = force? c13;
  //   checkMissing(c14);
  //   return c14;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_7, CCP, RHO);
  // p14 = prom<V +>{
  //   k12 = ld k;
  //   k13 = force? k12;
  //   checkMissing(k13);
  //   return k13;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_8, CCP, RHO);
  // r70 = dyn pbirthday2(p12, p13, p14)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pbirthday2_, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

D25_:;
  // deopt 111 [r70]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L75_:;
  // prob11 = ld prob
  Rsh_Fir_reg_prob11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

D26_:;
  // deopt 111 [r70, prob11]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_prob11_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L76_:;
  // prob12 = force? prob11
  Rsh_Fir_reg_prob12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob11_);
  // checkMissing(prob12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_prob12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r71 = `>=`(r70, prob12)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_prob12_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c15 then L77() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L77()
    goto L77_;
  } else {
  // L20()
    goto L20_;
  }

L77_:;
  // N12 = ld N
  Rsh_Fir_reg_N12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

D27_:;
  // deopt 114 [N12]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_N12_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L78_:;
  // N13 = force? N12
  Rsh_Fir_reg_N13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N12_);
  // checkMissing(N13)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_N13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r72 = `-`(N13, 1.0)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_N13_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // st N = r72
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // goto L22()
  // L22()
  goto L22_;

D28_:;
  // deopt 120 []
  Rsh_Fir_deopt(120, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p15 = prom<V +>{
  //   N14 = ld N;
  //   N15 = force? N14;
  //   checkMissing(N15);
  //   r73 = `-`(N15, 1.0);
  //   return r73;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_9, CCP, RHO);
  // p16 = prom<V +>{
  //   c16 = ld c;
  //   c17 = force? c16;
  //   checkMissing(c17);
  //   return c17;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_10, CCP, RHO);
  // p17 = prom<V +>{
  //   k14 = ld k;
  //   k15 = force? k14;
  //   checkMissing(k15);
  //   return k15;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3941777471_11, CCP, RHO);
  // r77 = dyn pbirthday3(p15, p16, p17)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pbirthday3_, 3, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 124 [r77]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L80_:;
  // prob13 = ld prob
  Rsh_Fir_reg_prob13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D30()
  // L81()
  goto L81_;

D30_:;
  // deopt 124 [r77, prob13]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_prob13_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L81_:;
  // prob14 = force? prob13
  Rsh_Fir_reg_prob14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob13_);
  // checkMissing(prob14)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_prob14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r78 = `>=`(r77, prob14)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_prob14_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c18 then L82() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L82()
    goto L82_;
  } else {
  // L21()
    goto L21_;
  }

L82_:;
  // N16 = ld N
  Rsh_Fir_reg_N16_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L83() else D31()
  // L83()
  goto L83_;

D31_:;
  // deopt 127 [N16]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_N16_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L83_:;
  // N17 = force? N16
  Rsh_Fir_reg_N17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N16_);
  // checkMissing(N17)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_N17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r79 = `-`(N17, 1.0)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_N17_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // st N = r79
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // goto L22()
  // L22()
  goto L22_;

D32_:;
  // deopt 137 [N18]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_N18_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L86_:;
  // N19 = force? N18
  Rsh_Fir_reg_N19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N18_);
  // checkMissing(N19)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_N19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return N19
  return Rsh_Fir_reg_N19_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_(SEXP CCP, SEXP RHO) {
  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return N3
  return Rsh_Fir_reg_N3_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_1(SEXP CCP, SEXP RHO) {
  // c7 = ld c
  Rsh_Fir_reg_c7_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c8 = force? c7
  Rsh_Fir_reg_c8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c7_);
  // checkMissing(c8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return c8
  return Rsh_Fir_reg_c8_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_2(SEXP CCP, SEXP RHO) {
  // k8 = ld k
  Rsh_Fir_reg_k8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // k9 = force? k8
  Rsh_Fir_reg_k9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k8_);
  // checkMissing(k9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_k9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return k9
  return Rsh_Fir_reg_k9_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_3(SEXP CCP, SEXP RHO) {
  // N6 = ld N
  Rsh_Fir_reg_N6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // N7 = force? N6
  Rsh_Fir_reg_N7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N6_);
  // checkMissing(N7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_N7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return N7
  return Rsh_Fir_reg_N7_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_4(SEXP CCP, SEXP RHO) {
  // c10 = ld c
  Rsh_Fir_reg_c10_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c11 = force? c10
  Rsh_Fir_reg_c11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c10_);
  // checkMissing(c11)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_c11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return c11
  return Rsh_Fir_reg_c11_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_5(SEXP CCP, SEXP RHO) {
  // k10 = ld k
  Rsh_Fir_reg_k10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // k11 = force? k10
  Rsh_Fir_reg_k11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k10_);
  // checkMissing(k11)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_k11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return k11
  return Rsh_Fir_reg_k11_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_6(SEXP CCP, SEXP RHO) {
  // N10 = ld N
  Rsh_Fir_reg_N10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // N11 = force? N10
  Rsh_Fir_reg_N11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N10_);
  // checkMissing(N11)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_N11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r66 = `-`(N11, 1.0)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_N11_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // return r66
  return Rsh_Fir_reg_r66_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_7(SEXP CCP, SEXP RHO) {
  // c13 = ld c
  Rsh_Fir_reg_c13_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c14 = force? c13
  Rsh_Fir_reg_c14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c13_);
  // checkMissing(c14)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_c14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return c14
  return Rsh_Fir_reg_c14_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_8(SEXP CCP, SEXP RHO) {
  // k12 = ld k
  Rsh_Fir_reg_k12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // k13 = force? k12
  Rsh_Fir_reg_k13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k12_);
  // checkMissing(k13)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_k13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return k13
  return Rsh_Fir_reg_k13_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_9(SEXP CCP, SEXP RHO) {
  // N14 = ld N
  Rsh_Fir_reg_N14_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // N15 = force? N14
  Rsh_Fir_reg_N15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N14_);
  // checkMissing(N15)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_N15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r73 = `-`(N15, 1.0)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_N15_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // return r73
  return Rsh_Fir_reg_r73_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_10(SEXP CCP, SEXP RHO) {
  // c16 = ld c
  Rsh_Fir_reg_c16_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c17 = force? c16
  Rsh_Fir_reg_c17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c16_);
  // checkMissing(c17)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_c17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return c17
  return Rsh_Fir_reg_c17_;
}
SEXP Rsh_Fir_user_promise_inner3941777471_11(SEXP CCP, SEXP RHO) {
  // k14 = ld k
  Rsh_Fir_reg_k14_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // k15 = force? k14
  Rsh_Fir_reg_k15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k14_);
  // checkMissing(k15)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_k15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return k15
  return Rsh_Fir_reg_k15_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
