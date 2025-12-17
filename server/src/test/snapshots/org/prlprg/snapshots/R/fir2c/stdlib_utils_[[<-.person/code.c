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
  // st `[[<-.person` = r
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
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_as_person;  // as_person
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_person_field_names;  // person_field_names
  SEXP Rsh_Fir_reg_person_field_names1_;  // person_field_names1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg__canonicalize_person_role;  // _canonicalize_person_role
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg__person_elt_fld_gets;  // _person_elt_fld_gets
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r48_;  // r48
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
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L0_:;
  // st s = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.character` in base
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
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L24() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // l = ld s
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L4_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L5_:;
  // st i = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym3 = ldf unclass
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf unclass in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L6_:;
  // st y = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L7_:;
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L9_:;
  // c5 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c5 then L47() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L47()
    goto L47_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // as_person = ldf `as.person`
  Rsh_Fir_reg_as_person = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

L11_:;
  // l1 = ld y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c6 = `is.object`(l1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c6 then L51() else L52(r19, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r19, l1)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L52_;
  }

L12_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym6 = ldf class
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf class in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard6 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // _person_elt_fld_gets = ldf `.person_elt_fld_gets`
  Rsh_Fir_reg__person_elt_fld_gets = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

L16_:;
  // st y = dx7
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L13()
  // L13()
  goto L13_;

L17_:;
  // l7 = ld y
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L73() else D24()
  // L73()
  goto L73_;

L18_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(x2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L21_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

L22_:;
  // r3 = dyn base1(<sym i>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 6 [i1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.character`(i2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L24_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r5 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D2_:;
  // deopt 11 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r7 = dyn names(x4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 16 [r6, l, r6]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // r8 = dyn names__(l, NULL, r6)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 18 [r6, r8]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // st s = r8
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L4()
  // L4()
  goto L4_;

D6_:;
  // deopt 22 [s]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(s1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c2 then L33() else L34(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L34(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L34_;
  }

L33_:;
  // dr = tryDispatchBuiltin.1("[[", s1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D7_:;
  // deopt 24 [s3, i3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r10 = dyn __(s3, i4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L5_;

L37_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

L38_:;
  // r11 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D8_:;
  // deopt 30 [x5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r13 = dyn unclass(x6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

D9_:;
  // deopt 33 [r13]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

L41_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r16 = dyn missing(<sym j>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L7_;

L42_:;
  // r14 = dyn base4(<sym j>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L7_;

L43_:;
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard5 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r17 = dyn base5(<sym value>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D10_:;
  // deopt 39 [value1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c4 = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L9(c4)
  // L9(c4)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c4_;
  goto L9_;

L47_:;
  // goto L11(NULL)
  // L11(NULL)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 18);
  goto L11_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, CCP, RHO);
  // r21 = dyn as_person(p)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_person, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D12_:;
  // deopt 47 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r21_;
  goto L11_;

L51_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l1, r19)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(r19, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(r19, dr2)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L12(r19, dx2)
  // L12(r19, dx2)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

D13_:;
  // deopt 49 [r23, l3, r19, i5]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(49, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r26 = dyn ___(l3, r19, i6)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r23, r26)
  // L12(r23, r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L12_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p1 = prom<V +>{
  //   j1 = ld j;
  //   j2 = force? j1;
  //   checkMissing(j2);
  //   return j2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_1, CCP, RHO);
  // p2 = prom<V +>{
  //   person_field_names = ld person_field_names;
  //   person_field_names1 = force? person_field_names;
  //   checkMissing(person_field_names1);
  //   return person_field_names1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_2, CCP, RHO);
  // r30 = dyn match_arg(p1, p2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

D15_:;
  // deopt 57 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // st j = r30
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

D16_:;
  // deopt 59 [j3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L58_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r31 = `==`(j4, "role")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_j4_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c7 then L59() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L59()
    goto L59_;
  } else {
  // L14()
    goto L14_;
  }

L59_:;
  // _canonicalize_person_role = ldf `.canonicalize_person_role`
  Rsh_Fir_reg__canonicalize_person_role = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p3 = prom<V +>{
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   return value6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_3, CCP, RHO);
  // r33 = dyn _canonicalize_person_role(p3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__canonicalize_person_role, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

D18_:;
  // deopt 66 [r33]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // st value = r33
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L15()
  // L15()
  goto L15_;

D19_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
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
  //   i7 = ld i;
  //   i8 = force? i7;
  //   __1 = ldf `[[` in base;
  //   r35 = dyn __1(y3, i8);
  //   goto L0(r35);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_4, CCP, RHO);
  // p5 = prom<V +>{
  //   j5 = ld j;
  //   j6 = force? j5;
  //   checkMissing(j6);
  //   return j6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_5, CCP, RHO);
  // p6 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_6, CCP, RHO);
  // r39 = dyn _person_elt_fld_gets(p4, p5, p6)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__person_elt_fld_gets, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

D20_:;
  // deopt 75 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // l4 = ld y
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c9 = `is.object`(l4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c9 then L65() else L66(r39, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L65()
    goto L65_;
  } else {
  // L66(r39, l4)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L66_;
  }

L65_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l4, r39)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L67() else L66(r39, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L67()
    goto L67_;
  } else {
  // L66(r39, dr6)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr6_;
    goto L66_;
  }

L66_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L68() else D21()
  // L68()
  goto L68_;

L67_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L16(r39, dx6)
  // L16(r39, dx6)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L16_;

D21_:;
  // deopt 77 [r41, l6, r39, i9]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(77, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L68_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r44 = dyn ____(l6, r39, i10)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r41, r44)
  // L16(r41, r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L16_;

L69_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

L70_:;
  // r45 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r45)
  // L17(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L17_;

D22_:;
  // deopt 83 [x7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r47 = dyn class(x8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D23()
  // L72()
  goto L72_;

D23_:;
  // deopt 86 [r47]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L17_;

D24_:;
  // deopt 88 [r46, l7, r46]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(88, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // r48 = dyn class__(l7, NULL, r46)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L74() else D25()
  // L74()
  goto L74_;

D25_:;
  // deopt 90 [r46, r48]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L74_:;
  // st y = r48
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L75() else D26()
  // L75()
  goto L75_;

D26_:;
  // deopt 92 [y4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L75_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
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
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO) {
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return j2
  return Rsh_Fir_reg_j2_;
}
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO) {
  // person_field_names = ld person_field_names
  Rsh_Fir_reg_person_field_names = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // person_field_names1 = force? person_field_names
  Rsh_Fir_reg_person_field_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_person_field_names);
  // checkMissing(person_field_names1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_person_field_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return person_field_names1
  return Rsh_Fir_reg_person_field_names1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO) {
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return value6
  return Rsh_Fir_reg_value6_;
}
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(y1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
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
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
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
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r35 = dyn __1(y3, i8)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO) {
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return j6
  return Rsh_Fir_reg_j6_;
}
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
