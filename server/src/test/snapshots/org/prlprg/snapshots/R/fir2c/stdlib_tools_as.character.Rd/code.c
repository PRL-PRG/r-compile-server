#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner912936234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner912936234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner912936234_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3235627120_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3235627120_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3235627120_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_23(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_24(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_25(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_26(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_27(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_28(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3235627120_29(SEXP CCP, SEXP RHO);
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
  // r = clos inner912936234
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner912936234_, RHO, CCP);
  // st `as.character.Rd` = r
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
SEXP Rsh_Fir_user_function_inner912936234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner912936234 dynamic dispatch ([x, deparse, `...`])

  return Rsh_Fir_user_version_inner912936234_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner912936234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner912936234 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner912936234/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_deparse;  // deparse
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_deparse_isMissing;  // deparse_isMissing
  SEXP Rsh_Fir_reg_deparse_orDefault;  // deparse_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_pr;  // pr
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r30_;  // r30

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_deparse = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // deparse_isMissing = missing.0(deparse)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_deparse;
  Rsh_Fir_reg_deparse_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if deparse_isMissing then L0(FALSE) else L0(deparse)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deparse_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_deparse_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(deparse)
    Rsh_Fir_reg_deparse_orDefault = Rsh_Fir_reg_deparse;
    goto L0_;
  }

L0_:;
  // st deparse = deparse_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_deparse_orDefault, RHO);
  (void)(Rsh_Fir_reg_deparse_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // st ZEROARG = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // st MULTIARG = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L3_:;
  // st USERMACROS = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L4_:;
  // st EQN = r10
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L5_:;
  // st modes = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L6_:;
  // st tags = r16
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard6 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L7_:;
  // st state = r19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // st needBraces = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st inEqn = 0
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_const(CCP, 14), RHO);
  (void)(Rsh_const(CCP, 14));
  // r21 = clos inner3235627120
  Rsh_Fir_reg_r21_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3235627120_, RHO, CCP);
  // st pr = r21
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard7 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L8_:;
  // c8 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c8 then L39() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L39()
    goto L39_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // c7 = `==`(r25, NULL)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L8(c7)
  // L8(c7)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_c7_;
  goto L8_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // pr = ldf pr
  Rsh_Fir_reg_pr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

L12_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("\\cr", "\\dots", "\\ldots", "\\R", "\\tab")
  SEXP Rsh_Fir_array_args11[5];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args11[4] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 5, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r = dyn base("\\cr", "\\dots", "\\ldots", "\\R", "\\tab")
  SEXP Rsh_Fir_array_args12[5];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L15_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn c1("\\section", "\\subsection", "\\item", "\\enc", "\\method", "\\S3method", "\\S4method", "\\tabular", "\\if", "\\href", "\\ifelse")
  SEXP Rsh_Fir_array_args13[11];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args13[4] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args13[5] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args13[6] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args13[7] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args13[8] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args13[9] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args13[10] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names2[11];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_array_arg_names2[9] = R_MissingArg;
  Rsh_Fir_array_arg_names2[10] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 11, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

L16_:;
  // r3 = dyn base1("\\section", "\\subsection", "\\item", "\\enc", "\\method", "\\S3method", "\\S4method", "\\tabular", "\\if", "\\href", "\\ifelse")
  SEXP Rsh_Fir_array_args14[11];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args14[9] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args14[10] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[11];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_array_arg_names3[9] = R_MissingArg;
  Rsh_Fir_array_arg_names3[10] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 11, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D1_:;
  // deopt 24 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L18_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r8 = dyn c2("USERMACRO", "\\newcommand", "\\renewcommand")
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base2("USERMACRO", "\\newcommand", "\\renewcommand")
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D2_:;
  // deopt 32 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L21_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r11 = dyn c3("\\deqn", "\\eqn", "\\figure")
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L22_:;
  // r9 = dyn base3("\\deqn", "\\eqn", "\\figure")
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D3_:;
  // deopt 40 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L4_;

L24_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r14 = dyn c4(1, 2, 3, 4, 5, 6)
  SEXP Rsh_Fir_array_args19[6];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args19[4] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args19[5] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names8[6];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_array_arg_names8[4] = R_MissingArg;
  Rsh_Fir_array_arg_names8[5] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 6, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L25_:;
  // r12 = dyn base4[RLIKE, LATEXLIKE, VERBATIM, INOPTION, COMMENTMODE, UNKNOWNMODE](1, 2, 3, 4, 5, 6)
  SEXP Rsh_Fir_array_args20[6];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args20[4] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args20[5] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names9[6];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names9[4] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names9[5] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 6, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D4_:;
  // deopt 57 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L27_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r17 = dyn c5(1, 2, 3, 5, 6)
  SEXP Rsh_Fir_array_args21[5];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args21[4] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names10[5];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 5, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L28_:;
  // r15 = dyn base5[RCODE, TEXT, VERB, COMMENT, UNKNOWN](1, 2, 3, 5, 6)
  SEXP Rsh_Fir_array_args22[5];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args22[4] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 56);
  Rsh_Fir_array_arg_names11[4] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 5, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L6_;

D5_:;
  // deopt 72 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L6_;

L30_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r20 = dyn c6(0, 0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L31_:;
  // r18 = dyn base6[braceDepth, inRString](0, 0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D6_:;
  // deopt 81 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L7_;

L33_:;
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard8 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r22 = dyn base7(<lang attr(x, "Rd_tag")>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

L35_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // r24 = dyn base8(<sym x>, "Rd_tag")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L9_;

D7_:;
  // deopt 95 [x1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r26 = dyn attr(x2, "Rd_tag")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 99 [r26]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L9_;

L39_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

D9_:;
  // deopt 104 ["Rd", l, "Rd"]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 64);
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // r27 = dyn attr__(l, NULL, "Rd_tag", "Rd")
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

D10_:;
  // deopt 107 ["Rd", r27]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L41_:;
  // st x = r27
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L11()
  // L11()
  goto L11_;

D11_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner912936234_, CCP, RHO);
  // r30 = dyn pr[, quoteBraces](p, FALSE)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

D12_:;
  // deopt 116 [r30]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner912936234_(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_function_inner3235627120_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3235627120 dynamic dispatch ([x, quoteBraces])

  return Rsh_Fir_user_version_inner3235627120_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3235627120_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3235627120 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3235627120/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_quoteBraces;  // quoteBraces
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_attr1;  // attr
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_tag;  // tag
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_tag2_;  // tag2
  SEXP Rsh_Fir_reg_tag3_;  // tag3
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c4_1;  // c4
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_c7_1;  // c7
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_x4_1;  // x4
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_c8_1;  // c8
  SEXP Rsh_Fir_reg_state;  // state
  SEXP Rsh_Fir_reg_state1_;  // state1
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_tag4_;  // tag4
  SEXP Rsh_Fir_reg_tag5_;  // tag5
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r14_1;  // r14
  SEXP Rsh_Fir_reg_sym4_1;  // sym4
  SEXP Rsh_Fir_reg_base4_1;  // base4
  SEXP Rsh_Fir_reg_guard4_1;  // guard4
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r17_1;  // r17
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_sym5_1;  // sym5
  SEXP Rsh_Fir_reg_base5_1;  // base5
  SEXP Rsh_Fir_reg_guard5_1;  // guard5
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_pr1;  // pr
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_1;  // r20
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_quoteBraces1_;  // quoteBraces1
  SEXP Rsh_Fir_reg_quoteBraces2_;  // quoteBraces2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_startsWith;  // startsWith
  SEXP Rsh_Fir_reg_tag6_;  // tag6
  SEXP Rsh_Fir_reg_tag7_;  // tag7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_deparse1;  // deparse
  SEXP Rsh_Fir_reg_deparse1_;  // deparse1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_deparseRdElement;  // deparseRdElement
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_1;  // r27
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym6_1;  // sym6
  SEXP Rsh_Fir_reg_base6_1;  // base6
  SEXP Rsh_Fir_reg_guard6_1;  // guard6
  SEXP Rsh_Fir_reg_r30_1;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_state2_;  // state2
  SEXP Rsh_Fir_reg_state3_;  // state3
  SEXP Rsh_Fir_reg_modes;  // modes
  SEXP Rsh_Fir_reg_modes1_;  // modes1
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_modes3_;  // modes3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_inEqn;  // inEqn
  SEXP Rsh_Fir_reg_inEqn1_;  // inEqn1
  SEXP Rsh_Fir_reg_sym7_1;  // sym7
  SEXP Rsh_Fir_reg_base7_1;  // base7
  SEXP Rsh_Fir_reg_guard7_1;  // guard7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_quoteBraces3_;  // quoteBraces3
  SEXP Rsh_Fir_reg_quoteBraces4_;  // quoteBraces4
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym8_1;  // sym8
  SEXP Rsh_Fir_reg_base8_1;  // base8
  SEXP Rsh_Fir_reg_guard8_1;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_tag8_;  // tag8
  SEXP Rsh_Fir_reg_tag9_;  // tag9
  SEXP Rsh_Fir_reg_dep;  // dep
  SEXP Rsh_Fir_reg_dep1_;  // dep1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dep3_;  // dep3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_tag10_;  // tag10
  SEXP Rsh_Fir_reg_tag11_;  // tag11
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_result2_;  // result2
  SEXP Rsh_Fir_reg_result3_;  // result3
  SEXP Rsh_Fir_reg_pr1_;  // pr1
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_quoteBraces5_;  // quoteBraces5
  SEXP Rsh_Fir_reg_quoteBraces6_;  // quoteBraces6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_result4_;  // result4
  SEXP Rsh_Fir_reg_result5_;  // result5
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_tag12_;  // tag12
  SEXP Rsh_Fir_reg_tag13_;  // tag13
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_ZEROARG;  // ZEROARG
  SEXP Rsh_Fir_reg_ZEROARG1_;  // ZEROARG1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_tag14_;  // tag14
  SEXP Rsh_Fir_reg_tag15_;  // tag15
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_tag16_;  // tag16
  SEXP Rsh_Fir_reg_tag17_;  // tag17
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_MULTIARG;  // MULTIARG
  SEXP Rsh_Fir_reg_MULTIARG1_;  // MULTIARG1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_tag18_;  // tag18
  SEXP Rsh_Fir_reg_tag19_;  // tag19
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_x31_;  // x31
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_result6_;  // result6
  SEXP Rsh_Fir_reg_result7_;  // result7
  SEXP Rsh_Fir_reg_pr2_;  // pr2
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_x33_;  // x33
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_x35_;  // x35
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_quoteBraces7_;  // quoteBraces7
  SEXP Rsh_Fir_reg_quoteBraces8_;  // quoteBraces8
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg__in_2_;  // _in_2
  SEXP Rsh_Fir_reg_tag20_;  // tag20
  SEXP Rsh_Fir_reg_tag21_;  // tag21
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_EQN;  // EQN
  SEXP Rsh_Fir_reg_EQN1_;  // EQN1
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_tag22_;  // tag22
  SEXP Rsh_Fir_reg_tag23_;  // tag23
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_result8_;  // result8
  SEXP Rsh_Fir_reg_result9_;  // result9
  SEXP Rsh_Fir_reg_pr3_;  // pr3
  SEXP Rsh_Fir_reg_x36_;  // x36
  SEXP Rsh_Fir_reg_x37_;  // x37
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_x39_;  // x39
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_quoteBraces9_;  // quoteBraces9
  SEXP Rsh_Fir_reg_quoteBraces10_;  // quoteBraces10
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_x40_;  // x40
  SEXP Rsh_Fir_reg_x41_;  // x41
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_result10_;  // result10
  SEXP Rsh_Fir_reg_result11_;  // result11
  SEXP Rsh_Fir_reg_pr4_;  // pr4
  SEXP Rsh_Fir_reg_x42_;  // x42
  SEXP Rsh_Fir_reg_x43_;  // x43
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_x45_;  // x45
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_quoteBraces11_;  // quoteBraces11
  SEXP Rsh_Fir_reg_quoteBraces12_;  // quoteBraces12
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_tag24_;  // tag24
  SEXP Rsh_Fir_reg_tag25_;  // tag25
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_x46_;  // x46
  SEXP Rsh_Fir_reg_x47_;  // x47
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_result12_;  // result12
  SEXP Rsh_Fir_reg_result13_;  // result13
  SEXP Rsh_Fir_reg_pr5_;  // pr5
  SEXP Rsh_Fir_reg_option;  // option
  SEXP Rsh_Fir_reg_option1_;  // option1
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_quoteBraces13_;  // quoteBraces13
  SEXP Rsh_Fir_reg_quoteBraces14_;  // quoteBraces14
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_result14_;  // result14
  SEXP Rsh_Fir_reg_result15_;  // result15
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_x48_;  // x48
  SEXP Rsh_Fir_reg_x49_;  // x49
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_x50_;  // x50
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_result16_;  // result16
  SEXP Rsh_Fir_reg_result17_;  // result17
  SEXP Rsh_Fir_reg_pr6_;  // pr6
  SEXP Rsh_Fir_reg_x51_;  // x51
  SEXP Rsh_Fir_reg_x52_;  // x52
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_x54_;  // x54
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_quoteBraces15_;  // quoteBraces15
  SEXP Rsh_Fir_reg_quoteBraces16_;  // quoteBraces16
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_result18_;  // result18
  SEXP Rsh_Fir_reg_result19_;  // result19
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_state4_;  // state4
  SEXP Rsh_Fir_reg_state5_;  // state5
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_state7_;  // state7
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_pr7_;  // pr7
  SEXP Rsh_Fir_reg_x55_;  // x55
  SEXP Rsh_Fir_reg_x56_;  // x56
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_savestate;  // savestate
  SEXP Rsh_Fir_reg_savestate1_;  // savestate1
  SEXP Rsh_Fir_reg__in_3_;  // _in_3
  SEXP Rsh_Fir_reg_tag26_;  // tag26
  SEXP Rsh_Fir_reg_tag27_;  // tag27
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_USERMACROS;  // USERMACROS
  SEXP Rsh_Fir_reg_USERMACROS1_;  // USERMACROS1
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_deparse2_;  // deparse2
  SEXP Rsh_Fir_reg_deparse3_;  // deparse3
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_deparseRdElement1_;  // deparseRdElement1
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_x57_;  // x57
  SEXP Rsh_Fir_reg_x58_;  // x58
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_state8_;  // state8
  SEXP Rsh_Fir_reg_state9_;  // state9
  SEXP Rsh_Fir_reg_tags;  // tags
  SEXP Rsh_Fir_reg_tags1_;  // tags1
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_tags3_;  // tags3
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_tag28_;  // tag28
  SEXP Rsh_Fir_reg_tag29_;  // tag29
  SEXP Rsh_Fir_reg___15_;  // __15
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_inEqn2_;  // inEqn2
  SEXP Rsh_Fir_reg_inEqn3_;  // inEqn3
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_quoteBraces17_;  // quoteBraces17
  SEXP Rsh_Fir_reg_quoteBraces18_;  // quoteBraces18
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_dep4_;  // dep4
  SEXP Rsh_Fir_reg_dep5_;  // dep5
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_dep7_;  // dep7
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg___16_;  // __16
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_dep8_;  // dep8
  SEXP Rsh_Fir_reg_dep9_;  // dep9
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_dep11_;  // dep11
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg___17_;  // __17
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg___18_;  // __18
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_x59_;  // x59
  SEXP Rsh_Fir_reg_x60_;  // x60
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_setdiff;  // setdiff
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_x61_;  // x61
  SEXP Rsh_Fir_reg_x62_;  // x62
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_x63_;  // x63
  SEXP Rsh_Fir_reg_x64_;  // x64
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_needBraces;  // needBraces
  SEXP Rsh_Fir_reg_needBraces1_;  // needBraces1
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_result20_;  // result20
  SEXP Rsh_Fir_reg_result21_;  // result21
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_sym32_;  // sym32
  SEXP Rsh_Fir_reg_base32_;  // base32
  SEXP Rsh_Fir_reg_guard32_;  // guard32
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_result22_;  // result22
  SEXP Rsh_Fir_reg_result23_;  // result23
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_result24_;  // result24
  SEXP Rsh_Fir_reg_result25_;  // result25

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_quoteBraces = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st quoteBraces = quoteBraces
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_Fir_reg_quoteBraces, RHO);
  (void)(Rsh_Fir_reg_quoteBraces);
  // sym = ldf attr
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L0_:;
  // st tag = r1
  Rsh_Fir_store(Rsh_const(CCP, 66), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c1 then L2(c1) else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L2(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L2_;
  } else {
  // L77()
    goto L77_;
  }

L2_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c7 then L80() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_1)) {
  // L80()
    goto L80_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard2 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L5_:;
  // c8 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_c8_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c8 then L86() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_1)) {
  // L86()
    goto L86_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // _in_3 = ldf `%in%`
  Rsh_Fir_reg__in_3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L237() else D78()
  // L237()
  goto L237_;

L7_:;
  // sst state = r11
  Rsh_Fir_super_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // sst needBraces = FALSE
  Rsh_Fir_super_store(Rsh_const(CCP, 13), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // tag4 = ld tag
  Rsh_Fir_reg_tag4_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L91() else D8()
  // L91()
  goto L91_;

L8_:;
  // startsWith = ldf startsWith
  Rsh_Fir_reg_startsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L106() else D16()
  // L106()
  goto L106_;

L9_:;
  // s = toForSeq(r16)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1 = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 14);
  // goto L10(i)
  // L10(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L10_;

L10_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // c11 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if c11 then L98() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L98()
    goto L98_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // st result = r19
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r19_1, RHO);
  (void)(Rsh_Fir_reg_r19_1);
  // goto L10(i7)
  // L10(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L10_;

L12_:;
  // x7 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args43[4];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // st i = x7
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard5 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L13_:;
  // state4 = ld state
  Rsh_Fir_reg_state4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L227() else D74()
  // L227()
  goto L227_;

L14_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L151() else D34()
  // L151()
  goto L151_;

L15_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard9 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L16_:;
  // st result = r40
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L18()
  // L18()
  goto L18_;

L17_:;
  // c21 = ldf c in base
  Rsh_Fir_reg_c21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r42 = dyn c21(tag9, dx11)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_tag9_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c21_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L120() else D23()
  // L120()
  goto L120_;

L18_:;
  // sym10 = ldf seq_along
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base10 = ldf seq_along in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard10 then L133() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L133()
    goto L133_;
  } else {
  // L134()
    goto L134_;
  }

