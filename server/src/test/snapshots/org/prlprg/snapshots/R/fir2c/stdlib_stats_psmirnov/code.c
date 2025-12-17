#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2046023802_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2046023802_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2046023802_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_23(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_24(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_25(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_26(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2046023802_27(SEXP CCP, SEXP RHO);
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
  // r = clos inner2046023802
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2046023802_, RHO, CCP);
  // st psmirnov = r
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
SEXP Rsh_Fir_user_function_inner2046023802_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2046023802 dynamic dispatch ([q, sizes, z, alternative, exact, simulate, B, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner2046023802_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2046023802_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2046023802 version 0 (*, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner2046023802/0: expected 9, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_sizes;  // sizes
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_alternative;  // alternative
  SEXP Rsh_Fir_reg_exact;  // exact
  SEXP Rsh_Fir_reg_simulate;  // simulate
  SEXP Rsh_Fir_reg_B;  // B
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_z_isMissing;  // z_isMissing
  SEXP Rsh_Fir_reg_z_orDefault;  // z_orDefault
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
  SEXP Rsh_Fir_reg_exact_isMissing;  // exact_isMissing
  SEXP Rsh_Fir_reg_exact_orDefault;  // exact_orDefault
  SEXP Rsh_Fir_reg_simulate_isMissing;  // simulate_isMissing
  SEXP Rsh_Fir_reg_simulate_orDefault;  // simulate_orDefault
  SEXP Rsh_Fir_reg_B_isMissing;  // B_isMissing
  SEXP Rsh_Fir_reg_B_orDefault;  // B_orDefault
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_alternative1_;  // alternative1
  SEXP Rsh_Fir_reg_alternative2_;  // alternative2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_q5_;  // q5
  SEXP Rsh_Fir_reg_q6_;  // q6
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_q7_;  // q7
  SEXP Rsh_Fir_reg_q8_;  // q8
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_q9_;  // q9
  SEXP Rsh_Fir_reg_q10_;  // q10
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_q11_;  // q11
  SEXP Rsh_Fir_reg_q12_;  // q12
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_log_p3_;  // log_p3
  SEXP Rsh_Fir_reg_log_p4_;  // log_p4
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_IND;  // IND
  SEXP Rsh_Fir_reg_IND1_;  // IND1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_ret;  // ret
  SEXP Rsh_Fir_reg_ret1_;  // ret1
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sizes1_;  // sizes1
  SEXP Rsh_Fir_reg_sizes2_;  // sizes2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sizes3_;  // sizes3
  SEXP Rsh_Fir_reg_sizes4_;  // sizes4
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sizes6_;  // sizes6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sizes7_;  // sizes7
  SEXP Rsh_Fir_reg_sizes8_;  // sizes8
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sizes10_;  // sizes10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_n_x;  // n_x
  SEXP Rsh_Fir_reg_n_x1_;  // n_x1
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_n_y;  // n_y
  SEXP Rsh_Fir_reg_n_y1_;  // n_y1
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_n_x2_;  // n_x2
  SEXP Rsh_Fir_reg_n_x3_;  // n_x3
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_n_y2_;  // n_y2
  SEXP Rsh_Fir_reg_n_y3_;  // n_y3
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_n_x4_;  // n_x4
  SEXP Rsh_Fir_reg_n_x5_;  // n_x5
  SEXP Rsh_Fir_reg_n_y4_;  // n_y4
  SEXP Rsh_Fir_reg_n_y5_;  // n_y5
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_n_x6_;  // n_x6
  SEXP Rsh_Fir_reg_n_x7_;  // n_x7
  SEXP Rsh_Fir_reg_n_y6_;  // n_y6
  SEXP Rsh_Fir_reg_n_y7_;  // n_y7
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_n_x8_;  // n_x8
  SEXP Rsh_Fir_reg_n_x9_;  // n_x9
  SEXP Rsh_Fir_reg_n_y8_;  // n_y8
  SEXP Rsh_Fir_reg_n_y9_;  // n_y9
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_exact1_;  // exact1
  SEXP Rsh_Fir_reg_exact2_;  // exact2
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_simulate1_;  // simulate1
  SEXP Rsh_Fir_reg_simulate2_;  // simulate2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_exact3_;  // exact3
  SEXP Rsh_Fir_reg_exact4_;  // exact4
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_simulate3_;  // simulate3
  SEXP Rsh_Fir_reg_simulate4_;  // simulate4
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_psmirnov_simul;  // psmirnov_simul
  SEXP Rsh_Fir_reg_q13_;  // q13
  SEXP Rsh_Fir_reg_q14_;  // q14
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_q16_;  // q16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_IND2_;  // IND2
  SEXP Rsh_Fir_reg_IND3_;  // IND3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_sizes11_;  // sizes11
  SEXP Rsh_Fir_reg_sizes12_;  // sizes12
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_alternative3_;  // alternative3
  SEXP Rsh_Fir_reg_alternative4_;  // alternative4
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_lower_tail5_;  // lower_tail5
  SEXP Rsh_Fir_reg_lower_tail6_;  // lower_tail6
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_log_p5_;  // log_p5
  SEXP Rsh_Fir_reg_log_p6_;  // log_p6
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_B1_;  // B1
  SEXP Rsh_Fir_reg_B2_;  // B2
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_psmirnov_asymp;  // psmirnov_asymp
  SEXP Rsh_Fir_reg_q17_;  // q17
  SEXP Rsh_Fir_reg_q18_;  // q18
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_q20_;  // q20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_IND4_;  // IND4
  SEXP Rsh_Fir_reg_IND5_;  // IND5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_sizes13_;  // sizes13
  SEXP Rsh_Fir_reg_sizes14_;  // sizes14
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_alternative5_;  // alternative5
  SEXP Rsh_Fir_reg_alternative6_;  // alternative6
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_lower_tail7_;  // lower_tail7
  SEXP Rsh_Fir_reg_lower_tail8_;  // lower_tail8
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_log_p7_;  // log_p7
  SEXP Rsh_Fir_reg_log_p8_;  // log_p8
  SEXP Rsh_Fir_reg_p32_;  // p32
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_IND6_;  // IND6
  SEXP Rsh_Fir_reg_IND7_;  // IND7
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_ret2_;  // ret2
  SEXP Rsh_Fir_reg_ret3_;  // ret3
  SEXP Rsh_Fir_reg_psmirnov_exact;  // psmirnov_exact
  SEXP Rsh_Fir_reg_q21_;  // q21
  SEXP Rsh_Fir_reg_q22_;  // q22
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_q24_;  // q24
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_IND8_;  // IND8
  SEXP Rsh_Fir_reg_IND9_;  // IND9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_p33_;  // p33
  SEXP Rsh_Fir_reg_sizes15_;  // sizes15
  SEXP Rsh_Fir_reg_sizes16_;  // sizes16
  SEXP Rsh_Fir_reg_p34_;  // p34
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_p35_;  // p35
  SEXP Rsh_Fir_reg_alternative7_;  // alternative7
  SEXP Rsh_Fir_reg_alternative8_;  // alternative8
  SEXP Rsh_Fir_reg_p36_;  // p36
  SEXP Rsh_Fir_reg_lower_tail9_;  // lower_tail9
  SEXP Rsh_Fir_reg_lower_tail10_;  // lower_tail10
  SEXP Rsh_Fir_reg_p37_;  // p37
  SEXP Rsh_Fir_reg_log_p9_;  // log_p9
  SEXP Rsh_Fir_reg_log_p10_;  // log_p10
  SEXP Rsh_Fir_reg_p38_;  // p38
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_psmirnov_simul1_;  // psmirnov_simul1
  SEXP Rsh_Fir_reg_q25_;  // q25
  SEXP Rsh_Fir_reg_q26_;  // q26
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_q28_;  // q28
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_IND10_;  // IND10
  SEXP Rsh_Fir_reg_IND11_;  // IND11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_p39_;  // p39
  SEXP Rsh_Fir_reg_sizes17_;  // sizes17
  SEXP Rsh_Fir_reg_sizes18_;  // sizes18
  SEXP Rsh_Fir_reg_p40_;  // p40
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_z6_;  // z6
  SEXP Rsh_Fir_reg_p41_;  // p41
  SEXP Rsh_Fir_reg_alternative9_;  // alternative9
  SEXP Rsh_Fir_reg_alternative10_;  // alternative10
  SEXP Rsh_Fir_reg_p42_;  // p42
  SEXP Rsh_Fir_reg_lower_tail11_;  // lower_tail11
  SEXP Rsh_Fir_reg_lower_tail12_;  // lower_tail12
  SEXP Rsh_Fir_reg_p43_;  // p43
  SEXP Rsh_Fir_reg_log_p11_;  // log_p11
  SEXP Rsh_Fir_reg_log_p12_;  // log_p12
  SEXP Rsh_Fir_reg_p44_;  // p44
  SEXP Rsh_Fir_reg_B3_;  // B3
  SEXP Rsh_Fir_reg_B4_;  // B4
  SEXP Rsh_Fir_reg_p45_;  // p45
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_IND12_;  // IND12
  SEXP Rsh_Fir_reg_IND13_;  // IND13
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_ret4_;  // ret4
  SEXP Rsh_Fir_reg_ret5_;  // ret5

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_sizes = PARAMS[1];
  Rsh_Fir_reg_z = PARAMS[2];
  Rsh_Fir_reg_alternative = PARAMS[3];
  Rsh_Fir_reg_exact = PARAMS[4];
  Rsh_Fir_reg_simulate = PARAMS[5];
  Rsh_Fir_reg_B = PARAMS[6];
  Rsh_Fir_reg_lower_tail = PARAMS[7];
  Rsh_Fir_reg_log_p = PARAMS[8];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st sizes = sizes
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sizes, RHO);
  (void)(Rsh_Fir_reg_sizes);
  // z_isMissing = missing.0(z)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_z;
  Rsh_Fir_reg_z_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if z_isMissing then L0(NULL) else L0(z)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_z_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_z_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(z)
    Rsh_Fir_reg_z_orDefault = Rsh_Fir_reg_z;
    goto L0_;
  }

L0_:;
  // st z = z_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_z_orDefault, RHO);
  (void)(Rsh_Fir_reg_z_orDefault);
  // alternative_isMissing = missing.0(alternative)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_alternative;
  Rsh_Fir_reg_alternative_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if alternative_isMissing then L1() else L2(alternative)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_alternative_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(alternative)
    Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_alternative;
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
  //   r2 = dyn c("two.sided", "less", "greater");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("two.sided", "less", "greater");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st alternative = alternative_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_alternative_orDefault, RHO);
  (void)(Rsh_Fir_reg_alternative_orDefault);
  // exact_isMissing = missing.0(exact)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_exact;
  Rsh_Fir_reg_exact_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if exact_isMissing then L3(TRUE) else L3(exact)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_exact_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_exact_orDefault = Rsh_const(CCP, 10);
    goto L3_;
  } else {
  // L3(exact)
    Rsh_Fir_reg_exact_orDefault = Rsh_Fir_reg_exact;
    goto L3_;
  }

