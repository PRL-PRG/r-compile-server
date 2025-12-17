#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner305472191_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner305472191_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner305472191_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner305472191_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2854634098_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2854634098_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner305472191
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner305472191_, RHO, CCP);
  // st `scale.default` = r
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
SEXP Rsh_Fir_user_function_inner305472191_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner305472191 dynamic dispatch ([x, center, scale])

  return Rsh_Fir_user_version_inner305472191_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner305472191_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner305472191 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner305472191/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_center;  // center
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_center_isMissing;  // center_isMissing
  SEXP Rsh_Fir_reg_center_orDefault;  // center_orDefault
  SEXP Rsh_Fir_reg_scale_isMissing;  // scale_isMissing
  SEXP Rsh_Fir_reg_scale_orDefault;  // scale_orDefault
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_center1_;  // center1
  SEXP Rsh_Fir_reg_center2_;  // center2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_center3_;  // center3
  SEXP Rsh_Fir_reg_center4_;  // center4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_colMeans;  // colMeans
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sweep;  // sweep
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_center5_;  // center5
  SEXP Rsh_Fir_reg_center6_;  // center6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_center7_;  // center7
  SEXP Rsh_Fir_reg_center8_;  // center8
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_center9_;  // center9
  SEXP Rsh_Fir_reg_center10_;  // center10
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_center11_;  // center11
  SEXP Rsh_Fir_reg_center12_;  // center12
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_nc;  // nc
  SEXP Rsh_Fir_reg_nc1_;  // nc1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sweep1_;  // sweep1
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_center13_;  // center13
  SEXP Rsh_Fir_reg_center14_;  // center14
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_scale1_;  // scale1
  SEXP Rsh_Fir_reg_scale2_;  // scale2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_scale3_;  // scale3
  SEXP Rsh_Fir_reg_scale4_;  // scale4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_apply;  // apply
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sweep2_;  // sweep2
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_scale5_;  // scale5
  SEXP Rsh_Fir_reg_scale6_;  // scale6
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_scale7_;  // scale7
  SEXP Rsh_Fir_reg_scale8_;  // scale8
  SEXP Rsh_Fir_reg_is_numeric1_;  // is_numeric1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_scale9_;  // scale9
  SEXP Rsh_Fir_reg_scale10_;  // scale10
  SEXP Rsh_Fir_reg_as_numeric1_;  // as_numeric1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_scale11_;  // scale11
  SEXP Rsh_Fir_reg_scale12_;  // scale12
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_nc2_;  // nc2
  SEXP Rsh_Fir_reg_nc3_;  // nc3
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sweep3_;  // sweep3
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_scale13_;  // scale13
  SEXP Rsh_Fir_reg_scale14_;  // scale14
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_center15_;  // center15
  SEXP Rsh_Fir_reg_center16_;  // center16
  SEXP Rsh_Fir_reg_is_numeric2_;  // is_numeric2
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_center17_;  // center17
  SEXP Rsh_Fir_reg_center18_;  // center18
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_scale15_;  // scale15
  SEXP Rsh_Fir_reg_scale16_;  // scale16
  SEXP Rsh_Fir_reg_is_numeric3_;  // is_numeric3
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_scale17_;  // scale17
  SEXP Rsh_Fir_reg_scale18_;  // scale18
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_center = PARAMS[1];
  Rsh_Fir_reg_scale = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // center_isMissing = missing.0(center)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_center;
  Rsh_Fir_reg_center_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if center_isMissing then L0(TRUE) else L0(center)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_center_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_center_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(center)
    Rsh_Fir_reg_center_orDefault = Rsh_Fir_reg_center;
    goto L0_;
  }

L0_:;
  // st center = center_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_center_orDefault, RHO);
  (void)(Rsh_Fir_reg_center_orDefault);
  // scale_isMissing = missing.0(scale)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_scale;
  Rsh_Fir_reg_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if scale_isMissing then L1(TRUE) else L1(scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_scale_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(scale)
    Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_scale;
    goto L1_;
  }