L19_:;
  // st result = r45
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // goto L18()
  // L18()
  goto L18_;

L20_:;
  // c23 = `is.object`(dx13)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c23 then L129() else L130(dx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L129()
    goto L129_;
  } else {
  // L130(dx13)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    goto L130_;
  }

L21_:;
  // c24 = ldf c in base
  Rsh_Fir_reg_c24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r48 = dyn c24(tag11, dx17)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_tag11_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c24_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L132() else D26()
  // L132()
  goto L132_;

L22_:;
  // s1 = toForSeq(r50)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // i11 = 0
  Rsh_Fir_reg_i11_ = Rsh_const(CCP, 14);
  // goto L24(i11)
  // L24(i11)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i11_;
  goto L24_;

L23_:;
  // r52 = seq_along(dx19)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L22(r52)
  // L22(r52)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r52_;
  goto L22_;

L24_:;
  // i13 = `+`.1(i12, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_i13_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // c26 = `<`.1(l1, i13)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if c26 then L139() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L139()
    goto L139_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // st result = r54
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // goto L24(i18)
  // L24(i18)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i18_;
  goto L24_;

L26_:;
  // x24 = `[[`(s1, i13, NULL, TRUE)
  SEXP Rsh_Fir_array_args55[4];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args55[3] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_x24_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // st i = x24
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_x24_, RHO);
  (void)(Rsh_Fir_reg_x24_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard11 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L27_:;
  // st result = r62
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L13()
  // L13()
  goto L13_;

L28_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L156() else D37()
  // L156()
  goto L156_;

L29_:;
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L171() else D45()
  // L171()
  goto L171_;

L30_:;
  // s2 = toForSeq(r71)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // l2 = length(s2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // i21 = 0
  Rsh_Fir_reg_i21_ = Rsh_const(CCP, 14);
  // goto L31(i21)
  // L31(i21)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i21_;
  goto L31_;

L31_:;
  // i23 = `+`.1(i22, 1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_i23_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // c33 = `<`.1(l2, i23)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if c33 then L163() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L163()
    goto L163_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // st result = r74
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L31(i28)
  // L31(i28)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i28_;
  goto L31_;

L33_:;
  // x31 = `[[`(s2, i23, NULL, TRUE)
  SEXP Rsh_Fir_array_args61[4];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args61[3] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_x31_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // st i = x31
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_x31_, RHO);
  (void)(Rsh_Fir_reg_x31_);
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard14 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L34_:;
  // tag24 = ld tag
  Rsh_Fir_reg_tag24_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L194() else D58()
  // L194()
  goto L194_;

L35_:;
  // st result = r84
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r84_, RHO);
  (void)(Rsh_Fir_reg_r84_);
  // sst inEqn = 0
  Rsh_Fir_super_store(Rsh_const(CCP, 15), Rsh_const(CCP, 14), RHO);
  (void)(Rsh_const(CCP, 14));
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard16 then L181() else L182()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L181()
    goto L181_;
  } else {
  // L182()
    goto L182_;
  }

L36_:;
  // r93 = `>`(r91, 1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c39 then L185() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L185()
    goto L185_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L39(NULL)
  // L39(NULL)
  Rsh_Fir_reg_r101_ = Rsh_const(CCP, 18);
  goto L39_;

L38_:;
  // st result = r95
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // goto L39(r95)
  // L39(r95)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r95_;
  goto L39_;

L39_:;
  // goto L13()
  // L13()
  goto L13_;

L40_:;
  // r107 = `!`(r103)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // c43 = `as.logical`(r107)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c43 then L201() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L201()
    goto L201_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // st option = r105
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // c42 = `==`(r105, NULL)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L40(c42)
  // L40(c42)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_c42_;
  goto L40_;

L42_:;
  // goto L44()
  // L44()
  goto L44_;

L43_:;
  // st result = r109
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r109_, RHO);
  (void)(Rsh_Fir_reg_r109_);
  // goto L44()
  // L44()
  goto L44_;

L44_:;
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard21 then L209() else L210()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L209()
    goto L209_;
  } else {
  // L210()
    goto L210_;
  }

L45_:;
  // st result = r116
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r116_, RHO);
  (void)(Rsh_Fir_reg_r116_);
  // sym22 = ldf seq_along
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base22 = ldf seq_along in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard22 then L213() else L214()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L213()
    goto L213_;
  } else {
  // L214()
    goto L214_;
  }

L46_:;
  // s3 = toForSeq(r119)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_reg_s3_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // l3 = length(s3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // i31 = 0
  Rsh_Fir_reg_i31_ = Rsh_const(CCP, 14);
  // goto L47(i31)
  // L47(i31)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i31_;
  goto L47_;

L47_:;
  // i33 = `+`.1(i32, 1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_i33_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // c46 = `<`.1(l3, i33)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if c46 then L216() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L216()
    goto L216_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // st result = r122
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r122_, RHO);
  (void)(Rsh_Fir_reg_r122_);
  // goto L47(i38)
  // L47(i38)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i38_;
  goto L47_;

L49_:;
  // x50 = `[[`(s3, i33, NULL, TRUE)
  SEXP Rsh_Fir_array_args75[4];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args75[3] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_x50_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // st i = x50
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_x50_, RHO);
  (void)(Rsh_Fir_reg_x50_);
  // sym23 = ldf c
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base23 = ldf c in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard23 then L217() else L218()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L217()
    goto L217_;
  } else {
  // L218()
    goto L218_;
  }

L50_:;
  // st result = r129
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // goto L13()
  // L13()
  goto L13_;

L51_:;
  // c51 = `as.logical`(dx35)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c51 then L231() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L231()
    goto L231_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // goto L53()
  // L53()
  goto L53_;

L53_:;
  // savestate = ld savestate
  Rsh_Fir_reg_savestate = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L235() else D77()
  // L235()
  goto L235_;

L54_:;
  // result24 = ld result
  Rsh_Fir_reg_result24_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L285() else D99()
  // L285()
  goto L285_;

L55_:;
  // deparse2 = ld deparse
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L244() else D81()
  // L244()
  goto L244_;

L56_:;
  // st result = r139
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r139_, RHO);
  (void)(Rsh_Fir_reg_r139_);
  // goto L54()
  // L54()
  goto L54_;

L57_:;
  // sym29 = ldf inherits
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base29 = ldf inherits in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard29 then L260() else L261()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L260()
    goto L260_;
  } else {
  // L261()
    goto L261_;
  }

L58_:;
  // st result = dx39
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_dx39_, RHO);
  (void)(Rsh_Fir_reg_dx39_);
  // dep8 = ld dep
  Rsh_Fir_reg_dep8_ = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // check L252() else D85()
  // L252()
  goto L252_;

L59_:;
  // c59 = `is.object`(dx41)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c59 then L256() else L257(dx41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L256()
    goto L256_;
  } else {
  // L257(dx41)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
    goto L257_;
  }

L60_:;
  // sst state = dx45
  Rsh_Fir_super_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // goto L61()
  // L61()
  goto L61_;

L61_:;
  // needBraces = ld needBraces
  Rsh_Fir_reg_needBraces = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L274() else D94()
  // L274()
  goto L274_;

L62_:;
  // c60 = `as.logical`(r158)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c60 then L264() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L264()
    goto L264_;
  } else {
  // L63()
    goto L63_;
  }

L63_:;
  // goto L64()
  // L64()
  goto L64_;

L64_:;
  // sym31 = ldf `as.character`
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base31 = ldf `as.character` in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard31 then L270() else L271()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L270()
    goto L270_;
  } else {
  // L271()
    goto L271_;
  }

L65_:;
  // st result = r168
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r168_, RHO);
  (void)(Rsh_Fir_reg_r168_);
  // goto L61()
  // L61()
  goto L61_;

L66_:;
  // goto L54()
  // L54()
  goto L54_;

L67_:;
  // goto L69()
  // L69()
  goto L69_;

L68_:;
  // st result = r173
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r173_, RHO);
  (void)(Rsh_Fir_reg_r173_);
  // goto L69()
  // L69()
  goto L69_;