L3_:;
  // st exact = exact_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_exact_orDefault, RHO);
  (void)(Rsh_Fir_reg_exact_orDefault);
  // simulate_isMissing = missing.0(simulate)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_simulate;
  Rsh_Fir_reg_simulate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if simulate_isMissing then L4(FALSE) else L4(simulate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_simulate_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_simulate_orDefault = Rsh_const(CCP, 12);
    goto L4_;
  } else {
  // L4(simulate)
    Rsh_Fir_reg_simulate_orDefault = Rsh_Fir_reg_simulate;
    goto L4_;
  }

L4_:;
  // st simulate = simulate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_simulate_orDefault, RHO);
  (void)(Rsh_Fir_reg_simulate_orDefault);
  // B_isMissing = missing.0(B)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_B;
  Rsh_Fir_reg_B_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if B_isMissing then L5(2000.0) else L5(B)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_B_isMissing)) {
  // L5(2000.0)
    Rsh_Fir_reg_B_orDefault = Rsh_const(CCP, 14);
    goto L5_;
  } else {
  // L5(B)
    Rsh_Fir_reg_B_orDefault = Rsh_Fir_reg_B;
    goto L5_;
  }

L5_:;
  // st B = B_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_B_orDefault, RHO);
  (void)(Rsh_Fir_reg_B_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if lower_tail_isMissing then L6(TRUE) else L6(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L6(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 10);
    goto L6_;
  } else {
  // L6(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L6_;
  }

L6_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if log_p_isMissing then L7(FALSE) else L7(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 12);
    goto L7_;
  } else {
  // L7(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L7_;
  }

L7_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L56() else D0()
  // L56()
  goto L56_;

L8_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L62() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L62()
    goto L62_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L71() else D7()
  // L71()
  goto L71_;

L10_:;
  // r11 = `!`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c3 then L66() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L66()
    goto L66_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 3);
  goto L12_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // q5 = ld q
  Rsh_Fir_reg_q5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D9()
  // L73()
  goto L73_;

L14_:;
  // st i1 = r17
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // l1 = ld ret
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c4 = `is.object`(l1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c4 then L78() else L79(NA_REAL, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L78()
    goto L78_;
  } else {
  // L79(NA_REAL, l1)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L79_;
  }

L15_:;
  // st ret = dx1
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard4 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L16_:;
  // c5 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c5 then L86() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L86()
    goto L86_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L22()
  // L22()
  goto L22_;

L18_:;
  // goto L20()
  // L20()
  goto L20_;

L19_:;
  // st p = r30
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L94() else D18()
  // L94()
  goto L94_;

L21_:;
  // st ret = dx3
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym6 = ldf any
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base6 = ldf any in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L23_:;
  // c8 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c8 then L104() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L104()
    goto L104_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L30()
  // L30()
  goto L30_;

L25_:;
  // st p = r39
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // log_p3 = ld `log.p`
  Rsh_Fir_reg_log_p3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L109() else D24()
  // L109()
  goto L109_;

L26_:;
  // goto L28()
  // L28()
  goto L28_;

L27_:;
  // st p = r42
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // p13 = ld p
  Rsh_Fir_reg_p13_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L115() else D26()
  // L115()
  goto L115_;

L29_:;
  // st ret = dx5
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

L31_:;
  // r54 = `!`(r52)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c11 then L127() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L127()
    goto L127_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard10 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L34_:;
  // r60 = `!=`(r58, 2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c12 then L135() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L135()
    goto L135_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // sizes3 = ld sizes
  Rsh_Fir_reg_sizes3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L139() else D37()
  // L139()
  goto L139_;

L37_:;
  // st `n.x` = dx7
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sizes7 = ld sizes
  Rsh_Fir_reg_sizes7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L143() else D38()
  // L143()
  goto L143_;

L38_:;
  // st `n.y` = dx9
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // n_x = ld `n.x`
  Rsh_Fir_reg_n_x = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L147() else D39()
  // L147()
  goto L147_;

L39_:;
  // goto L40()
  // L40()
  goto L40_;

L40_:;
  // n_y = ld `n.y`
  Rsh_Fir_reg_n_y = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L152() else D42()
  // L152()
  goto L152_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // sym11 = ldf floor
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base11 = ldf floor in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard11 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L43_:;
  // st `n.x` = r72
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // sym12 = ldf floor
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base12 = ldf floor in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard12 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L44_:;
  // st `n.y` = r75
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // n_x4 = ld `n.x`
  Rsh_Fir_reg_n_x4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L163() else D47()
  // L163()
  goto L163_;

L45_:;
  // st exact = c19
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_c19_, RHO);
  (void)(Rsh_Fir_reg_c19_);
  // exact3 = ld exact
  Rsh_Fir_reg_exact3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L173() else D55()
  // L173()
  goto L173_;

L46_:;
  // psmirnov_exact = ldf psmirnov_exact
  Rsh_Fir_reg_psmirnov_exact = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L189() else D63()
  // L189()
  goto L189_;

