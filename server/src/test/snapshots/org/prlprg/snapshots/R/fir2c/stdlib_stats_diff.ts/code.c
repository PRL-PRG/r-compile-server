#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner435436126_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner435436126_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner435436126_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner435436126_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner182209845_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner182209845_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner182209845_(SEXP CCP, SEXP RHO);
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
  // r = clos inner435436126
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner435436126_, RHO, CCP);
  // st `diff.ts` = r
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
SEXP Rsh_Fir_user_function_inner435436126_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner435436126 dynamic dispatch ([x, lag, differences, `...`])

  return Rsh_Fir_user_version_inner435436126_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner435436126_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner435436126 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner435436126/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_lag;  // lag
  SEXP Rsh_Fir_reg_differences;  // differences
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_lag_isMissing;  // lag_isMissing
  SEXP Rsh_Fir_reg_lag_orDefault;  // lag_orDefault
  SEXP Rsh_Fir_reg_differences_isMissing;  // differences_isMissing
  SEXP Rsh_Fir_reg_differences_orDefault;  // differences_orDefault
  SEXP Rsh_Fir_reg_lag1_;  // lag1
  SEXP Rsh_Fir_reg_lag2_;  // lag2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_differences1_;  // differences1
  SEXP Rsh_Fir_reg_differences2_;  // differences2
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_lag3_;  // lag3
  SEXP Rsh_Fir_reg_lag4_;  // lag4
  SEXP Rsh_Fir_reg_differences3_;  // differences3
  SEXP Rsh_Fir_reg_differences4_;  // differences4
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_differences5_;  // differences5
  SEXP Rsh_Fir_reg_differences6_;  // differences6
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_tsLag;  // tsLag
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_lag5_;  // lag5
  SEXP Rsh_Fir_reg_lag6_;  // lag6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_ts;  // ts
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_xtsp;  // xtsp
  SEXP Rsh_Fir_reg_xtsp1_;  // xtsp1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_xtsp3_;  // xtsp3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_xtsp4_;  // xtsp4
  SEXP Rsh_Fir_reg_xtsp5_;  // xtsp5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_xtsp7_;  // xtsp7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r39_;  // r39

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_lag = PARAMS[1];
  Rsh_Fir_reg_differences = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // lag_isMissing = missing.0(lag)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lag;
  Rsh_Fir_reg_lag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lag_isMissing then L0(1.0) else L0(lag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lag_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_lag_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(lag)
    Rsh_Fir_reg_lag_orDefault = Rsh_Fir_reg_lag;
    goto L0_;
  }

L0_:;
  // st lag = lag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_lag_orDefault, RHO);
  (void)(Rsh_Fir_reg_lag_orDefault);
  // differences_isMissing = missing.0(differences)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_differences;
  Rsh_Fir_reg_differences_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if differences_isMissing then L1(1.0) else L1(differences)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_differences_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_differences_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(differences)
    Rsh_Fir_reg_differences_orDefault = Rsh_Fir_reg_differences;
    goto L1_;
  }

L1_:;
  // st differences = differences_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_differences_orDefault, RHO);
  (void)(Rsh_Fir_reg_differences_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // lag1 = ld lag
  Rsh_Fir_reg_lag1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L2_:;
  // c6 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c6 then L18() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L18()
    goto L18_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // lag3 = ld lag
  Rsh_Fir_reg_lag3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L5_:;
  // r11 = clos inner182209845
  Rsh_Fir_reg_r11_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner182209845_, RHO, CCP);
  // st tsLag = r11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L8_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c9 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c9 then L35() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L35()
    goto L35_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // x9 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // r13 = ld r
  Rsh_Fir_reg_r13_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

L10_:;
  // st xtsp = r23
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym1 = ldf `is.matrix`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `is.matrix` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L11_:;
  // c10 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c10 then L47() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L47()
    goto L47_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D0_:;
  // deopt 0 [lag1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_lag1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // lag2 = force? lag1
  Rsh_Fir_reg_lag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag1_);
  // checkMissing(lag2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r = `<`(lag2, 1.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_lag2_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // differences1 = ld differences
  Rsh_Fir_reg_differences1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 4 [c, differences1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_differences1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // differences2 = force? differences1
  Rsh_Fir_reg_differences2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences1_);
  // checkMissing(differences2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_differences2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r1 = `<`(differences2, 1.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_differences2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c4 = `||`(c, c3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c4_;
  goto L2_;

L18_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r2 = dyn stop("bad value for 'lag' or 'differences'")
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 [lag3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_lag3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // lag4 = force? lag3
  Rsh_Fir_reg_lag4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag3_);
  // checkMissing(lag4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_lag4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // differences3 = ld differences
  Rsh_Fir_reg_differences3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 16 [lag4, differences3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_lag4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_differences3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // differences4 = force? differences3
  Rsh_Fir_reg_differences4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences3_);
  // checkMissing(differences4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_differences4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r4 = `*`(lag4, differences4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_lag4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_differences4_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 19 [r4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_, CCP, RHO);
  // r6 = dyn NROW(p)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 21 [r4, r6]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // r7 = `>=`(r4, r6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c7 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L26_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 23 [x3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c8 then L28() else L29(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L28()
    goto L28_;
  } else {
  // L29(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L29_;
  }

