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
  // st `[[<-.bibentry` = r
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
  SEXP Rsh_Fir_reg__bibentry_seq_along;  // _bibentry_seq_along
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_as_bibentry;  // as_bibentry
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg__bibentry_canonicalize_bibtype_value;  // _bibentry_canonicalize_bibtype_value
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_bibentry_attribute_names;  // bibentry_attribute_names
  SEXP Rsh_Fir_reg_bibentry_attribute_names1_;  // bibentry_attribute_names1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg__bibentry_elt_fld_gets;  // _bibentry_elt_fld_gets
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r56_;  // r56
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
  // _bibentry_seq_along = ldf `.bibentry_seq_along`
  Rsh_Fir_reg__bibentry_seq_along = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L0_:;
  // st i = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf unclass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf unclass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L1_:;
  // st y = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L2_:;
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

L4_:;
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L31() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L31()
    goto L31_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // as_bibentry = ldf `as.bibentry`
  Rsh_Fir_reg_as_bibentry = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L6_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c4 then L35() else L36(r12, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L35()
    goto L35_;
  } else {
  // L36(r12, l)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L36_;
  }

L7_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym6 = ldf class
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf class in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard6 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st value = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L12_:;
  // st y = dx10
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L8()
  // L8()
  goto L8_;

L13_:;
  // l6 = ld y
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, CCP, RHO);
  // p1 = prom<V +>{
  //   i1 = ld i;
  //   i2 = force? i1;
  //   checkMissing(i2);
  //   return i2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_1, CCP, RHO);
  // r2 = dyn _bibentry_seq_along(p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_seq_along, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // st s = r2
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 6 [s]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.object`(s1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L17() else L18(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L18(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L18_;
  }

L17_:;
  // dr = tryDispatchBuiltin.1("[[", s1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L19() else L18(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr;
    goto L18_;
  }

L18_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D3_:;
  // deopt 8 [s3, i3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r3 = dyn __(s3, i4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L21_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r4 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D4_:;
  // deopt 14 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn unclass(x4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L25_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn missing(<sym j>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L26_:;
  // r7 = dyn base1(<sym j>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

L27_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r10 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D6_:;
  // deopt 23 [value1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L4(c2)
  // L4(c2)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c2_;
  goto L4_;

L31_:;
  // goto L6(NULL)
  // L6(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 18);
  goto L6_;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p2 = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_2, CCP, RHO);
  // r14 = dyn as_bibentry(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_bibentry, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 31 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r14_;
  goto L6_;

L35_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r12)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L37() else L36(r12, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L37()
    goto L37_;
  } else {
  // L36(r12, dr2)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L36_;
  }

L36_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L37_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L7(r12, dx2)
  // L7(r12, dx2)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D9_:;
  // deopt 33 [r16, l2, r12, i5]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(33, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r19 = dyn ___(l2, r12, i6)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r16, r19)
  // L7(r16, r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L7_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   sym3 = ldf `is.character`;
  //   base3 = ldf `is.character` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   j1 = ld j;
  //   j2 = force? j1;
  //   checkMissing(j2);
  //   c5 = `is.character`(j2);
  //   goto L0(c5);
  // L2():
  //   r21 = dyn base3(<sym j>);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r25):
  //   r27 = `==`(r25, 1);
  //   return r27;
  // L1():
  //   j3 = ld j;
  //   j4 = force? j3;
  //   checkMissing(j4);
  //   length = ldf length in base;
  //   r26 = dyn length(j4);
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base4(<sym j>);
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_4, CCP, RHO);
  // r29 = dyn stopifnot(p3, p4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 41 [r29]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 42 [j5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r30 = `==`(j6, "bibtype")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_j6_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c6 then L43() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L43()
    goto L43_;
  } else {
  // L9()
    goto L9_;
  }

L43_:;
  // _bibentry_canonicalize_bibtype_value = ldf `.bibentry_canonicalize_bibtype_value`
  Rsh_Fir_reg__bibentry_canonicalize_bibtype_value = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p5 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   list = ldf list in base;
  //   r33 = dyn list(value6);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base5(<sym value>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_5, CCP, RHO);
  // r35 = dyn _bibentry_canonicalize_bibtype_value(p5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_canonicalize_bibtype_value, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D14_:;
  // deopt 49 [r35]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // c7 = `is.object`(r35)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c7 then L46() else L47(r35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L46()
    goto L46_;
  } else {
  // L47(r35)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r35_;
    goto L47_;
  }

L46_:;
  // dr4 = tryDispatchBuiltin.1("[[", r35)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L48() else L47(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr4)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_dr4_;
    goto L47_;
  }

L47_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r38 = dyn __1(r37, 1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r38)
  // L10(r38)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L10_;

L48_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D15_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p6 = prom<V +>{
  //   j7 = ld j;
  //   j8 = force? j7;
  //   checkMissing(j8);
  //   return j8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_6, CCP, RHO);
  // p7 = prom<V +>{
  //   bibentry_attribute_names = ld bibentry_attribute_names;
  //   bibentry_attribute_names1 = force? bibentry_attribute_names;
  //   checkMissing(bibentry_attribute_names1);
  //   return bibentry_attribute_names1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_7, CCP, RHO);
  // r41 = dyn _in_(p6, p7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D16_:;
  // deopt 60 [r41]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // st a = r41
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // _bibentry_elt_fld_gets = ldf `.bibentry_elt_fld_gets`
  Rsh_Fir_reg__bibentry_elt_fld_gets = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

D17_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p8 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   c8 = `is.object`(y1);
  //   if c8 then L1() else L2(y1);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", y1);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(y3):
  //   i7 = ld i;
  //   i8 = force? i7;
  //   __2 = ldf `[[` in base;
  //   r42 = dyn __2(y3, i8);
  //   goto L0(r42);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_8, CCP, RHO);
  // p9 = prom<V +>{
  //   j9 = ld j;
  //   j10 = force? j9;
  //   checkMissing(j10);
  //   return j10;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_9, CCP, RHO);
  // p10 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_10, CCP, RHO);
  // p11 = prom<V +>{
  //   a = ld a;
  //   a1 = force? a;
  //   checkMissing(a1);
  //   return a1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_11, CCP, RHO);
  // r47 = dyn _bibentry_elt_fld_gets(p8, p9, p10, p11)
  SEXP Rsh_Fir_array_args65[4];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args65[3] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bibentry_elt_fld_gets, 4, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

D18_:;
  // deopt 68 [r47]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // l3 = ld y
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c9 then L54() else L55(r47, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L54()
    goto L54_;
  } else {
  // L55(r47, l3)
    Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L55_;
  }

L54_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l3, r47)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args67);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc4 then L56() else L55(r47, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L56()
    goto L56_;
  } else {
  // L55(r47, dr8)
    Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L55_;
  }

L55_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

L56_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L12(r47, dx9)
  // L12(r47, dx9)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L12_;

D19_:;
  // deopt 70 [r49, l5, r47, i9]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(70, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r52 = dyn ____(l5, r47, i10)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r49, r52)
  // L12(r49, r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r52_;
  goto L12_;

L58_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D20()
  // L60()
  goto L60_;

L59_:;
  // r53 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r53)
  // L13(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L13_;

D20_:;
  // deopt 76 [x5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r55 = dyn class(x6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

D21_:;
  // deopt 79 [r55]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L13(r55)
  // L13(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L13_;

D22_:;
  // deopt 81 [r54, l6, r54]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L62_:;
  // r56 = dyn class__(l6, NULL, r54)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L63() else D23()
  // L63()
  goto L63_;

D23_:;
  // deopt 83 [r54, r56]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // st y = r56
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L64() else D24()
  // L64()
  goto L64_;

D24_:;
  // deopt 85 [y4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L64_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y5
  return Rsh_Fir_reg_y5_;
}
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO) {
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return i2
  return Rsh_Fir_reg_i2_;
}
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO) {
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf `is.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf `is.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c5 = `is.character`(j2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(c5)
  // L0(c5)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_c5_;
  goto L0_;

L2_:;
  // r21 = dyn base3(<sym j>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO) {
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r27 = `==`(r25, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r26 = dyn length(j4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base4(<sym j>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO) {
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r33 = dyn list(value6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base5(<sym value>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO) {
  // j7 = ld j
  Rsh_Fir_reg_j7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j8 = force? j7
  Rsh_Fir_reg_j8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j7_);
  // checkMissing(j8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_j8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return j8
  return Rsh_Fir_reg_j8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO) {
  // bibentry_attribute_names = ld bibentry_attribute_names
  Rsh_Fir_reg_bibentry_attribute_names = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // bibentry_attribute_names1 = force? bibentry_attribute_names
  Rsh_Fir_reg_bibentry_attribute_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bibentry_attribute_names);
  // checkMissing(bibentry_attribute_names1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_bibentry_attribute_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return bibentry_attribute_names1
  return Rsh_Fir_reg_bibentry_attribute_names1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_8(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(y1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
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
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", y1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r42 = dyn __2(y3, i8)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r42_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_9(SEXP CCP, SEXP RHO) {
  // j9 = ld j
  Rsh_Fir_reg_j9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j10 = force? j9
  Rsh_Fir_reg_j10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j9_);
  // checkMissing(j10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_j10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return j10
  return Rsh_Fir_reg_j10_;
}
SEXP Rsh_Fir_user_promise_inner650999460_10(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_11(SEXP CCP, SEXP RHO) {
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return a1
  return Rsh_Fir_reg_a1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