L47_:;
  // psmirnov_asymp = ldf psmirnov_asymp
  Rsh_Fir_reg_psmirnov_asymp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L180() else D59()
  // L180()
  goto L180_;

L48_:;
  // l10 = ld ret
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c27 = `is.object`(l10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c27 then L182() else L183(r92, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L182()
    goto L182_;
  } else {
  // L183(r92, l10)
    Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r92_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L183_;
  }

L49_:;
  // st ret = dx15
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // ret2 = ld ret
  Rsh_Fir_reg_ret2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L186() else D62()
  // L186()
  goto L186_;

L51_:;
  // c29 = `as.logical`(r116)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c29 then L198() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L198()
    goto L198_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r122 = dyn all(r118)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L197() else D67()
  // L197()
  goto L197_;

L53_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L201() else D69()
  // L201()
  goto L201_;

L54_:;
  // l13 = ld ret
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c31 = `is.object`(l13)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c31 then L205() else L206(r125, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L205()
    goto L205_;
  } else {
  // L206(r125, l13)
    Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r125_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L206_;
  }

L55_:;
  // st ret = dx21
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // ret4 = ld ret
  Rsh_Fir_reg_ret4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L209() else D74()
  // L209()
  goto L209_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p1 = prom<V +>{
  //   alternative1 = ld alternative;
  //   alternative2 = force? alternative1;
  //   checkMissing(alternative2);
  //   return alternative2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L57() else D1()
  // L57()
  goto L57_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L57_:;
  // st alternative = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D2()
  // L60()
  goto L60_;

L59_:;
  // r6 = dyn base1(<sym q>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r6)
  // L8(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L8_;

D2_:;
  // deopt 7 [q1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L60_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r8 = dyn is_numeric(q2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L61() else D3()
  // L61()
  goto L61_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L8_;

L62_:;
  // sym2 = ldf `is.double`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf `is.double` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D4()
  // L65()
  goto L65_;

L64_:;
  // r9 = dyn base2(<sym q>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L10(r9)
  // L10(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L10_;

D4_:;
  // deopt 12 [q3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L65_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c2 = `is.double`(q4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(387, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L10(c2)
  // L10(c2)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c2_;
  goto L10_;

L66_:;
  // l = ld q
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L67() else D5()
  // L67()
  goto L67_;

D5_:;
  // deopt 19 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_const(CCP, 38);
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L67_:;
  // r12 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L68() else D6()
  // L68()
  goto L68_;

D6_:;
  // deopt 21 ["double", r12]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L68_:;
  // st q = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L12("double")
  // L12("double")
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 38);
  goto L12_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // r15 = dyn stop("argument 'q' must be numeric")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L72() else D8()
  // L72()
  goto L72_;

D8_:;
  // deopt 28 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L13()
  // L13()
  goto L13_;

D9_:;
  // deopt 29 [q5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L73_:;
  // q6 = force? q5
  Rsh_Fir_reg_q6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q5_);
  // checkMissing(q6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_q6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // st ret = q6
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_q6_, RHO);
  (void)(Rsh_Fir_reg_q6_);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // q7 = ld q
  Rsh_Fir_reg_q7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L76() else D10()
  // L76()
  goto L76_;

L75_:;
  // r16 = dyn base3(<sym q>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L14(r16)
  // L14(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L14_;

D10_:;
  // deopt 34 [q7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_q7_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L76_:;
  // q8 = force? q7
  Rsh_Fir_reg_q8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q7_);
  // checkMissing(q8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_q8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r18 = dyn is_na(q8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_q8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L77() else D11()
  // L77()
  goto L77_;

D11_:;
  // deopt 37 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L14(r18)
  // L14(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L14_;

L78_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, NA_REAL)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc then L80() else L79(NA_REAL, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L80()
    goto L80_;
  } else {
  // L79(NA_REAL, dr)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 22);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L79_;
  }

L79_:;
  // i1 = ld i1
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L81() else D12()
  // L81()
  goto L81_;

L80_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D12_:;
  // deopt 42 [r20, l3, NA_REAL, i1]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(42, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L81_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r23 = dyn ___(l3, NA_REAL, i2)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L15(r23)
  // L15(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L15_;

L82_:;
  // q9 = ld q
  Rsh_Fir_reg_q9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D13()
  // L84()
  goto L84_;

L83_:;
  // r24 = dyn base4(<lang `<-`(i2, `(`(`<=`(q, 0.0)))>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L16(r24)
  // L16(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L16_;

D13_:;
  // deopt 48 [q9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_q9_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L84_:;
  // q10 = force? q9
  Rsh_Fir_reg_q10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q9_);
  // checkMissing(q10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_q10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r26 = `<=`(q10, 0.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_q10_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // st i2 = r26
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r27 = dyn any(r26)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L85() else D14()
  // L85()
  goto L85_;

D14_:;
  // deopt 54 [r27]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L16(r27)
  // L16(r27)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r27_;
  goto L16_;

L86_:;
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L87() else D15()
  // L87()
  goto L87_;

D15_:;
  // deopt 56 [1.0, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L87_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r28 = `-`(1.0, lower_tail2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // st p = r28
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L88() else D16()
  // L88()
  goto L88_;

D16_:;
  // deopt 60 [log_p1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L88_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(log_p2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_log_p2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c6 then L89() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L89()
    goto L89_;
  } else {
  // L18()
    goto L18_;
  }

L89_:;
  // sym5 = ldf log
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base5 = ldf log in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard5 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L90_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L92() else D17()
  // L92()
  goto L92_;

L91_:;
  // r29 = dyn base5(<sym p>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L19(r29)
  // L19(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L19_;

D17_:;
  // deopt 63 [p2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L92_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r31 = log(p3, 2.718281828459045)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L19(r31)
  // L19(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L19_;

D18_:;
  // deopt 69 [p4]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L94_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // l4 = ld ret
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c7 = `is.object`(l4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c7 then L95() else L96(p5, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L95()
    goto L95_;
  } else {
  // L96(p5, l4)
    Rsh_Fir_reg_p7_ = Rsh_Fir_reg_p5_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L96_;
  }

L95_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l4, p5)
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args64[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args64);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc1 then L97() else L96(p5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L97()
    goto L97_;
  } else {
  // L96(p5, dr2)
    Rsh_Fir_reg_p7_ = Rsh_Fir_reg_p5_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr2_;
    goto L96_;
  }

L96_:;
  // i3 = ld i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L98() else D19()
  // L98()
  goto L98_;

L97_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L21(p5, dx2)
  // L21(p5, dx2)
  Rsh_Fir_reg_p9_ = Rsh_Fir_reg_p5_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L21_;

D19_:;
  // deopt 72 [p7, l6, p5, i3]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(72, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L98_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r33 = dyn ___1(l6, p5, i4)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L21(p7, r33)
  // L21(p7, r33)
  Rsh_Fir_reg_p9_ = Rsh_Fir_reg_p7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r33_;
  goto L21_;

L100_:;
  // q11 = ld q
  Rsh_Fir_reg_q11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L102() else D20()
  // L102()
  goto L102_;

L101_:;
  // r34 = dyn base6(<lang `<-`(i3, `(`(`>`(q, 1.0)))>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L23(r34)
  // L23(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L23_;

D20_:;
  // deopt 80 [q11]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_q11_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L102_:;
  // q12 = force? q11
  Rsh_Fir_reg_q12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q11_);
  // checkMissing(q12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_q12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r36 = `>`(q12, 1.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_q12_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // st i3 = r36
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r37 = dyn any1(r36)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L103() else D21()
  // L103()
  goto L103_;

D21_:;
  // deopt 86 [r37]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L23(r37)
  // L23(r37)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L23_;

L104_:;
  // sym7 = ldf `as.numeric`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base7 = ldf `as.numeric` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard7 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L105_:;
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L107() else D22()
  // L107()
  goto L107_;

L106_:;
  // r38 = dyn base7(<sym lower.tail>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L25(r38)
  // L25(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L25_;

