#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3608797442_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3608797442_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3608797442_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3608797442_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner3608797442
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3608797442_, RHO, CCP);
  // st `as.dist.default` = r
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
SEXP Rsh_Fir_user_function_inner3608797442_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3608797442 dynamic dispatch ([m, diag, upper])

  return Rsh_Fir_user_version_inner3608797442_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3608797442_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3608797442 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3608797442/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_upper;  // upper
  SEXP Rsh_Fir_reg_diag_isMissing;  // diag_isMissing
  SEXP Rsh_Fir_reg_diag_orDefault;  // diag_orDefault
  SEXP Rsh_Fir_reg_upper_isMissing;  // upper_isMissing
  SEXP Rsh_Fir_reg_upper_orDefault;  // upper_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_m8_;  // m8
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_m10_;  // m10
  SEXP Rsh_Fir_reg_m11_;  // m11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_m12_;  // m12
  SEXP Rsh_Fir_reg_m13_;  // m13
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_m14_;  // m14
  SEXP Rsh_Fir_reg_m15_;  // m15
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_m17_;  // m17
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_row;  // row
  SEXP Rsh_Fir_reg_m18_;  // m18
  SEXP Rsh_Fir_reg_m19_;  // m19
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_m20_;  // m20
  SEXP Rsh_Fir_reg_m21_;  // m21
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_rownames;  // rownames
  SEXP Rsh_Fir_reg_m22_;  // m22
  SEXP Rsh_Fir_reg_m23_;  // m23
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_rownames1_;  // rownames1
  SEXP Rsh_Fir_reg_m24_;  // m24
  SEXP Rsh_Fir_reg_m25_;  // m25
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_m26_;  // m26
  SEXP Rsh_Fir_reg_m27_;  // m27
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_colnames1_;  // colnames1
  SEXP Rsh_Fir_reg_m28_;  // m28
  SEXP Rsh_Fir_reg_m29_;  // m29
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_attr__3_;  // attr__3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_ans;  // ans
  SEXP Rsh_Fir_reg_ans1_;  // ans1
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_diag1_;  // diag1
  SEXP Rsh_Fir_reg_diag2_;  // diag2
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_attr__4_;  // attr__4
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_ans2_;  // ans2
  SEXP Rsh_Fir_reg_ans3_;  // ans3
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_upper1_;  // upper1
  SEXP Rsh_Fir_reg_upper2_;  // upper2
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_attr__5_;  // attr__5
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_ans4_;  // ans4
  SEXP Rsh_Fir_reg_ans5_;  // ans5

  // Bind parameters
  Rsh_Fir_reg_m = PARAMS[0];
  Rsh_Fir_reg_diag = PARAMS[1];
  Rsh_Fir_reg_upper = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // diag_isMissing = missing.0(diag)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_diag;
  Rsh_Fir_reg_diag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if diag_isMissing then L0(FALSE) else L0(diag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_diag_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_diag_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(diag)
    Rsh_Fir_reg_diag_orDefault = Rsh_Fir_reg_diag;
    goto L0_;
  }

L0_:;
  // st diag = diag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_diag_orDefault, RHO);
  (void)(Rsh_Fir_reg_diag_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if upper_isMissing then L1(FALSE) else L1(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_upper_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L1_;
  }

L1_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L32() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L32()
    goto L32_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

L4_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L5_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L41() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L41()
    goto L41_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // m14 = ld m
  Rsh_Fir_reg_m14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

L10_:;
  // st ans = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l1 = ld ans
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L62() else D21()
  // L62()
  goto L62_;

L11_:;
  // r29 = `!`(r26)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c5 then L68() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L68()
    goto L68_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L13_:;
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L84() else D35()
  // L84()
  goto L84_;

L14_:;
  // r38 = `!`(r35)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c7 then L78() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L78()
    goto L78_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L13()
  // L13()
  goto L13_;

L16_:;
  // c9 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c9 then L18(c9) else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L18(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L18_;
  } else {
  // L99()
    goto L99_;
  }

L17_:;
  // c8 = `==`(r49, NULL)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L16(c8)
  // L16(c8)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_c8_;
  goto L16_;

