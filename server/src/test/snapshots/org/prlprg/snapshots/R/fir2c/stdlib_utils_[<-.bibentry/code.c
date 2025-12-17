#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner650999460
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner650999460_, RHO, CCP);
  // st `[<-.bibentry` = r
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
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner650999460 dynamic dispatch ([x, i, j, value])

  return Rsh_Fir_user_version_inner650999460_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner650999460 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner650999460/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_as_bibentry;  // as_bibentry
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg__bibentry_seq_along;  // _bibentry_seq_along
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg__listify;  // _listify
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg__bibentry_canonicalize_bibtype_value;  // _bibentry_canonicalize_bibtype_value
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_bibentry_attribute_names;  // bibentry_attribute_names
  SEXP Rsh_Fir_reg_bibentry_attribute_names1_;  // bibentry_attribute_names1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg__bibentry_elt_fld_gets;  // _bibentry_elt_fld_gets
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_y5_;  // y5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_value = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf unclass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf unclass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L0_:;
  // st y = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L23() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L23()
    goto L23_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L3_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // as_bibentry = ldf `as.bibentry`
  Rsh_Fir_reg_as_bibentry = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L5_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L31() else L32(r8, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L31()
    goto L31_;
  } else {
  // L32(r8, l)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L32_;
  }

L6_:;
  // st y = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym7 = ldf class
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base7 = ldf class in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard7 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L8_:;
  // st p = dx3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym5 = ldf rep_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf rep_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L9_:;
  // st value = r31
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

L10_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r37 = dyn rep_len(r33, r35)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

L13_:;
  // i9 = `+`.1(i8, 1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_i9_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // c7 = `<`.1(l3, i9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if c7 then L62() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L62()
    goto L62_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // st y = dx9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L13(i19)
  // L13(i19)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i19_;
  goto L13_;

L15_:;
  // x7 = `[[`(s4, i9, NULL, TRUE)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // st i = x7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // _bibentry_elt_fld_gets = ldf `.bibentry_elt_fld_gets`
  Rsh_Fir_reg__bibentry_elt_fld_gets = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L63() else D23()
  // L63()
  goto L63_;

L16_:;
  // l7 = ld y
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L73() else D28()
  // L73()
  goto L73_;

L17_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D0()
  // L19()
  goto L19_;

L18_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn unclass(x2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L21_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn missing(<sym j>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L22_:;
  // r3 = dyn base1(<sym j>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L23_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r6 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D2_:;
  // deopt 11 [value1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c1 = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c1_;
  goto L3_;

L27_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 15);
  goto L5_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, CCP, RHO);
  // r10 = dyn as_bibentry(p)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_bibentry, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r10_;
  goto L5_;

L31_:;
  // dr = tryDispatchBuiltin.0("[<-", l, r8)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L33() else L32(r8, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L33()
    goto L33_;
  } else {
  // L32(r8, dr)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L32_;
  }

L32_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L33_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L6(r8, dx)
  // L6(r8, dx)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D5_:;
  // deopt 21 [r12, l2, r8, i1]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r15 = dyn ___(l2, r8, i2)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r12, r15)
  // L6(r12, r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L6_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p1 = prom<V +>{
  //   sym3 = ldf `is.character`;
  //   base3 = ldf `is.character` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   j1 = ld j;
  //   j2 = force? j1;
  //   checkMissing(j2);
  //   c4 = `is.character`(j2);
  //   goto L0(c4);
  // L2():
  //   r17 = dyn base3(<sym j>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r21):
  //   r23 = `==`(r21, 1);
  //   return r23;
  // L1():
  //   j3 = ld j;
  //   j4 = force? j3;
  //   checkMissing(j4);
  //   length = ldf length in base;
  //   r22 = dyn length(j4);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base4(<sym j>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_2, CCP, RHO);
  // r25 = dyn stopifnot(p1, p2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

D7_:;
  // deopt 29 [r25]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // _bibentry_seq_along = ldf `.bibentry_seq_along`
  Rsh_Fir_reg__bibentry_seq_along = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p3 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_3, CCP, RHO);
  // p4 = prom<V +>{
  //   i3 = ld i;
  //   i4 = force? i3;
  //   checkMissing(i4);
  //   return i4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_4, CCP, RHO);
  // r28 = dyn _bibentry_seq_along(p3, p4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_seq_along, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

