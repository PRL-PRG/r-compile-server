#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2387545022_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2387545022_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2387545022_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2387545022_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2387545022_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2387545022_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2387545022
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2387545022_, RHO, CCP);
  // st `pretty.default` = r
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
SEXP Rsh_Fir_user_function_inner2387545022_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2387545022 dynamic dispatch ([x, n, `min.n`, `shrink.sml`, `high.u.bias`, `u5.bias`, `eps.correct`, `f.min`, `...`])

  return Rsh_Fir_user_version_inner2387545022_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2387545022_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2387545022 version 0 (*, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner2387545022/0: expected 9, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_min_n;  // min_n
  SEXP Rsh_Fir_reg_shrink_sml;  // shrink_sml
  SEXP Rsh_Fir_reg_high_u_bias;  // high_u_bias
  SEXP Rsh_Fir_reg_u5_bias;  // u5_bias
  SEXP Rsh_Fir_reg_eps_correct;  // eps_correct
  SEXP Rsh_Fir_reg_f_min;  // f_min
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_min_n_isMissing;  // min_n_isMissing
  SEXP Rsh_Fir_reg_min_n_orDefault;  // min_n_orDefault
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_shrink_sml_isMissing;  // shrink_sml_isMissing
  SEXP Rsh_Fir_reg_shrink_sml_orDefault;  // shrink_sml_orDefault
  SEXP Rsh_Fir_reg_high_u_bias_isMissing;  // high_u_bias_isMissing
  SEXP Rsh_Fir_reg_high_u_bias_orDefault;  // high_u_bias_orDefault
  SEXP Rsh_Fir_reg_u5_bias_isMissing;  // u5_bias_isMissing
  SEXP Rsh_Fir_reg_u5_bias_orDefault;  // u5_bias_orDefault
  SEXP Rsh_Fir_reg_high_u_bias1_;  // high_u_bias1
  SEXP Rsh_Fir_reg_high_u_bias2_;  // high_u_bias2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_eps_correct_isMissing;  // eps_correct_isMissing
  SEXP Rsh_Fir_reg_eps_correct_orDefault;  // eps_correct_orDefault
  SEXP Rsh_Fir_reg_f_min_isMissing;  // f_min_isMissing
  SEXP Rsh_Fir_reg_f_min_orDefault;  // f_min_orDefault
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_min_n1_;  // min_n1
  SEXP Rsh_Fir_reg_min_n2_;  // min_n2
  SEXP Rsh_Fir_reg_shrink_sml1_;  // shrink_sml1
  SEXP Rsh_Fir_reg_shrink_sml2_;  // shrink_sml2
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_high_u_bias3_;  // high_u_bias3
  SEXP Rsh_Fir_reg_high_u_bias4_;  // high_u_bias4
  SEXP Rsh_Fir_reg_u5_bias1_;  // u5_bias1
  SEXP Rsh_Fir_reg_u5_bias2_;  // u5_bias2
  SEXP Rsh_Fir_reg_f_min1_;  // f_min1
  SEXP Rsh_Fir_reg_f_min2_;  // f_min2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_eps_correct1_;  // eps_correct1
  SEXP Rsh_Fir_reg_eps_correct2_;  // eps_correct2
  SEXP Rsh_Fir_reg_pretty;  // pretty
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_eps_correct3_;  // eps_correct3
  SEXP Rsh_Fir_reg_eps_correct4_;  // eps_correct4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_diff;  // diff
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_z13_;  // z13
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_z15_;  // z15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_z16_;  // z16
  SEXP Rsh_Fir_reg_z17_;  // z17
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_z19_;  // z19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_delta;  // delta
  SEXP Rsh_Fir_reg_delta1_;  // delta1
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_small;  // small
  SEXP Rsh_Fir_reg_small1_;  // small1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_s3_;  // s3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_min_n = PARAMS[2];
  Rsh_Fir_reg_shrink_sml = PARAMS[3];
  Rsh_Fir_reg_high_u_bias = PARAMS[4];
  Rsh_Fir_reg_u5_bias = PARAMS[5];
  Rsh_Fir_reg_eps_correct = PARAMS[6];
  Rsh_Fir_reg_f_min = PARAMS[7];
  Rsh_Fir_reg_ddd = PARAMS[8];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if n_isMissing then L0(5) else L0(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L0(5)
    Rsh_Fir_reg_n_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L0_;
  }

L0_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // min_n_isMissing = missing.0(min_n)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_min_n;
  Rsh_Fir_reg_min_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if min_n_isMissing then L1() else L2(min_n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_min_n_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(min_n)
    Rsh_Fir_reg_min_n_orDefault = Rsh_Fir_reg_min_n;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   ___ = ldf `%/%` in base;
  //   r = dyn ___(n2, 3);
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2387545022_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_min_n_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st `min.n` = min_n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_min_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_min_n_orDefault);
  // shrink_sml_isMissing = missing.0(shrink_sml)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_shrink_sml;
  Rsh_Fir_reg_shrink_sml_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if shrink_sml_isMissing then L3(0.75) else L3(shrink_sml)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_shrink_sml_isMissing)) {
  // L3(0.75)
    Rsh_Fir_reg_shrink_sml_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(shrink_sml)
    Rsh_Fir_reg_shrink_sml_orDefault = Rsh_Fir_reg_shrink_sml;
    goto L3_;
  }