D22_:;
  // deopt 89 [lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L107_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r40 = dyn as_numeric(lower_tail4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_lower_tail4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L108() else D23()
  // L108()
  goto L108_;

D23_:;
  // deopt 92 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L25(r40)
  // L25(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L25_;

D24_:;
  // deopt 94 [log_p3]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_log_p3_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L109_:;
  // log_p4 = force? log_p3
  Rsh_Fir_reg_log_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p3_);
  // checkMissing(log_p4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_log_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(log_p4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_log_p4_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c9 then L110() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L110()
    goto L110_;
  } else {
  // L26()
    goto L26_;
  }

L110_:;
  // sym8 = ldf log
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base8 = ldf log in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard8 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

L112_:;
  // r41 = dyn base8(<sym p>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L27(r41)
  // L27(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L27_;

D25_:;
  // deopt 97 [p11]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L113_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r43 = log(p12, 2.718281828459045)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L27(r43)
  // L27(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L27_;

D26_:;
  // deopt 103 [p13]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L115_:;
  // p14 = force? p13
  Rsh_Fir_reg_p14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p13_);
  // checkMissing(p14)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // l7 = ld ret
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c10 = `is.object`(l7)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c10 then L116() else L117(p14, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L116()
    goto L116_;
  } else {
  // L117(p14, l7)
    Rsh_Fir_reg_p16_ = Rsh_Fir_reg_p14_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L117_;
  }

L116_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l7, p14)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args84);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc2 then L118() else L117(p14, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L118()
    goto L118_;
  } else {
  // L117(p14, dr4)
    Rsh_Fir_reg_p16_ = Rsh_Fir_reg_p14_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr4_;
    goto L117_;
  }

L117_:;
  // i5 = ld i3
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L119() else D27()
  // L119()
  goto L119_;

L118_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L29(p14, dx4)
  // L29(p14, dx4)
  Rsh_Fir_reg_p18_ = Rsh_Fir_reg_p14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L29_;

D27_:;
  // deopt 106 [p16, l9, p14, i5]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(106, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L119_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r45 = dyn ___2(l9, p14, i6)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L29(p16, r45)
  // L29(p16, r45)
  Rsh_Fir_reg_p18_ = Rsh_Fir_reg_p16_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r45_;
  goto L29_;

D28_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L121_:;
  // p20 = prom<V +>{
  //   i7 = ld i1;
  //   i8 = force? i7;
  //   checkMissing(i8);
  //   i9 = ld i2;
  //   i10 = force? i9;
  //   checkMissing(i10);
  //   r46 = `||`(i8, i10);
  //   i11 = ld i3;
  //   i12 = force? i11;
  //   checkMissing(i12);
  //   r47 = `||`(r46, i12);
  //   r48 = `!`(r47);
  //   return r48;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_2, CCP, RHO);
  // r50 = dyn which(p20)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L122() else D29()
  // L122()
  goto L122_;

D29_:;
  // deopt 115 [r50]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L122_:;
  // st IND = r50
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard9 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L123_:;
  // IND = ld IND
  Rsh_Fir_reg_IND = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L125() else D30()
  // L125()
  goto L125_;

L124_:;
  // r51 = dyn base9(<sym IND>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L31(r51)
  // L31(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L31_;

D30_:;
  // deopt 119 [IND]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_IND;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L125_:;
  // IND1 = force? IND
  Rsh_Fir_reg_IND1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND);
  // checkMissing(IND1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_IND1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r53 = dyn length(IND1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_IND1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L126() else D31()
  // L126()
  goto L126_;

D31_:;
  // deopt 122 [r53]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L126_:;
  // goto L31(r53)
  // L31(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L31_;

L127_:;
  // ret = ld ret
  Rsh_Fir_reg_ret = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L128() else D32()
  // L128()
  goto L128_;

D32_:;
  // deopt 124 [ret]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_ret;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L128_:;
  // ret1 = force? ret
  Rsh_Fir_reg_ret1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret);
  // checkMissing(ret1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_ret1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret1
  return Rsh_Fir_reg_ret1_;

L131_:;
  // sizes1 = ld sizes
  Rsh_Fir_reg_sizes1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L133() else D33()
  // L133()
  goto L133_;

L132_:;
  // r57 = dyn base10(<sym sizes>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L34(r57)
  // L34(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L34_;

D33_:;
  // deopt 131 [sizes1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_sizes1_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L133_:;
  // sizes2 = force? sizes1
  Rsh_Fir_reg_sizes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes1_);
  // checkMissing(sizes2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sizes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r59 = dyn length1(sizes2)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sizes2_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L134() else D34()
  // L134()
  goto L134_;

D34_:;
  // deopt 134 [r59]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L34(r59)
  // L34(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L34_;

L135_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L136() else D35()
  // L136()
  goto L136_;

D35_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L136_:;
  // r61 = dyn stop1("argument 'sizes' must be a vector of length 2")
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L137() else D36()
  // L137()
  goto L137_;

D36_:;
  // deopt 140 [r61]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L36()
  // L36()
  goto L36_;

D37_:;
  // deopt 143 [sizes3]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_sizes3_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L139_:;
  // sizes4 = force? sizes3
  Rsh_Fir_reg_sizes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes3_);
  // checkMissing(sizes4)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sizes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(sizes4)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sizes4_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c13 then L140() else L141(sizes4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L140()
    goto L140_;
  } else {
  // L141(sizes4)
    Rsh_Fir_reg_sizes6_ = Rsh_Fir_reg_sizes4_;
    goto L141_;
  }

L140_:;
  // dr6 = tryDispatchBuiltin.1("[", sizes4)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_sizes4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc3 then L142() else L141(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L142()
    goto L142_;
  } else {
  // L141(dr6)
    Rsh_Fir_reg_sizes6_ = Rsh_Fir_reg_dr6_;
    goto L141_;
  }

L141_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r63 = dyn __(sizes6, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sizes6_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L37(r63)
  // L37(r63)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r63_;
  goto L37_;

L142_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L37(dx6)
  // L37(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L37_;

D38_:;
  // deopt 149 [sizes7]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_sizes7_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L143_:;
  // sizes8 = force? sizes7
  Rsh_Fir_reg_sizes8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes7_);
  // checkMissing(sizes8)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sizes8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(sizes8)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sizes8_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c14 then L144() else L145(sizes8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L144()
    goto L144_;
  } else {
  // L145(sizes8)
    Rsh_Fir_reg_sizes10_ = Rsh_Fir_reg_sizes8_;
    goto L145_;
  }

L144_:;
  // dr8 = tryDispatchBuiltin.1("[", sizes8)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_sizes8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc4 then L146() else L145(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L146()
    goto L146_;
  } else {
  // L145(dr8)
    Rsh_Fir_reg_sizes10_ = Rsh_Fir_reg_dr8_;
    goto L145_;
  }

L145_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r64 = dyn __1(sizes10, 2)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sizes10_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L38(r64)
  // L38(r64)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r64_;
  goto L38_;

L146_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L38(dx8)
  // L38(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L38_;

D39_:;
  // deopt 155 [n_x]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_n_x;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L147_:;
  // n_x1 = force? n_x
  Rsh_Fir_reg_n_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x);
  // checkMissing(n_x1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_n_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r65 = `<`(n_x1, 1.0)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_n_x1_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c15 then L148() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L148()
    goto L148_;
  } else {
  // L39()
    goto L39_;
  }

L148_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L149() else D40()
  // L149()
  goto L149_;

D40_:;
  // deopt 160 []
  Rsh_Fir_deopt(160, 0, NULL, CCP, RHO);
  return R_NilValue;

L149_:;
  // r66 = dyn stop2("not enough 'x' data")
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L150() else D41()
  // L150()
  goto L150_;

D41_:;
  // deopt 162 [r66]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L40()
  // L40()
  goto L40_;

D42_:;
  // deopt 165 [n_y]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_n_y;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L152_:;
  // n_y1 = force? n_y
  Rsh_Fir_reg_n_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y);
  // checkMissing(n_y1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_n_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r68 = `<`(n_y1, 1.0)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_n_y1_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if c16 then L153() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L153()
    goto L153_;
  } else {
  // L41()
    goto L41_;
  }