L18_:;
  // c18 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c18 then L103() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L103()
    goto L103_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // r54 = `!`(r52)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c16 = `||`(c14, c15)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L18(c16)
  // L18(c16)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  goto L18_;

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard7 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L22_:;
  // c20 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c20 then L24(c20) else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L24(c20)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c20_;
    goto L24_;
  } else {
  // L114()
    goto L114_;
  }

L23_:;
  // c19 = `==`(r59, NULL)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L22(c19)
  // L22(c19)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_c19_;
  goto L22_;

L24_:;
  // c29 = `as.logical`(c21)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c29 then L118() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L118()
    goto L118_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // r64 = `!`(r62)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c27 = `||`(c25, c26)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L24(c27)
  // L24(c27)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c27_;
  goto L24_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // ans4 = ld ans
  Rsh_Fir_reg_ans4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L123() else D54()
  // L123()
  goto L123_;

L28_:;
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r = dyn base(<sym m>, "dist")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [m1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn inherits(m2, "dist", FALSE)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L32_:;
  // m3 = ld m
  Rsh_Fir_reg_m3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 8 [m3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L33_:;
  // m4 = force? m3
  Rsh_Fir_reg_m4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m3_);
  // checkMissing(m4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_m4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // st ans = m4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_m4_, RHO);
  (void)(Rsh_Fir_reg_m4_);
  // goto L4()
  // L4()
  goto L4_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p = prom<V +>{
  //   m6 = ld m;
  //   m7 = force? m6;
  //   checkMissing(m7);
  //   return m7;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_, CCP, RHO);
  // r4 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

D4_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // st m = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

L38_:;
  // r5 = dyn base1(<sym m>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r5)
  // L5(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L5_;

D5_:;
  // deopt 18 [m8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_m8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L39_:;
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r7 = dyn is_numeric(m9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_m9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 21 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L5_;

L41_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 26 ["numeric", l, "numeric"]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_const(CCP, 16);
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // r9 = dyn storage_mode__(l, NULL, "numeric")
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

D8_:;
  // deopt 28 ["numeric", r9]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // st m = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L7()
  // L7()
  goto L7_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p1 = prom<V +>{
  //   m10 = ld m;
  //   m11 = force? m10;
  //   checkMissing(m11);
  //   return m11;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_1, CCP, RHO);
  // r12 = dyn nrow(p1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 35 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // st p = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

D11_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   m12 = ld m;
  //   m13 = force? m12;
  //   checkMissing(m13);
  //   return m13;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_2, CCP, RHO);
  // r14 = dyn ncol(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 40 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L48_:;
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

D13_:;
  // deopt 40 [r14, p3]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r15 = `!=`(r14, p4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c2 then L50() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L50()
    goto L50_;
  } else {
  // L8()
    goto L8_;
  }

L50_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

D14_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // r16 = dyn warning("non-square matrix")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

D15_:;
  // deopt 46 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L9()
  // L9()
  goto L9_;

D16_:;
  // deopt 49 [m14]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_m14_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // m15 = force? m14
  Rsh_Fir_reg_m15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m14_);
  // checkMissing(m15)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_m15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(m15)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_m15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c3 then L55() else L56(m15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L55()
    goto L55_;
  } else {
  // L56(m15)
    Rsh_Fir_reg_m17_ = Rsh_Fir_reg_m15_;
    goto L56_;
  }

L55_:;
  // dr = tryDispatchBuiltin.1("[", m15)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_m15_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc then L57() else L56(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr)
    Rsh_Fir_reg_m17_ = Rsh_Fir_reg_dr;
    goto L56_;
  }

L56_:;
  // row = ldf row
  Rsh_Fir_reg_row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L57_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

D17_:;
  // deopt 52 [m17]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_m17_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // p5 = prom<V +>{
  //   m18 = ld m;
  //   m19 = force? m18;
  //   checkMissing(m19);
  //   return m19;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_3, CCP, RHO);
  // r19 = dyn row(p5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

D18_:;
  // deopt 54 [m17, r19]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_m17_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L59_:;
  // col = ldf col
  Rsh_Fir_reg_col = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L60() else D19()
  // L60()
  goto L60_;