L1_:;
  // st scale = scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_scale_orDefault);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L2_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L37() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r11_ = Rsh_const(CCP, 7);
  goto L5_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym4 = ldf `is.logical`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf `is.logical` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L7_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c3 then L50() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L50()
    goto L50_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L9_:;
  // st center = r18
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L11_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

L12_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L13_:;
  // c6 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L70() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L70()
    goto L70_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // sym5 = ldf `is.numeric`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf `is.numeric` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L15_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 7);
  goto L16_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard8 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L18_:;
  // r44 = `!`(r42)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c8 then L83() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L83()
    goto L83_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L21()
  // L21()
  goto L21_;

L20_:;
  // st scale = r46
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L22_:;
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L93() else D33()
  // L93()
  goto L93_;

L23_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L98() else D36()
  // L98()
  goto L98_;

L24_:;
  // c10 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c10 then L104() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L104()
    goto L104_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym9 = ldf `is.numeric`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base9 = ldf `is.numeric` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard9 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L27_:;
  // c11 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c11 then L113() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L113()
    goto L113_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L118() else D48()
  // L118()
  goto L118_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_, CCP, RHO);
  // r1 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L31_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_1, CCP, RHO);
  // r3 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L33_:;
  // st nc = r3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf `is.logical`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.logical` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // center1 = ld center
  Rsh_Fir_reg_center1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L35_:;
  // r4 = dyn base(<sym center>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D4_:;
  // deopt 11 [center1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_center1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // center2 = force? center1
  Rsh_Fir_reg_center2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center1_);
  // checkMissing(center2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_center2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(center2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_center2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c;
  goto L2_;

L37_:;
  // center3 = ld center
  Rsh_Fir_reg_center3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

D5_:;
  // deopt 14 [center3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_center3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // center4 = force? center3
  Rsh_Fir_reg_center4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center3_);
  // checkMissing(center4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_center4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(center4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_center4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c2 then L39() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L4()
    goto L4_;
  }

L39_:;
  // colMeans = ldf colMeans
  Rsh_Fir_reg_colMeans = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_2, CCP, RHO);
  // r7 = dyn colMeans[, `na.rm`](p2, TRUE)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colMeans, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 21 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // st center = r7
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sweep = ldf sweep
  Rsh_Fir_reg_sweep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

D8_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p3 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_3, CCP, RHO);
  // p4 = prom<V +>{
  //   center5 = ld center;
  //   center6 = force? center5;
  //   checkMissing(center6);
  //   return center6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_4, CCP, RHO);
  // r10 = dyn sweep[, , , `check.margin`](p3, 2, p4, FALSE)
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sweep, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

D9_:;
  // deopt 30 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

L46_:;
  // center7 = ld center
  Rsh_Fir_reg_center7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

L47_:;
  // r13 = dyn base1(<sym center>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D10_:;
  // deopt 36 [center7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_center7_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L48_:;
  // center8 = force? center7
  Rsh_Fir_reg_center8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center7_);
  // checkMissing(center8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_center8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r15 = dyn is_numeric(center8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_center8_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

D11_:;
  // deopt 39 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L50_:;
  // sym2 = ldf `as.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `as.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // center9 = ld center
  Rsh_Fir_reg_center9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L52_:;
  // r17 = dyn base2(<sym center>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D12_:;
  // deopt 43 [center9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_center9_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // center10 = force? center9
  Rsh_Fir_reg_center10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center9_);
  // checkMissing(center10)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_center10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r19 = dyn as_numeric(center10)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_center10_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

D13_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L9_;

L56_:;
  // center11 = ld center
  Rsh_Fir_reg_center11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L57_:;
  // r21 = dyn base3(<sym center>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D14_:;
  // deopt 52 [center11]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_center11_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // center12 = force? center11
  Rsh_Fir_reg_center12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center11_);
  // checkMissing(center12)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_center12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r23 = dyn length(center12)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_center12_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L59() else D15()
  // L59()
  goto L59_;

D15_:;
  // deopt 55 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

D16_:;
  // deopt 55 [r22, nc]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L60_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r24 = `==`(r22, nc1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c4 then L61() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L61()
    goto L61_;
  } else {
  // L12()
    goto L12_;
  }

L61_:;
  // sweep1 = ldf sweep
  Rsh_Fir_reg_sweep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L62() else D17()
  // L62()
  goto L62_;

