#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner60920582_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner60920582_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner60920582_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner60920582_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner60920582_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner60920582
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner60920582_, RHO, CCP);
  // st `.pretty` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner60920582_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner60920582 dynamic dispatch ([x, n, `min.n`, `shrink.sml`, `high.u.bias`, `u5.bias`, `eps.correct`, `f.min`, bounds])

  return Rsh_Fir_user_version_inner60920582_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner60920582_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner60920582 version 0 (*, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner60920582/0: expected 9, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_min_n;
  SEXP Rsh_Fir_reg_shrink_sml;
  SEXP Rsh_Fir_reg_high_u_bias;
  SEXP Rsh_Fir_reg_u5_bias;
  SEXP Rsh_Fir_reg_eps_correct;
  SEXP Rsh_Fir_reg_f_min;
  SEXP Rsh_Fir_reg_bounds;
  SEXP Rsh_Fir_reg_n_isMissing;
  SEXP Rsh_Fir_reg_n_orDefault;
  SEXP Rsh_Fir_reg_min_n_isMissing;
  SEXP Rsh_Fir_reg_min_n_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_shrink_sml_isMissing;
  SEXP Rsh_Fir_reg_shrink_sml_orDefault;
  SEXP Rsh_Fir_reg_high_u_bias_isMissing;
  SEXP Rsh_Fir_reg_high_u_bias_orDefault;
  SEXP Rsh_Fir_reg_u5_bias_isMissing;
  SEXP Rsh_Fir_reg_u5_bias_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_eps_correct_isMissing;
  SEXP Rsh_Fir_reg_eps_correct_orDefault;
  SEXP Rsh_Fir_reg_f_min_isMissing;
  SEXP Rsh_Fir_reg_f_min_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_bounds_isMissing;
  SEXP Rsh_Fir_reg_bounds_orDefault;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_min_n1_;
  SEXP Rsh_Fir_reg_min_n2_;
  SEXP Rsh_Fir_reg_shrink_sml1_;
  SEXP Rsh_Fir_reg_shrink_sml2_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_high_u_bias3_;
  SEXP Rsh_Fir_reg_high_u_bias4_;
  SEXP Rsh_Fir_reg_u5_bias1_;
  SEXP Rsh_Fir_reg_u5_bias2_;
  SEXP Rsh_Fir_reg_f_min1_;
  SEXP Rsh_Fir_reg_f_min2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_eps_correct1_;
  SEXP Rsh_Fir_reg_eps_correct2_;
  SEXP Rsh_Fir_reg_bounds1_;
  SEXP Rsh_Fir_reg_bounds2_;
  SEXP Rsh_Fir_reg_pretty;
  SEXP Rsh_Fir_reg_r27_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_min_n = PARAMS[2];
  Rsh_Fir_reg_shrink_sml = PARAMS[3];
  Rsh_Fir_reg_high_u_bias = PARAMS[4];
  Rsh_Fir_reg_u5_bias = PARAMS[5];
  Rsh_Fir_reg_eps_correct = PARAMS[6];
  Rsh_Fir_reg_f_min = PARAMS[7];
  Rsh_Fir_reg_bounds = PARAMS[8];

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
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner60920582_, 0, NULL, CCP, RHO);
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
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner60920582_1, 0, NULL, CCP, RHO);
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
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner60920582_2, 0, NULL, CCP, RHO);
  // goto L9(p2)
  // L9(p2)
  Rsh_Fir_reg_f_min_orDefault = Rsh_Fir_reg_p2_;
  goto L9_;

L9_:;
  // st `f.min` = f_min_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_f_min_orDefault, RHO);
  (void)(Rsh_Fir_reg_f_min_orDefault);
  // bounds_isMissing = missing.0(bounds)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_bounds;
  Rsh_Fir_reg_bounds_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if bounds_isMissing then L10(TRUE) else L10(bounds)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bounds_isMissing)) {
  // L10(TRUE)
    Rsh_Fir_reg_bounds_orDefault = Rsh_const(CCP, 17);
    goto L10_;
  } else {
  // L10(bounds)
    Rsh_Fir_reg_bounds_orDefault = Rsh_Fir_reg_bounds;
    goto L10_;
  }

L10_:;
  // st bounds = bounds_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_bounds_orDefault, RHO);
  (void)(Rsh_Fir_reg_bounds_orDefault);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L11_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L12_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn __(x7, r7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L11(r12)
  // L11(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L11_;

L13_:;
  // st x = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r11 = dyn is_finite(r9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L14_:;
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L35() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 22);

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

L17_:;
  // sym5 = ldf max
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf max in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard5 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L18_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L19_:;
  // eps_correct1 = ld `eps.correct`
  Rsh_Fir_reg_eps_correct1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L55() else D17()
  // L55()
  goto L55_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args19);
  // if c then L21() else L22(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L22(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.1("[", x2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // sym = ldf `is.finite`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf `is.finite` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L24_:;
  // sym1 = ldf `as.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf `as.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L25_:;
  // r6 = dyn base(<lang `<-`(x, as.numeric(x))>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L12(x4, r6)
  // L12(x4, r6)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L12_;

L26_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

L27_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L13(x4, r8)
  // L13(x4, r8)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L13_;

D1_:;
  // deopt 6 [x4, x11]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r10 = dyn as_numeric(x12)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