L69_:;
  // sst needBraces = FALSE
  Rsh_Fir_super_store(Rsh_const(CCP, 13), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L54()
  // L54()
  goto L54_;

L70_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D0()
  // L72()
  goto L72_;

L71_:;
  // r = dyn base(<sym x>, "Rd_tag")
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L72_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r2 = dyn attr(x2, "Rd_tag")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L73() else D1()
  // L73()
  goto L73_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L74_:;
  // tag = ld tag
  Rsh_Fir_reg_tag = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L76() else D2()
  // L76()
  goto L76_;

L75_:;
  // r3 = dyn base1(<sym tag>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L1_;

D2_:;
  // deopt 9 [tag]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_tag;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L76_:;
  // tag1 = force? tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag);
  // checkMissing(tag1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_tag1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c = `==`(tag1, NULL)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_c1;
  goto L1_;

L77_:;
  // tag2 = ld tag
  Rsh_Fir_reg_tag2_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L78() else D3()
  // L78()
  goto L78_;

D3_:;
  // deopt 12 [c1, tag2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L78_:;
  // tag3 = force? tag2
  Rsh_Fir_reg_tag3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag2_);
  // checkMissing(tag3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_tag3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r5 = `==`(tag3, "LIST")
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_tag3_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_c4_1;
  Rsh_Fir_reg_c5_1 = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L2(c5)
  // L2(c5)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c5_1;
  goto L2_;

L80_:;
  // st tag = ""
  Rsh_Fir_store(Rsh_const(CCP, 66), Rsh_const(CCP, 81), RHO);
  (void)(Rsh_const(CCP, 81));
  // goto L4()
  // L4()
  goto L4_;

L82_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D4()
  // L84()
  goto L84_;

L83_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L5_;

D4_:;
  // deopt 24 [x3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r9 = dyn is_list(x4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L85() else D5()
  // L85()
  goto L85_;

D5_:;
  // deopt 27 [r9]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

L86_:;
  // state = ld state
  Rsh_Fir_reg_state = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L87() else D6()
  // L87()
  goto L87_;

D6_:;
  // deopt 28 [state]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_state;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L87_:;
  // state1 = force? state
  Rsh_Fir_reg_state1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state);
  // checkMissing(state1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_state1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // st savestate = state1
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_state1_, RHO);
  (void)(Rsh_Fir_reg_state1_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard3 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L88_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r12 = dyn c9(0, 0)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L90() else D7()
  // L90()
  goto L90_;

L89_:;
  // r10 = dyn base3(0, 0)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L7_;

D7_:;
  // deopt 36 [r12]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_1;
  goto L7_;

D8_:;
  // deopt 41 [tag4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_tag4_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L91_:;
  // tag5 = force? tag4
  Rsh_Fir_reg_tag5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag4_);
  // checkMissing(tag5)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_tag5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r13 = `==`(tag5, "Rd")
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_tag5_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c10 then L92() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L92()
    goto L92_;
  } else {
  // L8()
    goto L8_;
  }

L92_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L93() else D9()
  // L93()
  goto L93_;

D9_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // r14 = dyn character()
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L94() else D10()
  // L94()
  goto L94_;

D10_:;
  // deopt 47 [r14]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L94_:;
  // st result = r14
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // sym4 = ldf seq_along
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base4 = ldf seq_along in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard4 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L95_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L97() else D11()
  // L97()
  goto L97_;

L96_:;
  // r15 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_1;
  goto L9_;

D11_:;
  // deopt 50 [x5]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L97_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // r17 = seq_along(x6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r17_1;
  goto L9_;

L98_:;
  // goto L13()
  // L13()
  goto L13_;

L99_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L101() else D12()
  // L101()
  goto L101_;

L100_:;
  // r18 = dyn base5(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L11(i2, r18)
  // L11(i2, r18)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_1;
  goto L11_;

D12_:;
  // deopt 55 [i2, result]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L101_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // pr = ldf pr
  Rsh_Fir_reg_pr1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L102() else D13()
  // L102()
  goto L102_;

D13_:;
  // deopt 58 [i2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L102_:;
  // p = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   c12 = `is.object`(x9);
  //   if c12 then L1() else L2(x9);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", x9);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x11):
  //   i8 = ld i;
  //   i9 = force? i8;
  //   __ = ldf `[[` in base;
  //   r20 = dyn __(x11, i9);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_, CCP, RHO);
  // p1 = prom<V +>{
  //   quoteBraces1 = ld quoteBraces;
  //   quoteBraces2 = force? quoteBraces1;
  //   checkMissing(quoteBraces2);
  //   return quoteBraces2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_1, CCP, RHO);
  // r23 = dyn pr(p, p1)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr1, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L103() else D14()
  // L103()
  goto L103_;

D14_:;
  // deopt 61 [i2, r23]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L103_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r24 = dyn c13(result1, r23)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L104() else D15()
  // L104()
  goto L104_;

D15_:;
  // deopt 63 [i2, r24]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L11(i2, r24)
  // L11(i2, r24)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r24_1;
  goto L11_;

D16_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p2 = prom<V +>{
  //   tag6 = ld tag;
  //   tag7 = force? tag6;
  //   checkMissing(tag7);
  //   return tag7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_2, CCP, RHO);
  // r26 = dyn startsWith(p2, "#")
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L107() else D17()
  // L107()
  goto L107_;

D17_:;
  // deopt 72 [r26]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L107_:;
  // c14 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c14 then L108() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L108()
    goto L108_;
  } else {
  // L14()
    goto L14_;
  }

L108_:;
  // deparse = ld deparse
  Rsh_Fir_reg_deparse1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L109() else D18()
  // L109()
  goto L109_;

D18_:;
  // deopt 73 [deparse]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_deparse1;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L109_:;
  // deparse1 = force? deparse
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparse1);
  // checkMissing(deparse1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_deparse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(deparse1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_deparse1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c15 then L110() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L110()
    goto L110_;
  } else {
  // L15()
    goto L15_;
  }

L110_:;
  // deparseRdElement = ldf deparseRdElement
  Rsh_Fir_reg_deparseRdElement = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // check L111() else D19()
  // L111()
  goto L111_;

D19_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L111_:;
  // p3 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   c16 = `is.object`(x13);
  //   if c16 then L2() else L3(x13);
  // L0(dx3):
  //   c17 = `is.object`(dx3);
  //   if c17 then L5() else L6(dx3);
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[[", x13);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(x15):
  //   __1 = ldf `[[` in base;
  //   r27 = dyn __1(x15, 1);
  //   goto L0(r27);
  // L1(dx7):
  //   return dx7;
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   dr4 = tryDispatchBuiltin.1("[[", dx3);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L7() else L6(dr4);
  // L6(dx5):
  //   __2 = ldf `[[` in base;
  //   r28 = dyn __2(dx5, 1);
  //   goto L1(r28);
  // L7():
  //   dx6 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx6);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L3() else L4();
  // L0(r31):
  //   return r31;
  // L3():
  //   state2 = ld state;
  //   state3 = force? state2;
  //   checkMissing(state3);
  //   modes = ld modes;
  //   modes1 = force? modes;
  //   checkMissing(modes1);
  //   c18 = `is.object`(modes1);
  //   if c18 then L5() else L6(modes1);
  // L4():
  //   r30 = dyn base6(<sym state>, <lang `[`(modes, "LATEXLIKE")>, <sym inEqn>, <lang as.integer(quoteBraces)>);
  //   goto L0(r30);
  // L1(dx9):
  //   inEqn = ld inEqn;
  //   inEqn1 = force? inEqn;
  //   checkMissing(inEqn1);
  //   sym7 = ldf `as.integer`;
  //   base7 = ldf `as.integer` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L8() else L9();
  // L5():
  //   dr6 = tryDispatchBuiltin.1("[", modes1);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L7() else L6(dr6);
  // L6(modes3):
  //   __3 = ldf `[` in base;
  //   r32 = dyn __3(modes3, "LATEXLIKE");
  //   goto L1(r32);
  // L2(r34):
  //   c19 = ldf c in base;
  //   r36 = dyn c19(state3, dx9, inEqn1, r34);
  //   goto L0(r36);
  // L7():
  //   dx8 = getTryDispatchBuiltinValue(dr6);
  //   goto L1(dx8);
  // L8():
  //   quoteBraces3 = ld quoteBraces;
  //   quoteBraces4 = force? quoteBraces3;
  //   checkMissing(quoteBraces4);
  //   as_integer = ldf `as.integer` in base;
  //   r35 = dyn as_integer(quoteBraces4);
  //   goto L2(r35);
  // L9():
  //   r33 = dyn base7(<sym quoteBraces>);
  //   goto L2(r33);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_4, CCP, RHO);
  // r38 = dyn deparseRdElement(p3, p4)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparseRdElement, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L112() else D20()
  // L112()
  goto L112_;

D20_:;
  // deopt 79 [r38]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L112_:;
  // st dep = r38
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym8_1;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base8_1;
  Rsh_Fir_reg_guard8_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard8 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_1)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L113_:;
  // tag8 = ld tag
  Rsh_Fir_reg_tag8_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L115() else D21()
  // L115()
  goto L115_;

L114_:;
  // r39 = dyn base8(<sym tag>, <lang `[[`(dep, 1)>)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_1, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L16(r39)
  // L16(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L16_;

D21_:;
  // deopt 83 [tag8]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_tag8_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L115_:;
  // tag9 = force? tag8
  Rsh_Fir_reg_tag9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag8_);
  // checkMissing(tag9)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_tag9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // dep = ld dep
  Rsh_Fir_reg_dep = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // check L116() else D22()
  // L116()
  goto L116_;

D22_:;
  // deopt 85 [dep]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_dep;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L116_:;
  // dep1 = force? dep
  Rsh_Fir_reg_dep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dep);
  // checkMissing(dep1)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(dep1)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dep1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c20 then L117() else L118(dep1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L117()
    goto L117_;
  } else {
  // L118(dep1)
    Rsh_Fir_reg_dep3_ = Rsh_Fir_reg_dep1_;
    goto L118_;
  }

L117_:;
  // dr8 = tryDispatchBuiltin.1("[[", dep1)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_dep1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args154);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc4 then L119() else L118(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr8)
    Rsh_Fir_reg_dep3_ = Rsh_Fir_reg_dr8_;
    goto L118_;
  }

L118_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r41 = dyn __4(dep3, 1)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dep3_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L17(r41)
  // L17(r41)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r41_;
  goto L17_;

L119_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L17(dx10)
  // L17(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L17_;

D23_:;
  // deopt 91 [r42]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L16(r42)
  // L16(r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L16_;

L122_:;
  // tag10 = ld tag
  Rsh_Fir_reg_tag10_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L124() else D24()
  // L124()
  goto L124_;

L123_:;
  // r44 = dyn base9(<sym tag>, <lang `[[`(`[[`(x, 1), 1)>)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L19_;

D24_:;
  // deopt 95 [tag10]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_tag10_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L124_:;
  // tag11 = force? tag10
  Rsh_Fir_reg_tag11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag10_);
  // checkMissing(tag11)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_tag11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L125() else D25()
  // L125()
  goto L125_;

D25_:;
  // deopt 97 [x16]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L125_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(x17)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if c22 then L126() else L127(x17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L126()
    goto L126_;
  } else {
  // L127(x17)
    Rsh_Fir_reg_x19_ = Rsh_Fir_reg_x17_;
    goto L127_;
  }

L126_:;
  // dr10 = tryDispatchBuiltin.1("[[", x17)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc5 then L128() else L127(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L128()
    goto L128_;
  } else {
  // L127(dr10)
    Rsh_Fir_reg_x19_ = Rsh_Fir_reg_dr10_;
    goto L127_;
  }

L127_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r46 = dyn __5(x19, 1)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L20(r46)
  // L20(r46)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r46_;
  goto L20_;

L128_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L20(dx12)
  // L20(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L20_;

L129_:;
  // dr12 = tryDispatchBuiltin.1("[[", dx13)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc6 then L131() else L130(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr12)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dr12_;
    goto L130_;
  }

L130_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r47 = dyn __6(dx15, 1)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L21(r47)
  // L21(r47)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r47_;
  goto L21_;

L131_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L21(dx16)
  // L21(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L21_;

D26_:;
  // deopt 106 [r48]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L19(r48)
  // L19(r48)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r48_;
  goto L19_;

L133_:;
  // x20 = ld x
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L135() else D27()
  // L135()
  goto L135_;

L134_:;
  // r49 = dyn base10(<lang `[[`(x, 2)>)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L22(r49)
  // L22(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L22_;

D27_:;
  // deopt 109 [x20]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L135_:;
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x21)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if c25 then L136() else L137(x21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L136()
    goto L136_;
  } else {
  // L137(x21)
    Rsh_Fir_reg_x23_ = Rsh_Fir_reg_x21_;
    goto L137_;
  }

L136_:;
  // dr14 = tryDispatchBuiltin.1("[[", x21)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args173);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if dc7 then L138() else L137(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L138()
    goto L138_;
  } else {
  // L137(dr14)
    Rsh_Fir_reg_x23_ = Rsh_Fir_reg_dr14_;
    goto L137_;
  }

L137_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r51 = dyn __7(x23, 2)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_args175[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L23(r51)
  // L23(r51)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r51_;
  goto L23_;

L138_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L23(dx18)
  // L23(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L23_;

L139_:;
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args177);
  // if guard12 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L140_:;
  // result2 = ld result
  Rsh_Fir_reg_result2_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L142() else D28()
  // L142()
  goto L142_;

L141_:;
  // r53 = dyn base11(<sym result>, <lang pr(`[[`(`[[`(x, 2), i), quoteBraces)>)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args178[1] = Rsh_const(CCP, 97);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L25(i13, r53)
  // L25(i13, r53)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L25_;

D28_:;
  // deopt 117 [i13, result2]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_result2_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L142_:;
  // result3 = force? result2
  Rsh_Fir_reg_result3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result2_);
  // checkMissing(result3)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_result3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // pr1 = ldf pr
  Rsh_Fir_reg_pr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L143() else D29()
  // L143()
  goto L143_;

