#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3836830771_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3836830771_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3836830771_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3836830771_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner3836830771
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3836830771_, RHO, CCP);
  // st `.getGeneric` = r
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
SEXP Rsh_Fir_user_function_inner3836830771_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3836830771 dynamic dispatch ([f, where, package])

  return Rsh_Fir_user_version_inner3836830771_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3836830771_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3836830771 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3836830771/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_where_isMissing;  // where_isMissing
  SEXP Rsh_Fir_reg_where_orDefault;  // where_orDefault
  SEXP Rsh_Fir_reg__GlobalEnv;  // _GlobalEnv
  SEXP Rsh_Fir_reg__GlobalEnv1_;  // _GlobalEnv1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_package_isMissing;  // package_isMissing
  SEXP Rsh_Fir_reg_package_orDefault;  // package_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__getGenericFromCache;  // _getGenericFromCache
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_f5_;  // f5
  SEXP Rsh_Fir_reg_f6_;  // f6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_f7_;  // f7
  SEXP Rsh_Fir_reg_f8_;  // f8
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_f9_;  // f9
  SEXP Rsh_Fir_reg_f10_;  // f10
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dput;  // dput
  SEXP Rsh_Fir_reg_sys_calls;  // sys_calls
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_C_R_getGeneric;  // C_R_getGeneric
  SEXP Rsh_Fir_reg_C_R_getGeneric1_;  // C_R_getGeneric1
  SEXP Rsh_Fir_reg_f11_;  // f11
  SEXP Rsh_Fir_reg_f12_;  // f12
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_C_R_getGeneric4_;  // C_R_getGeneric4
  SEXP Rsh_Fir_reg_f15_;  // f15
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_as_environment;  // as_environment
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_package3_;  // package3
  SEXP Rsh_Fir_reg_package4_;  // package4
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg__GlobalEnv2_;  // _GlobalEnv2
  SEXP Rsh_Fir_reg__GlobalEnv3_;  // _GlobalEnv3
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg__GlobalEnv5_;  // _GlobalEnv5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_f16_;  // f16
  SEXP Rsh_Fir_reg_f17_;  // f17
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_vv;  // vv
  SEXP Rsh_Fir_reg_vv1_;  // vv1
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg__cacheGeneric;  // _cacheGeneric
  SEXP Rsh_Fir_reg_f18_;  // f18
  SEXP Rsh_Fir_reg_f19_;  // f19
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_value9_;  // value9

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];
  Rsh_Fir_reg_package = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if where_isMissing then L0() else L1(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if package_isMissing then L2("") else L2(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L2("")
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L2_;
  }

L2_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L3_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L30() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 7);
  goto L5_;

L5_:;
  // st value = r8
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L6_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c2 then L37() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L37()
    goto L37_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L27()
  // L27()
  goto L27_;

L8_:;
  // c4 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c4 then L41() else L9(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L41()
    goto L41_;
  } else {
  // L9(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L9_;
  }

L9_:;
  // c10 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c10 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym3 = ldf `is.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf `is.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L12_:;
  // c12 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c12 then L50() else L13(c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L50()
    goto L50_;
  } else {
  // L13(c12)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
    goto L13_;
  }

L13_:;
  // c21 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c21 then L56() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L56()
    goto L56_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c17, c18)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L13(c19)
  // L13(c19)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c19_;
  goto L13_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym5 = ldf `.Call`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf `.Call` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L17_:;
  // st value = r28
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard7 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L18_:;
  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L70() else D17()
  // L70()
  goto L70_;

L19_:;
  // r38 = `!`(r37)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c23 then L74() else L20(c23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L74()
    goto L74_;
  } else {
  // L20(c23)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c23_;
    goto L20_;
  }

L20_:;
  // c38 = `as.logical`(c25)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c38 then L83() else L23(c38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L83()
    goto L83_;
  } else {
  // L23(c38)
    Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c38_;
    goto L23_;
  }

L21_:;
  // r42 = `!`(r40)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c35 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c36 = `&&`(c28, c35)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L20(c36)
  // L20(c36)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c36_;
  goto L20_;

L22_:;
  // st vv = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c34 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L21(c33, c34)
  // L21(c33, c34)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_c34_;
  goto L21_;

