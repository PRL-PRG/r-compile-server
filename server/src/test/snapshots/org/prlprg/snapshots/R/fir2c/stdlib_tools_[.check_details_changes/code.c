#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1807018334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1807018334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1807018334_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807018334_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807018334_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807018334_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1807018334
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1807018334_, RHO, CCP);
  // st `[.check_details_changes` = r
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
SEXP Rsh_Fir_user_function_inner1807018334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1807018334 dynamic dispatch ([x, i, j, drop])

  return Rsh_Fir_user_version_inner1807018334_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1807018334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1807018334 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1807018334/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_drop_isMissing;  // drop_isMissing
  SEXP Rsh_Fir_reg_drop_orDefault;  // drop_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_encode;  // encode
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_encode1_;  // encode1
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_old;  // old
  SEXP Rsh_Fir_reg_old1_;  // old1
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_NextMethod;  // NextMethod
  SEXP Rsh_Fir_reg_r46_;  // r46

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_drop = PARAMS[3];

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
  // drop_isMissing = missing.0(drop)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_drop;
  Rsh_Fir_reg_drop_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if drop_isMissing then L0(FALSE) else L0(drop)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_drop_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_drop_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(drop)
    Rsh_Fir_reg_drop_orDefault = Rsh_Fir_reg_drop;
    goto L0_;
  }

L0_:;
  // st drop = drop_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_drop_orDefault, RHO);
  (void)(Rsh_Fir_reg_drop_orDefault);
  // sym = ldf nargs
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf nargs in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L1_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L2_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // r10 = `-`(r6, r9)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // r11 = `==`(r10, 3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r11)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L18() else L3(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L3(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L3_;
  }

L3_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c9 then L24() else L5(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L24()
    goto L24_;
  } else {
  // L5(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L5_;
  }

L4_:;
  // r15 = `==`(r13, 1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(c7)
  // L3(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L3_;

L5_:;
  // c28 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c28 then L39() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L39()
    goto L39_;
  } else {
  // L10()
    goto L10_;
  }

L6_:;
  // c25 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c26 = `&&`(c14, c25)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L5(c26)
  // L5(c26)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c26_;
  goto L5_;

L7_:;
  // r27 = `!`(r19)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r28 = dyn any(r27)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L8_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn is_na(r21)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L9_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r25 = dyn match(i4, r23, NA_INT, NULL)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L10_:;
  // goto L12()
  // L12()
  goto L12_;

L11_:;
  // st levels = r30
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // r32 = clos inner1236783023
  Rsh_Fir_reg_r32_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1236783023_, RHO, CCP);
  // st encode = r32
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // encode = ldf encode
  Rsh_Fir_reg_encode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L12_:;
  // NextMethod = ldf NextMethod
  Rsh_Fir_reg_NextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L13_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn nargs()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L16_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn missing(<sym drop>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r1, r8)
  // L2(r1, r8)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L17_:;
  // r5 = dyn base1(<sym drop>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r1, r5)
  // L2(r1, r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r5_;
  goto L2_;

L18_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L20_:;
  // r12 = dyn base2(<sym i>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(c, r12)
  // L4(c, r12)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

D1_:;
  // deopt 12 [c, i1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r14 = dyn length(i2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

D2_:;
  // deopt 15 [c, r14]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L4(c, r14)
  // L4(c, r14)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L4_;