D29_:;
  // deopt 120 [i13]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L143_:;
  // p5 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c27 = `is.object`(x26);
  //   if c27 then L2() else L3(x26);
  // L0(dx21):
  //   c28 = `is.object`(dx21);
  //   if c28 then L5() else L6(dx21);
  // L2():
  //   dr16 = tryDispatchBuiltin.1("[[", x26);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L4() else L3(dr16);
  // L3(x28):
  //   __8 = ldf `[[` in base;
  //   r55 = dyn __8(x28, 2);
  //   goto L0(r55);
  // L1(dx25):
  //   return dx25;
  // L4():
  //   dx20 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx20);
  // L5():
  //   dr18 = tryDispatchBuiltin.1("[[", dx21);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L7() else L6(dr18);
  // L6(dx23):
  //   i19 = ld i;
  //   i20 = force? i19;
  //   __9 = ldf `[[` in base;
  //   r56 = dyn __9(dx23, i20);
  //   goto L1(r56);
  // L7():
  //   dx24 = getTryDispatchBuiltinValue(dr18);
  //   goto L1(dx24);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_5, CCP, RHO);
  // p6 = prom<V +>{
  //   quoteBraces5 = ld quoteBraces;
  //   quoteBraces6 = force? quoteBraces5;
  //   checkMissing(quoteBraces6);
  //   return quoteBraces6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_6, CCP, RHO);
  // r59 = dyn pr1(p5, p6)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr1_, 2, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L144() else D30()
  // L144()
  goto L144_;

D30_:;
  // deopt 123 [i13, r59]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L144_:;
  // c29 = ldf c in base
  Rsh_Fir_reg_c29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r60 = dyn c29(result3, r59)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_result3_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c29_, 2, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L145() else D31()
  // L145()
  goto L145_;

D31_:;
  // deopt 125 [i13, r60]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L25(i13, r60)
  // L25(i13, r60)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r60_;
  goto L25_;

L146_:;
  // result4 = ld result
  Rsh_Fir_reg_result4_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L148() else D32()
  // L148()
  goto L148_;

L147_:;
  // r61 = dyn base12(<sym result>, "#endif\n")
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L27(r61)
  // L27(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L27_;

D32_:;
  // deopt 132 [result4]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_result4_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L148_:;
  // result5 = force? result4
  Rsh_Fir_reg_result5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result4_);
  // checkMissing(result5)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_result5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c30 = ldf c in base
  Rsh_Fir_reg_c30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r63 = dyn c30(result5, "#endif\n")
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_result5_;
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c30_, 2, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L149() else D33()
  // L149()
  goto L149_;

D33_:;
  // deopt 136 [r63]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L149_:;
  // goto L27(r63)
  // L27(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L27_;

D34_:;
  // deopt 139 []
  Rsh_Fir_deopt(139, 0, NULL, CCP, RHO);
  return R_NilValue;

L151_:;
  // p7 = prom<V +>{
  //   tag12 = ld tag;
  //   tag13 = force? tag12;
  //   checkMissing(tag13);
  //   return tag13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_7, CCP, RHO);
  // p8 = prom<V +>{
  //   ZEROARG = ld ZEROARG;
  //   ZEROARG1 = force? ZEROARG;
  //   checkMissing(ZEROARG1);
  //   return ZEROARG1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_8, CCP, RHO);
  // r66 = dyn _in_(p7, p8)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L152() else D35()
  // L152()
  goto L152_;

D35_:;
  // deopt 142 [r66]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L152_:;
  // c31 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if c31 then L153() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L153()
    goto L153_;
  } else {
  // L28()
    goto L28_;
  }

L153_:;
  // tag14 = ld tag
  Rsh_Fir_reg_tag14_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L154() else D36()
  // L154()
  goto L154_;

D36_:;
  // deopt 143 [tag14]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_tag14_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L154_:;
  // tag15 = force? tag14
  Rsh_Fir_reg_tag15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag14_);
  // checkMissing(tag15)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_tag15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // st result = tag15
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_tag15_, RHO);
  (void)(Rsh_Fir_reg_tag15_);
  // sst needBraces = TRUE
  Rsh_Fir_super_store(Rsh_const(CCP, 13), Rsh_const(CCP, 71), RHO);
  (void)(Rsh_const(CCP, 71));
  // goto L13()
  // L13()
  goto L13_;

D37_:;
  // deopt 150 []
  Rsh_Fir_deopt(150, 0, NULL, CCP, RHO);
  return R_NilValue;

L156_:;
  // p9 = prom<V +>{
  //   tag16 = ld tag;
  //   tag17 = force? tag16;
  //   checkMissing(tag17);
  //   return tag17;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_9, CCP, RHO);
  // p10 = prom<V +>{
  //   MULTIARG = ld MULTIARG;
  //   MULTIARG1 = force? MULTIARG;
  //   checkMissing(MULTIARG1);
  //   return MULTIARG1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_10, CCP, RHO);
  // r69 = dyn _in_1(p9, p10)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L157() else D38()
  // L157()
  goto L157_;

D38_:;
  // deopt 153 [r69]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L157_:;
  // c32 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // if c32 then L158() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L158()
    goto L158_;
  } else {
  // L29()
    goto L29_;
  }

L158_:;
  // tag18 = ld tag
  Rsh_Fir_reg_tag18_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L159() else D39()
  // L159()
  goto L159_;

D39_:;
  // deopt 154 [tag18]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_tag18_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L159_:;
  // tag19 = force? tag18
  Rsh_Fir_reg_tag19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag18_);
  // checkMissing(tag19)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_tag19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // st result = tag19
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_tag19_, RHO);
  (void)(Rsh_Fir_reg_tag19_);
  // sym13 = ldf seq_along
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base13 = ldf seq_along in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args207);
  // if guard13 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L160_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L162() else D40()
  // L162()
  goto L162_;

L161_:;
  // r70 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L30(r70)
  // L30(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L30_;

D40_:;
  // deopt 158 [x29]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L162_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // r72 = seq_along(x30)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // goto L30(r72)
  // L30(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L30_;

L163_:;
  // goto L13()
  // L13()
  goto L13_;

L164_:;
  // result6 = ld result
  Rsh_Fir_reg_result6_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L166() else D41()
  // L166()
  goto L166_;

L165_:;
  // r73 = dyn base14(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args211[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L32(i23, r73)
  // L32(i23, r73)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L32_;

D41_:;
  // deopt 163 [i23, result6]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_result6_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L166_:;
  // result7 = force? result6
  Rsh_Fir_reg_result7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result6_);
  // checkMissing(result7)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_result7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // pr2 = ldf pr
  Rsh_Fir_reg_pr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L167() else D42()
  // L167()
  goto L167_;

D42_:;
  // deopt 166 [i23]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L167_:;
  // p11 = prom<V +>{
  //   x32 = ld x;
  //   x33 = force? x32;
  //   checkMissing(x33);
  //   c34 = `is.object`(x33);
  //   if c34 then L1() else L2(x33);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[[", x33);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(x35):
  //   i29 = ld i;
  //   i30 = force? i29;
  //   __10 = ldf `[[` in base;
  //   r75 = dyn __10(x35, i30);
  //   goto L0(r75);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_11, CCP, RHO);
  // p12 = prom<V +>{
  //   quoteBraces7 = ld quoteBraces;
  //   quoteBraces8 = force? quoteBraces7;
  //   checkMissing(quoteBraces8);
  //   return quoteBraces8;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_12, CCP, RHO);
  // r78 = dyn pr2(p11, p12)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr2_, 2, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L168() else D43()
  // L168()
  goto L168_;

D43_:;
  // deopt 169 [i23, r78]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L168_:;
  // c35 = ldf c in base
  Rsh_Fir_reg_c35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r79 = dyn c35(result7, r78)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_result7_;
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c35_, 2, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L169() else D44()
  // L169()
  goto L169_;

D44_:;
  // deopt 171 [i23, r79]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L169_:;
  // goto L32(i23, r79)
  // L32(i23, r79)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r79_;
  goto L32_;

D45_:;
  // deopt 177 []
  Rsh_Fir_deopt(177, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p13 = prom<V +>{
  //   tag20 = ld tag;
  //   tag21 = force? tag20;
  //   checkMissing(tag21);
  //   return tag21;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_13, CCP, RHO);
  // p14 = prom<V +>{
  //   EQN = ld EQN;
  //   EQN1 = force? EQN;
  //   checkMissing(EQN1);
  //   return EQN1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_14, CCP, RHO);
  // r82 = dyn _in_2(p13, p14)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_, 2, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L172() else D46()
  // L172()
  goto L172_;

D46_:;
  // deopt 180 [r82]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L172_:;
  // c36 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // if c36 then L173() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L173()
    goto L173_;
  } else {
  // L34()
    goto L34_;
  }

L173_:;
  // tag22 = ld tag
  Rsh_Fir_reg_tag22_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L174() else D47()
  // L174()
  goto L174_;

D47_:;
  // deopt 181 [tag22]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_tag22_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L174_:;
  // tag23 = force? tag22
  Rsh_Fir_reg_tag23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag22_);
  // checkMissing(tag23)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_tag23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // st result = tag23
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_tag23_, RHO);
  (void)(Rsh_Fir_reg_tag23_);
  // sst inEqn = 1
  Rsh_Fir_super_store(Rsh_const(CCP, 15), Rsh_const(CCP, 41), RHO);
  (void)(Rsh_const(CCP, 41));
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args227);
  // if guard15 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L175_:;
  // result8 = ld result
  Rsh_Fir_reg_result8_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L177() else D48()
  // L177()
  goto L177_;

L176_:;
  // r83 = dyn base15(<sym result>, <lang pr(`[[`(x, 1), quoteBraces)>)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args228[1] = Rsh_const(CCP, 99);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L35(r83)
  // L35(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L35_;

D48_:;
  // deopt 189 [result8]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_result8_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L177_:;
  // result9 = force? result8
  Rsh_Fir_reg_result9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result8_);
  // checkMissing(result9)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_result9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // pr3 = ldf pr
  Rsh_Fir_reg_pr3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L178() else D49()
  // L178()
  goto L178_;

D49_:;
  // deopt 192 []
  Rsh_Fir_deopt(192, 0, NULL, CCP, RHO);
  return R_NilValue;

L178_:;
  // p15 = prom<V +>{
  //   x36 = ld x;
  //   x37 = force? x36;
  //   checkMissing(x37);
  //   c37 = `is.object`(x37);
  //   if c37 then L1() else L2(x37);
  // L0(dx29):
  //   return dx29;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[[", x37);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(x39):
  //   __11 = ldf `[[` in base;
  //   r85 = dyn __11(x39, 1);
  //   goto L0(r85);
  // L3():
  //   dx28 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx28);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_15, CCP, RHO);
  // p16 = prom<V +>{
  //   quoteBraces9 = ld quoteBraces;
  //   quoteBraces10 = force? quoteBraces9;
  //   checkMissing(quoteBraces10);
  //   return quoteBraces10;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_16, CCP, RHO);
  // r88 = dyn pr3(p15, p16)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr3_, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L179() else D50()
  // L179()
  goto L179_;

D50_:;
  // deopt 195 [r88]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L179_:;
  // c38 = ldf c in base
  Rsh_Fir_reg_c38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r89 = dyn c38(result9, r88)
  SEXP Rsh_Fir_array_args238[2];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_result9_;
  Rsh_Fir_array_args238[1] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c38_, 2, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L180() else D51()
  // L180()
  goto L180_;

D51_:;
  // deopt 197 [r89]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L180_:;
  // goto L35(r89)
  // L35(r89)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r89_;
  goto L35_;

L181_:;
  // x40 = ld x
  Rsh_Fir_reg_x40_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L183() else D52()
  // L183()
  goto L183_;

L182_:;
  // r90 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L36(r90)
  // L36(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L36_;

D52_:;
  // deopt 204 [x40]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L183_:;
  // x41 = force? x40
  Rsh_Fir_reg_x41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x40_);
  // checkMissing(x41)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_x41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r92 = dyn length(x41)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L184() else D53()
  // L184()
  goto L184_;

D53_:;
  // deopt 207 [r92]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L184_:;
  // goto L36(r92)
  // L36(r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r92_;
  goto L36_;

L185_:;
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args242);
  // if guard17 then L186() else L187()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L186()
    goto L186_;
  } else {
  // L187()
    goto L187_;
  }

L186_:;
  // result10 = ld result
  Rsh_Fir_reg_result10_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L188() else D54()
  // L188()
  goto L188_;

L187_:;
  // r94 = dyn base17(<sym result>, <lang pr(`[[`(x, 2), quoteBraces)>)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args243[1] = Rsh_const(CCP, 100);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L38(r94)
  // L38(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L38_;

D54_:;
  // deopt 212 [result10]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_result10_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L188_:;
  // result11 = force? result10
  Rsh_Fir_reg_result11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result10_);
  // checkMissing(result11)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_result11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // pr4 = ldf pr
  Rsh_Fir_reg_pr4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L189() else D55()
  // L189()
  goto L189_;

D55_:;
  // deopt 215 []
  Rsh_Fir_deopt(215, 0, NULL, CCP, RHO);
  return R_NilValue;