D19_:;
  // deopt 55 [m17, r19]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_m17_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // p6 = prom<V +>{
  //   m20 = ld m;
  //   m21 = force? m20;
  //   checkMissing(m21);
  //   return m21;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_4, CCP, RHO);
  // r21 = dyn col(p6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L61() else D20()
  // L61()
  goto L61_;

D20_:;
  // deopt 57 [m17, r19, r21]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_m17_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // r22 = `>`(r19, r21)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r23 = dyn __(m17, r22)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_m17_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L10_;

D21_:;
  // deopt 64 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_const(CCP, 12);
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L62_:;
  // r24 = dyn attributes__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L63() else D22()
  // L63()
  goto L63_;

D22_:;
  // deopt 66 [NULL, r24]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L63_:;
  // st ans = r24
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard2 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

L65_:;
  // r25 = dyn base2(<lang rownames(m)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

D23_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // p7 = prom<V +>{
  //   m22 = ld m;
  //   m23 = force? m22;
  //   checkMissing(m23);
  //   return m23;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_5, CCP, RHO);
  // r28 = dyn rownames(p7)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L67() else D24()
  // L67()
  goto L67_;

D24_:;
  // deopt 72 [r28]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L67_:;
  // c4 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L11(c4)
  // L11(c4)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c4_;
  goto L11_;

L68_:;
  // rownames1 = ldf rownames
  Rsh_Fir_reg_rownames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L69() else D25()
  // L69()
  goto L69_;

