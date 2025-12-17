#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3748310628_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3748310628_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3748310628_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3748310628_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3748310628_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3748310628_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3748310628_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner3748310628
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3748310628_, RHO, CCP);
  // st str_parse = r
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
SEXP Rsh_Fir_user_function_inner3748310628_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3748310628 dynamic dispatch ([ch, default, logical, otherwise, n])

  return Rsh_Fir_user_version_inner3748310628_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3748310628_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3748310628 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3748310628/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ch;  // ch
  SEXP Rsh_Fir_reg_default;  // default
  SEXP Rsh_Fir_reg_logical;  // logical
  SEXP Rsh_Fir_reg_otherwise;  // otherwise
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_default_isMissing;  // default_isMissing
  SEXP Rsh_Fir_reg_default_orDefault;  // default_orDefault
  SEXP Rsh_Fir_reg_logical_isMissing;  // logical_isMissing
  SEXP Rsh_Fir_reg_logical_orDefault;  // logical_orDefault
  SEXP Rsh_Fir_reg_otherwise_isMissing;  // otherwise_isMissing
  SEXP Rsh_Fir_reg_otherwise_orDefault;  // otherwise_orDefault
  SEXP Rsh_Fir_reg_default1_;  // default1
  SEXP Rsh_Fir_reg_default2_;  // default2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_logical1_;  // logical1
  SEXP Rsh_Fir_reg_logical2_;  // logical2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_str_parse_logic;  // str_parse_logic
  SEXP Rsh_Fir_reg_ch1_;  // ch1
  SEXP Rsh_Fir_reg_ch2_;  // ch2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_default3_;  // default3
  SEXP Rsh_Fir_reg_default4_;  // default4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_otherwise1_;  // otherwise1
  SEXP Rsh_Fir_reg_otherwise2_;  // otherwise2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ch3_;  // ch3
  SEXP Rsh_Fir_reg_ch4_;  // ch4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_default5_;  // default5
  SEXP Rsh_Fir_reg_default6_;  // default6
  SEXP Rsh_Fir_reg_ch5_;  // ch5
  SEXP Rsh_Fir_reg_ch6_;  // ch6

  // Bind parameters
  Rsh_Fir_reg_ch = PARAMS[0];
  Rsh_Fir_reg_default = PARAMS[1];
  Rsh_Fir_reg_logical = PARAMS[2];
  Rsh_Fir_reg_otherwise = PARAMS[3];
  Rsh_Fir_reg_n = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ch = ch
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ch, RHO);
  (void)(Rsh_Fir_reg_ch);
  // default_isMissing = missing.0(default)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_default;
  Rsh_Fir_reg_default_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if default_isMissing then L0(TRUE) else L0(default)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_default_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_default_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(default)
    Rsh_Fir_reg_default_orDefault = Rsh_Fir_reg_default;
    goto L0_;
  }

L0_:;
  // st default = default_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_default_orDefault, RHO);
  (void)(Rsh_Fir_reg_default_orDefault);
  // logical_isMissing = missing.0(logical)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_logical;
  Rsh_Fir_reg_logical_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if logical_isMissing then L1(TRUE) else L1(logical)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_logical_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_logical_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(logical)
    Rsh_Fir_reg_logical_orDefault = Rsh_Fir_reg_logical;
    goto L1_;
  }

L1_:;
  // st logical = logical_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_logical_orDefault, RHO);
  (void)(Rsh_Fir_reg_logical_orDefault);
  // otherwise_isMissing = missing.0(otherwise)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_otherwise;
  Rsh_Fir_reg_otherwise_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if otherwise_isMissing then L2() else L3(otherwise)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_otherwise_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(otherwise)
    Rsh_Fir_reg_otherwise_orDefault = Rsh_Fir_reg_otherwise;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   default1 = ld default;
  //   default2 = force? default1;
  //   checkMissing(default2);
  //   return default2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3748310628_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_otherwise_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st otherwise = otherwise_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_otherwise_orDefault, RHO);
  (void)(Rsh_Fir_reg_otherwise_orDefault);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if n_isMissing then L4(2) else L4(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L4(2)
    Rsh_Fir_reg_n_orDefault = Rsh_const(CCP, 6);
    goto L4_;
  } else {
  // L4(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L4_;
  }