L189_:;
  // p17 = prom<V +>{
  //   x42 = ld x;
  //   x43 = force? x42;
  //   checkMissing(x43);
  //   c40 = `is.object`(x43);
  //   if c40 then L1() else L2(x43);
  // L0(dx31):
  //   return dx31;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[[", x43);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(x45):
  //   __12 = ldf `[[` in base;
  //   r96 = dyn __12(x45, 2);
  //   goto L0(r96);
  // L3():
  //   dx30 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx30);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_17, CCP, RHO);
  // p18 = prom<V +>{
  //   quoteBraces11 = ld quoteBraces;
  //   quoteBraces12 = force? quoteBraces11;
  //   checkMissing(quoteBraces12);
  //   return quoteBraces12;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_18, CCP, RHO);
  // r99 = dyn pr4(p17, p18)
  SEXP Rsh_Fir_array_args252[2];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args252[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr4_, 2, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L190() else D56()
  // L190()
  goto L190_;

D56_:;
  // deopt 218 [r99]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L190_:;
  // c41 = ldf c in base
  Rsh_Fir_reg_c41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r100 = dyn c41(result11, r99)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_result11_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c41_, 2, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L191() else D57()
  // L191()
  goto L191_;

D57_:;
  // deopt 220 [r100]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L191_:;
  // goto L38(r100)
  // L38(r100)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r100_;
  goto L38_;

D58_:;
  // deopt 224 [tag24]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_tag24_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L194_:;
  // tag25 = force? tag24
  Rsh_Fir_reg_tag25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag24_);
  // checkMissing(tag25)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_tag25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty()));
  // st result = tag25
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_tag25_, RHO);
  (void)(Rsh_Fir_reg_tag25_);
  // sym18 = ldf `is.null`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base18 = ldf `is.null` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args255[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args255);
  // if guard18 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L195_:;
  // sym19 = ldf attr
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base19 = ldf attr in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args256[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args256);
  // if guard19 then L197() else L198()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L197()
    goto L197_;
  } else {
  // L198()
    goto L198_;
  }

L196_:;
  // r102 = dyn base18(<lang `<-`(option, attr(x, "Rd_option"))>)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L40(r102)
  // L40(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L40_;

L197_:;
  // x46 = ld x
  Rsh_Fir_reg_x46_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L199() else D59()
  // L199()
  goto L199_;

L198_:;
  // r104 = dyn base19(<sym x>, "Rd_option")
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args258[1] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args258, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L41(r104)
  // L41(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L41_;

D59_:;
  // deopt 230 [x46]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_x46_;
  Rsh_Fir_deopt(230, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L199_:;
  // x47 = force? x46
  Rsh_Fir_reg_x47_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x46_);
  // checkMissing(x47)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_x47_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r106 = dyn attr1(x47, "Rd_option")
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_x47_;
  Rsh_Fir_array_args260[1] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args260, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L200() else D60()
  // L200()
  goto L200_;

D60_:;
  // deopt 234 [r106]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L200_:;
  // goto L41(r106)
  // L41(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L41_;

L201_:;
  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args261);
  // if guard20 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L202_:;
  // result12 = ld result
  Rsh_Fir_reg_result12_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L204() else D61()
  // L204()
  goto L204_;

L203_:;
  // r108 = dyn base20(<sym result>, "[", <lang pr(option, quoteBraces)>, "]")
  SEXP Rsh_Fir_array_args262[4];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args262[1] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args262[2] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args262[3] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names77[4];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_array_arg_names77[3] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 4, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L43(r108)
  // L43(r108)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r108_;
  goto L43_;

D61_:;
  // deopt 240 [result12]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_result12_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L204_:;
  // result13 = force? result12
  Rsh_Fir_reg_result13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result12_);
  // checkMissing(result13)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_result13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // pr5 = ldf pr
  Rsh_Fir_reg_pr5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L205() else D62()
  // L205()
  goto L205_;

D62_:;
  // deopt 244 []
  Rsh_Fir_deopt(244, 0, NULL, CCP, RHO);
  return R_NilValue;

L205_:;
  // p19 = prom<V +>{
  //   option = ld option;
  //   option1 = force? option;
  //   checkMissing(option1);
  //   return option1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_19, CCP, RHO);
  // p20 = prom<V +>{
  //   quoteBraces13 = ld quoteBraces;
  //   quoteBraces14 = force? quoteBraces13;
  //   checkMissing(quoteBraces14);
  //   return quoteBraces14;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_20, CCP, RHO);
  // r112 = dyn pr5(p19, p20)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args266[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr5_, 2, Rsh_Fir_array_args266, Rsh_Fir_array_arg_names78, CCP, RHO);
  // check L206() else D63()
  // L206()
  goto L206_;

D63_:;
  // deopt 247 [r112]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(247, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L206_:;
  // c44 = ldf c in base
  Rsh_Fir_reg_c44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r113 = dyn c44(result13, "[", r112, "]")
  SEXP Rsh_Fir_array_args267[4];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_result13_;
  Rsh_Fir_array_args267[1] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args267[2] = Rsh_Fir_reg_r112_;
  Rsh_Fir_array_args267[3] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names79[4];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_array_arg_names79[3] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c44_, 4, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L207() else D64()
  // L207()
  goto L207_;

D64_:;
  // deopt 250 [r113]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(250, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L207_:;
  // goto L43(r113)
  // L43(r113)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r113_;
  goto L43_;

L209_:;
  // result14 = ld result
  Rsh_Fir_reg_result14_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L211() else D65()
  // L211()
  goto L211_;

L210_:;
  // r115 = dyn base21(<sym result>, "{")
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args268[1] = Rsh_const(CCP, 105);
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L45(r115)
  // L45(r115)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r115_;
  goto L45_;

D65_:;
  // deopt 256 [result14]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_result14_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L211_:;
  // result15 = force? result14
  Rsh_Fir_reg_result15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result14_);
  // checkMissing(result15)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_result15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // c45 = ldf c in base
  Rsh_Fir_reg_c45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r117 = dyn c45(result15, "{")
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_result15_;
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 105);
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c45_, 2, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L212() else D66()
  // L212()
  goto L212_;

D66_:;
  // deopt 260 [r117]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(260, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L212_:;
  // goto L45(r117)
  // L45(r117)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r117_;
  goto L45_;

L213_:;
  // x48 = ld x
  Rsh_Fir_reg_x48_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L215() else D67()
  // L215()
  goto L215_;

L214_:;
  // r118 = dyn base22(<sym x>)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L46(r118)
  // L46(r118)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r118_;
  goto L46_;

D67_:;
  // deopt 263 [x48]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_x48_;
  Rsh_Fir_deopt(263, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L215_:;
  // x49 = force? x48
  Rsh_Fir_reg_x49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x48_);
  // checkMissing(x49)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_x49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // r120 = seq_along(x49)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_x49_;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // goto L46(r120)
  // L46(r120)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r120_;
  goto L46_;

L216_:;
  // sym24 = ldf c
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base24 = ldf c in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args274);
  // if guard24 then L223() else L224()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L223()
    goto L223_;
  } else {
  // L224()
    goto L224_;
  }

L217_:;
  // result16 = ld result
  Rsh_Fir_reg_result16_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L219() else D68()
  // L219()
  goto L219_;

L218_:;
  // r121 = dyn base23(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>)
  SEXP Rsh_Fir_array_args275[2];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args275[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L48(i33, r121)
  // L48(i33, r121)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r121_;
  goto L48_;

D68_:;
  // deopt 268 [i33, result16]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_result16_;
  Rsh_Fir_deopt(268, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L219_:;
  // result17 = force? result16
  Rsh_Fir_reg_result17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result16_);
  // checkMissing(result17)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_result17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty()));
  // pr6 = ldf pr
  Rsh_Fir_reg_pr6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L220() else D69()
  // L220()
  goto L220_;

D69_:;
  // deopt 271 [i33]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L220_:;
  // p21 = prom<V +>{
  //   x51 = ld x;
  //   x52 = force? x51;
  //   checkMissing(x52);
  //   c47 = `is.object`(x52);
  //   if c47 then L1() else L2(x52);
  // L0(dx33):
  //   return dx33;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("[[", x52);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(x54):
  //   i39 = ld i;
  //   i40 = force? i39;
  //   __13 = ldf `[[` in base;
  //   r123 = dyn __13(x54, i40);
  //   goto L0(r123);
  // L3():
  //   dx32 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx32);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_21, CCP, RHO);
  // p22 = prom<V +>{
  //   quoteBraces15 = ld quoteBraces;
  //   quoteBraces16 = force? quoteBraces15;
  //   checkMissing(quoteBraces16);
  //   return quoteBraces16;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_22, CCP, RHO);
  // r126 = dyn pr6(p21, p22)
  SEXP Rsh_Fir_array_args284[2];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args284[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names85[2];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr6_, 2, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L221() else D70()
  // L221()
  goto L221_;

D70_:;
  // deopt 274 [i33, r126]
  SEXP Rsh_Fir_array_deopt_stack73[2];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(274, 2, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L221_:;
  // c48 = ldf c in base
  Rsh_Fir_reg_c48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r127 = dyn c48(result17, r126)
  SEXP Rsh_Fir_array_args285[2];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_result17_;
  Rsh_Fir_array_args285[1] = Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_array_arg_names86[2];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_array_arg_names86[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c48_, 2, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L222() else D71()
  // L222()
  goto L222_;

D71_:;
  // deopt 276 [i33, r127]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(276, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L222_:;
  // goto L48(i33, r127)
  // L48(i33, r127)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r127_;
  goto L48_;

L223_:;
  // result18 = ld result
  Rsh_Fir_reg_result18_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L225() else D72()
  // L225()
  goto L225_;

L224_:;
  // r128 = dyn base24(<sym result>, "}")
  SEXP Rsh_Fir_array_args286[2];
  Rsh_Fir_array_args286[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args286[1] = Rsh_const(CCP, 106);
  SEXP Rsh_Fir_array_arg_names87[2];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_array_arg_names87[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L50(r128)
  // L50(r128)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L50_;

D72_:;
  // deopt 283 [result18]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_result18_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L225_:;
  // result19 = force? result18
  Rsh_Fir_reg_result19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result18_);
  // checkMissing(result19)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_result19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // c49 = ldf c in base
  Rsh_Fir_reg_c49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r130 = dyn c49(result19, "}")
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_result19_;
  Rsh_Fir_array_args288[1] = Rsh_const(CCP, 106);
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c49_, 2, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L226() else D73()
  // L226()
  goto L226_;

D73_:;
  // deopt 287 [r130]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L226_:;
  // goto L50(r130)
  // L50(r130)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r130_;
  goto L50_;

D74_:;
  // deopt 289 [state4]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_state4_;
  Rsh_Fir_deopt(289, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L227_:;
  // state5 = force? state4
  Rsh_Fir_reg_state5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state4_);
  // checkMissing(state5)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_state5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(state5)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_state5_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // if c50 then L228() else L229(state5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L228()
    goto L228_;
  } else {
  // L229(state5)
    Rsh_Fir_reg_state7_ = Rsh_Fir_reg_state5_;
    goto L229_;
  }

L228_:;
  // dr28 = tryDispatchBuiltin.1("[", state5)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args291[1] = Rsh_Fir_reg_state5_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args291);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // if dc14 then L230() else L229(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L230()
    goto L230_;
  } else {
  // L229(dr28)
    Rsh_Fir_reg_state7_ = Rsh_Fir_reg_dr28_;
    goto L229_;
  }

L229_:;
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r131 = dyn __14(state7, 1)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_state7_;
  Rsh_Fir_array_args293[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names89[2];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names89, CCP, RHO);
  // goto L51(r131)
  // L51(r131)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r131_;
  goto L51_;

L230_:;
  // dx34 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // goto L51(dx34)
  // L51(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L51_;

L231_:;
  // pr7 = ldf pr
  Rsh_Fir_reg_pr7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L232() else D75()
  // L232()
  goto L232_;

D75_:;
  // deopt 295 []
  Rsh_Fir_deopt(295, 0, NULL, CCP, RHO);
  return R_NilValue;

L232_:;
  // p23 = prom<V +>{
  //   x55 = ld x;
  //   x56 = force? x55;
  //   checkMissing(x56);
  //   return x56;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_23, CCP, RHO);
  // r133 = dyn pr7(p23, TRUE)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names90[2];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pr7_, 2, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names90, CCP, RHO);
  // check L233() else D76()
  // L233()
  goto L233_;

D76_:;
  // deopt 298 [r133]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(298, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L233_:;
  // st result = r133
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r133_, RHO);
  (void)(Rsh_Fir_reg_r133_);
  // goto L53()
  // L53()
  goto L53_;

D77_:;
  // deopt 302 [savestate]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_savestate;
  Rsh_Fir_deopt(302, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L235_:;
  // savestate1 = force? savestate
  Rsh_Fir_reg_savestate1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_savestate);
  // checkMissing(savestate1)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_savestate1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // sst state = savestate1
  Rsh_Fir_super_store(Rsh_const(CCP, 12), Rsh_Fir_reg_savestate1_, RHO);
  (void)(Rsh_Fir_reg_savestate1_);
  // goto L54()
  // L54()
  goto L54_;

D78_:;
  // deopt 306 []
  Rsh_Fir_deopt(306, 0, NULL, CCP, RHO);
  return R_NilValue;

L237_:;
  // p24 = prom<V +>{
  //   tag26 = ld tag;
  //   tag27 = force? tag26;
  //   checkMissing(tag27);
  //   return tag27;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_24, CCP, RHO);
  // p25 = prom<V +>{
  //   USERMACROS = ld USERMACROS;
  //   USERMACROS1 = force? USERMACROS;
  //   checkMissing(USERMACROS1);
  //   return USERMACROS1;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_25, CCP, RHO);
  // r137 = dyn _in_3(p24, p25)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_array_arg_names91[2];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_array_arg_names91[1] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_3_, 2, Rsh_Fir_array_args300, Rsh_Fir_array_arg_names91, CCP, RHO);
  // check L238() else D79()
  // L238()
  goto L238_;

D79_:;
  // deopt 309 [r137]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_deopt(309, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L238_:;
  // c52 = `as.logical`(r137)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty());
  // if c52 then L239() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L239()
    goto L239_;
  } else {
  // L55()
    goto L55_;
  }

L239_:;
  // sym25 = ldf c
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base25 = ldf c in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args302[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args302);
  // if guard25 then L240() else L241()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L240()
    goto L240_;
  } else {
  // L241()
    goto L241_;
  }