L3_:;
  // st `shrink.sml` = shrink_sml_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_shrink_sml_orDefault, RHO);
  (void)(Rsh_Fir_reg_shrink_sml_orDefault);
  // high_u_bias_isMissing = missing.0(high_u_bias)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_high_u_bias;
  Rsh_Fir_reg_high_u_bias_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if high_u_bias_isMissing then L4(1.5) else L4(high_u_bias)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_high_u_bias_isMissing)) {
  // L4(1.5)
    Rsh_Fir_reg_high_u_bias_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(high_u_bias)
    Rsh_Fir_reg_high_u_bias_orDefault = Rsh_Fir_reg_high_u_bias;
    goto L4_;
  }

L4_:;
  // st `high.u.bias` = high_u_bias_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_high_u_bias_orDefault, RHO);
  (void)(Rsh_Fir_reg_high_u_bias_orDefault);
  // u5_bias_isMissing = missing.0(u5_bias)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_u5_bias;
  Rsh_Fir_reg_u5_bias_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if u5_bias_isMissing then L5() else L6(u5_bias)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_u5_bias_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(u5_bias)
    Rsh_Fir_reg_u5_bias_orDefault = Rsh_Fir_reg_u5_bias;
    goto L6_;
  }

L5_:;
  // p1 = prom<V +>{
  //   high_u_bias1 = ld `high.u.bias`;
  //   high_u_bias2 = force? high_u_bias1;
  //   checkMissing(high_u_bias2);
  //   r2 = `*`(1.5, high_u_bias2);
  //   r3 = `+`(0.5, r2);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2387545022_1, CCP, RHO);
  // goto L6(p1)
  // L6(p1)
  Rsh_Fir_reg_u5_bias_orDefault = Rsh_Fir_reg_p1_;
  goto L6_;

L6_:;
  // st `u5.bias` = u5_bias_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_u5_bias_orDefault, RHO);
  (void)(Rsh_Fir_reg_u5_bias_orDefault);
  // eps_correct_isMissing = missing.0(eps_correct)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_eps_correct;
  Rsh_Fir_reg_eps_correct_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if eps_correct_isMissing then L7(0) else L7(eps_correct)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_eps_correct_isMissing)) {
  // L7(0)
    Rsh_Fir_reg_eps_correct_orDefault = Rsh_const(CCP, 13);
    goto L7_;
  } else {
  // L7(eps_correct)
    Rsh_Fir_reg_eps_correct_orDefault = Rsh_Fir_reg_eps_correct;
    goto L7_;
  }

L7_:;
  // st `eps.correct` = eps_correct_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_eps_correct_orDefault, RHO);
  (void)(Rsh_Fir_reg_eps_correct_orDefault);
  // f_min_isMissing = missing.0(f_min)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_f_min;
  Rsh_Fir_reg_f_min_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if f_min_isMissing then L8() else L9(f_min)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_f_min_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(f_min)
    Rsh_Fir_reg_f_min_orDefault = Rsh_Fir_reg_f_min;
    goto L9_;
  }