D25_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p8 = prom<V +>{
  //   m24 = ld m;
  //   m25 = force? m24;
  //   checkMissing(m25);
  //   return m25;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_6, CCP, RHO);
  // r31 = dyn rownames1(p8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L70() else D26()
  // L70()
  goto L70_;

D26_:;
  // deopt 78 [r31]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // l2 = ld ans
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L71() else D27()
  // L71()
  goto L71_;

D27_:;
  // deopt 80 [r31, l2, r31]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(80, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // r32 = dyn attr__(l2, NULL, "Labels", r31)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L72() else D28()
  // L72()
  goto L72_;

D28_:;
  // deopt 83 [r31, r32]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // st ans = r32
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // goto L13()
  // L13()
  goto L13_;

L74_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L76() else D29()
  // L76()
  goto L76_;

L75_:;
  // r34 = dyn base3(<lang colnames(m)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r34)
  // L14(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L14_;

D29_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p9 = prom<V +>{
  //   m26 = ld m;
  //   m27 = force? m26;
  //   checkMissing(m27);
  //   return m27;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_7, CCP, RHO);
  // r37 = dyn colnames(p9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L77() else D30()
  // L77()
  goto L77_;

D30_:;
  // deopt 89 [r37]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L77_:;
  // c6 = `==`(r37, NULL)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L14(c6)
  // L14(c6)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_c6_;
  goto L14_;

L78_:;
  // colnames1 = ldf colnames
  Rsh_Fir_reg_colnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L79() else D31()
  // L79()
  goto L79_;

D31_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p10 = prom<V +>{
  //   m28 = ld m;
  //   m29 = force? m28;
  //   checkMissing(m29);
  //   return m29;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3608797442_8, CCP, RHO);
  // r40 = dyn colnames1(p10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames1_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L80() else D32()
  // L80()
  goto L80_;

D32_:;
  // deopt 95 [r40]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L80_:;
  // l3 = ld ans
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L81() else D33()
  // L81()
  goto L81_;

D33_:;
  // deopt 97 [r40, l3, r40]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L81_:;
  // r41 = dyn attr__1(l3, NULL, "Labels", r40)
  SEXP Rsh_Fir_array_args70[4];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[3] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L82() else D34()
  // L82()
  goto L82_;

D34_:;
  // deopt 100 [r40, r41]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L82_:;
  // st ans = r41
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // goto L13()
  // L13()
  goto L13_;

D35_:;
  // deopt 104 [p11]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L84_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // l4 = ld ans
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L85() else D36()
  // L85()
  goto L85_;

D36_:;
  // deopt 107 [p12, l4, p12]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_p12_;
  Rsh_Fir_deopt(107, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L85_:;
  // r42 = dyn attr__2(l4, NULL, "Size", p12)
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args72[3] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L86() else D37()
  // L86()
  goto L86_;

D37_:;
  // deopt 110 [p12, r42]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L86_:;
  // st ans = r42
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L87() else D38()
  // L87()
  goto L87_;

D38_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r43 = dyn match_call()
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L88() else D39()
  // L88()
  goto L88_;

D39_:;
  // deopt 114 [r43]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L88_:;
  // l5 = ld ans
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__3 = ldf `attr<-`
  Rsh_Fir_reg_attr__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L89() else D40()
  // L89()
  goto L89_;

D40_:;
  // deopt 116 [r43, l5, r43]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L89_:;
  // r44 = dyn attr__3(l5, NULL, "call", r43)
  SEXP Rsh_Fir_array_args73[4];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args73[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args73[3] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__3_, 4, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L90() else D41()
  // L90()
  goto L90_;

D41_:;
  // deopt 119 [r43, r44]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L90_:;
  // st ans = r44
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // l6 = ld ans
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L91() else D42()
  // L91()
  goto L91_;

D42_:;
  // deopt 124 ["dist", l6, "dist"]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_const(CCP, 13);
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L91_:;
  // r45 = dyn class__(l6, NULL, "dist")
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L92() else D43()
  // L92()
  goto L92_;

D43_:;
  // deopt 126 ["dist", r45]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L92_:;
  // st ans = r45
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // goto L4()
  // L4()
  goto L4_;

L93_:;
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard5 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L94_:;
  // r46 = dyn base4(<lang attr(ans, "Diag")>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r46)
  // L16(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L16_;

L95_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L97() else D44()
  // L97()
  goto L97_;

L96_:;
  // r48 = dyn base5(<sym ans>, "Diag")
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L17(r48)
  // L17(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L17_;

D44_:;
  // deopt 131 [ans]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L97_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r50 = dyn attr(ans1, "Diag")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L98() else D45()
  // L98()
  goto L98_;

D45_:;
  // deopt 135 [r50]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L17_;

L99_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard6 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L100_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r53 = dyn missing(<sym diag>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L19(c9, r53)
  // L19(c9, r53)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L19_;

L101_:;
  // r51 = dyn base6(<sym diag>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L19(c9, r51)
  // L19(c9, r51)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L19_;

L103_:;
  // diag1 = ld diag
  Rsh_Fir_reg_diag1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L104() else D46()
  // L104()
  goto L104_;

D46_:;
  // deopt 142 [diag1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_diag1_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L104_:;
  // diag2 = force? diag1
  Rsh_Fir_reg_diag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_diag1_);
  // checkMissing(diag2)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_diag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // l7 = ld ans
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__4 = ldf `attr<-`
  Rsh_Fir_reg_attr__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L105() else D47()
  // L105()
  goto L105_;

D47_:;
  // deopt 145 [diag2, l7, diag2]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_diag2_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_diag2_;
  Rsh_Fir_deopt(145, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L105_:;
  // r55 = dyn attr__4(l7, NULL, "Diag", diag2)
  SEXP Rsh_Fir_array_args84[4];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args84[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args84[3] = Rsh_Fir_reg_diag2_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__4_, 4, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L106() else D48()
  // L106()
  goto L106_;

D48_:;
  // deopt 148 [diag2, r55]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_diag2_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(148, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L106_:;
  // st ans = r55
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // goto L21()
  // L21()
  goto L21_;

L108_:;
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard8 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L109_:;
  // r56 = dyn base7(<lang attr(ans, "Upper")>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(r56)
  // L22(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L22_;

L110_:;
  // ans2 = ld ans
  Rsh_Fir_reg_ans2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L112() else D49()
  // L112()
  goto L112_;

L111_:;
  // r58 = dyn base8(<sym ans>, "Upper")
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L23(r58)
  // L23(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L23_;

D49_:;
  // deopt 155 [ans2]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_ans2_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L112_:;
  // ans3 = force? ans2
  Rsh_Fir_reg_ans3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans2_);
  // checkMissing(ans3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_ans3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r60 = dyn attr1(ans3, "Upper")
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_ans3_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L113() else D50()
  // L113()
  goto L113_;

D50_:;
  // deopt 159 [r60]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L23(r60)
  // L23(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L23_;

L114_:;
  // sym9 = ldf missing
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base9 = ldf missing in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard9 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r63 = dyn missing1(<sym upper>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L25(c20, r63)
  // L25(c20, r63)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L25_;

L116_:;
  // r61 = dyn base9(<sym upper>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L25(c20, r61)
  // L25(c20, r61)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L25_;

L118_:;
  // upper1 = ld upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L119() else D51()
  // L119()
  goto L119_;

D51_:;
  // deopt 166 [upper1]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_upper1_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L119_:;
  // upper2 = force? upper1
  Rsh_Fir_reg_upper2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1_);
  // checkMissing(upper2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_upper2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // l8 = ld ans
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // attr__5 = ldf `attr<-`
  Rsh_Fir_reg_attr__5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L120() else D52()
  // L120()
  goto L120_;

D52_:;
  // deopt 169 [upper2, l8, upper2]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_deopt(169, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L120_:;
  // r65 = dyn attr__5(l8, NULL, "Upper", upper2)
  SEXP Rsh_Fir_array_args94[4];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args94[3] = Rsh_Fir_reg_upper2_;
  SEXP Rsh_Fir_array_arg_names35[4];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__5_, 4, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L121() else D53()
  // L121()
  goto L121_;

D53_:;
  // deopt 172 [upper2, r65]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L121_:;
  // st ans = r65
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // goto L27()
  // L27()
  goto L27_;

D54_:;
  // deopt 176 [ans4]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_ans4_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L123_:;
  // ans5 = force? ans4
  Rsh_Fir_reg_ans5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans4_);
  // checkMissing(ans5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_ans5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans5
  return Rsh_Fir_reg_ans5_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_(SEXP CCP, SEXP RHO) {
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return m7
  return Rsh_Fir_reg_m7_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_1(SEXP CCP, SEXP RHO) {
  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // checkMissing(m11)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_m11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return m11
  return Rsh_Fir_reg_m11_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_2(SEXP CCP, SEXP RHO) {
  // m12 = ld m
  Rsh_Fir_reg_m12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m13 = force? m12
  Rsh_Fir_reg_m13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m12_);
  // checkMissing(m13)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_m13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return m13
  return Rsh_Fir_reg_m13_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_3(SEXP CCP, SEXP RHO) {
  // m18 = ld m
  Rsh_Fir_reg_m18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m19 = force? m18
  Rsh_Fir_reg_m19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m18_);
  // checkMissing(m19)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_m19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return m19
  return Rsh_Fir_reg_m19_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_4(SEXP CCP, SEXP RHO) {
  // m20 = ld m
  Rsh_Fir_reg_m20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m21 = force? m20
  Rsh_Fir_reg_m21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m20_);
  // checkMissing(m21)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_m21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return m21
  return Rsh_Fir_reg_m21_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_5(SEXP CCP, SEXP RHO) {
  // m22 = ld m
  Rsh_Fir_reg_m22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m23 = force? m22
  Rsh_Fir_reg_m23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m22_);
  // checkMissing(m23)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_m23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return m23
  return Rsh_Fir_reg_m23_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_6(SEXP CCP, SEXP RHO) {
  // m24 = ld m
  Rsh_Fir_reg_m24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m25 = force? m24
  Rsh_Fir_reg_m25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m24_);
  // checkMissing(m25)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_m25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return m25
  return Rsh_Fir_reg_m25_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_7(SEXP CCP, SEXP RHO) {
  // m26 = ld m
  Rsh_Fir_reg_m26_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m27 = force? m26
  Rsh_Fir_reg_m27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m26_);
  // checkMissing(m27)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_m27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return m27
  return Rsh_Fir_reg_m27_;
}
SEXP Rsh_Fir_user_promise_inner3608797442_8(SEXP CCP, SEXP RHO) {
  // m28 = ld m
  Rsh_Fir_reg_m28_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m29 = force? m28
  Rsh_Fir_reg_m29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m28_);
  // checkMissing(m29)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_m29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return m29
  return Rsh_Fir_reg_m29_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