D9_:;
  // deopt 34 [r28]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // st s = r28
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 36 [s]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(s1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c5 then L41() else L42(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L41()
    goto L41_;
  } else {
  // L42(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L42_;
  }

L41_:;
  // dr2 = tryDispatchBuiltin.1("[", s1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L43() else L42(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr2)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr2_;
    goto L42_;
  }

L42_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

L43_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

D11_:;
  // deopt 38 [s3, i5]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn __(s3, i6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L8_;

L45_:;
  // _listify = ldf `.listify`
  Rsh_Fir_reg__listify = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

L46_:;
  // r30 = dyn base5(<lang .listify(value)>, <lang length(x)>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r30)
  // L9(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L9_;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p5 = prom<V +>{
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   return value6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_5, CCP, RHO);
  // r33 = dyn _listify(p5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__listify, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 47 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L48_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard6 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

L50_:;
  // r34 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r34)
  // L10(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L10_;

D14_:;
  // deopt 50 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r36 = dyn length1(x6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

D15_:;
  // deopt 53 [r36]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L10(r36)
  // L10(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L10_;

D16_:;
  // deopt 55 [r37]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L9(r37)
  // L9(r37)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r37_;
  goto L9_;

D17_:;
  // deopt 57 [j5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r38 = `==`(j6, "bibtype")
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_j6_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c6 then L55() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L55()
    goto L55_;
  } else {
  // L11()
    goto L11_;
  }

L55_:;
  // _bibentry_canonicalize_bibtype_value = ldf `.bibentry_canonicalize_bibtype_value`
  Rsh_Fir_reg__bibentry_canonicalize_bibtype_value = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D18_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p6 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_6, CCP, RHO);
  // r40 = dyn _bibentry_canonicalize_bibtype_value(p6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_canonicalize_bibtype_value, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D19_:;
  // deopt 64 [r40]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // st value = r40
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L12()
  // L12()
  goto L12_;

D20_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p7 = prom<V +>{
  //   j7 = ld j;
  //   j8 = force? j7;
  //   checkMissing(j8);
  //   return j8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_7, CCP, RHO);
  // p8 = prom<V +>{
  //   bibentry_attribute_names = ld bibentry_attribute_names;
  //   bibentry_attribute_names1 = force? bibentry_attribute_names;
  //   checkMissing(bibentry_attribute_names1);
  //   return bibentry_attribute_names1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_8, CCP, RHO);
  // r44 = dyn _in_(p7, p8)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

D21_:;
  // deopt 72 [r44]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // st a = r44
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

D22_:;
  // deopt 74 [p9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // s4 = toForSeq(p10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_reg_s4_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // l3 = length(s4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // i7 = 0
  Rsh_Fir_reg_i7_ = Rsh_const(CCP, 35);
  // goto L13(i7)
  // L13(i7)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i7_;
  goto L13_;

L62_:;
  // goto L7()
  // L7()
  goto L7_;

D23_:;
  // deopt 77 [i9]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // p11 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   c8 = `is.object`(y1);
  //   if c8 then L1() else L2(y1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", y1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(y3):
  //   i12 = ld i;
  //   i13 = force? i12;
  //   __1 = ldf `[[` in base;
  //   r45 = dyn __1(y3, i13);
  //   goto L0(r45);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_9, CCP, RHO);
  // p12 = prom<V +>{
  //   j9 = ld j;
  //   j10 = force? j9;
  //   checkMissing(j10);
  //   return j10;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_10, CCP, RHO);
  // p13 = prom<V +>{
  //   value9 = ld value;
  //   value10 = force? value9;
  //   checkMissing(value10);
  //   c9 = `is.object`(value10);
  //   if c9 then L1() else L2(value10);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", value10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(value12):
  //   i14 = ld i;
  //   i15 = force? i14;
  //   __2 = ldf `[[` in base;
  //   r48 = dyn __2(value12, i15);
  //   goto L0(r48);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_11, CCP, RHO);
  // p14 = prom<V +>{
  //   a = ld a;
  //   a1 = force? a;
  //   checkMissing(a1);
  //   return a1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_12, CCP, RHO);
  // r51 = dyn _bibentry_elt_fld_gets(p11, p12, p13, p14)
  SEXP Rsh_Fir_array_args77[4];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args77[3] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_elt_fld_gets, 4, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L64() else D24()
  // L64()
  goto L64_;

D24_:;
  // deopt 82 [i9, r51]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L64_:;
  // l4 = ld y
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c10 = `is.object`(l4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c10 then L65() else L66(i9, r51, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L65()
    goto L65_;
  } else {
  // L66(i9, r51, l4)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L66_;
  }

L65_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l4, r51)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args79);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc4 then L67() else L66(i9, r51, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L67()
    goto L67_;
  } else {
  // L66(i9, r51, dr8)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr8_;
    goto L66_;
  }

