#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3054830996_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3054830996_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3054830996_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3054830996_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3054830996_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3054830996_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner177517877_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner177517877_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner177517877_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner177517877_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3054830996
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3054830996_, RHO, CCP);
  // st `format.AsIs` = r
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
SEXP Rsh_Fir_user_function_inner3054830996_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3054830996 dynamic dispatch ([x, width, `...`])

  return Rsh_Fir_user_version_inner3054830996_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3054830996_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3054830996 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3054830996/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_width;  // width
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_width_isMissing;  // width_isMissing
  SEXP Rsh_Fir_reg_width_orDefault;  // width_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_atomic;  // is_atomic
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_format_default;  // format_default
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_width1_;  // width1
  SEXP Rsh_Fir_reg_width2_;  // width2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dim__;  // dim__
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_format_default1_;  // format_default1
  SEXP Rsh_Fir_reg_rvec;  // rvec
  SEXP Rsh_Fir_reg_rvec1_;  // rvec1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_width = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // width_isMissing = missing.0(width)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_width;
  Rsh_Fir_reg_width_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if width_isMissing then L0(12.0) else L0(width)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_isMissing)) {
  // L0(12.0)
    Rsh_Fir_reg_width_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(width)
    Rsh_Fir_reg_width_orDefault = Rsh_Fir_reg_width;
    goto L0_;
  }

L0_:;
  // st width = width_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_width_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
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
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L2(c1) else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L2_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // c25 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c25 then L28() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L28()
    goto L28_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // c7 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c7 then L21() else L4(c6, c7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L21()
    goto L21_;
  } else {
  // L4(c6, c7)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c7_;
    goto L4_;
  }

L4_:;
  // c22 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c23 = `||`(c10, c22)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L2(c23)
  // L2(c23)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c23_;
  goto L2_;

L5_:;
  // c18 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c17, c18)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(c16, c19)
  // L4(c16, c19)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c19_;
  goto L4_;

L6_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L8_:;
  // c27 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c27 then L36() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L36()
    goto L36_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

L11_:;
  // l = ld rvec
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

L12_:;
  // l1 = ld rvec
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L13_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.character`(x2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L16_:;
  // sym1 = ldf `is.atomic`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.atomic` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

L18_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(c1, r2)
  // L3(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D1_:;
  // deopt 6 [c1, x3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r4 = dyn is_atomic(x4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 9 [c1, r4]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(c1, r4)
  // L3(c1, r4)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L3_;

L21_:;
  // sym2 = ldf `is.matrix`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf `is.matrix` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L23_:;
  // r5 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(c6, c7, r5)
  // L5(c6, c7, r5)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L5_;

D3_:;
  // deopt 12 [c6, c7, x5]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r7 = dyn is_matrix(x6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

D4_:;
  // deopt 15 [c6, c7, r7]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(c6, c7, r7)
  // L5(c6, c7, r7)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L5_;

L28_:;
  // format_default = ldf `format.default`
  Rsh_Fir_reg_format_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3054830996_, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r9 = dyn format_default[, `...`](p, ddd1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_default, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

D6_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L33_:;
  // width1 = ld width
  Rsh_Fir_reg_width1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L35() else D7()
  // L35()
  goto L35_;

L34_:;
  // r12 = dyn base3(<sym width>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L8_;

D7_:;
  // deopt 27 [width1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_width1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // width2 = force? width1
  Rsh_Fir_reg_width2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width1_);
  // checkMissing(width2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_width2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c26 = `==`(width2, NULL)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_width2_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L8(c26)
  // L8(c26)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_c26_;
  goto L8_;

L36_:;
  // st width = 12
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 15), RHO);
  (void)(Rsh_const(CCP, 15));
  // goto L10()
  // L10()
  goto L10_;

D8_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p1 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3054830996_1, CCP, RHO);
  // p2 = prom<V +>{
  //   r16 = clos inner177517877;
  //   return r16;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3054830996_2, CCP, RHO);
  // r18 = dyn vapply(p1, p2, "")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

D9_:;
  // deopt 40 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // st rvec = r18
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym4 = ldf dim
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf dim in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L41_:;
  // r19 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

D10_:;
  // deopt 44 [x11]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r21 = dyn dim(x12)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

D11_:;
  // deopt 47 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L11_;

D12_:;
  // deopt 49 [r20, l, r20]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // r22 = dyn dim__(l, NULL, r20)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