L28_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L30() else L29(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L29_;
  }

L29_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r8 = dyn __(x6, 0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L6_;

L30_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D9_:;
  // deopt 34 [x7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // st r = x8
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x8_, RHO);
  (void)(Rsh_Fir_reg_x8_);
  // differences5 = ld differences
  Rsh_Fir_reg_differences5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D10_:;
  // deopt 38 [1, differences5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_differences5_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // differences6 = force? differences5
  Rsh_Fir_reg_differences6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences5_);
  // checkMissing(differences6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_differences6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r12 = `:`(1, differences6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_differences6_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // s = toForSeq(r12)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 20);
  // goto L8(i)
  // L8(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L8_;

L35_:;
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

D11_:;
  // deopt 41 [i2, r13]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L36_:;
  // r14 = force? r13
  Rsh_Fir_reg_r14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r13_);
  // checkMissing(r14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // tsLag = ldf tsLag
  Rsh_Fir_reg_tsLag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 43 [i2, r14]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // p1 = prom<V +>{
  //   r15 = ld r;
  //   r16 = force? r15;
  //   checkMissing(r16);
  //   return r16;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_1, CCP, RHO);
  // p2 = prom<V +>{
  //   lag5 = ld lag;
  //   lag6 = force? lag5;
  //   checkMissing(lag6);
  //   r18 = `-`(<missing>, lag6);
  //   return r18;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_2, CCP, RHO);
  // r20 = dyn tsLag(p1, p2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsLag, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 46 [i2, r14, r20]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L38_:;
  // r21 = `-`(r14, r20)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // st r = r21
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L8(i2)
  // L8(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L8_;

L39_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

L40_:;
  // r22 = dyn base(<sym x>, "tsp")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D14_:;
  // deopt 54 [x10]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L41_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn attr(x11, "tsp")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L42() else D15()
  // L42()
  goto L42_;

D15_:;
  // deopt 58 [r24]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L10_;

L43_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

L44_:;
  // r25 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

D16_:;
  // deopt 62 [x12]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L45_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r27 = dyn is_matrix(x13)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D17_:;
  // deopt 65 [r27]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L11_;

L47_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

D18_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p3 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_3, CCP, RHO);
  // r29 = dyn colnames(p3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 69 [r29]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L49_:;
  // l1 = ld r
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 71 [r29, l1, r29]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(71, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L50_:;
  // r30 = dyn colnames__(l1, NULL, r29)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

D21_:;
  // deopt 73 [r29, r30]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L51_:;
  // st r = r30
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L13()
  // L13()
  goto L13_;

D22_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p4 = prom<V +>{
  //   r32 = ld r;
  //   r33 = force? r32;
  //   checkMissing(r33);
  //   return r33;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_4, CCP, RHO);
  // p5 = prom<V +>{
  //   xtsp = ld xtsp;
  //   xtsp1 = force? xtsp;
  //   checkMissing(xtsp1);
  //   c11 = `is.object`(xtsp1);
  //   if c11 then L1() else L2(xtsp1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", xtsp1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(xtsp3):
  //   __1 = ldf `[` in base;
  //   r35 = dyn __1(xtsp3, 2);
  //   goto L0(r35);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_5, CCP, RHO);
  // p6 = prom<V +>{
  //   xtsp4 = ld xtsp;
  //   xtsp5 = force? xtsp4;
  //   checkMissing(xtsp5);
  //   c12 = `is.object`(xtsp5);
  //   if c12 then L1() else L2(xtsp5);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", xtsp5);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(xtsp7):
  //   __2 = ldf `[` in base;
  //   r37 = dyn __2(xtsp7, 3);
  //   goto L0(r37);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner435436126_6, CCP, RHO);
  // r39 = dyn ts[, end, frequency](p4, p5, p6)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L54() else D23()
  // L54()
  goto L54_;

D23_:;
  // deopt 84 [r39]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L54_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_inner435436126_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner435436126_1(SEXP CCP, SEXP RHO) {
  // r15 = ld r
  Rsh_Fir_reg_r15_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // r16 = force? r15
  Rsh_Fir_reg_r16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r15_);
  // checkMissing(r16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner435436126_2(SEXP CCP, SEXP RHO) {
  // lag5 = ld lag
  Rsh_Fir_reg_lag5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lag6 = force? lag5
  Rsh_Fir_reg_lag6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag5_);
  // checkMissing(lag6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_lag6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r18 = `-`(<missing>, lag6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_lag6_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner435436126_3(SEXP CCP, SEXP RHO) {
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner435436126_4(SEXP CCP, SEXP RHO) {
  // r32 = ld r
  Rsh_Fir_reg_r32_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // r33 = force? r32
  Rsh_Fir_reg_r33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r32_);
  // checkMissing(r33)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_inner435436126_5(SEXP CCP, SEXP RHO) {
  // xtsp = ld xtsp
  Rsh_Fir_reg_xtsp = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // xtsp1 = force? xtsp
  Rsh_Fir_reg_xtsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp);
  // checkMissing(xtsp1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xtsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(xtsp1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(xtsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp1)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_xtsp1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", xtsp1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r35 = dyn __1(xtsp3, 2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xtsp3_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner435436126_6(SEXP CCP, SEXP RHO) {
  // xtsp4 = ld xtsp
  Rsh_Fir_reg_xtsp4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // xtsp5 = force? xtsp4
  Rsh_Fir_reg_xtsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp4_);
  // checkMissing(xtsp5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_xtsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(xtsp5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(xtsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp5)
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_xtsp5_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", xtsp5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r37 = dyn __2(xtsp7, 3)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_xtsp7_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner182209845_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner182209845 dynamic dispatch ([x, k])

  return Rsh_Fir_user_version_inner182209845_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner182209845_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner182209845 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner182209845/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k_isMissing;  // k_isMissing
  SEXP Rsh_Fir_reg_k_orDefault;  // k_orDefault
  SEXP Rsh_Fir_reg_tsp;  // tsp
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_tsp__;  // tsp__
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_x4_1;  // x4

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_k = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // k_isMissing = missing.0(k)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_k;
  Rsh_Fir_reg_k_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args64);
  // if k_isMissing then L0(1.0) else L0(k)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_k_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_k_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(k)
    Rsh_Fir_reg_k_orDefault = Rsh_Fir_reg_k;
    goto L0_;
  }