L8_:;
  // p2 = prom<V +>{
  //   return 9.5367431640625E-7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2387545022_2, CCP, RHO);
  // goto L9(p2)
  // L9(p2)
  Rsh_Fir_reg_f_min_orDefault = Rsh_Fir_reg_p2_;
  goto L9_;

L9_:;
  // st `f.min` = f_min_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_f_min_orDefault, RHO);
  (void)(Rsh_Fir_reg_f_min_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L10_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L11_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r12 = dyn __(x7, r7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L10(r12)
  // L10(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L10_;

L12_:;
  // st x = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r11 = dyn is_finite(r9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

L13_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L44() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L44()
    goto L44_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L16_:;
  // st z = r20
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L69() else D20()
  // L69()
  goto L69_;

L17_:;
  // sym5 = ldf max
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf max in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard5 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L18_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L58() else D11()
  // L58()
  goto L58_;

L19_:;
  // eps_correct1 = ld `eps.correct`
  Rsh_Fir_reg_eps_correct1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

L20_:;
  // st s = r33
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // eps_correct3 = ld `eps.correct`
  Rsh_Fir_reg_eps_correct3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L88() else D25()
  // L88()
  goto L88_;

L21_:;
  // c12 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c12 then L92() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L92()
    goto L92_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L28()
  // L28()
  goto L28_;

L23_:;
  // c15 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c15 then L103() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L103()
    goto L103_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // delta = ld delta
  Rsh_Fir_reg_delta = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L101() else D31()
  // L101()
  goto L101_;

L25_:;
  // goto L27(NULL)
  // L27(NULL)
  Rsh_Fir_reg_r60_ = Rsh_const(CCP, 26);
  goto L27_;

L26_:;
  // st s = dx13
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L27(r58)
  // L27(r58)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r58_;
  goto L27_;

L27_:;
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L110() else D34()
  // L110()
  goto L110_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c then L30() else L31(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L31(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L31_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("[", x2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // sym = ldf `is.finite`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base = ldf `is.finite` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

L33_:;
  // sym1 = ldf `as.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf `as.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r6 = dyn base(<lang `<-`(x, as.numeric(x))>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L11(x4, r6)
  // L11(x4, r6)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L11_;

L35_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D1()
  // L37()
  goto L37_;

L36_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L12(x4, r8)
  // L12(x4, r8)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L12_;

D1_:;
  // deopt 6 [x4, x11]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L37_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r10 = dyn as_numeric(x12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

D2_:;
  // deopt 9 [x4, r10]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L12(x4, r10)
  // L12(x4, r10)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L12_;

D3_:;
  // deopt 12 [x10, r11]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L11(x10, r11)
  // L11(x10, r11)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r11_;
  goto L11_;

L40_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

L41_:;
  // r13 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L13(r13)
  // L13(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L13_;

D4_:;
  // deopt 17 [x13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L42_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r15 = dyn length(x14)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L13(r15)
  // L13(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L13_;

L44_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

D6_:;
  // deopt 22 [x15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L45_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x16
  return Rsh_Fir_reg_x16_;

L48_:;
  // sym4 = ldf min
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf min in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L49_:;
  // r19 = dyn base3(<lang pretty(min(x), max(x), n, min.n, shrink.sml, c(high.u.bias, u5.bias, f.min), eps.correct, TRUE)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L16(r19)
  // L16(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L16_;

L50_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D7()
  // L52()
  goto L52_;

L51_:;
  // r21 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L17(r21)
  // L17(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L17_;

D7_:;
  // deopt 31 [x17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L52_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r23 = dyn min(x18)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L53() else D8()
  // L53()
  goto L53_;

D8_:;
  // deopt 34 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L17(r23)
  // L17(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L17_;

L54_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

L55_:;
  // r24 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(r24)
  // L18(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L18_;

D9_:;
  // deopt 37 [x19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L56_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r26 = dyn max(x20)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L57() else D10()
  // L57()
  goto L57_;

D10_:;
  // deopt 40 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L18(r26)
  // L18(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L18_;

D11_:;
  // deopt 41 [n3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // min_n1 = ld `min.n`
  Rsh_Fir_reg_min_n1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L59() else D12()
  // L59()
  goto L59_;

D12_:;
  // deopt 43 [min_n1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_min_n1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // min_n2 = force? min_n1
  Rsh_Fir_reg_min_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_min_n1_);
  // checkMissing(min_n2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_min_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // shrink_sml1 = ld `shrink.sml`
  Rsh_Fir_reg_shrink_sml1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L60() else D13()
  // L60()
  goto L60_;

D13_:;
  // deopt 45 [shrink_sml1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_shrink_sml1_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // shrink_sml2 = force? shrink_sml1
  Rsh_Fir_reg_shrink_sml2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shrink_sml1_);
  // checkMissing(shrink_sml2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_shrink_sml2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // high_u_bias3 = ld `high.u.bias`
  Rsh_Fir_reg_high_u_bias3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L63() else D14()
  // L63()
  goto L63_;

L62_:;
  // r27 = dyn base6(<sym high.u.bias>, <sym u5.bias>, <sym f.min>)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L19(r27)
  // L19(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L19_;

D14_:;
  // deopt 49 [high_u_bias3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_high_u_bias3_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // high_u_bias4 = force? high_u_bias3
  Rsh_Fir_reg_high_u_bias4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high_u_bias3_);
  // checkMissing(high_u_bias4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_high_u_bias4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // u5_bias1 = ld `u5.bias`
  Rsh_Fir_reg_u5_bias1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L64() else D15()
  // L64()
  goto L64_;

D15_:;
  // deopt 51 [u5_bias1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_u5_bias1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L64_:;
  // u5_bias2 = force? u5_bias1
  Rsh_Fir_reg_u5_bias2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u5_bias1_);
  // checkMissing(u5_bias2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_u5_bias2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // f_min1 = ld `f.min`
  Rsh_Fir_reg_f_min1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L65() else D16()
  // L65()
  goto L65_;

D16_:;
  // deopt 53 [f_min1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_f_min1_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L65_:;
  // f_min2 = force? f_min1
  Rsh_Fir_reg_f_min2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f_min1_);
  // checkMissing(f_min2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_f_min2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r29 = dyn c2(high_u_bias4, u5_bias2, f_min2)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_high_u_bias4_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_u5_bias2_;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_f_min2_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