L153_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L154() else D43()
  // L154()
  goto L154_;

D43_:;
  // deopt 170 []
  Rsh_Fir_deopt(170, 0, NULL, CCP, RHO);
  return R_NilValue;

L154_:;
  // r69 = dyn stop3("not enough 'y' data")
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L155() else D44()
  // L155()
  goto L155_;

D44_:;
  // deopt 172 [r69]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L155_:;
  // goto L42()
  // L42()
  goto L42_;

L157_:;
  // n_x2 = ld `n.x`
  Rsh_Fir_reg_n_x2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L159() else D45()
  // L159()
  goto L159_;

L158_:;
  // r71 = dyn base11(<sym n.x>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L43(r71)
  // L43(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L43_;

D45_:;
  // deopt 176 [n_x2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_n_x2_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L159_:;
  // n_x3 = force? n_x2
  Rsh_Fir_reg_n_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x2_);
  // checkMissing(n_x3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_n_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // r73 = floor(n_x3)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_n_x3_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L43(r73)
  // L43(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L43_;

L160_:;
  // n_y2 = ld `n.y`
  Rsh_Fir_reg_n_y2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L162() else D46()
  // L162()
  goto L162_;

L161_:;
  // r74 = dyn base12(<sym n.y>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L44(r74)
  // L44(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L44_;

D46_:;
  // deopt 181 [n_y2]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_n_y2_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L162_:;
  // n_y3 = force? n_y2
  Rsh_Fir_reg_n_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y2_);
  // checkMissing(n_y3)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_n_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r76 = floor(n_y3)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_n_y3_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L44(r76)
  // L44(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L44_;

D47_:;
  // deopt 185 [n_x4]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_n_x4_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L163_:;
  // n_x5 = force? n_x4
  Rsh_Fir_reg_n_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x4_);
  // checkMissing(n_x5)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_n_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // n_y4 = ld `n.y`
  Rsh_Fir_reg_n_y4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L164() else D48()
  // L164()
  goto L164_;

D48_:;
  // deopt 186 [n_x5, n_y4]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_n_x5_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_n_y4_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L164_:;
  // n_y5 = force? n_y4
  Rsh_Fir_reg_n_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y4_);
  // checkMissing(n_y5)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_n_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r77 = `+`(n_x5, n_y5)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_n_x5_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_n_y5_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // st N = r77
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // n_x6 = ld `n.x`
  Rsh_Fir_reg_n_x6_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L165() else D49()
  // L165()
  goto L165_;

D49_:;
  // deopt 190 [n_x6]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_n_x6_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L165_:;
  // n_x7 = force? n_x6
  Rsh_Fir_reg_n_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x6_);
  // checkMissing(n_x7)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_n_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // n_y6 = ld `n.y`
  Rsh_Fir_reg_n_y6_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L166() else D50()
  // L166()
  goto L166_;

D50_:;
  // deopt 191 [n_x7, n_y6]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_n_x7_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_n_y6_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L166_:;
  // n_y7 = force? n_y6
  Rsh_Fir_reg_n_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y6_);
  // checkMissing(n_y7)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_n_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // r78 = `*`(n_x7, n_y7)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_n_x7_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_n_y7_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // n_x8 = ld `n.x`
  Rsh_Fir_reg_n_x8_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L167() else D51()
  // L167()
  goto L167_;

D51_:;
  // deopt 193 [r78, n_x8]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_n_x8_;
  Rsh_Fir_deopt(193, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L167_:;
  // n_x9 = force? n_x8
  Rsh_Fir_reg_n_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x8_);
  // checkMissing(n_x9)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_n_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // n_y8 = ld `n.y`
  Rsh_Fir_reg_n_y8_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L168() else D52()
  // L168()
  goto L168_;

D52_:;
  // deopt 194 [r78, n_x9, n_y8]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_n_x9_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_n_y8_;
  Rsh_Fir_deopt(194, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L168_:;
  // n_y9 = force? n_y8
  Rsh_Fir_reg_n_y9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y8_);
  // checkMissing(n_y9)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_n_y9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // r79 = `+`(n_x9, n_y9)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_n_x9_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_n_y9_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // r80 = `/`(r78, r79)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // st n = r80
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // exact1 = ld exact
  Rsh_Fir_reg_exact1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L169() else D53()
  // L169()
  goto L169_;

D53_:;
  // deopt 199 [exact1]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_exact1_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L169_:;
  // exact2 = force? exact1
  Rsh_Fir_reg_exact2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact1_);
  // checkMissing(exact2)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_exact2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(exact2)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_exact2_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c17 then L170() else L45(c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L170()
    goto L170_;
  } else {
  // L45(c17)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c17_;
    goto L45_;
  }

L170_:;
  // simulate1 = ld simulate
  Rsh_Fir_reg_simulate1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L171() else D54()
  // L171()
  goto L171_;

D54_:;
  // deopt 201 [c17, simulate1]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_simulate1_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L171_:;
  // simulate2 = force? simulate1
  Rsh_Fir_reg_simulate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simulate1_);
  // checkMissing(simulate2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_simulate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // r81 = `!`(simulate2)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_simulate2_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c17, c20)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L45(c21)
  // L45(c21)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c21_;
  goto L45_;

D55_:;
  // deopt 206 [exact3]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_exact3_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L173_:;
  // exact4 = force? exact3
  Rsh_Fir_reg_exact4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact3_);
  // checkMissing(exact4)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_exact4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // r82 = `!`(exact4)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_exact4_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if c23 then L174() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L174()
    goto L174_;
  } else {
  // L46()
    goto L46_;
  }

L174_:;
  // simulate3 = ld simulate
  Rsh_Fir_reg_simulate3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L175() else D56()
  // L175()
  goto L175_;

D56_:;
  // deopt 209 [simulate3]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_simulate3_;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L175_:;
  // simulate4 = force? simulate3
  Rsh_Fir_reg_simulate4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simulate3_);
  // checkMissing(simulate4)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_simulate4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(simulate4)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_simulate4_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if c24 then L176() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L176()
    goto L176_;
  } else {
  // L47()
    goto L47_;
  }

L176_:;
  // psmirnov_simul = ldf psmirnov_simul
  Rsh_Fir_reg_psmirnov_simul = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L177() else D57()
  // L177()
  goto L177_;

D57_:;
  // deopt 212 []
  Rsh_Fir_deopt(212, 0, NULL, CCP, RHO);
  return R_NilValue;

L177_:;
  // p21 = prom<V +>{
  //   q13 = ld q;
  //   q14 = force? q13;
  //   checkMissing(q14);
  //   c25 = `is.object`(q14);
  //   if c25 then L1() else L2(q14);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", q14);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(q16):
  //   IND2 = ld IND;
  //   IND3 = force? IND2;
  //   __2 = ldf `[` in base;
  //   r83 = dyn __2(q16, IND3);
  //   goto L0(r83);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_3, CCP, RHO);
  // p22 = prom<V +>{
  //   sizes11 = ld sizes;
  //   sizes12 = force? sizes11;
  //   checkMissing(sizes12);
  //   return sizes12;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_4, CCP, RHO);
  // p23 = prom<V +>{
  //   z1 = ld z;
  //   z2 = force? z1;
  //   checkMissing(z2);
  //   return z2;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_5, CCP, RHO);
  // p24 = prom<V +>{
  //   alternative3 = ld alternative;
  //   alternative4 = force? alternative3;
  //   checkMissing(alternative4);
  //   return alternative4;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_6, CCP, RHO);
  // p25 = prom<V +>{
  //   lower_tail5 = ld `lower.tail`;
  //   lower_tail6 = force? lower_tail5;
  //   checkMissing(lower_tail6);
  //   return lower_tail6;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_7, CCP, RHO);
  // p26 = prom<V +>{
  //   log_p5 = ld `log.p`;
  //   log_p6 = force? log_p5;
  //   checkMissing(log_p6);
  //   return log_p6;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_8, CCP, RHO);
  // p27 = prom<V +>{
  //   B1 = ld B;
  //   B2 = force? B1;
  //   checkMissing(B2);
  //   return B2;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_9, CCP, RHO);
  // r91 = dyn psmirnov_simul(p21, p22, p23, p24, p25, p26, p27)
  SEXP Rsh_Fir_array_args163[7];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args163[2] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args163[3] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args163[4] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args163[5] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args163[6] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names35[7];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_array_arg_names35[5] = R_MissingArg;
  Rsh_Fir_array_arg_names35[6] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_psmirnov_simul, 7, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L178() else D58()
  // L178()
  goto L178_;