L4_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // logical1 = ld logical
  Rsh_Fir_reg_logical1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L5_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L6_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L17() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // ch5 = ld ch
  Rsh_Fir_reg_ch5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D0_:;
  // deopt 0 [logical1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_logical1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // logical2 = force? logical1
  Rsh_Fir_reg_logical2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_logical1_);
  // checkMissing(logical2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_logical2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(logical2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_logical2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L9() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L5()
    goto L5_;
  }

L9_:;
  // str_parse_logic = ldf str_parse_logic
  Rsh_Fir_reg_str_parse_logic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   ch1 = ld ch;
  //   ch2 = force? ch1;
  //   checkMissing(ch2);
  //   return ch2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3748310628_1, CCP, RHO);
  // p2 = prom<V +>{
  //   default3 = ld default;
  //   default4 = force? default3;
  //   checkMissing(default4);
  //   return default4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3748310628_2, CCP, RHO);
  // p3 = prom<V +>{
  //   otherwise1 = ld otherwise;
  //   otherwise2 = force? otherwise1;
  //   checkMissing(otherwise2);
  //   return otherwise2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3748310628_3, CCP, RHO);
  // p4 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3748310628_4, CCP, RHO);
  // r5 = dyn str_parse_logic[, default, otherwise, n](p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str_parse_logic, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L13_:;
  // ch3 = ld ch
  Rsh_Fir_reg_ch3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // r6 = dyn base(<sym ch>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L6(r6)
  // L6(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L6_;

D3_:;
  // deopt 14 [ch3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ch3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // ch4 = force? ch3
  Rsh_Fir_reg_ch4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch3_);
  // checkMissing(ch4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ch4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn is_na(ch4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ch4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L6_;

L17_:;
  // default5 = ld default
  Rsh_Fir_reg_default5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 18 [default5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_default5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // default6 = force? default5
  Rsh_Fir_reg_default6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_default5_);
  // checkMissing(default6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_default6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return default6
  return Rsh_Fir_reg_default6_;

D6_:;
  // deopt 20 [ch5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ch5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // ch6 = force? ch5
  Rsh_Fir_reg_ch6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch5_);
  // checkMissing(ch6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ch6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ch6
  return Rsh_Fir_reg_ch6_;
}
SEXP Rsh_Fir_user_promise_inner3748310628_(SEXP CCP, SEXP RHO) {
  // default1 = ld default
  Rsh_Fir_reg_default1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // default2 = force? default1
  Rsh_Fir_reg_default2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_default1_);
  // checkMissing(default2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_default2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return default2
  return Rsh_Fir_reg_default2_;
}
SEXP Rsh_Fir_user_promise_inner3748310628_1(SEXP CCP, SEXP RHO) {
  // ch1 = ld ch
  Rsh_Fir_reg_ch1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ch2 = force? ch1
  Rsh_Fir_reg_ch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch1_);
  // checkMissing(ch2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return ch2
  return Rsh_Fir_reg_ch2_;
}
SEXP Rsh_Fir_user_promise_inner3748310628_2(SEXP CCP, SEXP RHO) {
  // default3 = ld default
  Rsh_Fir_reg_default3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // default4 = force? default3
  Rsh_Fir_reg_default4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_default3_);
  // checkMissing(default4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_default4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return default4
  return Rsh_Fir_reg_default4_;
}
SEXP Rsh_Fir_user_promise_inner3748310628_3(SEXP CCP, SEXP RHO) {
  // otherwise1 = ld otherwise
  Rsh_Fir_reg_otherwise1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // otherwise2 = force? otherwise1
  Rsh_Fir_reg_otherwise2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_otherwise1_);
  // checkMissing(otherwise2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_otherwise2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return otherwise2
  return Rsh_Fir_reg_otherwise2_;
}
SEXP Rsh_Fir_user_promise_inner3748310628_4(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