D17_:;
  // deopt 56 [r29]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L19(r29)
  // L19(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L19_;

D18_:;
  // deopt 57 [eps_correct1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_eps_correct1_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // eps_correct2 = force? eps_correct1
  Rsh_Fir_reg_eps_correct2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps_correct1_);
  // checkMissing(eps_correct2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_eps_correct2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // pretty = ldf pretty in base
  Rsh_Fir_reg_pretty = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r30 = dyn pretty(r22, r25, n4, min_n2, shrink_sml2, r28, eps_correct2, TRUE)
  SEXP Rsh_Fir_array_args54[8];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args54[3] = Rsh_Fir_reg_min_n2_;
  Rsh_Fir_array_args54[4] = Rsh_Fir_reg_shrink_sml2_;
  Rsh_Fir_array_args54[5] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args54[6] = Rsh_Fir_reg_eps_correct2_;
  Rsh_Fir_array_args54[7] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[8];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pretty, 8, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

D19_:;
  // deopt 61 [r30]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L16(r30)
  // L16(r30)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r30_;
  goto L16_;

D20_:;
  // deopt 63 [z]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L69_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(z1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c3 then L71() else L72(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L71()
    goto L71_;
  } else {
  // L72(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L72_;
  }

L70_:;
  // st n = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym7 = ldf `seq.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base7 = ldf `seq.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard7 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L71_:;
  // dr2 = tryDispatchBuiltin.1("$", z1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(dr2)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // r31 = `$`(z3, <sym n>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L70(r31)
  // L70(r31)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r31_;
  goto L70_;

L73_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L70(dx2)
  // L70(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L70_;

L74_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

L75_:;
  // r32 = dyn base7[, , `length.out`](<lang `$`(z, l)>, <lang `$`(z, u)>, <lang `+`(n, 1)>)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L20(r32)
  // L20(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L20_;

D21_:;
  // deopt 69 [z4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L76_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(z5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c4 then L78() else L79(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L78()
    goto L78_;
  } else {
  // L79(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L79_;
  }

L77_:;
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

L78_:;
  // dr4 = tryDispatchBuiltin.1("$", z5)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc2 then L80() else L79(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr4)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr4_;
    goto L79_;
  }