L240_:;
  // c53 = ldf c in base
  Rsh_Fir_reg_c53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r140 = dyn c53()
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c53_, 0, NULL, NULL, CCP, RHO);
  // check L242() else D80()
  // L242()
  goto L242_;

L241_:;
  // r138 = dyn base25()
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 0, NULL, NULL, CCP, RHO);
  // goto L56(r138)
  // L56(r138)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r138_;
  goto L56_;

D80_:;
  // deopt 313 [r140]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(313, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L242_:;
  // goto L56(r140)
  // L56(r140)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r140_;
  goto L56_;

D81_:;
  // deopt 315 [deparse2]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_deparse2_;
  Rsh_Fir_deopt(315, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L244_:;
  // deparse3 = force? deparse2
  Rsh_Fir_reg_deparse3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparse2_);
  // checkMissing(deparse3)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_deparse3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // c54 = `as.logical`(deparse3)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_deparse3_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty());
  // if c54 then L245() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L245()
    goto L245_;
  } else {
  // L57()
    goto L57_;
  }

L245_:;
  // deparseRdElement1 = ldf deparseRdElement
  Rsh_Fir_reg_deparseRdElement1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // check L246() else D82()
  // L246()
  goto L246_;

D82_:;
  // deopt 318 []
  Rsh_Fir_deopt(318, 0, NULL, CCP, RHO);
  return R_NilValue;

L246_:;
  // p26 = prom<V +>{
  //   sym26 = ldf `as.character`;
  //   base26 = ldf `as.character` in base;
  //   guard26 = `==`.4(sym26, base26);
  //   if guard26 then L1() else L2();
  // L0(r142):
  //   return r142;
  // L1():
  //   x57 = ld x;
  //   x58 = force? x57;
  //   checkMissing(x58);
  //   as_character = ldf `as.character` in base;
  //   r143 = dyn as_character(x58);
  //   goto L0(r143);
  // L2():
  //   r141 = dyn base26(<sym x>);
  //   goto L0(r141);
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_26, CCP, RHO);
  // p27 = prom<V +>{
  //   sym27 = ldf c;
  //   base27 = ldf c in base;
  //   guard27 = `==`.4(sym27, base27);
  //   if guard27 then L3() else L4();
  // L0(r146):
  //   return r146;
  // L3():
  //   state8 = ld state;
  //   state9 = force? state8;
  //   checkMissing(state9);
  //   tags = ld tags;
  //   tags1 = force? tags;
  //   checkMissing(tags1);
  //   c55 = `is.object`(tags1);
  //   if c55 then L5() else L6(tags1);
  // L4():
  //   r145 = dyn base27(<sym state>, <lang `[`(tags, tag)>, <sym inEqn>, <lang as.integer(quoteBraces)>);
  //   goto L0(r145);
  // L1(dx37):
  //   inEqn2 = ld inEqn;
  //   inEqn3 = force? inEqn2;
  //   checkMissing(inEqn3);
  //   sym28 = ldf `as.integer`;
  //   base28 = ldf `as.integer` in base;
  //   guard28 = `==`.4(sym28, base28);
  //   if guard28 then L8() else L9();
  // L5():
  //   dr30 = tryDispatchBuiltin.1("[", tags1);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L7() else L6(dr30);
  // L6(tags3):
  //   tag28 = ld tag;
  //   tag29 = force? tag28;
  //   __15 = ldf `[` in base;
  //   r147 = dyn __15(tags3, tag29);
  //   goto L1(r147);
  // L2(r149):
  //   c56 = ldf c in base;
  //   r151 = dyn c56(state9, dx37, inEqn3, r149);
  //   goto L0(r151);
  // L7():
  //   dx36 = getTryDispatchBuiltinValue(dr30);
  //   goto L1(dx36);
  // L8():
  //   quoteBraces17 = ld quoteBraces;
  //   quoteBraces18 = force? quoteBraces17;
  //   checkMissing(quoteBraces18);
  //   as_integer1 = ldf `as.integer` in base;
  //   r150 = dyn as_integer1(quoteBraces18);
  //   goto L2(r150);
  // L9():
  //   r148 = dyn base28(<sym quoteBraces>);
  //   goto L2(r148);
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_27, CCP, RHO);
  // r153 = dyn deparseRdElement1(p26, p27)
  SEXP Rsh_Fir_array_args324[2];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args324[1] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names99[2];
  Rsh_Fir_array_arg_names99[0] = R_MissingArg;
  Rsh_Fir_array_arg_names99[1] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparseRdElement1_, 2, Rsh_Fir_array_args324, Rsh_Fir_array_arg_names99, CCP, RHO);
  // check L247() else D83()
  // L247()
  goto L247_;

D83_:;
  // deopt 321 [r153]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(321, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L247_:;
  // st dep = r153
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r153_, RHO);
  (void)(Rsh_Fir_reg_r153_);
  // dep4 = ld dep
  Rsh_Fir_reg_dep4_ = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // check L248() else D84()
  // L248()
  goto L248_;

D84_:;
  // deopt 323 [dep4]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_dep4_;
  Rsh_Fir_deopt(323, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L248_:;
  // dep5 = force? dep4
  Rsh_Fir_reg_dep5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dep4_);
  // checkMissing(dep5)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_dep5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args325, Rsh_Fir_param_types_empty()));
  // c57 = `is.object`(dep5)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg_dep5_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args326, Rsh_Fir_param_types_empty());
  // if c57 then L249() else L250(dep5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L249()
    goto L249_;
  } else {
  // L250(dep5)
    Rsh_Fir_reg_dep7_ = Rsh_Fir_reg_dep5_;
    goto L250_;
  }

L249_:;
  // dr32 = tryDispatchBuiltin.1("[[", dep5)
  SEXP Rsh_Fir_array_args327[2];
  Rsh_Fir_array_args327[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args327[1] = Rsh_Fir_reg_dep5_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args327);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty());
  // if dc16 then L251() else L250(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L251()
    goto L251_;
  } else {
  // L250(dr32)
    Rsh_Fir_reg_dep7_ = Rsh_Fir_reg_dr32_;
    goto L250_;
  }

L250_:;
  // __16 = ldf `[[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r154 = dyn __16(dep7, 1)
  SEXP Rsh_Fir_array_args329[2];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg_dep7_;
  Rsh_Fir_array_args329[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names100[2];
  Rsh_Fir_array_arg_names100[0] = R_MissingArg;
  Rsh_Fir_array_arg_names100[1] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args329, Rsh_Fir_array_arg_names100, CCP, RHO);
  // goto L58(r154)
  // L58(r154)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r154_;
  goto L58_;

L251_:;
  // dx38 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args330, Rsh_Fir_param_types_empty());
  // goto L58(dx38)
  // L58(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L58_;

D85_:;
  // deopt 329 [dep8]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_dep8_;
  Rsh_Fir_deopt(329, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L252_:;
  // dep9 = force? dep8
  Rsh_Fir_reg_dep9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dep8_);
  // checkMissing(dep9)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_dep9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args331, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(dep9)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_dep9_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty());
  // if c58 then L253() else L254(dep9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L253()
    goto L253_;
  } else {
  // L254(dep9)
    Rsh_Fir_reg_dep11_ = Rsh_Fir_reg_dep9_;
    goto L254_;
  }

L253_:;
  // dr34 = tryDispatchBuiltin.1("[[", dep9)
  SEXP Rsh_Fir_array_args333[2];
  Rsh_Fir_array_args333[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args333[1] = Rsh_Fir_reg_dep9_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args333);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty());
  // if dc17 then L255() else L254(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L255()
    goto L255_;
  } else {
  // L254(dr34)
    Rsh_Fir_reg_dep11_ = Rsh_Fir_reg_dr34_;
    goto L254_;
  }

L254_:;
  // __17 = ldf `[[` in base
  Rsh_Fir_reg___17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r155 = dyn __17(dep11, 2)
  SEXP Rsh_Fir_array_args335[2];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_dep11_;
  Rsh_Fir_array_args335[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names101[2];
  Rsh_Fir_array_arg_names101[0] = R_MissingArg;
  Rsh_Fir_array_arg_names101[1] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___17_, 2, Rsh_Fir_array_args335, Rsh_Fir_array_arg_names101, CCP, RHO);
  // goto L59(r155)
  // L59(r155)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r155_;
  goto L59_;

L255_:;
  // dx40 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args336, Rsh_Fir_param_types_empty());
  // goto L59(dx40)
  // L59(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L59_;

L256_:;
  // dr36 = tryDispatchBuiltin.1("[", dx41)
  SEXP Rsh_Fir_array_args337[2];
  Rsh_Fir_array_args337[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args337[1] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args337);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty());
  // if dc18 then L258() else L257(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L258()
    goto L258_;
  } else {
  // L257(dr36)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dr36_;
    goto L257_;
  }

L257_:;
  // __18 = ldf `[` in base
  Rsh_Fir_reg___18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r156 = dyn __18(dx43, <int 1, 2>)
  SEXP Rsh_Fir_array_args339[2];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args339[1] = Rsh_const(CCP, 108);
  SEXP Rsh_Fir_array_arg_names102[2];
  Rsh_Fir_array_arg_names102[0] = R_MissingArg;
  Rsh_Fir_array_arg_names102[1] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___18_, 2, Rsh_Fir_array_args339, Rsh_Fir_array_arg_names102, CCP, RHO);
  // goto L60(r156)
  // L60(r156)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r156_;
  goto L60_;

L258_:;
  // dx44 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty());
  // goto L60(dx44)
  // L60(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L60_;

L260_:;
  // x59 = ld x
  Rsh_Fir_reg_x59_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L262() else D86()
  // L262()
  goto L262_;

L261_:;
  // r157 = dyn base29(<sym x>, "Rd")
  SEXP Rsh_Fir_array_args341[2];
  Rsh_Fir_array_args341[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args341[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names103[2];
  Rsh_Fir_array_arg_names103[0] = R_MissingArg;
  Rsh_Fir_array_arg_names103[1] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 2, Rsh_Fir_array_args341, Rsh_Fir_array_arg_names103, CCP, RHO);
  // goto L62(r157)
  // L62(r157)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L62_;

D86_:;
  // deopt 340 [x59]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_x59_;
  Rsh_Fir_deopt(340, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L262_:;
  // x60 = force? x59
  Rsh_Fir_reg_x60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x59_);
  // checkMissing(x60)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_x60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args342, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r159 = dyn inherits(x60, "Rd", FALSE)
  SEXP Rsh_Fir_array_args343[3];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_x60_;
  Rsh_Fir_array_args343[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args343[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names104[3];
  Rsh_Fir_array_arg_names104[0] = R_MissingArg;
  Rsh_Fir_array_arg_names104[1] = R_MissingArg;
  Rsh_Fir_array_arg_names104[2] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names104, CCP, RHO);
  // check L263() else D87()
  // L263()
  goto L263_;

D87_:;
  // deopt 345 [r159]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(345, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L263_:;
  // goto L62(r159)
  // L62(r159)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r159_;
  goto L62_;

L264_:;
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 109), RHO);
  // check L265() else D88()
  // L265()
  goto L265_;

D88_:;
  // deopt 347 []
  Rsh_Fir_deopt(347, 0, NULL, CCP, RHO);
  return R_NilValue;

L265_:;
  // p28 = prom<V +>{
  //   sym30 = ldf class;
  //   base30 = ldf class in base;
  //   guard30 = `==`.4(sym30, base30);
  //   if guard30 then L1() else L2();
  // L0(r161):
  //   return r161;
  // L1():
  //   x61 = ld x;
  //   x62 = force? x61;
  //   checkMissing(x62);
  //   class = ldf class in base;
  //   r162 = dyn class(x62);
  //   goto L0(r162);
  // L2():
  //   r160 = dyn base30(<sym x>);
  //   goto L0(r160);
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_28, CCP, RHO);
  // r164 = dyn setdiff(p28, "Rd")
  SEXP Rsh_Fir_array_args348[2];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args348[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names107[2];
  Rsh_Fir_array_arg_names107[0] = R_MissingArg;
  Rsh_Fir_array_arg_names107[1] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args348, Rsh_Fir_array_arg_names107, CCP, RHO);
  // check L266() else D89()
  // L266()
  goto L266_;

D89_:;
  // deopt 350 [r164]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(350, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L266_:;
  // l4 = ld x
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 111), RHO);
  // check L267() else D90()
  // L267()
  goto L267_;