L24_:;
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r16 = dyn base3(<lang `!`(is.na(match(i, c("==", "!=", "<", "<=", ">", ">="))))>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(c9, r16)
  // L6(c9, r16)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L6_;

L27_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard5 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L28_:;
  // r18 = dyn base4(<lang match(i, c("==", "!=", "<", "<=", ">", ">="))>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(c9, r18)
  // L7(c9, r18)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

L29_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L30_:;
  // r20 = dyn base5(<sym i>, <lang c("==", "!=", "<", "<=", ">", ">=")>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(c9, r20)
  // L8(c9, r20)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L8_;

D3_:;
  // deopt 25 [c9, i3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L31_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard6 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // c24 = ldf c in base
  Rsh_Fir_reg_c24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r24 = dyn c24("==", "!=", "<", "<=", ">", ">=")
  SEXP Rsh_Fir_array_args32[6];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args32[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args32[5] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[6];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c24_, 6, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // r22 = dyn base6("==", "!=", "<", "<=", ">", ">=")
  SEXP Rsh_Fir_array_args33[6];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args33[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args33[5] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[6];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 6, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(c9, r22)
  // L9(c9, r22)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L9_;

D4_:;
  // deopt 36 [c9, r24]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L9(c9, r24)
  // L9(c9, r24)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L9_;

D5_:;
  // deopt 40 [c23, r25]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L8(c23, r25)
  // L8(c23, r25)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r25_;
  goto L8_;

D6_:;
  // deopt 42 [c20, r26]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L7(c20, r26)
  // L7(c20, r26)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r26_;
  goto L7_;

D7_:;
  // deopt 45 [c17, r28]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(c17, r28)
  // L6(c17, r28)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r28_;
  goto L6_;

L39_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard7 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // c29 = ldf c in base
  Rsh_Fir_reg_c29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r31 = dyn c29("", "OK", "NOTE", "WARNING", "ERROR", "FAILURE")
  SEXP Rsh_Fir_array_args35[6];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args35[5] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names12[6];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c29_, 6, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L41_:;
  // r29 = dyn base7("", "OK", "NOTE", "WARNING", "ERROR", "FAILURE")
  SEXP Rsh_Fir_array_args36[6];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args36[4] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args36[5] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[6];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 6, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L11_;

D8_:;
  // deopt 56 [r31]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L11_;

D9_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c30 = `is.object`(x2);
  //   if c30 then L1() else L2(x2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x4):
  //   r33 = `$`(x4, <sym Old>);
  //   goto L0(r33);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807018334_, CCP, RHO);
  // r35 = dyn encode(p)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encode, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 64 [r35]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // st old = r35
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // encode1 = ldf encode
  Rsh_Fir_reg_encode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

D11_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c31 = `is.object`(x6);
  //   if c31 then L1() else L2(x6);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", x6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(x8):
  //   r36 = `$`(x8, <sym New>);
  //   goto L0(r36);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807018334_1, CCP, RHO);
  // r38 = dyn encode1(p1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encode1_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

D12_:;
  // deopt 69 [r38]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // st new = r38
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

D13_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   return i6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807018334_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym8 = ldf list;
  //   base8 = ldf list in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   old = ld old;
  //   old1 = force? old;
  //   checkMissing(old1);
  //   new = ld new;
  //   new1 = force? new;
  //   checkMissing(new1);
  //   list = ldf list in base;
  //   r42 = dyn list(old1, new1);
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base8(<sym old>, <sym new>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807018334_3, CCP, RHO);
  // r44 = dyn do_call(p2, p3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

D14_:;
  // deopt 75 [r44]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L48_:;
  // st i = r44
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L12()
  // L12()
  goto L12_;

D15_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // r46 = dyn NextMethod()
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NextMethod, 0, NULL, NULL, CCP, RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D16_:;
  // deopt 81 [r46]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L51_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_inner1807018334_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(x2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c30 then L1() else L2(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r33 = `$`(x4, <sym Old>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r33_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1807018334_1(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(x6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c31 then L1() else L2(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r36 = `$`(x8, <sym New>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1807018334_2(SEXP CCP, SEXP RHO) {
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return i6
  return Rsh_Fir_reg_i6_;
}
SEXP Rsh_Fir_user_promise_inner1807018334_3(SEXP CCP, SEXP RHO) {
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // old = ld old
  Rsh_Fir_reg_old = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // old1 = force? old
  Rsh_Fir_reg_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old);
  // checkMissing(old1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r42 = dyn list(old1, new1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_old1_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base8(<sym old>, <sym new>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1236783023 dynamic dispatch ([s])

  return Rsh_Fir_user_version_inner1236783023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1236783023 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1236783023/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_r20_1;  // r20
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_levels;  // levels
  SEXP Rsh_Fir_reg_levels1_;  // levels1
  SEXP Rsh_Fir_reg_match1;  // match
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_is_na1;  // is_na
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_ordered;  // ordered
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_s6_;  // s6
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_levels2_;  // levels2
  SEXP Rsh_Fir_reg_levels3_;  // levels3
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r27_1;  // r27

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st s = dx1
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // ordered = ldf ordered
  Rsh_Fir_reg_ordered = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L1_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r24 = dyn ___(l5, r12, r13)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r24_1;
  goto L0_;

L2_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn is_na(r21)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_, CCP, RHO);
  // r1 = dyn sub("\n.*", "", p)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L4_:;
  // st s = r1
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // l = ld s
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c then L5() else L6("", l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L5()
    goto L5_;
  } else {
  // L6("", l)
    Rsh_Fir_reg_r3_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L6_;
  }

L5_:;
  // dr = tryDispatchBuiltin.0("[<-", l, "")
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6("", dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L7()
    goto L7_;
  } else {
  // L6("", dr)
    Rsh_Fir_reg_r3_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr1;
    goto L6_;
  }

L6_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L8_:;
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // r10 = dyn base(<lang match(s, levels)>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r3, l2, "", r10)
  // L1(r3, l2, "", r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r12_1 = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r10_1;
  goto L1_;

L10_:;
  // s3 = ld s
  Rsh_Fir_reg_s3_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r18 = dyn base1(<sym s>, <sym levels>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L2(r3, l2, "", r18)
  // L2(r3, l2, "", r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r20_1 = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r18_1;
  goto L2_;

D2_:;
  // deopt 14 [r3, l2, "", s3]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_s3_;
  Rsh_Fir_deopt(14, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // s4 = force? s3
  Rsh_Fir_reg_s4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3_);
  // checkMissing(s4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_s4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // levels = ld levels
  Rsh_Fir_reg_levels = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 16 [r3, l2, "", levels]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_levels;
  Rsh_Fir_deopt(16, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L13_:;
  // levels1 = force? levels
  Rsh_Fir_reg_levels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels);
  // checkMissing(levels1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_levels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r22 = dyn match(s4, levels1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_levels1_;
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1, 4, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 21 [r3, l2, "", r22]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(r3, l2, "", r22)
  // L2(r3, l2, "", r22)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r20_1 = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r22_1;
  goto L2_;

D5_:;
  // deopt 23 [r19, l8, r20, r23]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(23, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r19, l8, r20, r23)
  // L1(r19, l8, r20, r23)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r23_1;
  goto L1_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   s5 = ld s;
  //   s6 = force? s5;
  //   checkMissing(s6);
  //   return s6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_1, CCP, RHO);
  // p2 = prom<V +>{
  //   levels2 = ld levels;
  //   levels3 = force? levels2;
  //   checkMissing(levels3);
  //   return levels3;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_2, CCP, RHO);
  // r27 = dyn ordered(p1, p2)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ordered, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 30 [r27]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r27
  return Rsh_Fir_reg_r27_1;
}
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO) {
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO) {
  // s5 = ld s
  Rsh_Fir_reg_s5_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // s6 = force? s5
  Rsh_Fir_reg_s6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s5_);
  // checkMissing(s6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_s6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return s6
  return Rsh_Fir_reg_s6_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO) {
  // levels2 = ld levels
  Rsh_Fir_reg_levels2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // levels3 = force? levels2
  Rsh_Fir_reg_levels3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels2_);
  // checkMissing(levels3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_levels3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return levels3
  return Rsh_Fir_reg_levels3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
