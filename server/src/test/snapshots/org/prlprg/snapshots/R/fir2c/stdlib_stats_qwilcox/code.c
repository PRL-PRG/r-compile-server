#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1769663979_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1769663979_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1769663979
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1769663979_, RHO, CCP);
  // st qwilcox = r
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
SEXP Rsh_Fir_user_function_inner1769663979_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1769663979 dynamic dispatch ([p, m, n, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner1769663979_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1769663979_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1769663979 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1769663979/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_qwilcox;  // C_qwilcox
  SEXP Rsh_Fir_reg_C_qwilcox1_;  // C_qwilcox1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_p = PARAMS[0];
  Rsh_Fir_reg_m = PARAMS[1];
  Rsh_Fir_reg_n = PARAMS[2];
  Rsh_Fir_reg_lower_tail = PARAMS[3];
  Rsh_Fir_reg_log_p = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_p, RHO);
  (void)(Rsh_Fir_reg_p);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lower_tail_isMissing then L0(TRUE) else L0(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L0_;
  }

L0_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if log_p_isMissing then L1(FALSE) else L1(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 6);
    goto L1_;
  } else {
  // L1(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L1_;
  }

L1_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // sym = ldf `on.exit`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `on.exit` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L4_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn on_exit(<lang .External(C_wilcox_free)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L5_:;
  // r = dyn base(<lang .External(C_wilcox_free)>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L6_:;
  // C_qwilcox = ld C_qwilcox
  Rsh_Fir_reg_C_qwilcox = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r3 = dyn base1(<sym C_qwilcox>, <sym p>, <sym m>, <sym n>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args6[6];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[6];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 6, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D0_:;
  // deopt 4 [C_qwilcox]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_qwilcox;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // C_qwilcox1 = force? C_qwilcox
  Rsh_Fir_reg_C_qwilcox1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_qwilcox);
  // checkMissing(C_qwilcox1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_qwilcox1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // p1 = ld p
  Rsh_Fir_reg_p1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 [C_qwilcox1, p1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [C_qwilcox1, p2, m1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_m1_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 7 [C_qwilcox1, p2, m2, n1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 8 [C_qwilcox1, p2, m2, n2, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(8, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 9 [C_qwilcox1, p2, m2, n2, lower_tail2, log_p1]
  SEXP Rsh_Fir_array_deopt_stack5[6];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_deopt_stack5[5] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(9, 6, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // vargs = dots[p2, m2, n2, lower_tail2, log_p2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_log_p2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_qwilcox1, vargs, <missing>)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_C_qwilcox1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