L66_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L68() else D25()
  // L68()
  goto L68_;

L67_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L14(i9, dx8)
  // L14(i9, dx8)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L14_;

D25_:;
  // deopt 84 [i17, r53, l6, r51, i20]
  SEXP Rsh_Fir_array_deopt_stack19[5];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack19[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(84, 5, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L68_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r56 = dyn ____(l6, r51, i21)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(i17, r56)
  // L14(i17, r56)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r56_;
  goto L14_;

L69_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

L70_:;
  // r57 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r57)
  // L16(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L16_;

D26_:;
  // deopt 93 [x8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L71_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r59 = dyn class(x9)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

D27_:;
  // deopt 96 [r59]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L16(r59)
  // L16(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L16_;

D28_:;
  // deopt 98 [r58, l7, r58]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L73_:;
  // r60 = dyn class__(l7, NULL, r58)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L74() else D29()
  // L74()
  goto L74_;

D29_:;
  // deopt 100 [r58, r60]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L74_:;
  // st y = r60
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L75() else D30()
  // L75()
  goto L75_;

D30_:;
  // deopt 102 [y4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L75_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y5
  return Rsh_Fir_reg_y5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO) {
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf `is.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `is.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c4 = `is.character`(j2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(c4)
  // L0(c4)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c4_;
  goto L0_;

L2_:;
  // r17 = dyn base3(<sym j>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO) {
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r23 = `==`(r21, 1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r22 = dyn length(j4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base4(<sym j>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO) {
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return i4
  return Rsh_Fir_reg_i4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO) {
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return value6
  return Rsh_Fir_reg_value6_;
}
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO) {
  // j7 = ld j
  Rsh_Fir_reg_j7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j8 = force? j7
  Rsh_Fir_reg_j8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j7_);
  // checkMissing(j8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_j8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return j8
  return Rsh_Fir_reg_j8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_8(SEXP CCP, SEXP RHO) {
  // bibentry_attribute_names = ld bibentry_attribute_names
  Rsh_Fir_reg_bibentry_attribute_names = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // bibentry_attribute_names1 = force? bibentry_attribute_names
  Rsh_Fir_reg_bibentry_attribute_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bibentry_attribute_names);
  // checkMissing(bibentry_attribute_names1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_bibentry_attribute_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return bibentry_attribute_names1
  return Rsh_Fir_reg_bibentry_attribute_names1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_9(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(y1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y1)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", y1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r45 = dyn __1(y3, i13)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r45_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_10(SEXP CCP, SEXP RHO) {
  // j9 = ld j
  Rsh_Fir_reg_j9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j10 = force? j9
  Rsh_Fir_reg_j10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j9_);
  // checkMissing(j10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_j10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return j10
  return Rsh_Fir_reg_j10_;
}
SEXP Rsh_Fir_user_promise_inner650999460_11(SEXP CCP, SEXP RHO) {
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(value10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(value10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(value10)
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value10_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", value10)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i14 = ld i
  Rsh_Fir_reg_i14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i15 = force? i14
  Rsh_Fir_reg_i15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i14_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r48 = dyn __2(value12, i15)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_12(SEXP CCP, SEXP RHO) {
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return a1
  return Rsh_Fir_reg_a1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