D90_:;
  // deopt 352 [r164, l4, r164]
  SEXP Rsh_Fir_array_deopt_stack89[3];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_array_deopt_stack89[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack89[2] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(352, 3, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L267_:;
  // r165 = dyn class__(l4, NULL, r164)
  SEXP Rsh_Fir_array_args349[3];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args349[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args349[2] = Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_array_arg_names108[3];
  Rsh_Fir_array_arg_names108[0] = R_MissingArg;
  Rsh_Fir_array_arg_names108[1] = R_MissingArg;
  Rsh_Fir_array_arg_names108[2] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args349, Rsh_Fir_array_arg_names108, CCP, RHO);
  // check L268() else D91()
  // L268()
  goto L268_;

D91_:;
  // deopt 354 [r164, r165]
  SEXP Rsh_Fir_array_deopt_stack90[2];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_array_deopt_stack90[1] = Rsh_Fir_reg_r165_;
  Rsh_Fir_deopt(354, 2, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L268_:;
  // st x = r165
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r165_, RHO);
  (void)(Rsh_Fir_reg_r165_);
  // goto L64()
  // L64()
  goto L64_;

L270_:;
  // x63 = ld x
  Rsh_Fir_reg_x63_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L272() else D92()
  // L272()
  goto L272_;

L271_:;
  // r167 = dyn base31(<sym x>)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names109[1];
  Rsh_Fir_array_arg_names109[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 1, Rsh_Fir_array_args350, Rsh_Fir_array_arg_names109, CCP, RHO);
  // goto L65(r167)
  // L65(r167)
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r167_;
  goto L65_;

D92_:;
  // deopt 360 [x63]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_x63_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L272_:;
  // x64 = force? x63
  Rsh_Fir_reg_x64_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x63_);
  // checkMissing(x64)
  SEXP Rsh_Fir_array_args351[1];
  Rsh_Fir_array_args351[0] = Rsh_Fir_reg_x64_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args351, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r169 = dyn as_character1(x64)
  SEXP Rsh_Fir_array_args352[1];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_x64_;
  SEXP Rsh_Fir_array_arg_names110[1];
  Rsh_Fir_array_arg_names110[0] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args352, Rsh_Fir_array_arg_names110, CCP, RHO);
  // check L273() else D93()
  // L273()
  goto L273_;

D93_:;
  // deopt 363 [r169]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_r169_;
  Rsh_Fir_deopt(363, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L273_:;
  // goto L65(r169)
  // L65(r169)
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r169_;
  goto L65_;

D94_:;
  // deopt 365 [needBraces]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_needBraces;
  Rsh_Fir_deopt(365, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L274_:;
  // needBraces1 = force? needBraces
  Rsh_Fir_reg_needBraces1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_needBraces);
  // checkMissing(needBraces1)
  SEXP Rsh_Fir_array_args353[1];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_needBraces1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args353, Rsh_Fir_param_types_empty()));
  // c61 = `as.logical`(needBraces1)
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_Fir_reg_needBraces1_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args354, Rsh_Fir_param_types_empty());
  // if c61 then L275() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L275()
    goto L275_;
  } else {
  // L66()
    goto L66_;
  }

L275_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 112), RHO);
  // check L276() else D95()
  // L276()
  goto L276_;

D95_:;
  // deopt 368 []
  Rsh_Fir_deopt(368, 0, NULL, CCP, RHO);
  return R_NilValue;

L276_:;
  // p29 = prom<V +>{
  //   result20 = ld result;
  //   result21 = force? result20;
  //   checkMissing(result21);
  //   return result21;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3235627120_29, CCP, RHO);
  // r171 = dyn grepl("^[[:alpha:]]", p29)
  SEXP Rsh_Fir_array_args356[2];
  Rsh_Fir_array_args356[0] = Rsh_const(CCP, 113);
  Rsh_Fir_array_args356[1] = Rsh_Fir_reg_p29_;
  SEXP Rsh_Fir_array_arg_names111[2];
  Rsh_Fir_array_arg_names111[0] = R_MissingArg;
  Rsh_Fir_array_arg_names111[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args356, Rsh_Fir_array_arg_names111, CCP, RHO);
  // check L277() else D96()
  // L277()
  goto L277_;

D96_:;
  // deopt 371 [r171]
  SEXP Rsh_Fir_array_deopt_stack94[1];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_deopt(371, 1, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L277_:;
  // c62 = `as.logical`(r171)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args357, Rsh_Fir_param_types_empty());
  // if c62 then L278() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L278()
    goto L278_;
  } else {
  // L67()
    goto L67_;
  }

L278_:;
  // sym32 = ldf c
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base32 = ldf c in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args358[2];
  Rsh_Fir_array_args358[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args358[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args358);
  // if guard32 then L279() else L280()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L279()
    goto L279_;
  } else {
  // L280()
    goto L280_;
  }

L279_:;
  // result22 = ld result
  Rsh_Fir_reg_result22_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L281() else D97()
  // L281()
  goto L281_;

L280_:;
  // r172 = dyn base32("{}", <sym result>)
  SEXP Rsh_Fir_array_args359[2];
  Rsh_Fir_array_args359[0] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args359[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names112[2];
  Rsh_Fir_array_arg_names112[0] = R_MissingArg;
  Rsh_Fir_array_arg_names112[1] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 2, Rsh_Fir_array_args359, Rsh_Fir_array_arg_names112, CCP, RHO);
  // goto L68(r172)
  // L68(r172)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r172_;
  goto L68_;

D97_:;
  // deopt 375 [result22]
  SEXP Rsh_Fir_array_deopt_stack95[1];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_result22_;
  Rsh_Fir_deopt(375, 1, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L281_:;
  // result23 = force? result22
  Rsh_Fir_reg_result23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result22_);
  // checkMissing(result23)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_result23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args360, Rsh_Fir_param_types_empty()));
  // c63 = ldf c in base
  Rsh_Fir_reg_c63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r174 = dyn c63("{}", result23)
  SEXP Rsh_Fir_array_args361[2];
  Rsh_Fir_array_args361[0] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args361[1] = Rsh_Fir_reg_result23_;
  SEXP Rsh_Fir_array_arg_names113[2];
  Rsh_Fir_array_arg_names113[0] = R_MissingArg;
  Rsh_Fir_array_arg_names113[1] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c63_, 2, Rsh_Fir_array_args361, Rsh_Fir_array_arg_names113, CCP, RHO);
  // check L282() else D98()
  // L282()
  goto L282_;

D98_:;
  // deopt 378 [r174]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_r174_;
  Rsh_Fir_deopt(378, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L282_:;
  // goto L68(r174)
  // L68(r174)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r174_;
  goto L68_;

D99_:;
  // deopt 387 [result24]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_result24_;
  Rsh_Fir_deopt(387, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L285_:;
  // result25 = force? result24
  Rsh_Fir_reg_result25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result24_);
  // checkMissing(result25)
  SEXP Rsh_Fir_array_args362[1];
  Rsh_Fir_array_args362[0] = Rsh_Fir_reg_result25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args362, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result25
  return Rsh_Fir_reg_result25_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_(SEXP CCP, SEXP RHO) {
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x9)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(x9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x9)
    Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x9_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", x9)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x11_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // i8 = ld i
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r20 = dyn __(x11, i9)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_1(SEXP CCP, SEXP RHO) {
  // quoteBraces1 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces1_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces2 = force? quoteBraces1
  Rsh_Fir_reg_quoteBraces2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces1_);
  // checkMissing(quoteBraces2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_quoteBraces2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return quoteBraces2
  return Rsh_Fir_reg_quoteBraces2_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_2(SEXP CCP, SEXP RHO) {
  // tag6 = ld tag
  Rsh_Fir_reg_tag6_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag7 = force? tag6
  Rsh_Fir_reg_tag7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag6_);
  // checkMissing(tag7)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_tag7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // return tag7
  return Rsh_Fir_reg_tag7_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_3(SEXP CCP, SEXP RHO) {
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x13)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if c16 then L2() else L3(x13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x13)
    Rsh_Fir_reg_x15_ = Rsh_Fir_reg_x13_;
    goto L3_;
  }

L0_:;
  // c17 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if c17 then L5() else L6(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L6_;
  }

L1_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[[", x13)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_x15_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r27 = dyn __1(x15, 1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r27_1;
  goto L0_;

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // dr4 = tryDispatchBuiltin.1("[[", dx3)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc2 then L7() else L6(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L6_;
  }

L6_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r28 = dyn __2(dx5, 1)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L1(r28)
  // L1(r28)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r28_;
  goto L1_;

L7_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_4(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard6 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // inEqn = ld inEqn
  Rsh_Fir_reg_inEqn = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // inEqn1 = force? inEqn
  Rsh_Fir_reg_inEqn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inEqn);
  // checkMissing(inEqn1)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_inEqn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_sym7_1;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_base7_1;
  Rsh_Fir_reg_guard7_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args135);
  // if guard7 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r36 = dyn c19(state3, dx9, inEqn1, r34)
  SEXP Rsh_Fir_array_args136[4];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_state3_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args136[2] = Rsh_Fir_reg_inEqn1_;
  Rsh_Fir_array_args136[3] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names36[4];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_array_arg_names36[3] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 4, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r36_;
  goto L0_;

L3_:;
  // state2 = ld state
  Rsh_Fir_reg_state2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // state3 = force? state2
  Rsh_Fir_reg_state3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state2_);
  // checkMissing(state3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_state3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // modes = ld modes
  Rsh_Fir_reg_modes = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // modes1 = force? modes
  Rsh_Fir_reg_modes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_modes);
  // checkMissing(modes1)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_modes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(modes1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_modes1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c18 then L5() else L6(modes1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L5()
    goto L5_;
  } else {
  // L6(modes1)
    Rsh_Fir_reg_modes3_ = Rsh_Fir_reg_modes1_;
    goto L6_;
  }

L4_:;
  // r30 = dyn base6(<sym state>, <lang `[`(modes, "LATEXLIKE")>, <sym inEqn>, <lang as.integer(quoteBraces)>)
  SEXP Rsh_Fir_array_args140[4];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args140[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args140[3] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names37[4];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 4, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_1;
  goto L0_;

L5_:;
  // dr6 = tryDispatchBuiltin.1("[", modes1)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_modes1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc3 then L7() else L6(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr6)
    Rsh_Fir_reg_modes3_ = Rsh_Fir_reg_dr6_;
    goto L6_;
  }

L6_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r32 = dyn __3(modes3, "LATEXLIKE")
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_modes3_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L1(r32)
  // L1(r32)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r32_;
  goto L1_;

L7_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L1(dx8)
  // L1(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L1_;

L8_:;
  // quoteBraces3 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces3_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces4 = force? quoteBraces3
  Rsh_Fir_reg_quoteBraces4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces3_);
  // checkMissing(quoteBraces4)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_quoteBraces4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // r35 = dyn as_integer(quoteBraces4)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_quoteBraces4_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L2(r35)
  // L2(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L2_;

L9_:;
  // r33 = dyn base7(<sym quoteBraces>)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_1, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L2(r33)
  // L2(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_5(SEXP CCP, SEXP RHO) {
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(x26)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // if c27 then L2() else L3(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L3_;
  }

L0_:;
  // c28 = `is.object`(dx21)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c28 then L5() else L6(dx21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx21)
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    goto L6_;
  }

L1_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L2_:;
  // dr16 = tryDispatchBuiltin.1("[[", x26)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args183);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc8 then L4() else L3(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr16)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr16_;
    goto L3_;
  }

L3_:;
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r55 = dyn __8(x28, 2)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args185[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r55_;
  goto L0_;

L4_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;

L5_:;
  // dr18 = tryDispatchBuiltin.1("[[", dx21)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args187);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // if dc9 then L7() else L6(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr18)
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dr18_;
    goto L6_;
  }

L6_:;
  // i19 = ld i
  Rsh_Fir_reg_i19_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // i20 = force? i19
  Rsh_Fir_reg_i20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i19_);
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r56 = dyn __9(dx23, i20)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L1(r56)
  // L1(r56)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r56_;
  goto L1_;

L7_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L1(dx24)
  // L1(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_6(SEXP CCP, SEXP RHO) {
  // quoteBraces5 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces5_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces6 = force? quoteBraces5
  Rsh_Fir_reg_quoteBraces6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces5_);
  // checkMissing(quoteBraces6)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_quoteBraces6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // return quoteBraces6
  return Rsh_Fir_reg_quoteBraces6_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_7(SEXP CCP, SEXP RHO) {
  // tag12 = ld tag
  Rsh_Fir_reg_tag12_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag13 = force? tag12
  Rsh_Fir_reg_tag13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag12_);
  // checkMissing(tag13)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_tag13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // return tag13
  return Rsh_Fir_reg_tag13_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_8(SEXP CCP, SEXP RHO) {
  // ZEROARG = ld ZEROARG
  Rsh_Fir_reg_ZEROARG = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ZEROARG1 = force? ZEROARG
  Rsh_Fir_reg_ZEROARG1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ZEROARG);
  // checkMissing(ZEROARG1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_ZEROARG1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // return ZEROARG1
  return Rsh_Fir_reg_ZEROARG1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_9(SEXP CCP, SEXP RHO) {
  // tag16 = ld tag
  Rsh_Fir_reg_tag16_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag17 = force? tag16
  Rsh_Fir_reg_tag17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag16_);
  // checkMissing(tag17)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_tag17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // return tag17
  return Rsh_Fir_reg_tag17_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_10(SEXP CCP, SEXP RHO) {
  // MULTIARG = ld MULTIARG
  Rsh_Fir_reg_MULTIARG = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // MULTIARG1 = force? MULTIARG
  Rsh_Fir_reg_MULTIARG1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MULTIARG);
  // checkMissing(MULTIARG1)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_MULTIARG1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // return MULTIARG1
  return Rsh_Fir_reg_MULTIARG1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_11(SEXP CCP, SEXP RHO) {
  // x32 = ld x
  Rsh_Fir_reg_x32_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x33 = force? x32
  Rsh_Fir_reg_x33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x32_);
  // checkMissing(x33)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_x33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(x33)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if c34 then L1() else L2(x33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x33)
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_x33_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[[", x33)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args215);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // i29 = ld i
  Rsh_Fir_reg_i29_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // i30 = force? i29
  Rsh_Fir_reg_i30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i29_);
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r75 = dyn __10(x35, i30)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L0(r75)
  // L0(r75)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r75_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_12(SEXP CCP, SEXP RHO) {
  // quoteBraces7 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces7_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces8 = force? quoteBraces7
  Rsh_Fir_reg_quoteBraces8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces7_);
  // checkMissing(quoteBraces8)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_quoteBraces8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // return quoteBraces8
  return Rsh_Fir_reg_quoteBraces8_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_13(SEXP CCP, SEXP RHO) {
  // tag20 = ld tag
  Rsh_Fir_reg_tag20_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag21 = force? tag20
  Rsh_Fir_reg_tag21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag20_);
  // checkMissing(tag21)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_tag21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // return tag21
  return Rsh_Fir_reg_tag21_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_14(SEXP CCP, SEXP RHO) {
  // EQN = ld EQN
  Rsh_Fir_reg_EQN = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // EQN1 = force? EQN
  Rsh_Fir_reg_EQN1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_EQN);
  // checkMissing(EQN1)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_EQN1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // return EQN1
  return Rsh_Fir_reg_EQN1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_15(SEXP CCP, SEXP RHO) {
  // x36 = ld x
  Rsh_Fir_reg_x36_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x37 = force? x36
  Rsh_Fir_reg_x37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x36_);
  // checkMissing(x37)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_x37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(x37)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if c37 then L1() else L2(x37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x37)
    Rsh_Fir_reg_x39_ = Rsh_Fir_reg_x37_;
    goto L2_;
  }