L23_:;
  // c47 = `as.logical`(c40)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c47 then L90() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L90()
    goto L90_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // c44 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c45 = `&&`(c43, c44)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L23(c45)
  // L23(c45)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c45_;
  goto L23_;

L25_:;
  // goto L26(NULL)
  // L26(NULL)
  Rsh_Fir_reg_r49_ = Rsh_const(CCP, 7);
  goto L26_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // value8 = ld value
  Rsh_Fir_reg_value8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L95() else D26()
  // L95()
  goto L95_;

L28_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn missing(<sym where>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L3_;

L29_:;
  // r1 = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

L30_:;
  // _getGenericFromCache = ldf `.getGenericFromCache`
  Rsh_Fir_reg__getGenericFromCache = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p1 = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_1, CCP, RHO);
  // p2 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_2, CCP, RHO);
  // p3 = prom<V +>{
  //   package1 = ld package;
  //   package2 = force? package1;
  //   checkMissing(package2);
  //   return package2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_3, CCP, RHO);
  // r7 = dyn _getGenericFromCache(p1, p2, p3)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getGenericFromCache, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 8 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

L34_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

L35_:;
  // r9 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

D2_:;
  // deopt 13 [value]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c1 = `==`(value1, NULL)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L6(c1)
  // L6(c1)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c1_;
  goto L6_;

L37_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

L39_:;
  // r11 = dyn base2(<sym f>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L8_;

D3_:;
  // deopt 17 [f3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_f3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L40_:;
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c3 = `is.character`(f4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_f4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(c3)
  // L8(c3)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c3_;
  goto L8_;

L41_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

D4_:;
  // deopt 21 [c4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L42_:;
  // p4 = prom<V +>{
  //   f5 = ld f;
  //   f6 = force? f5;
  //   checkMissing(f6);
  //   return f6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_4, CCP, RHO);
  // r14 = dyn _in_(p4, "as.double")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 24 [c4, r14]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // c7 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c4, c7)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L9(c8)
  // L9(c8)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c8_;
  goto L9_;

L45_:;
  // st f = "as.numeric"
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 16), RHO);
  (void)(Rsh_const(CCP, 16));
  // goto L11()
  // L11()
  goto L11_;

L47_:;
  // f7 = ld f
  Rsh_Fir_reg_f7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D6()
  // L49()
  goto L49_;

L48_:;
  // r16 = dyn base3(<sym f>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L12(r16)
  // L12(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L12_;

D6_:;
  // deopt 32 [f7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_f7_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L49_:;
  // f8 = force? f7
  Rsh_Fir_reg_f8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f7_);
  // checkMissing(f8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_f8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c11 = `is.character`(f8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_f8_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L12(c11)
  // L12(c11)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c11_;
  goto L12_;

L50_:;
  // sym4 = ldf nzchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf nzchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // f9 = ld f
  Rsh_Fir_reg_f9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D7()
  // L53()
  goto L53_;

L52_:;
  // r18 = dyn base4(<sym f>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L14(c12, r18)
  // L14(c12, r18)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L14_;

D7_:;
  // deopt 37 [c12, f9]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_f9_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L53_:;
  // f10 = force? f9
  Rsh_Fir_reg_f10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f9_);
  // checkMissing(f10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_f10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r20 = dyn nzchar(f10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_f10_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L54() else D8()
  // L54()
  goto L54_;

D8_:;
  // deopt 40 [c12, r20]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L14(c12, r20)
  // L14(c12, r20)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L14_;

L56_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L57() else D9()
  // L57()
  goto L57_;

D9_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // r22 = dyn message("Empty function name in .getGeneric")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

D10_:;
  // deopt 46 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // dput = ldf dput
  Rsh_Fir_reg_dput = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