D17_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p5 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_5, CCP, RHO);
  // p6 = prom<V +>{
  //   center13 = ld center;
  //   center14 = force? center13;
  //   checkMissing(center14);
  //   return center14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_6, CCP, RHO);
  // r27 = dyn sweep1[, , , `check.margin`](p5, 2, p6, FALSE)
  SEXP Rsh_Fir_array_args47[4];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args47[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sweep1_, 4, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

D18_:;
  // deopt 65 [r27]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L63_:;
  // st x = r27
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L6()
  // L6()
  goto L6_;

D19_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // r28 = dyn stop("length of 'center' must equal the number of columns of 'x'")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 70 [r28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L6()
  // L6()
  goto L6_;

L67_:;
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

L68_:;
  // r29 = dyn base4(<sym scale>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L13_;

D21_:;
  // deopt 72 [scale1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c5 = `is.logical`(scale2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_scale2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L13(c5)
  // L13(c5)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c5_;
  goto L13_;

L70_:;
  // scale3 = ld scale
  Rsh_Fir_reg_scale3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

D22_:;
  // deopt 75 [scale3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_scale3_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L71_:;
  // scale4 = force? scale3
  Rsh_Fir_reg_scale4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale3_);
  // checkMissing(scale4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_scale4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(scale4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_scale4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c7 then L72() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L72()
    goto L72_;
  } else {
  // L15()
    goto L15_;
  }

L72_:;
  // r31 = clos inner2854634098
  Rsh_Fir_reg_r31_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2854634098_, RHO, CCP);
  // st f = r31
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L73() else D23()
  // L73()
  goto L73_;

D23_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // p7 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_7, CCP, RHO);
  // p8 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_8, CCP, RHO);
  // r34 = dyn apply(p7, 2, p8)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

D24_:;
  // deopt 85 [r34]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L74_:;
  // st scale = r34
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sweep2 = ldf sweep
  Rsh_Fir_reg_sweep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

D25_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p9 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_9, CCP, RHO);
  // p10 = prom<V +>{
  //   scale5 = ld scale;
  //   scale6 = force? scale5;
  //   checkMissing(scale6);
  //   return scale6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_10, CCP, RHO);
  // p11 = prom<V +>{
  //   __ = ld `/`;
  //   __1 = force? __;
  //   checkMissing(__1);
  //   return __1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_11, CCP, RHO);
  // r38 = dyn sweep2[, , , , `check.margin`](p9, 2, p10, p11, FALSE)
  SEXP Rsh_Fir_array_args60[5];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args60[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[5];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sweep2_, 5, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

D26_:;
  // deopt 95 [r38]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // st x = r38
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

L79_:;
  // scale7 = ld scale
  Rsh_Fir_reg_scale7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L81() else D27()
  // L81()
  goto L81_;

L80_:;
  // r41 = dyn base5(<sym scale>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L18(r41)
  // L18(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L18_;

D27_:;
  // deopt 101 [scale7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_scale7_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // scale8 = force? scale7
  Rsh_Fir_reg_scale8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale7_);
  // checkMissing(scale8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_scale8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // is_numeric1 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r43 = dyn is_numeric1(scale8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_scale8_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L82() else D28()
  // L82()
  goto L82_;

D28_:;
  // deopt 104 [r43]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L18(r43)
  // L18(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L18_;

L83_:;
  // sym6 = ldf `as.numeric`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf `as.numeric` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard6 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // scale9 = ld scale
  Rsh_Fir_reg_scale9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L86() else D29()
  // L86()
  goto L86_;

L85_:;
  // r45 = dyn base6(<sym scale>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L20(r45)
  // L20(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L20_;

D29_:;
  // deopt 108 [scale9]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_scale9_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // scale10 = force? scale9
  Rsh_Fir_reg_scale10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale9_);
  // checkMissing(scale10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_scale10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // as_numeric1 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r47 = dyn as_numeric1(scale10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_scale10_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric1_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L87() else D30()
  // L87()
  goto L87_;

D30_:;
  // deopt 111 [r47]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L20(r47)
  // L20(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L20_;