L0_:;
  // return dx29
  return Rsh_Fir_reg_dx29_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[[", x37)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args232);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_x39_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // __11 = ldf `[[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r85 = dyn __11(x39, 1)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r85_;
  goto L0_;

L3_:;
  // dx28 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // goto L0(dx28)
  // L0(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_16(SEXP CCP, SEXP RHO) {
  // quoteBraces9 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces9_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces10 = force? quoteBraces9
  Rsh_Fir_reg_quoteBraces10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces9_);
  // checkMissing(quoteBraces10)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_quoteBraces10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // return quoteBraces10
  return Rsh_Fir_reg_quoteBraces10_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_17(SEXP CCP, SEXP RHO) {
  // x42 = ld x
  Rsh_Fir_reg_x42_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x43 = force? x42
  Rsh_Fir_reg_x43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x42_);
  // checkMissing(x43)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_x43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(x43)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_x43_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // if c40 then L1() else L2(x43)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x43)
    Rsh_Fir_reg_x45_ = Rsh_Fir_reg_x43_;
    goto L2_;
  }

L0_:;
  // return dx31
  return Rsh_Fir_reg_dx31_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[[", x43)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_x43_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args247);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_x45_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // __12 = ldf `[[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r96 = dyn __12(x45, 2)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_x45_;
  Rsh_Fir_array_args249[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L0(r96)
  // L0(r96)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r96_;
  goto L0_;

L3_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // goto L0(dx30)
  // L0(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_18(SEXP CCP, SEXP RHO) {
  // quoteBraces11 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces11_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces12 = force? quoteBraces11
  Rsh_Fir_reg_quoteBraces12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces11_);
  // checkMissing(quoteBraces12)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_quoteBraces12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // return quoteBraces12
  return Rsh_Fir_reg_quoteBraces12_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_19(SEXP CCP, SEXP RHO) {
  // option = ld option
  Rsh_Fir_reg_option = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // option1 = force? option
  Rsh_Fir_reg_option1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_option);
  // checkMissing(option1)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_option1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // return option1
  return Rsh_Fir_reg_option1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_20(SEXP CCP, SEXP RHO) {
  // quoteBraces13 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces13_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces14 = force? quoteBraces13
  Rsh_Fir_reg_quoteBraces14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces13_);
  // checkMissing(quoteBraces14)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_quoteBraces14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty()));
  // return quoteBraces14
  return Rsh_Fir_reg_quoteBraces14_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_21(SEXP CCP, SEXP RHO) {
  // x51 = ld x
  Rsh_Fir_reg_x51_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x52 = force? x51
  Rsh_Fir_reg_x52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x51_);
  // checkMissing(x52)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_x52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(x52)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_x52_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty());
  // if c47 then L1() else L2(x52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x52)
    Rsh_Fir_reg_x54_ = Rsh_Fir_reg_x52_;
    goto L2_;
  }

L0_:;
  // return dx33
  return Rsh_Fir_reg_dx33_;

L1_:;
  // dr26 = tryDispatchBuiltin.1("[[", x52)
  SEXP Rsh_Fir_array_args279[2];
  Rsh_Fir_array_args279[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args279[1] = Rsh_Fir_reg_x52_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args279);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_x54_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // i39 = ld i
  Rsh_Fir_reg_i39_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // i40 = force? i39
  Rsh_Fir_reg_i40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i39_);
  // __13 = ldf `[[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r123 = dyn __13(x54, i40)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_x54_;
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L0(r123)
  // L0(r123)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r123_;
  goto L0_;

L3_:;
  // dx32 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // goto L0(dx32)
  // L0(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_22(SEXP CCP, SEXP RHO) {
  // quoteBraces15 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces15_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces16 = force? quoteBraces15
  Rsh_Fir_reg_quoteBraces16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces15_);
  // checkMissing(quoteBraces16)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_quoteBraces16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty()));
  // return quoteBraces16
  return Rsh_Fir_reg_quoteBraces16_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_23(SEXP CCP, SEXP RHO) {
  // x55 = ld x
  Rsh_Fir_reg_x55_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x56 = force? x55
  Rsh_Fir_reg_x56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x55_);
  // checkMissing(x56)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_x56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // return x56
  return Rsh_Fir_reg_x56_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_24(SEXP CCP, SEXP RHO) {
  // tag26 = ld tag
  Rsh_Fir_reg_tag26_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag27 = force? tag26
  Rsh_Fir_reg_tag27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag26_);
  // checkMissing(tag27)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_tag27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty()));
  // return tag27
  return Rsh_Fir_reg_tag27_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_25(SEXP CCP, SEXP RHO) {
  // USERMACROS = ld USERMACROS
  Rsh_Fir_reg_USERMACROS = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // USERMACROS1 = force? USERMACROS
  Rsh_Fir_reg_USERMACROS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_USERMACROS);
  // checkMissing(USERMACROS1)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_USERMACROS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // return USERMACROS1
  return Rsh_Fir_reg_USERMACROS1_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_26(SEXP CCP, SEXP RHO) {
  // sym26 = ldf `as.character`
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base26 = ldf `as.character` in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args305[2];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args305[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args305);
  // if guard26 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r142
  return Rsh_Fir_reg_r142_;

L1_:;
  // x57 = ld x
  Rsh_Fir_reg_x57_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x58 = force? x57
  Rsh_Fir_reg_x58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x57_);
  // checkMissing(x58)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_x58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r143 = dyn as_character(x58)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_x58_;
  SEXP Rsh_Fir_array_arg_names92[1];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args307, Rsh_Fir_array_arg_names92, CCP, RHO);
  // goto L0(r143)
  // L0(r143)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r143_;
  goto L0_;

L2_:;
  // r141 = dyn base26(<sym x>)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names93[1];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args308, Rsh_Fir_array_arg_names93, CCP, RHO);
  // goto L0(r141)
  // L0(r141)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r141_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_27(SEXP CCP, SEXP RHO) {
  // sym27 = ldf c
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base27 = ldf c in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args309[2];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args309[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args309);
  // if guard27 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r146
  return Rsh_Fir_reg_r146_;

L1_:;
  // inEqn2 = ld inEqn
  Rsh_Fir_reg_inEqn2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // inEqn3 = force? inEqn2
  Rsh_Fir_reg_inEqn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inEqn2_);
  // checkMissing(inEqn3)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_inEqn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // sym28 = ldf `as.integer`
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // base28 = ldf `as.integer` in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args311[2];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args311);
  // if guard28 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // c56 = ldf c in base
  Rsh_Fir_reg_c56_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r151 = dyn c56(state9, dx37, inEqn3, r149)
  SEXP Rsh_Fir_array_args312[4];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_state9_;
  Rsh_Fir_array_args312[1] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_array_args312[2] = Rsh_Fir_reg_inEqn3_;
  Rsh_Fir_array_args312[3] = Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_array_arg_names94[4];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_array_arg_names94[1] = R_MissingArg;
  Rsh_Fir_array_arg_names94[2] = R_MissingArg;
  Rsh_Fir_array_arg_names94[3] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c56_, 4, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names94, CCP, RHO);
  // goto L0(r151)
  // L0(r151)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r151_;
  goto L0_;

L3_:;
  // state8 = ld state
  Rsh_Fir_reg_state8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // state9 = force? state8
  Rsh_Fir_reg_state9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state8_);
  // checkMissing(state9)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_state9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // tags = ld tags
  Rsh_Fir_reg_tags = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // tags1 = force? tags
  Rsh_Fir_reg_tags1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tags);
  // checkMissing(tags1)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_tags1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // c55 = `is.object`(tags1)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_tags1_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty());
  // if c55 then L5() else L6(tags1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L5()
    goto L5_;
  } else {
  // L6(tags1)
    Rsh_Fir_reg_tags3_ = Rsh_Fir_reg_tags1_;
    goto L6_;
  }

L4_:;
  // r145 = dyn base27(<sym state>, <lang `[`(tags, tag)>, <sym inEqn>, <lang as.integer(quoteBraces)>)
  SEXP Rsh_Fir_array_args316[4];
  Rsh_Fir_array_args316[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args316[1] = Rsh_const(CCP, 107);
  Rsh_Fir_array_args316[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args316[3] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names95[4];
  Rsh_Fir_array_arg_names95[0] = R_MissingArg;
  Rsh_Fir_array_arg_names95[1] = R_MissingArg;
  Rsh_Fir_array_arg_names95[2] = R_MissingArg;
  Rsh_Fir_array_arg_names95[3] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 4, Rsh_Fir_array_args316, Rsh_Fir_array_arg_names95, CCP, RHO);
  // goto L0(r145)
  // L0(r145)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r145_;
  goto L0_;

L5_:;
  // dr30 = tryDispatchBuiltin.1("[", tags1)
  SEXP Rsh_Fir_array_args317[2];
  Rsh_Fir_array_args317[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args317[1] = Rsh_Fir_reg_tags1_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args317);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty());
  // if dc15 then L7() else L6(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr30)
    Rsh_Fir_reg_tags3_ = Rsh_Fir_reg_dr30_;
    goto L6_;
  }

L6_:;
  // tag28 = ld tag
  Rsh_Fir_reg_tag28_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // tag29 = force? tag28
  Rsh_Fir_reg_tag29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag28_);
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r147 = dyn __15(tags3, tag29)
  SEXP Rsh_Fir_array_args319[2];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_tags3_;
  Rsh_Fir_array_args319[1] = Rsh_Fir_reg_tag29_;
  SEXP Rsh_Fir_array_arg_names96[2];
  Rsh_Fir_array_arg_names96[0] = R_MissingArg;
  Rsh_Fir_array_arg_names96[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args319, Rsh_Fir_array_arg_names96, CCP, RHO);
  // goto L1(r147)
  // L1(r147)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r147_;
  goto L1_;

L7_:;
  // dx36 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args320[1];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // goto L1(dx36)
  // L1(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L1_;

L8_:;
  // quoteBraces17 = ld quoteBraces
  Rsh_Fir_reg_quoteBraces17_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // quoteBraces18 = force? quoteBraces17
  Rsh_Fir_reg_quoteBraces18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quoteBraces17_);
  // checkMissing(quoteBraces18)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_quoteBraces18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args321, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // r150 = dyn as_integer1(quoteBraces18)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_quoteBraces18_;
  SEXP Rsh_Fir_array_arg_names97[1];
  Rsh_Fir_array_arg_names97[0] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args322, Rsh_Fir_array_arg_names97, CCP, RHO);
  // goto L2(r150)
  // L2(r150)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r150_;
  goto L2_;

L9_:;
  // r148 = dyn base28(<sym quoteBraces>)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names98[1];
  Rsh_Fir_array_arg_names98[0] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args323, Rsh_Fir_array_arg_names98, CCP, RHO);
  // goto L2(r148)
  // L2(r148)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r148_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_28(SEXP CCP, SEXP RHO) {
  // sym30 = ldf class
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 110), RHO);
  // base30 = ldf class in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 110), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args344[2];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args344[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args344);
  // if guard30 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r161
  return Rsh_Fir_reg_r161_;

L1_:;
  // x61 = ld x
  Rsh_Fir_reg_x61_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x62 = force? x61
  Rsh_Fir_reg_x62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x61_);
  // checkMissing(x62)
  SEXP Rsh_Fir_array_args345[1];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_x62_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args345, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 110), RHO);
  // r162 = dyn class(x62)
  SEXP Rsh_Fir_array_args346[1];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_x62_;
  SEXP Rsh_Fir_array_arg_names105[1];
  Rsh_Fir_array_arg_names105[0] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args346, Rsh_Fir_array_arg_names105, CCP, RHO);
  // goto L0(r162)
  // L0(r162)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r162_;
  goto L0_;

L2_:;
  // r160 = dyn base30(<sym x>)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names106[1];
  Rsh_Fir_array_arg_names106[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 1, Rsh_Fir_array_args347, Rsh_Fir_array_arg_names106, CCP, RHO);
  // goto L0(r160)
  // L0(r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3235627120_29(SEXP CCP, SEXP RHO) {
  // result20 = ld result
  Rsh_Fir_reg_result20_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // result21 = force? result20
  Rsh_Fir_reg_result21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result20_);
  // checkMissing(result21)
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_Fir_reg_result21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args355, Rsh_Fir_param_types_empty()));
  // return result21
  return Rsh_Fir_reg_result21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