D13_:;
  // deopt 51 [r20, r22]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // st rvec = r22
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard5 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

L47_:;
  // r23 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D14_:;
  // deopt 55 [x13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r25 = dyn dimnames(x14)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 58 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

D16_:;
  // deopt 60 [r24, l1, r24]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // r26 = dyn dimnames__(l1, NULL, r24)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L51() else D17()
  // L51()
  goto L51_;

D17_:;
  // deopt 62 [r24, r26]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L51_:;
  // st rvec = r26
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // format_default1 = ldf `format.default`
  Rsh_Fir_reg_format_default1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L52() else D18()
  // L52()
  goto L52_;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p3 = prom<V +>{
  //   rvec = ld rvec;
  //   rvec1 = force? rvec;
  //   checkMissing(rvec1);
  //   return rvec1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3054830996_3, CCP, RHO);
  // r28 = dyn format_default1[, justify](p3, "right")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_default1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D19()
  // L53()
  goto L53_;

D19_:;
  // deopt 69 [r28]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L53_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner3054830996_(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner3054830996_1(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner3054830996_2(SEXP CCP, SEXP RHO) {
  // r16 = clos inner177517877
  Rsh_Fir_reg_r16_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner177517877_, RHO, CCP);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner3054830996_3(SEXP CCP, SEXP RHO) {
  // rvec = ld rvec
  Rsh_Fir_reg_rvec = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // rvec1 = force? rvec
  Rsh_Fir_reg_rvec1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvec);
  // checkMissing(rvec1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_rvec1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return rvec1
  return Rsh_Fir_reg_rvec1_;
}
SEXP Rsh_Fir_user_function_inner177517877_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner177517877 dynamic dispatch ([y])

  return Rsh_Fir_user_version_inner177517877_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner177517877_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner177517877 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner177517877/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_cl3_;  // cl3
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_cl5_;  // cl5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_oldClass__;  // oldClass__
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_toString;  // toString
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_width1;  // width
  SEXP Rsh_Fir_reg_width1_1;  // width1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_y = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // sym = ldf oldClass
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base = ldf oldClass in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st cl = r1
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // st m = r4
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // l = ld y
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // oldClass__ = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L4_:;
  // toString = ldf toString
  Rsh_Fir_reg_toString = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L5_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym y>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [y1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L7_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r2 = dyn oldClass(y2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L9_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base1("AsIs", <sym cl>, 0)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L1_;

D2_:;
  // deopt 10 [cl]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L11_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r5 = dyn match("AsIs", cl1, 0, NULL)
  SEXP Rsh_Fir_array_args49[4];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 15 [r5]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L1_;

L13_:;
  // cl2 = ld cl
  Rsh_Fir_reg_cl2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 17 [cl2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L14_:;
  // cl3 = force? cl2
  Rsh_Fir_reg_cl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl2_);
  // checkMissing(cl3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_cl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(cl3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L16(cl3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L15()
    goto L15_;
  } else {
  // L16(cl3)
    Rsh_Fir_reg_cl5_ = Rsh_Fir_reg_cl3_;
    goto L16_;
  }

L15_:;
  // dr = tryDispatchBuiltin.1("[", cl3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(dr)
    Rsh_Fir_reg_cl5_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D5_:;
  // deopt 19 [cl5, m]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L18_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r6 = `-`(<missing>, m1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r7 = dyn __(cl5, r6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_1;
  goto L3_;

D6_:;
  // deopt 24 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L19_:;
  // r8 = dyn oldClass__(l, NULL, dx1)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 26 [dx1, r8]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L20_:;
  // st y = r8
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L4()
  // L4()
  goto L4_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   return y4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner177517877_, CCP, RHO);
  // p1 = prom<V +>{
  //   width = ld width;
  //   width1 = force? width;
  //   checkMissing(width1);
  //   return width1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner177517877_1, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r11 = dyn toString[, width, `...`](p, p1, ddd)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toString, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 36 [r11]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner177517877_(SEXP CCP, SEXP RHO) {
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return y4
  return Rsh_Fir_reg_y4_;
}
SEXP Rsh_Fir_user_promise_inner177517877_1(SEXP CCP, SEXP RHO) {
  // width = ld width
  Rsh_Fir_reg_width1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // width1 = force? width
  Rsh_Fir_reg_width1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_width1);
  // checkMissing(width1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_width1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return width1
  return Rsh_Fir_reg_width1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
