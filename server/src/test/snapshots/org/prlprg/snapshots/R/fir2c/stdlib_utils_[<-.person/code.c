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
  // st `[<-.person` = r
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
  SEXP Rsh_Fir_reg_as_person;  // as_person
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
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_person_field_names;  // person_field_names
  SEXP Rsh_Fir_reg_person_field_names1_;  // person_field_names1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg__canonicalize_person_role;  // _canonicalize_person_role
  SEXP Rsh_Fir_reg__canonicalize_person_role1_;  // _canonicalize_person_role1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg__person_elt_fld_gets;  // _person_elt_fld_gets
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_l8_;  // l8
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
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
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
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L30() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

L3_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // as_person = ldf `as.person`
  Rsh_Fir_reg_as_person = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L5_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L38() else L39(r8, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L38()
    goto L38_;
  } else {
  // L39(r8, l)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L39_;
  }

L6_:;
  // st y = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym9 = ldf class
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base9 = ldf class in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard9 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L8_:;
  // st s = r21
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L9_:;
  // r26 = `!`(r24)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L50() else L10(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L50()
    goto L50_;
  } else {
  // L10(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L10_;
  }

L10_:;
  // c14 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c14 then L55() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L55()
    goto L55_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // c11 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c12 = `&&`(c9, c11)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L10(c12)
  // L10(c12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c12_;
  goto L10_;

L12_:;
  // goto L14()
  // L14()
  goto L14_;

L13_:;
  // l3 = ld s
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L60() else D12()
  // L60()
  goto L60_;

L14_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L63() else D14()
  // L63()
  goto L63_;

L15_:;
  // st p = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym7 = ldf rep_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf rep_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L16_:;
  // st value = r36
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L76() else D20()
  // L76()
  goto L76_;

L17_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn rep_len(value6, r38)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L81() else D23()
  // L81()
  goto L81_;

L20_:;
  // i9 = `+`.1(i8, 1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_i9_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // c17 = `<`.1(l4, i9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if c17 then L82() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L82()
    goto L82_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // st y = dx9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L20(i19)
  // L20(i19)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i19_;
  goto L20_;

L22_:;
  // x7 = `[[`(s4, i9, NULL, TRUE)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st i = x7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // _person_elt_fld_gets = ldf `.person_elt_fld_gets`
  Rsh_Fir_reg__person_elt_fld_gets = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L83() else D24()
  // L83()
  goto L83_;

L23_:;
  // l8 = ld y
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L93() else D29()
  // L93()
  goto L93_;

L24_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L25_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
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

L26_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn unclass(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L28_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn missing(<sym j>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L29_:;
  // r3 = dyn base1(<sym j>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L30_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

L32_:;
  // r6 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
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

L33_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c1 = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c1_;
  goto L3_;

L34_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 16);
  goto L5_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, CCP, RHO);
  // r10 = dyn as_person(p)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_person, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

D4_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r10_;
  goto L5_;

L38_:;
  // dr = tryDispatchBuiltin.0("[<-", l, r8)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(r8, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(r8, dr)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
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

L41_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r15 = dyn ___(l2, r8, i2)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r12, r15)
  // L6(r12, r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L6_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
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
  // r19 = dyn match_arg(p1, p2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D7_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // st j = r19
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym3 = ldf seq_along
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf seq_along in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L46_:;
  // r20 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L8_;

D8_:;
  // deopt 32 [x3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r22 = seq_along(x4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L8_;

L48_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r25 = dyn missing1(<sym i>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L9_;

L49_:;
  // r23 = dyn base4(<sym i>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L9_;

L50_:;
  // sym5 = ldf `is.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf `is.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

L52_:;
  // r27 = dyn base5(<sym i>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(c4, r27)
  // L11(c4, r27)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L11_;

D9_:;
  // deopt 41 [c4, i3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L53_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c10 = `is.character`(i4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L11(c4, c10)
  // L11(c4, c10)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c10_;
  goto L11_;

L55_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L57_:;
  // r29 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L13_;

D10_:;
  // deopt 47 [x5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r31 = dyn names(x6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

D11_:;
  // deopt 50 [r31]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L13(r31)
  // L13(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L13_;

D12_:;
  // deopt 52 [r30, l3, r30]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(52, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L60_:;
  // r32 = dyn names__(l3, NULL, r30)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D13()
  // L61()
  goto L61_;

D13_:;
  // deopt 54 [r30, r32]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L61_:;
  // st s = r32
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // goto L14()
  // L14()
  goto L14_;

D14_:;
  // deopt 58 [s]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(s1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c15 then L64() else L65(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L64()
    goto L64_;
  } else {
  // L65(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L65_;
  }

L64_:;
  // dr2 = tryDispatchBuiltin.1("[", s1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc1 then L66() else L65(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr2)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr2_;
    goto L65_;
  }

L65_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L67() else D15()
  // L67()
  goto L67_;

L66_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L15(dx2)
  // L15(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D15_:;
  // deopt 60 [s3, i5]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L67_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r34 = dyn __(s3, i6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r34_;
  goto L15_;

L68_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

L69_:;
  // r35 = dyn base7(<sym value>, <lang length(p)>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r35)
  // L16(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L16_;

D16_:;
  // deopt 66 [value5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L70_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard8 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L73() else D17()
  // L73()
  goto L73_;

L72_:;
  // r37 = dyn base8(<sym p>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L17_;

D17_:;
  // deopt 70 [p3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L73_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r39 = dyn length(p4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

D18_:;
  // deopt 73 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L17(r39)
  // L17(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L17_;