D2_:;
  // deopt 9 [x4, r10]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L13(x4, r10)
  // L13(x4, r10)
  Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L13_;

D3_:;
  // deopt 12 [x10, r11]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L12(x10, r11)
  // L12(x10, r11)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r11_;
  goto L12_;

L31_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

L32_:;
  // r13 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L14(r13)
  // L14(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L14_;

D4_:;
  // deopt 17 [x13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L33_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn length(x14)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L14(r15)
  // L14(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L14_;

L35_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // sym4 = ldf min
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf min in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L37_:;
  // r16 = dyn base3(<lang pretty(min(x), max(x), n, min.n, shrink.sml, c(high.u.bias, u5.bias, f.min), eps.correct, bounds)>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L16(r16)
  // L16(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L16_;

L38_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

L39_:;
  // r18 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L17(r18)
  // L17(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L17_;

D6_:;
  // deopt 25 [x15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r20 = dyn min(x16)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 28 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L17(r20)
  // L17(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L17_;

L42_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

L43_:;
  // r21 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(r21)
  // L18(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L18_;

D8_:;
  // deopt 31 [x17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r23 = dyn max(x18)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

D9_:;
  // deopt 34 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L18(r23)
  // L18(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L18_;

D10_:;
  // deopt 35 [n3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // min_n1 = ld `min.n`
  Rsh_Fir_reg_min_n1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

D11_:;
  // deopt 37 [min_n1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_min_n1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // min_n2 = force? min_n1
  Rsh_Fir_reg_min_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_min_n1_);
  // checkMissing(min_n2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_min_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // shrink_sml1 = ld `shrink.sml`
  Rsh_Fir_reg_shrink_sml1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 39 [shrink_sml1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_shrink_sml1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // shrink_sml2 = force? shrink_sml1
  Rsh_Fir_reg_shrink_sml2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shrink_sml1_);
  // checkMissing(shrink_sml2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_shrink_sml2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard6 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // high_u_bias3 = ld `high.u.bias`
  Rsh_Fir_reg_high_u_bias3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

L50_:;
  // r24 = dyn base6(<sym high.u.bias>, <sym u5.bias>, <sym f.min>)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L19(r24)
  // L19(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L19_;

D13_:;
  // deopt 43 [high_u_bias3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_high_u_bias3_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L51_:;
  // high_u_bias4 = force? high_u_bias3
  Rsh_Fir_reg_high_u_bias4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high_u_bias3_);
  // checkMissing(high_u_bias4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_high_u_bias4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // u5_bias1 = ld `u5.bias`
  Rsh_Fir_reg_u5_bias1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

D14_:;
  // deopt 45 [u5_bias1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_u5_bias1_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // u5_bias2 = force? u5_bias1
  Rsh_Fir_reg_u5_bias2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u5_bias1_);
  // checkMissing(u5_bias2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_u5_bias2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // f_min1 = ld `f.min`
  Rsh_Fir_reg_f_min1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

D15_:;
  // deopt 47 [f_min1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_f_min1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // f_min2 = force? f_min1
  Rsh_Fir_reg_f_min2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f_min1_);
  // checkMissing(f_min2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_f_min2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r26 = dyn c2(high_u_bias4, u5_bias2, f_min2)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_high_u_bias4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_u5_bias2_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_f_min2_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

D16_:;
  // deopt 50 [r26]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L19(r26)
  // L19(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L19_;

D17_:;
  // deopt 51 [eps_correct1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_eps_correct1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L55_:;
  // eps_correct2 = force? eps_correct1
  Rsh_Fir_reg_eps_correct2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps_correct1_);
  // checkMissing(eps_correct2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_eps_correct2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // bounds1 = ld bounds
  Rsh_Fir_reg_bounds1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D18_:;
  // deopt 53 [bounds1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_bounds1_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L56_:;
  // bounds2 = force? bounds1
  Rsh_Fir_reg_bounds2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bounds1_);
  // checkMissing(bounds2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_bounds2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // pretty = ldf pretty in base
  Rsh_Fir_reg_pretty = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r27 = dyn pretty(r19, r22, n4, min_n2, shrink_sml2, r25, eps_correct2, bounds2)
  SEXP Rsh_Fir_array_args52[8];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args52[3] = Rsh_Fir_reg_min_n2_;
  Rsh_Fir_array_args52[4] = Rsh_Fir_reg_shrink_sml2_;
  Rsh_Fir_array_args52[5] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args52[6] = Rsh_Fir_reg_eps_correct2_;
  Rsh_Fir_array_args52[7] = Rsh_Fir_reg_bounds2_;
  SEXP Rsh_Fir_array_arg_names15[8];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pretty, 8, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D19_:;
  // deopt 56 [r27]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L16(r27)
  // L16(r27)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r27_;
  goto L16_;
}
SEXP Rsh_Fir_user_promise_inner60920582_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner60920582/0: expected 0, got %d", NCAPTURES);

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
SEXP Rsh_Fir_user_promise_inner60920582_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_high_u_bias1_;
  SEXP Rsh_Fir_reg_high_u_bias2_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner60920582/0: expected 0, got %d", NCAPTURES);

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
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args8);
  // r3 = `+`(0.5, r2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args9);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner60920582_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner60920582/0: expected 0, got %d", NCAPTURES);

  // return 9.5367431640625E-7
  return Rsh_const(CCP, 15);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