D11_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p5 = prom<V +>{
  //   sys_calls = ldf `sys.calls`;
  //   r23 = dyn sys_calls();
  //   return r23;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_5, CCP, RHO);
  // r25 = dyn dput(p5)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L60() else D12()
  // L60()
  goto L60_;

D12_:;
  // deopt 50 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L16()
  // L16()
  goto L16_;

L62_:;
  // C_R_getGeneric = ld C_R_getGeneric
  Rsh_Fir_reg_C_R_getGeneric = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

L63_:;
  // r27 = dyn base5(<sym C_R_getGeneric>, <sym f>, FALSE, <lang as.environment(where)>, <sym package>)
  SEXP Rsh_Fir_array_args53[5];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 5, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L17(r27)
  // L17(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L17_;

D13_:;
  // deopt 54 [C_R_getGeneric]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_R_getGeneric;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L64_:;
  // C_R_getGeneric1 = force? C_R_getGeneric
  Rsh_Fir_reg_C_R_getGeneric1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_R_getGeneric);
  // checkMissing(C_R_getGeneric1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_C_R_getGeneric1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // f11 = ld f
  Rsh_Fir_reg_f11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

D14_:;
  // deopt 55 [C_R_getGeneric1, f11]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_R_getGeneric1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_f11_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // f12 = force? f11
  Rsh_Fir_reg_f12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f11_);
  // checkMissing(f12)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_f12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // sym6 = ldf `as.environment`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base6 = ldf `as.environment` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard6 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

L67_:;
  // r31 = dyn base6(<sym where>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L18(C_R_getGeneric1, f12, FALSE, r31)
  // L18(C_R_getGeneric1, f12, FALSE, r31)
  Rsh_Fir_reg_C_R_getGeneric4_ = Rsh_Fir_reg_C_R_getGeneric1_;
  Rsh_Fir_reg_f15_ = Rsh_Fir_reg_f12_;
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  goto L18_;

D15_:;
  // deopt 59 [C_R_getGeneric1, f12, FALSE, where3]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_C_R_getGeneric1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_f12_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r34 = dyn as_environment(where4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

D16_:;
  // deopt 62 [C_R_getGeneric1, f12, FALSE, r34]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_C_R_getGeneric1_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_f12_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(62, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L18(C_R_getGeneric1, f12, FALSE, r34)
  // L18(C_R_getGeneric1, f12, FALSE, r34)
  Rsh_Fir_reg_C_R_getGeneric4_ = Rsh_Fir_reg_C_R_getGeneric1_;
  Rsh_Fir_reg_f15_ = Rsh_Fir_reg_f12_;
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L18_;

D17_:;
  // deopt 62 [C_R_getGeneric4, f15, r32, r33, package3]
  SEXP Rsh_Fir_array_deopt_stack14[5];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_C_R_getGeneric4_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_f15_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack14[4] = Rsh_Fir_reg_package3_;
  Rsh_Fir_deopt(62, 5, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L70_:;
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // vargs = dots[f15, r32, r33, package4]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_f15_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_package4_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r35 = `.Call`(C_R_getGeneric4, vargs, <missing>)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_C_R_getGeneric4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L17(r35)
  // L17(r35)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r35_;
  goto L17_;

L71_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L73() else D18()
  // L73()
  goto L73_;

L72_:;
  // r36 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L19(r36)
  // L19(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L19_;

D18_:;
  // deopt 67 [value2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L73_:;
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c22 = `==`(value3, NULL)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L19(c22)
  // L19(c22)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_c22_;
  goto L19_;

L74_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard8 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // _GlobalEnv2 = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

L76_:;
  // r39 = dyn base8(<lang `<-`(vv, `[[`(.GlobalEnv, f))>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L21(c23, r39)
  // L21(c23, r39)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

D19_:;
  // deopt 72 [c23, _GlobalEnv2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg__GlobalEnv2_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // _GlobalEnv3 = force? _GlobalEnv2
  Rsh_Fir_reg__GlobalEnv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv2_);
  // checkMissing(_GlobalEnv3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg__GlobalEnv3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(_GlobalEnv3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg__GlobalEnv3_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c29 then L78() else L79(c23, _GlobalEnv3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L78()
    goto L78_;
  } else {
  // L79(c23, _GlobalEnv3)
    Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg__GlobalEnv5_ = Rsh_Fir_reg__GlobalEnv3_;
    goto L79_;
  }