L0_:;
  // st k = k_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_k_orDefault, RHO);
  (void)(Rsh_Fir_reg_k_orDefault);
  // tsp = ldf tsp
  Rsh_Fir_reg_tsp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // r3 = `/`(k6, dx1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_k6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // r10 = `*`(r7, r8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // r11 = `-`(p13, r10)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // l = ld x
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tsp__ = ldf `tsp<-`
  Rsh_Fir_reg_tsp__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner182209845_, CCP, RHO);
  // r1 = dyn tsp(p)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L4_:;
  // st p = r1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // p1 = ld p
  Rsh_Fir_reg_p1_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 5 [p1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_1);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 6 [p2, k1]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L6_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // p3 = ld p
  Rsh_Fir_reg_p3_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 7 [p2, k2, p3]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L7_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_1);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c = `is.object`(p4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c then L8() else L9(p2, k2, p4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L8()
    goto L8_;
  } else {
  // L9(p2, k2, p4)
    Rsh_Fir_reg_p7_ = Rsh_Fir_reg_p2_1;
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k2_;
    Rsh_Fir_reg_p8_ = Rsh_Fir_reg_p4_1;
    goto L9_;
  }

L8_:;
  // dr = tryDispatchBuiltin.1("[", p4)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc then L10() else L9(p2, k2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L10()
    goto L10_;
  } else {
  // L9(p2, k2, dr)
    Rsh_Fir_reg_p7_ = Rsh_Fir_reg_p2_1;
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k2_;
    Rsh_Fir_reg_p8_ = Rsh_Fir_reg_dr1;
    goto L9_;
  }

L9_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn __(p8, 3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(p7, k4, r2)
  // L1(p7, k4, r2)
  Rsh_Fir_reg_p10_ = Rsh_Fir_reg_p7_;
  Rsh_Fir_reg_k6_ = Rsh_Fir_reg_k4_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L10_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L1(p2, k2, dx)
  // L1(p2, k2, dx)
  Rsh_Fir_reg_p10_ = Rsh_Fir_reg_p2_1;
  Rsh_Fir_reg_k6_ = Rsh_Fir_reg_k2_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

L11_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r9 = dyn c1(1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args79[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_1, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // r6 = dyn base(1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(p10, r3, r6)
  // L2(p10, r3, r6)
  Rsh_Fir_reg_p13_ = Rsh_Fir_reg_p10_;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r6_1;
  goto L2_;

D5_:;
  // deopt 18 [p10, r3, r9]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L2(p10, r3, r9)
  // L2(p10, r3, r9)
  Rsh_Fir_reg_p13_ = Rsh_Fir_reg_p10_;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_;
  goto L2_;

D6_:;
  // deopt 22 [r11, l, r11]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L14_:;
  // r12 = dyn tsp__(l, NULL, r11)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp__, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 24 [r11, r12]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L15_:;
  // st x = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_1, RHO);
  (void)(Rsh_Fir_reg_r12_1);
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 26 [x3]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L16_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_1;
}
SEXP Rsh_Fir_user_promise_inner182209845_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