L89_:;
  // scale11 = ld scale
  Rsh_Fir_reg_scale11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L91() else D31()
  // L91()
  goto L91_;

L90_:;
  // r49 = dyn base7(<sym scale>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L22(r49)
  // L22(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L22_;

D31_:;
  // deopt 117 [scale11]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_scale11_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L91_:;
  // scale12 = force? scale11
  Rsh_Fir_reg_scale12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale11_);
  // checkMissing(scale12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_scale12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r51 = dyn length1(scale12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_scale12_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L92() else D32()
  // L92()
  goto L92_;

D32_:;
  // deopt 120 [r51]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L22(r51)
  // L22(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L22_;

D33_:;
  // deopt 120 [r50, nc2]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nc2_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L93_:;
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r52 = `==`(r50, nc3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_nc3_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c9 then L94() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L94()
    goto L94_;
  } else {
  // L23()
    goto L23_;
  }

L94_:;
  // sweep3 = ldf sweep
  Rsh_Fir_reg_sweep3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L95() else D34()
  // L95()
  goto L95_;

D34_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p12 = prom<V +>{
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   return x16;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_12, CCP, RHO);
  // p13 = prom<V +>{
  //   scale13 = ld scale;
  //   scale14 = force? scale13;
  //   checkMissing(scale14);
  //   return scale14;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_13, CCP, RHO);
  // p14 = prom<V +>{
  //   __2 = ld `/`;
  //   __3 = force? __2;
  //   checkMissing(__3);
  //   return __3;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner305472191_14, CCP, RHO);
  // r56 = dyn sweep3[, , , , `check.margin`](p12, 2, p13, p14, FALSE)
  SEXP Rsh_Fir_array_args77[5];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args77[3] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args77[4] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names22[5];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sweep3_, 5, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L96() else D35()
  // L96()
  goto L96_;

D35_:;
  // deopt 131 [r56]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L96_:;
  // st x = r56
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // goto L17()
  // L17()
  goto L17_;

D36_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // r57 = dyn stop1("length of 'scale' must equal the number of columns of 'x'")
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L99() else D37()
  // L99()
  goto L99_;

D37_:;
  // deopt 136 [r57]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L17()
  // L17()
  goto L17_;

L100_:;
  // center15 = ld center
  Rsh_Fir_reg_center15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L102() else D38()
  // L102()
  goto L102_;

L101_:;
  // r58 = dyn base8(<sym center>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L24(r58)
  // L24(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L24_;

D38_:;
  // deopt 139 [center15]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_center15_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L102_:;
  // center16 = force? center15
  Rsh_Fir_reg_center16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center15_);
  // checkMissing(center16)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_center16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // is_numeric2 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r60 = dyn is_numeric2(center16)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_center16_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric2_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L103() else D39()
  // L103()
  goto L103_;

D39_:;
  // deopt 142 [r60]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L24(r60)
  // L24(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L24_;

L104_:;
  // center17 = ld center
  Rsh_Fir_reg_center17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L105() else D40()
  // L105()
  goto L105_;

D40_:;
  // deopt 143 [center17]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_center17_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L105_:;
  // center18 = force? center17
  Rsh_Fir_reg_center18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center17_);
  // checkMissing(center18)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_center18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L106() else D41()
  // L106()
  goto L106_;

D41_:;
  // deopt 146 [center18, l, center18]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_center18_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_center18_;
  Rsh_Fir_deopt(146, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L106_:;
  // r61 = dyn attr__(l, NULL, "scaled:center", center18)
  SEXP Rsh_Fir_array_args83[4];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args83[3] = Rsh_Fir_reg_center18_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L107() else D42()
  // L107()
  goto L107_;

D42_:;
  // deopt 149 [center18, r61]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_center18_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L107_:;
  // st x = r61
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // goto L26()
  // L26()
  goto L26_;

L109_:;
  // scale15 = ld scale
  Rsh_Fir_reg_scale15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L111() else D43()
  // L111()
  goto L111_;

L110_:;
  // r62 = dyn base9(<sym scale>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L27(r62)
  // L27(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L27_;

D43_:;
  // deopt 155 [scale15]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_scale15_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L111_:;
  // scale16 = force? scale15
  Rsh_Fir_reg_scale16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale15_);
  // checkMissing(scale16)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_scale16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // is_numeric3 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r64 = dyn is_numeric3(scale16)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_scale16_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric3_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L112() else D44()
  // L112()
  goto L112_;