D58_:;
  // deopt 220 [r91]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L48(r91)
  // L48(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L48_;

D59_:;
  // deopt 222 []
  Rsh_Fir_deopt(222, 0, NULL, CCP, RHO);
  return R_NilValue;

L180_:;
  // p28 = prom<V +>{
  //   q17 = ld q;
  //   q18 = force? q17;
  //   checkMissing(q18);
  //   c26 = `is.object`(q18);
  //   if c26 then L1() else L2(q18);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", q18);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(q20):
  //   IND4 = ld IND;
  //   IND5 = force? IND4;
  //   __3 = ldf `[` in base;
  //   r93 = dyn __3(q20, IND5);
  //   goto L0(r93);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_10, CCP, RHO);
  // p29 = prom<V +>{
  //   sizes13 = ld sizes;
  //   sizes14 = force? sizes13;
  //   checkMissing(sizes14);
  //   return sizes14;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_11, CCP, RHO);
  // p30 = prom<V +>{
  //   alternative5 = ld alternative;
  //   alternative6 = force? alternative5;
  //   checkMissing(alternative6);
  //   return alternative6;
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_12, CCP, RHO);
  // p31 = prom<V +>{
  //   lower_tail7 = ld `lower.tail`;
  //   lower_tail8 = force? lower_tail7;
  //   checkMissing(lower_tail8);
  //   return lower_tail8;
  // }
  Rsh_Fir_reg_p31_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_13, CCP, RHO);
  // p32 = prom<V +>{
  //   log_p7 = ld `log.p`;
  //   log_p8 = force? log_p7;
  //   checkMissing(log_p8);
  //   return log_p8;
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_14, CCP, RHO);
  // r99 = dyn psmirnov_asymp(p28, p29, p30, p31, p32)
  SEXP Rsh_Fir_array_args174[5];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_p30_;
  Rsh_Fir_array_args174[3] = Rsh_Fir_reg_p31_;
  Rsh_Fir_array_args174[4] = Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_array_arg_names37[5];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_array_arg_names37[4] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_psmirnov_asymp, 5, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L181() else D60()
  // L181()
  goto L181_;

D60_:;
  // deopt 228 [r99]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L181_:;
  // goto L48(r99)
  // L48(r99)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r99_;
  goto L48_;

L182_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l10, r92)
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args175[2] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args175);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc7 then L184() else L183(r92, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L184()
    goto L184_;
  } else {
  // L183(r92, dr14)
    Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r92_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr14_;
    goto L183_;
  }

L183_:;
  // IND6 = ld IND
  Rsh_Fir_reg_IND6_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L185() else D61()
  // L185()
  goto L185_;

L184_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L49(dx14)
  // L49(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L49_;

D61_:;
  // deopt 230 [r101, l12, r92, IND6]
  SEXP Rsh_Fir_array_deopt_stack53[4];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_IND6_;
  Rsh_Fir_deopt(230, 4, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L185_:;
  // IND7 = force? IND6
  Rsh_Fir_reg_IND7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND6_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r104 = dyn ___3(l12, r92, IND7)
  SEXP Rsh_Fir_array_args178[3];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args178[2] = Rsh_Fir_reg_IND7_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L49(r104)
  // L49(r104)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r104_;
  goto L49_;

D62_:;
  // deopt 234 [ret2]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_ret2_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L186_:;
  // ret3 = force? ret2
  Rsh_Fir_reg_ret3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret2_);
  // checkMissing(ret3)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_ret3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret3
  return Rsh_Fir_reg_ret3_;

D63_:;
  // deopt 240 []
  Rsh_Fir_deopt(240, 0, NULL, CCP, RHO);
  return R_NilValue;

L189_:;
  // p33 = prom<V +>{
  //   q21 = ld q;
  //   q22 = force? q21;
  //   checkMissing(q22);
  //   c28 = `is.object`(q22);
  //   if c28 then L1() else L2(q22);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", q22);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(q24):
  //   IND8 = ld IND;
  //   IND9 = force? IND8;
  //   __4 = ldf `[` in base;
  //   r107 = dyn __4(q24, IND9);
  //   goto L0(r107);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_15, CCP, RHO);
  // p34 = prom<V +>{
  //   sizes15 = ld sizes;
  //   sizes16 = force? sizes15;
  //   checkMissing(sizes16);
  //   return sizes16;
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_16, CCP, RHO);
  // p35 = prom<V +>{
  //   z3 = ld z;
  //   z4 = force? z3;
  //   checkMissing(z4);
  //   return z4;
  // }
  Rsh_Fir_reg_p35_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_17, CCP, RHO);
  // p36 = prom<V +>{
  //   alternative7 = ld alternative;
  //   alternative8 = force? alternative7;
  //   checkMissing(alternative8);
  //   return alternative8;
  // }
  Rsh_Fir_reg_p36_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_18, CCP, RHO);
  // p37 = prom<V +>{
  //   lower_tail9 = ld `lower.tail`;
  //   lower_tail10 = force? lower_tail9;
  //   checkMissing(lower_tail10);
  //   return lower_tail10;
  // }
  Rsh_Fir_reg_p37_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_19, CCP, RHO);
  // p38 = prom<V +>{
  //   log_p9 = ld `log.p`;
  //   log_p10 = force? log_p9;
  //   checkMissing(log_p10);
  //   return log_p10;
  // }
  Rsh_Fir_reg_p38_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_20, CCP, RHO);
  // r114 = dyn psmirnov_exact(p33, p34, p35, p36, p37, p38)
  SEXP Rsh_Fir_array_args191[6];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_p34_;
  Rsh_Fir_array_args191[2] = Rsh_Fir_reg_p35_;
  Rsh_Fir_array_args191[3] = Rsh_Fir_reg_p36_;
  Rsh_Fir_array_args191[4] = Rsh_Fir_reg_p37_;
  Rsh_Fir_array_args191[5] = Rsh_Fir_reg_p38_;
  SEXP Rsh_Fir_array_arg_names40[6];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_array_arg_names40[3] = R_MissingArg;
  Rsh_Fir_array_arg_names40[4] = R_MissingArg;
  Rsh_Fir_array_arg_names40[5] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_psmirnov_exact, 6, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L190() else D64()
  // L190()
  goto L190_;

D64_:;
  // deopt 247 [r114]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(247, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L190_:;
  // st r = r114
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r114_, RHO);
  (void)(Rsh_Fir_reg_r114_);
  // sym13 = ldf all
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base13 = ldf all in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args192);
  // if guard13 then L191() else L192()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L191()
    goto L191_;
  } else {
  // L192()
    goto L192_;
  }

L191_:;
  // sym14 = ldf `is.finite`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base14 = ldf `is.finite` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args193);
  // if guard14 then L193() else L194()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L193()
    goto L193_;
  } else {
  // L194()
    goto L194_;
  }

L192_:;
  // r115 = dyn base13(<lang is.finite(r)>)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L51(r115)
  // L51(r115)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r115_;
  goto L51_;

L193_:;
  // r119 = ld r
  Rsh_Fir_reg_r119_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L195() else D65()
  // L195()
  goto L195_;

L194_:;
  // r117 = dyn base14(<sym r>)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L52(r117)
  // L52(r117)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L52_;

D65_:;
  // deopt 253 [r119]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L195_:;
  // r120 = force? r119
  Rsh_Fir_reg_r120_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r119_);
  // checkMissing(r120)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_r120_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r121 = dyn is_finite(r120)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L196() else D66()
  // L196()
  goto L196_;