L78_:;
  // dr = tryDispatchBuiltin.1("[[", _GlobalEnv3)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg__GlobalEnv3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc then L80() else L79(c23, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L80()
    goto L80_;
  } else {
  // L79(c23, dr)
    Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg__GlobalEnv5_ = Rsh_Fir_reg_dr;
    goto L79_;
  }

L79_:;
  // f16 = ld f
  Rsh_Fir_reg_f16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L81() else D20()
  // L81()
  goto L81_;

L80_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L22(c23, dx)
  // L22(c23, dx)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L22_;

D20_:;
  // deopt 74 [c31, _GlobalEnv5, f16]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg__GlobalEnv5_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_f16_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L81_:;
  // f17 = force? f16
  Rsh_Fir_reg_f17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f16_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r41 = dyn __(_GlobalEnv5, f17)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg__GlobalEnv5_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_f17_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L22(c31, r41)
  // L22(c31, r41)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r41_;
  goto L22_;

L83_:;
  // sym9 = ldf identical
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base9 = ldf identical in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard9 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // vv = ld vv
  Rsh_Fir_reg_vv = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L86() else D21()
  // L86()
  goto L86_;

L85_:;
  // r43 = dyn base9(<sym vv>, <sym value>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L24(c38, r43)
  // L24(c38, r43)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L24_;

D21_:;
  // deopt 83 [c38, vv]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_vv;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L86_:;
  // vv1 = force? vv
  Rsh_Fir_reg_vv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vv);
  // checkMissing(vv1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_vv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

D22_:;
  // deopt 85 [c38, value4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_value4_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L87_:;
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r45 = dyn identical(vv1, value5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args77[9];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_vv1_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_value5_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args77[3] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args77[4] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args77[5] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args77[6] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args77[7] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args77[8] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[9];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

D23_:;
  // deopt 95 [c38, r45]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L24(c38, r45)
  // L24(c38, r45)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L24_;

L90_:;
  // _cacheGeneric = ldf `.cacheGeneric`
  Rsh_Fir_reg__cacheGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L91() else D24()
  // L91()
  goto L91_;

D24_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p6 = prom<V +>{
  //   f18 = ld f;
  //   f19 = force? f18;
  //   checkMissing(f19);
  //   return f19;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_6, CCP, RHO);
  // p7 = prom<V +>{
  //   value6 = ld value;
  //   value7 = force? value6;
  //   checkMissing(value7);
  //   return value7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3836830771_7, CCP, RHO);
  // r48 = dyn _cacheGeneric(p6, p7)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cacheGeneric, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L92() else D25()
  // L92()
  goto L92_;

D25_:;
  // deopt 101 [r48]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L26(r48)
  // L26(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L26_;

D26_:;
  // deopt 106 [value8]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L95_:;
  // value9 = force? value8
  Rsh_Fir_reg_value9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value8_);
  // checkMissing(value9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_value9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value9
  return Rsh_Fir_reg_value9_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_(SEXP CCP, SEXP RHO) {
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_1(SEXP CCP, SEXP RHO) {
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_2(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_3(SEXP CCP, SEXP RHO) {
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return package2
  return Rsh_Fir_reg_package2_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_4(SEXP CCP, SEXP RHO) {
  // f5 = ld f
  Rsh_Fir_reg_f5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f6 = force? f5
  Rsh_Fir_reg_f6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f5_);
  // checkMissing(f6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_f6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return f6
  return Rsh_Fir_reg_f6_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_5(SEXP CCP, SEXP RHO) {
  // sys_calls = ldf `sys.calls`
  Rsh_Fir_reg_sys_calls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // r23 = dyn sys_calls()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_calls, 0, NULL, NULL, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_6(SEXP CCP, SEXP RHO) {
  // f18 = ld f
  Rsh_Fir_reg_f18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f19 = force? f18
  Rsh_Fir_reg_f19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f18_);
  // checkMissing(f19)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_f19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return f19
  return Rsh_Fir_reg_f19_;
}
SEXP Rsh_Fir_user_promise_inner3836830771_7(SEXP CCP, SEXP RHO) {
  // value6 = ld value
  Rsh_Fir_reg_value6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // value7 = force? value6
  Rsh_Fir_reg_value7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value6_);
  // checkMissing(value7)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_value7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return value7
  return Rsh_Fir_reg_value7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