D44_:;
  // deopt 158 [r64]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L27(r64)
  // L27(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L27_;

L113_:;
  // scale17 = ld scale
  Rsh_Fir_reg_scale17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L114() else D45()
  // L114()
  goto L114_;

D45_:;
  // deopt 159 [scale17]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_scale17_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L114_:;
  // scale18 = force? scale17
  Rsh_Fir_reg_scale18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale17_);
  // checkMissing(scale18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_scale18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L115() else D46()
  // L115()
  goto L115_;

D46_:;
  // deopt 162 [scale18, l1, scale18]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_scale18_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_scale18_;
  Rsh_Fir_deopt(162, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L115_:;
  // r65 = dyn attr__1(l1, NULL, "scaled:scale", scale18)
  SEXP Rsh_Fir_array_args88[4];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_scale18_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L116() else D47()
  // L116()
  goto L116_;

D47_:;
  // deopt 165 [scale18, r65]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_scale18_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L116_:;
  // st x = r65
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // goto L29()
  // L29()
  goto L29_;

D48_:;
  // deopt 169 [x17]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L118_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x18
  return Rsh_Fir_reg_x18_;
}
SEXP Rsh_Fir_user_promise_inner305472191_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner305472191_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner305472191_2(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner305472191_3(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner305472191_4(SEXP CCP, SEXP RHO) {
  // center5 = ld center
  Rsh_Fir_reg_center5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // center6 = force? center5
  Rsh_Fir_reg_center6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center5_);
  // checkMissing(center6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_center6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return center6
  return Rsh_Fir_reg_center6_;
}
SEXP Rsh_Fir_user_promise_inner305472191_5(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner305472191_6(SEXP CCP, SEXP RHO) {
  // center13 = ld center
  Rsh_Fir_reg_center13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // center14 = force? center13
  Rsh_Fir_reg_center14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center13_);
  // checkMissing(center14)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_center14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return center14
  return Rsh_Fir_reg_center14_;
}
SEXP Rsh_Fir_user_promise_inner305472191_7(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner305472191_8(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner305472191_9(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner305472191_10(SEXP CCP, SEXP RHO) {
  // scale5 = ld scale
  Rsh_Fir_reg_scale5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // scale6 = force? scale5
  Rsh_Fir_reg_scale6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale5_);
  // checkMissing(scale6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_scale6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return scale6
  return Rsh_Fir_reg_scale6_;
}
SEXP Rsh_Fir_user_promise_inner305472191_11(SEXP CCP, SEXP RHO) {
  // __ = ld `/`
  Rsh_Fir_reg___ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // __1 = force? __
  Rsh_Fir_reg___1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___);
  // checkMissing(__1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg___1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return __1
  return Rsh_Fir_reg___1_;
}
SEXP Rsh_Fir_user_promise_inner305472191_12(SEXP CCP, SEXP RHO) {
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return x16
  return Rsh_Fir_reg_x16_;
}
SEXP Rsh_Fir_user_promise_inner305472191_13(SEXP CCP, SEXP RHO) {
  // scale13 = ld scale
  Rsh_Fir_reg_scale13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // scale14 = force? scale13
  Rsh_Fir_reg_scale14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale13_);
  // checkMissing(scale14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_scale14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return scale14
  return Rsh_Fir_reg_scale14_;
}
SEXP Rsh_Fir_user_promise_inner305472191_14(SEXP CCP, SEXP RHO) {
  // __2 = ld `/`
  Rsh_Fir_reg___2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // __3 = force? __2
  Rsh_Fir_reg___3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___2_);
  // checkMissing(__3)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg___3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return __3
  return Rsh_Fir_reg___3_;
}
SEXP Rsh_Fir_user_function_inner2854634098_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2854634098 dynamic dispatch ([v])

  return Rsh_Fir_user_version_inner2854634098_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2854634098_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2854634098 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2854634098/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_v4_;  // v4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_v7_;  // v7
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_v8_;  // v8
  SEXP Rsh_Fir_reg_v9_;  // v9
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_v10_;  // v10
  SEXP Rsh_Fir_reg_v11_;  // v11
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_r14_1;  // r14
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_sym4_1;  // sym4
  SEXP Rsh_Fir_reg_base4_1;  // base4
  SEXP Rsh_Fir_reg_guard4_1;  // guard4
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_v12_;  // v12
  SEXP Rsh_Fir_reg_v13_;  // v13
  SEXP Rsh_Fir_reg_length1;  // length
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25

  // Bind parameters
  Rsh_Fir_reg_v = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st v = v
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_v, RHO);
  (void)(Rsh_Fir_reg_v);
  // v1 = ld v
  Rsh_Fir_reg_v1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L0_:;
  // st v = dx1
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf sqrt
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf sqrt in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r4 = dyn __(v7, r3)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_v7_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_1;
  goto L0_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