D66_:;
  // deopt 256 [r121]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L196_:;
  // goto L52(r121)
  // L52(r121)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r121_;
  goto L52_;

D67_:;
  // deopt 258 [r122]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L197_:;
  // goto L51(r122)
  // L51(r122)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r122_;
  goto L51_;

L198_:;
  // r123 = ld r
  Rsh_Fir_reg_r123_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L199() else D68()
  // L199()
  goto L199_;

D68_:;
  // deopt 259 [r123]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L199_:;
  // r124 = force? r123
  Rsh_Fir_reg_r124_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r123_);
  // checkMissing(r124)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_r124_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // goto L54(r124)
  // L54(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L54_;

D69_:;
  // deopt 262 []
  Rsh_Fir_deopt(262, 0, NULL, CCP, RHO);
  return R_NilValue;

L201_:;
  // r126 = dyn warning("computation of exact probability failed, returning Monte Carlo approximation")
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L202() else D70()
  // L202()
  goto L202_;

D70_:;
  // deopt 264 [r126]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(264, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L202_:;
  // psmirnov_simul1 = ldf psmirnov_simul
  Rsh_Fir_reg_psmirnov_simul1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L203() else D71()
  // L203()
  goto L203_;

D71_:;
  // deopt 266 []
  Rsh_Fir_deopt(266, 0, NULL, CCP, RHO);
  return R_NilValue;

L203_:;
  // p39 = prom<V +>{
  //   q25 = ld q;
  //   q26 = force? q25;
  //   checkMissing(q26);
  //   c30 = `is.object`(q26);
  //   if c30 then L1() else L2(q26);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", q26);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(q28):
  //   IND10 = ld IND;
  //   IND11 = force? IND10;
  //   __5 = ldf `[` in base;
  //   r127 = dyn __5(q28, IND11);
  //   goto L0(r127);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p39_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_21, CCP, RHO);
  // p40 = prom<V +>{
  //   sizes17 = ld sizes;
  //   sizes18 = force? sizes17;
  //   checkMissing(sizes18);
  //   return sizes18;
  // }
  Rsh_Fir_reg_p40_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_22, CCP, RHO);
  // p41 = prom<V +>{
  //   z5 = ld z;
  //   z6 = force? z5;
  //   checkMissing(z6);
  //   return z6;
  // }
  Rsh_Fir_reg_p41_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_23, CCP, RHO);
  // p42 = prom<V +>{
  //   alternative9 = ld alternative;
  //   alternative10 = force? alternative9;
  //   checkMissing(alternative10);
  //   return alternative10;
  // }
  Rsh_Fir_reg_p42_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_24, CCP, RHO);
  // p43 = prom<V +>{
  //   lower_tail11 = ld `lower.tail`;
  //   lower_tail12 = force? lower_tail11;
  //   checkMissing(lower_tail12);
  //   return lower_tail12;
  // }
  Rsh_Fir_reg_p43_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_25, CCP, RHO);
  // p44 = prom<V +>{
  //   log_p11 = ld `log.p`;
  //   log_p12 = force? log_p11;
  //   checkMissing(log_p12);
  //   return log_p12;
  // }
  Rsh_Fir_reg_p44_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_26, CCP, RHO);
  // p45 = prom<V +>{
  //   B3 = ld B;
  //   B4 = force? B3;
  //   checkMissing(B4);
  //   return B4;
  // }
  Rsh_Fir_reg_p45_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2046023802_27, CCP, RHO);
  // r135 = dyn psmirnov_simul1(p39, p40, p41, p42, p43, p44, p45)
  SEXP Rsh_Fir_array_args212[7];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_p39_;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_p40_;
  Rsh_Fir_array_args212[2] = Rsh_Fir_reg_p41_;
  Rsh_Fir_array_args212[3] = Rsh_Fir_reg_p42_;
  Rsh_Fir_array_args212[4] = Rsh_Fir_reg_p43_;
  Rsh_Fir_array_args212[5] = Rsh_Fir_reg_p44_;
  Rsh_Fir_array_args212[6] = Rsh_Fir_reg_p45_;
  SEXP Rsh_Fir_array_arg_names46[7];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_array_arg_names46[4] = R_MissingArg;
  Rsh_Fir_array_arg_names46[5] = R_MissingArg;
  Rsh_Fir_array_arg_names46[6] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_psmirnov_simul1_, 7, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L204() else D72()
  // L204()
  goto L204_;

D72_:;
  // deopt 274 [r135]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L204_:;
  // goto L54(r135)
  // L54(r135)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r135_;
  goto L54_;

L205_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l13, r125)
  SEXP Rsh_Fir_array_args213[3];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args213[2] = Rsh_Fir_reg_r125_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args213);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if dc10 then L207() else L206(r125, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L207()
    goto L207_;
  } else {
  // L206(r125, dr20)
    Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r125_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr20_;
    goto L206_;
  }

L206_:;
  // IND12 = ld IND
  Rsh_Fir_reg_IND12_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L208() else D73()
  // L208()
  goto L208_;

L207_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L55(dx20)
  // L55(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L55_;

D73_:;
  // deopt 276 [r137, l15, r125, IND12]
  SEXP Rsh_Fir_array_deopt_stack62[4];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_deopt_stack62[3] = Rsh_Fir_reg_IND12_;
  Rsh_Fir_deopt(276, 4, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L208_:;
  // IND13 = force? IND12
  Rsh_Fir_reg_IND13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND12_);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r140 = dyn ___4(l15, r125, IND13)
  SEXP Rsh_Fir_array_args216[3];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_args216[2] = Rsh_Fir_reg_IND13_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L55(r140)
  // L55(r140)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r140_;
  goto L55_;