L79_:;
  // r34 = `$`(z7, <sym l>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L77(r34)
  // L77(r34)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r34_;
  goto L77_;

L80_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L77(dx4)
  // L77(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L77_;

D22_:;
  // deopt 72 [z8]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(z9)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c5 then L83() else L84(z9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L83()
    goto L83_;
  } else {
  // L84(z9)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z9_;
    goto L84_;
  }

L82_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L83_:;
  // dr6 = tryDispatchBuiltin.1("$", z9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc3 then L85() else L84(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L85()
    goto L85_;
  } else {
  // L84(dr6)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_dr6_;
    goto L84_;
  }

L84_:;
  // r35 = `$`(z11, <sym u>)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L82(r35)
  // L82(r35)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r35_;
  goto L82_;

L85_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L82(dx6)
  // L82(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L82_;

D23_:;
  // deopt 75 [n5]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r36 = `+`(n6, 1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r37 = dyn seq_int(dx5, dx7, r36)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L87() else D24()
  // L87()
  goto L87_;

D24_:;
  // deopt 81 [r37]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r37_;
  goto L20_;

D25_:;
  // deopt 83 [eps_correct3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_eps_correct3_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L88_:;
  // eps_correct4 = force? eps_correct3
  Rsh_Fir_reg_eps_correct4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps_correct3_);
  // checkMissing(eps_correct4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_eps_correct4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r38 = `!`(eps_correct4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_eps_correct4_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c6 then L89() else L21(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L89()
    goto L89_;
  } else {
  // L21(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L21_;
  }

L89_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L90() else D26()
  // L90()
  goto L90_;

D26_:;
  // deopt 86 [c6, n7]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L90_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(n8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c6, c9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L21(c10)
  // L21(c10)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c10_;
  goto L21_;

L92_:;
  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L93() else D27()
  // L93()
  goto L93_;

D27_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p3 = prom<V +>{
  //   sym8 = ldf range;
  //   base8 = ldf range in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r40):
  //   n9 = ld n;
  //   n10 = force? n9;
  //   checkMissing(n10);
  //   r44 = `/`(r40, n10);
  //   return r44;
  // L1():
  //   z12 = ld z;
  //   z13 = force? z12;
  //   checkMissing(z13);
  //   c13 = `is.object`(z13);
  //   if c13 then L4() else L5(z13);
  // L2():
  //   r39 = dyn base8(<lang `$`(z, l)>, <lang `$`(z, u)>);
  //   goto L0(r39);
  // L3(dx9):
  //   z16 = ld z;
  //   z17 = force? z16;
  //   checkMissing(z17);
  //   c14 = `is.object`(z17);
  //   if c14 then L8() else L9(z17);
  // L4():
  //   dr8 = tryDispatchBuiltin.1("$", z13);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(z15):
  //   r41 = `$`(z15, <sym l>);
  //   goto L3(r41);
  // L6():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L3(dx8);
  // L7(dx11):
  //   range = ldf range in base;
  //   r43 = dyn range(dx9, dx11);
  //   goto L0(r43);
  // L8():
  //   dr10 = tryDispatchBuiltin.1("$", z17);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L10() else L9(dr10);
  // L9(z19):
  //   r42 = `$`(z19, <sym u>);
  //   goto L7(r42);
  // L10():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L7(dx10);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2387545022_3, CCP, RHO);
  // r46 = dyn diff(p3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L94() else D28()
  // L94()
  goto L94_;

D28_:;
  // deopt 92 [r46]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L94_:;
  // st delta = r46
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard9 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L95_:;
  // sym10 = ldf abs
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base10 = ldf abs in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard10 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L96_:;
  // r47 = dyn base9(<lang `<-`(small, `<`(abs(s), `*`(1.0E-14, delta)))>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L23(r47)
  // L23(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L23_;

L97_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

L98_:;
  // r49 = dyn base10(<sym s>)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L24(r49)
  // L24(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L24_;

D29_:;
  // deopt 98 [s]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L99_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r51 = dyn abs(s1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L100() else D30()
  // L100()
  goto L100_;

D30_:;
  // deopt 101 [r51]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L24(r51)
  // L24(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L24_;

D31_:;
  // deopt 102 [r50, 1.0E-14, delta]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_delta;
  Rsh_Fir_deopt(102, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L101_:;
  // delta1 = force? delta
  Rsh_Fir_reg_delta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delta);
  // checkMissing(delta1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_delta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r52 = `*`(1.0E-14, delta1)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_delta1_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // r53 = `<`(r50, r52)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // st small = r53
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r54 = dyn any(r53)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L102() else D32()
  // L102()
  goto L102_;

D32_:;
  // deopt 108 [r54]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L23(r54)
  // L23(r54)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r54_;
  goto L23_;

L103_:;
  // l = ld s
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c16 = `is.object`(l)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c16 then L104() else L105(0.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L104()
    goto L104_;
  } else {
  // L105(0.0, l)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L105_;
  }

L104_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l, 0.0)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc6 then L106() else L105(0.0, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L106()
    goto L106_;
  } else {
  // L105(0.0, dr12)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr12_;
    goto L105_;
  }

