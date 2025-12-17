#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1918427804_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1918427804_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1918427804
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1918427804_, RHO, CCP);
  // st `glm.control` = r
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
SEXP Rsh_Fir_user_function_inner1918427804_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1918427804 dynamic dispatch ([epsilon, maxit, trace])

  return Rsh_Fir_user_version_inner1918427804_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1918427804_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1918427804 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1918427804/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_epsilon;  // epsilon
  SEXP Rsh_Fir_reg_maxit;  // maxit
  SEXP Rsh_Fir_reg_trace;  // trace
  SEXP Rsh_Fir_reg_epsilon_isMissing;  // epsilon_isMissing
  SEXP Rsh_Fir_reg_epsilon_orDefault;  // epsilon_orDefault
  SEXP Rsh_Fir_reg_maxit_isMissing;  // maxit_isMissing
  SEXP Rsh_Fir_reg_maxit_orDefault;  // maxit_orDefault
  SEXP Rsh_Fir_reg_trace_isMissing;  // trace_isMissing
  SEXP Rsh_Fir_reg_trace_orDefault;  // trace_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_epsilon1_;  // epsilon1
  SEXP Rsh_Fir_reg_epsilon2_;  // epsilon2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_epsilon3_;  // epsilon3
  SEXP Rsh_Fir_reg_epsilon4_;  // epsilon4
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_maxit1_;  // maxit1
  SEXP Rsh_Fir_reg_maxit2_;  // maxit2
  SEXP Rsh_Fir_reg_is_numeric1_;  // is_numeric1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_maxit3_;  // maxit3
  SEXP Rsh_Fir_reg_maxit4_;  // maxit4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_epsilon5_;  // epsilon5
  SEXP Rsh_Fir_reg_epsilon6_;  // epsilon6
  SEXP Rsh_Fir_reg_maxit5_;  // maxit5
  SEXP Rsh_Fir_reg_maxit6_;  // maxit6
  SEXP Rsh_Fir_reg_trace1_;  // trace1
  SEXP Rsh_Fir_reg_trace2_;  // trace2
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_epsilon = PARAMS[0];
  Rsh_Fir_reg_maxit = PARAMS[1];
  Rsh_Fir_reg_trace = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // epsilon_isMissing = missing.0(epsilon)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_epsilon;
  Rsh_Fir_reg_epsilon_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if epsilon_isMissing then L0(1.0E-8) else L0(epsilon)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_epsilon_isMissing)) {
  // L0(1.0E-8)
    Rsh_Fir_reg_epsilon_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(epsilon)
    Rsh_Fir_reg_epsilon_orDefault = Rsh_Fir_reg_epsilon;
    goto L0_;
  }

L0_:;
  // st epsilon = epsilon_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_epsilon_orDefault, RHO);
  (void)(Rsh_Fir_reg_epsilon_orDefault);
  // maxit_isMissing = missing.0(maxit)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_maxit;
  Rsh_Fir_reg_maxit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if maxit_isMissing then L1(25.0) else L1(maxit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_maxit_isMissing)) {
  // L1(25.0)
    Rsh_Fir_reg_maxit_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(maxit)
    Rsh_Fir_reg_maxit_orDefault = Rsh_Fir_reg_maxit;
    goto L1_;
  }

L1_:;
  // st maxit = maxit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_maxit_orDefault, RHO);
  (void)(Rsh_Fir_reg_maxit_orDefault);
  // trace_isMissing = missing.0(trace)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_trace;
  Rsh_Fir_reg_trace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if trace_isMissing then L2(FALSE) else L2(trace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_trace_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_trace_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(trace)
    Rsh_Fir_reg_trace_orDefault = Rsh_Fir_reg_trace;
    goto L2_;
  }

L2_:;
  // st trace = trace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_trace_orDefault, RHO);
  (void)(Rsh_Fir_reg_trace_orDefault);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L3_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L4(c) else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L4_;
  } else {
  // L16()
    goto L16_;
  }

L4_:;
  // c6 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c6 then L19() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L19()
    goto L19_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L7_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c7 then L8(c7) else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L8(c7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c7_;
    goto L8_;
  } else {
  // L27()
    goto L27_;
  }

L8_:;
  // c13 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c13 then L30() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L30()
    goto L30_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

L12_:;
  // epsilon1 = ld epsilon
  Rsh_Fir_reg_epsilon1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r = dyn base(<sym epsilon>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [epsilon1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_epsilon1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // epsilon2 = force? epsilon1
  Rsh_Fir_reg_epsilon2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_epsilon1_);
  // checkMissing(epsilon2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_epsilon2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn is_numeric(epsilon2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_epsilon2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L16_:;
  // epsilon3 = ld epsilon
  Rsh_Fir_reg_epsilon3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 7 [c, epsilon3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_epsilon3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // epsilon4 = force? epsilon3
  Rsh_Fir_reg_epsilon4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_epsilon3_);
  // checkMissing(epsilon4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_epsilon4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r4 = `<=`(epsilon4, 0.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_epsilon4_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c4 = `||`(c, c3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L4(c4)
  // L4(c4)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c4_;
  goto L4_;

L19_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // r5 = dyn stop("value of 'epsilon' must be > 0")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 15 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L6()
  // L6()
  goto L6_;

L23_:;
  // maxit1 = ld maxit
  Rsh_Fir_reg_maxit1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

L24_:;
  // r7 = dyn base1(<sym maxit>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L7_;

D5_:;
  // deopt 20 [maxit1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_maxit1_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // maxit2 = force? maxit1
  Rsh_Fir_reg_maxit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxit1_);
  // checkMissing(maxit2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_maxit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // is_numeric1 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn is_numeric1(maxit2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_maxit2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D6_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L7_;

L27_:;
  // maxit3 = ld maxit
  Rsh_Fir_reg_maxit3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 25 [c7, maxit3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_maxit3_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // maxit4 = force? maxit3
  Rsh_Fir_reg_maxit4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxit3_);
  // checkMissing(maxit4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_maxit4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r11 = `<=`(maxit4, 0.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_maxit4_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c11 = `||`(c7, c10)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L8(c11)
  // L8(c11)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c11_;
  goto L8_;

L30_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r12 = dyn stop1("maximum number of iterations must be > 0")
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 33 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L10()
  // L10()
  goto L10_;

L34_:;
  // epsilon5 = ld epsilon
  Rsh_Fir_reg_epsilon5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L35_:;
  // r14 = dyn base2[epsilon, maxit, trace](<sym epsilon>, <sym maxit>, <sym trace>)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L11(r14)
  // L11(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L11_;

D10_:;
  // deopt 38 [epsilon5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_epsilon5_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // epsilon6 = force? epsilon5
  Rsh_Fir_reg_epsilon6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_epsilon5_);
  // checkMissing(epsilon6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_epsilon6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // maxit5 = ld maxit
  Rsh_Fir_reg_maxit5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 41 [maxit5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_maxit5_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // maxit6 = force? maxit5
  Rsh_Fir_reg_maxit6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxit5_);
  // checkMissing(maxit6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_maxit6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // trace1 = ld trace
  Rsh_Fir_reg_trace1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 44 [trace1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_trace1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // trace2 = force? trace1
  Rsh_Fir_reg_trace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace1_);
  // checkMissing(trace2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_trace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn list(epsilon6, maxit6, trace2)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_epsilon6_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_maxit6_;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_trace2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 48 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L11(r16)
  // L11(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L11_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