D19_:;
  // deopt 75 [r40]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  goto L16_;

D20_:;
  // deopt 77 [j3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r41 = `==`(j4, "role")
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_j4_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c16 then L77() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L77()
    goto L77_;
  } else {
  // L18()
    goto L18_;
  }

L77_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

D21_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p5 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_3, CCP, RHO);
  // p6 = prom<V +>{
  //   _canonicalize_person_role = ld `.canonicalize_person_role`;
  //   _canonicalize_person_role1 = force? _canonicalize_person_role;
  //   checkMissing(_canonicalize_person_role1);
  //   return _canonicalize_person_role1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_4, CCP, RHO);
  // r44 = dyn lapply(p5, p6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

D22_:;
  // deopt 85 [r44]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L79_:;
  // st value = r44
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L19()
  // L19()
  goto L19_;

D23_:;
  // deopt 89 [p7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L81_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // s4 = toForSeq(p8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_reg_s4_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // l4 = length(s4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // i7 = 0
  Rsh_Fir_reg_i7_ = Rsh_const(CCP, 34);
  // goto L20(i7)
  // L20(i7)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i7_;
  goto L20_;

L82_:;
  // goto L7()
  // L7()
  goto L7_;

D24_:;
  // deopt 92 [i9]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L83_:;
  // p9 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   c18 = `is.object`(y1);
  //   if c18 then L1() else L2(y1);
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
  //   r46 = dyn __1(y3, i13);
  //   goto L0(r46);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_5, CCP, RHO);
  // p10 = prom<V +>{
  //   j5 = ld j;
  //   j6 = force? j5;
  //   checkMissing(j6);
  //   return j6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_6, CCP, RHO);
  // p11 = prom<V +>{
  //   value9 = ld value;
  //   value10 = force? value9;
  //   checkMissing(value10);
  //   c19 = `is.object`(value10);
  //   if c19 then L1() else L2(value10);
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
  //   r49 = dyn __2(value12, i15);
  //   goto L0(r49);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_7, CCP, RHO);
  // r51 = dyn _person_elt_fld_gets(p9, p10, p11)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__person_elt_fld_gets, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L84() else D25()
  // L84()
  goto L84_;

D25_:;
  // deopt 96 [i9, r51]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L84_:;
  // l5 = ld y
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c20 = `is.object`(l5)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c20 then L85() else L86(i9, r51, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L85()
    goto L85_;
  } else {
  // L86(i9, r51, l5)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L86_;
  }

L85_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l5, r51)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args86);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc4 then L87() else L86(i9, r51, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L87()
    goto L87_;
  } else {
  // L86(i9, r51, dr8)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr8_;
    goto L86_;
  }

L86_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

L87_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L21(i9, dx8)
  // L21(i9, dx8)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L21_;

D26_:;
  // deopt 98 [i17, r53, l7, r51, i20]
  SEXP Rsh_Fir_array_deopt_stack23[5];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(98, 5, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L88_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r56 = dyn ____(l7, r51, i21)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args89[2] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L21(i17, r56)
  // L21(i17, r56)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r56_;
  goto L21_;

L89_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L91() else D27()
  // L91()
  goto L91_;

L90_:;
  // r57 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L23(r57)
  // L23(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L23_;

D27_:;
  // deopt 107 [x8]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L91_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r59 = dyn class(x9)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L92() else D28()
  // L92()
  goto L92_;

D28_:;
  // deopt 110 [r59]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L23(r59)
  // L23(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L23_;

D29_:;
  // deopt 112 [r58, l8, r58]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L93_:;
  // r60 = dyn class__(l8, NULL, r58)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L94() else D30()
  // L94()
  goto L94_;

D30_:;
  // deopt 114 [r58, r60]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L94_:;
  // st y = r60
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L95() else D31()
  // L95()
  goto L95_;

D31_:;
  // deopt 116 [y4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L95_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
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
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO) {
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return j2
  return Rsh_Fir_reg_j2_;
}
SEXP Rsh_Fir_user_promise_inner650999460_2(SEXP CCP, SEXP RHO) {
  // person_field_names = ld person_field_names
  Rsh_Fir_reg_person_field_names = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // person_field_names1 = force? person_field_names
  Rsh_Fir_reg_person_field_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_person_field_names);
  // checkMissing(person_field_names1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_person_field_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return person_field_names1
  return Rsh_Fir_reg_person_field_names1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_3(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_user_promise_inner650999460_4(SEXP CCP, SEXP RHO) {
  // _canonicalize_person_role = ld `.canonicalize_person_role`
  Rsh_Fir_reg__canonicalize_person_role = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // _canonicalize_person_role1 = force? _canonicalize_person_role
  Rsh_Fir_reg__canonicalize_person_role1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__canonicalize_person_role);
  // checkMissing(_canonicalize_person_role1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg__canonicalize_person_role1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return _canonicalize_person_role1
  return Rsh_Fir_reg__canonicalize_person_role1_;
}
SEXP Rsh_Fir_user_promise_inner650999460_5(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(y1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c18 then L1() else L2(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
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
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
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
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r46 = dyn __1(y3, i13)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner650999460_6(SEXP CCP, SEXP RHO) {
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // checkMissing(j6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_j6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return j6
  return Rsh_Fir_reg_j6_;
}
SEXP Rsh_Fir_user_promise_inner650999460_7(SEXP CCP, SEXP RHO) {
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(value10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c19 then L1() else L2(value10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
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
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
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
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r49 = dyn __2(value12, i15)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r49_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