L3_:;
  // sym3 = ldf max
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base3 = ldf max in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard3 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L4_:;
  // r24 = `/`(r14, r15)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // r25 = sqrt(r24)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L2(r25)
  // L2(r25)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r25_;
  goto L2_;

L5_:;
  // r22 = `-`(r20, 1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r23 = dyn max(1.0, r22)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D0_:;
  // deopt 0 [v1]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_v1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L6_:;
  // v2 = force? v1
  Rsh_Fir_reg_v2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v1_);
  // checkMissing(v2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_v2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c = `is.object`(v2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_v2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c then L7() else L8(v2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L7()
    goto L7_;
  } else {
  // L8(v2)
    Rsh_Fir_reg_v4_ = Rsh_Fir_reg_v2_;
    goto L8_;
  }

L7_:;
  // dr = tryDispatchBuiltin.1("[", v2)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_v2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_v4_ = Rsh_Fir_reg_dr;
    goto L8_;
  }

L8_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L10_:;
  // v8 = ld v
  Rsh_Fir_reg_v8_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<sym v>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(v4, r)
  // L1(v4, r)
  Rsh_Fir_reg_v7_ = Rsh_Fir_reg_v4_;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D1_:;
  // deopt 4 [v4, v8]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_v4_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_v8_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L12_:;
  // v9 = force? v8
  Rsh_Fir_reg_v9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v8_);
  // checkMissing(v9)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_v9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r2 = dyn is_na(v9)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_v9_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 7 [v4, r2]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_v4_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(v4, r2)
  // L1(v4, r2)
  Rsh_Fir_reg_v7_ = Rsh_Fir_reg_v4_;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L14_:;
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // r5 = dyn base1(<lang `/`(sum(`^`(v, 2.0)), max(1.0, `-`(length(v), 1)))>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L2_;

L16_:;
  // v10 = ld v
  Rsh_Fir_reg_v10_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // r7 = dyn base2(<lang `^`(v, 2.0)>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L3_;

D3_:;
  // deopt 14 [v10]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_v10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L18_:;
  // v11 = force? v10
  Rsh_Fir_reg_v11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v10_);
  // checkMissing(v11)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_v11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // r9 = `^`(v11, 2.0)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_v11_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r10 = dyn sum(r9)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r10_1;
  goto L3_;

L20_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard4 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r13 = dyn base3(1.0, <lang `-`(length(v), 1)>)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L4(r8, r13)
  // L4(r8, r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r13_1;
  goto L4_;

L22_:;
  // v12 = ld v
  Rsh_Fir_reg_v12_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // r18 = dyn base4(<sym v>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L5(r8, r18)
  // L5(r8, r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_1;
  goto L5_;

D5_:;
  // deopt 24 [r8, v12]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_v12_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L24_:;
  // v13 = force? v12
  Rsh_Fir_reg_v13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v12_);
  // checkMissing(v13)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_v13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r21 = dyn length(v13)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_v13_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D6_:;
  // deopt 27 [r8, r21]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(r8, r21)
  // L5(r8, r21)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_1;
  goto L5_;

D7_:;
  // deopt 31 [r19, r23]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L4(r19, r23)
  // L4(r19, r23)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r23_1;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