D74_:;
  // deopt 280 [ret4]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_ret4_;
  Rsh_Fir_deopt(280, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L209_:;
  // ret5 = force? ret4
  Rsh_Fir_reg_ret5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret4_);
  // checkMissing(ret5)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_ret5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret5
  return Rsh_Fir_reg_ret5_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_1(SEXP CCP, SEXP RHO) {
  // alternative1 = ld alternative
  Rsh_Fir_reg_alternative1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative2 = force? alternative1
  Rsh_Fir_reg_alternative2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative1_);
  // checkMissing(alternative2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_alternative2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return alternative2
  return Rsh_Fir_reg_alternative2_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_2(SEXP CCP, SEXP RHO) {
  // i7 = ld i1
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // i9 = ld i2
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r46 = `||`(i8, i10)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // i11 = ld i3
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_i12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r47 = `||`(r46, i12)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // r48 = `!`(r47)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_3(SEXP CCP, SEXP RHO) {
  // q13 = ld q
  Rsh_Fir_reg_q13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q14 = force? q13
  Rsh_Fir_reg_q14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q13_);
  // checkMissing(q14)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_q14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(q14)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_q14_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(q14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(q14)
    Rsh_Fir_reg_q16_ = Rsh_Fir_reg_q14_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", q14)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_q14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_q16_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // IND2 = ld IND
  Rsh_Fir_reg_IND2_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // IND3 = force? IND2
  Rsh_Fir_reg_IND3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r83 = dyn __2(q16, IND3)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_IND3_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r83)
  // L0(r83)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r83_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_4(SEXP CCP, SEXP RHO) {
  // sizes11 = ld sizes
  Rsh_Fir_reg_sizes11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sizes12 = force? sizes11
  Rsh_Fir_reg_sizes12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes11_);
  // checkMissing(sizes12)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sizes12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // return sizes12
  return Rsh_Fir_reg_sizes12_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_5(SEXP CCP, SEXP RHO) {
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // return z2
  return Rsh_Fir_reg_z2_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_6(SEXP CCP, SEXP RHO) {
  // alternative3 = ld alternative
  Rsh_Fir_reg_alternative3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative4 = force? alternative3
  Rsh_Fir_reg_alternative4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative3_);
  // checkMissing(alternative4)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_alternative4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // return alternative4
  return Rsh_Fir_reg_alternative4_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_7(SEXP CCP, SEXP RHO) {
  // lower_tail5 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lower_tail6 = force? lower_tail5
  Rsh_Fir_reg_lower_tail6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail5_);
  // checkMissing(lower_tail6)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_lower_tail6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // return lower_tail6
  return Rsh_Fir_reg_lower_tail6_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_8(SEXP CCP, SEXP RHO) {
  // log_p5 = ld `log.p`
  Rsh_Fir_reg_log_p5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // log_p6 = force? log_p5
  Rsh_Fir_reg_log_p6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p5_);
  // checkMissing(log_p6)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_log_p6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // return log_p6
  return Rsh_Fir_reg_log_p6_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_9(SEXP CCP, SEXP RHO) {
  // B1 = ld B
  Rsh_Fir_reg_B1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // B2 = force? B1
  Rsh_Fir_reg_B2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_B1_);
  // checkMissing(B2)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_B2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // return B2
  return Rsh_Fir_reg_B2_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_10(SEXP CCP, SEXP RHO) {
  // q17 = ld q
  Rsh_Fir_reg_q17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q18 = force? q17
  Rsh_Fir_reg_q18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q17_);
  // checkMissing(q18)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_q18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(q18)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_q18_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // if c26 then L1() else L2(q18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L1()
    goto L1_;
  } else {
  // L2(q18)
    Rsh_Fir_reg_q20_ = Rsh_Fir_reg_q18_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", q18)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_q18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_q20_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // IND4 = ld IND
  Rsh_Fir_reg_IND4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // IND5 = force? IND4
  Rsh_Fir_reg_IND5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r93 = dyn __3(q20, IND5)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_q20_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_IND5_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r93)
  // L0(r93)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r93_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_11(SEXP CCP, SEXP RHO) {
  // sizes13 = ld sizes
  Rsh_Fir_reg_sizes13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sizes14 = force? sizes13
  Rsh_Fir_reg_sizes14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes13_);
  // checkMissing(sizes14)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_sizes14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // return sizes14
  return Rsh_Fir_reg_sizes14_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_12(SEXP CCP, SEXP RHO) {
  // alternative5 = ld alternative
  Rsh_Fir_reg_alternative5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative6 = force? alternative5
  Rsh_Fir_reg_alternative6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative5_);
  // checkMissing(alternative6)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_alternative6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // return alternative6
  return Rsh_Fir_reg_alternative6_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_13(SEXP CCP, SEXP RHO) {
  // lower_tail7 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail7_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lower_tail8 = force? lower_tail7
  Rsh_Fir_reg_lower_tail8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail7_);
  // checkMissing(lower_tail8)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_lower_tail8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // return lower_tail8
  return Rsh_Fir_reg_lower_tail8_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_14(SEXP CCP, SEXP RHO) {
  // log_p7 = ld `log.p`
  Rsh_Fir_reg_log_p7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // log_p8 = force? log_p7
  Rsh_Fir_reg_log_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p7_);
  // checkMissing(log_p8)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_log_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // return log_p8
  return Rsh_Fir_reg_log_p8_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_15(SEXP CCP, SEXP RHO) {
  // q21 = ld q
  Rsh_Fir_reg_q21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q22 = force? q21
  Rsh_Fir_reg_q22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q21_);
  // checkMissing(q22)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_q22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(q22)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_q22_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // if c28 then L1() else L2(q22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L1()
    goto L1_;
  } else {
  // L2(q22)
    Rsh_Fir_reg_q24_ = Rsh_Fir_reg_q22_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", q22)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_q22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args182);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_q24_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // IND8 = ld IND
  Rsh_Fir_reg_IND8_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // IND9 = force? IND8
  Rsh_Fir_reg_IND9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND8_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r107 = dyn __4(q24, IND9)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_q24_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_IND9_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r107_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_16(SEXP CCP, SEXP RHO) {
  // sizes15 = ld sizes
  Rsh_Fir_reg_sizes15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sizes16 = force? sizes15
  Rsh_Fir_reg_sizes16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes15_);
  // checkMissing(sizes16)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_sizes16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // return sizes16
  return Rsh_Fir_reg_sizes16_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_17(SEXP CCP, SEXP RHO) {
  // z3 = ld z
  Rsh_Fir_reg_z3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z4 = force? z3
  Rsh_Fir_reg_z4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z3_);
  // checkMissing(z4)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_z4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // return z4
  return Rsh_Fir_reg_z4_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_18(SEXP CCP, SEXP RHO) {
  // alternative7 = ld alternative
  Rsh_Fir_reg_alternative7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative8 = force? alternative7
  Rsh_Fir_reg_alternative8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative7_);
  // checkMissing(alternative8)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_alternative8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // return alternative8
  return Rsh_Fir_reg_alternative8_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_19(SEXP CCP, SEXP RHO) {
  // lower_tail9 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail9_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lower_tail10 = force? lower_tail9
  Rsh_Fir_reg_lower_tail10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail9_);
  // checkMissing(lower_tail10)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_lower_tail10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // return lower_tail10
  return Rsh_Fir_reg_lower_tail10_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_20(SEXP CCP, SEXP RHO) {
  // log_p9 = ld `log.p`
  Rsh_Fir_reg_log_p9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // log_p10 = force? log_p9
  Rsh_Fir_reg_log_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p9_);
  // checkMissing(log_p10)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_log_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // return log_p10
  return Rsh_Fir_reg_log_p10_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_21(SEXP CCP, SEXP RHO) {
  // q25 = ld q
  Rsh_Fir_reg_q25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q26 = force? q25
  Rsh_Fir_reg_q26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q25_);
  // checkMissing(q26)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_q26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(q26)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_q26_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if c30 then L1() else L2(q26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L2(q26)
    Rsh_Fir_reg_q28_ = Rsh_Fir_reg_q26_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", q26)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_q26_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args202);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_q28_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // IND10 = ld IND
  Rsh_Fir_reg_IND10_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // IND11 = force? IND10
  Rsh_Fir_reg_IND11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IND10_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r127 = dyn __5(q28, IND11)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_q28_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_IND11_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r127)
  // L0(r127)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r127_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_22(SEXP CCP, SEXP RHO) {
  // sizes17 = ld sizes
  Rsh_Fir_reg_sizes17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sizes18 = force? sizes17
  Rsh_Fir_reg_sizes18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes17_);
  // checkMissing(sizes18)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sizes18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // return sizes18
  return Rsh_Fir_reg_sizes18_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_23(SEXP CCP, SEXP RHO) {
  // z5 = ld z
  Rsh_Fir_reg_z5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z6 = force? z5
  Rsh_Fir_reg_z6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z5_);
  // checkMissing(z6)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_z6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // return z6
  return Rsh_Fir_reg_z6_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_24(SEXP CCP, SEXP RHO) {
  // alternative9 = ld alternative
  Rsh_Fir_reg_alternative9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative10 = force? alternative9
  Rsh_Fir_reg_alternative10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative9_);
  // checkMissing(alternative10)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_alternative10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // return alternative10
  return Rsh_Fir_reg_alternative10_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_25(SEXP CCP, SEXP RHO) {
  // lower_tail11 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail11_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lower_tail12 = force? lower_tail11
  Rsh_Fir_reg_lower_tail12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail11_);
  // checkMissing(lower_tail12)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_lower_tail12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // return lower_tail12
  return Rsh_Fir_reg_lower_tail12_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_26(SEXP CCP, SEXP RHO) {
  // log_p11 = ld `log.p`
  Rsh_Fir_reg_log_p11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // log_p12 = force? log_p11
  Rsh_Fir_reg_log_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p11_);
  // checkMissing(log_p12)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_log_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // return log_p12
  return Rsh_Fir_reg_log_p12_;
}
SEXP Rsh_Fir_user_promise_inner2046023802_27(SEXP CCP, SEXP RHO) {
  // B3 = ld B
  Rsh_Fir_reg_B3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // B4 = force? B3
  Rsh_Fir_reg_B4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_B3_);
  // checkMissing(B4)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_B4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // return B4
  return Rsh_Fir_reg_B4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