L105_:;
  // small = ld small
  Rsh_Fir_reg_small = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L107() else D33()
  // L107()
  goto L107_;

L106_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L26(0.0, dx12)
  // L26(0.0, dx12)
  Rsh_Fir_reg_r58_ = Rsh_const(CCP, 51);
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L26_;

D33_:;
  // deopt 112 [r56, l2, 0.0, small]
  SEXP Rsh_Fir_array_deopt_stack32[4];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_small;
  Rsh_Fir_deopt(112, 4, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L107_:;
  // small1 = force? small
  Rsh_Fir_reg_small1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_small);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r59 = dyn ___1(l2, 0.0, small1)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_small1_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L26(r56, r59)
  // L26(r56, r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r59_;
  goto L26_;

D34_:;
  // deopt 120 [s2]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L110_:;
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s3
  return Rsh_Fir_reg_s3_;
}
SEXP Rsh_Fir_user_promise_inner2387545022_(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r = dyn ___(n2, 3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2387545022_1(SEXP CCP, SEXP RHO) {
  // high_u_bias1 = ld `high.u.bias`
  Rsh_Fir_reg_high_u_bias1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // high_u_bias2 = force? high_u_bias1
  Rsh_Fir_reg_high_u_bias2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high_u_bias1_);
  // checkMissing(high_u_bias2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_high_u_bias2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r2 = `*`(1.5, high_u_bias2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_high_u_bias2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // r3 = `+`(0.5, r2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner2387545022_2(SEXP CCP, SEXP RHO) {
  // return 9.5367431640625E-7
  return Rsh_const(CCP, 15);
}
SEXP Rsh_Fir_user_promise_inner2387545022_3(SEXP CCP, SEXP RHO) {
  // sym8 = ldf range
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base8 = ldf range in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r44 = `/`(r40, n10)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_n10_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // return r44
  return Rsh_Fir_reg_r44_;

L1_:;
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(z13)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_z13_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c13 then L4() else L5(z13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L4()
    goto L4_;
  } else {
  // L5(z13)
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_z13_;
    goto L5_;
  }

L2_:;
  // r39 = dyn base8(<lang `$`(z, l)>, <lang `$`(z, u)>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;

L3_:;
  // z16 = ld z
  Rsh_Fir_reg_z16_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // z17 = force? z16
  Rsh_Fir_reg_z17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z16_);
  // checkMissing(z17)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_z17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(z17)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c14 then L8() else L9(z17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L8()
    goto L8_;
  } else {
  // L9(z17)
    Rsh_Fir_reg_z19_ = Rsh_Fir_reg_z17_;
    goto L9_;
  }

L4_:;
  // dr8 = tryDispatchBuiltin.1("$", z13)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_z13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // r41 = `$`(z15, <sym l>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_z15_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L3(r41)
  // L3(r41)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r41_;
  goto L3_;

L6_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L3(dx8)
  // L3(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L3_;

L7_:;
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r43 = dyn range(dx9, dx11)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r43_;
  goto L0_;

L8_:;
  // dr10 = tryDispatchBuiltin.1("$", z17)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc5 then L10() else L9(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr10)
    Rsh_Fir_reg_z19_ = Rsh_Fir_reg_dr10_;
    goto L9_;
  }

L9_:;
  // r42 = `$`(z19, <sym u>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_z19_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L7(r42)
  // L7(r42)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r42_;
  goto L7_;

L10_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L7(dx10)
  // L7(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
