#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4027304469_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4027304469_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4027304469
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4027304469_, RHO, CCP);
  // st dnorm = r
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
SEXP Rsh_Fir_user_function_inner4027304469_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4027304469 dynamic dispatch ([x, mean, sd, log])

  return Rsh_Fir_user_version_inner4027304469_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4027304469_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4027304469 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4027304469/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_mean;  // mean
  SEXP Rsh_Fir_reg_sd;  // sd
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_mean_isMissing;  // mean_isMissing
  SEXP Rsh_Fir_reg_mean_orDefault;  // mean_orDefault
  SEXP Rsh_Fir_reg_sd_isMissing;  // sd_isMissing
  SEXP Rsh_Fir_reg_sd_orDefault;  // sd_orDefault
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_dnorm;  // C_dnorm
  SEXP Rsh_Fir_reg_C_dnorm1_;  // C_dnorm1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_mean1_;  // mean1
  SEXP Rsh_Fir_reg_mean2_;  // mean2
  SEXP Rsh_Fir_reg_sd1_;  // sd1
  SEXP Rsh_Fir_reg_sd2_;  // sd2
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_mean = PARAMS[1];
  Rsh_Fir_reg_sd = PARAMS[2];
  Rsh_Fir_reg_log = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // mean_isMissing = missing.0(mean)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mean;
  Rsh_Fir_reg_mean_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if mean_isMissing then L0(0.0) else L0(mean)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mean_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_mean_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(mean)
    Rsh_Fir_reg_mean_orDefault = Rsh_Fir_reg_mean;
    goto L0_;
  }

L0_:;
  // st mean = mean_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_mean_orDefault, RHO);
  (void)(Rsh_Fir_reg_mean_orDefault);
  // sd_isMissing = missing.0(sd)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sd;
  Rsh_Fir_reg_sd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sd_isMissing then L1(1.0) else L1(sd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sd_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_sd_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(sd)
    Rsh_Fir_reg_sd_orDefault = Rsh_Fir_reg_sd;
    goto L1_;
  }

L1_:;
  // st sd = sd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_sd_orDefault, RHO);
  (void)(Rsh_Fir_reg_sd_orDefault);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if log_isMissing then L2(FALSE) else L2(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L2_;
  }

L2_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // C_dnorm = ld C_dnorm
  Rsh_Fir_reg_C_dnorm = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_dnorm>, <sym x>, <sym mean>, <sym sd>, <sym log>)
  SEXP Rsh_Fir_array_args4[5];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [C_dnorm]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_dnorm;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // C_dnorm1 = force? C_dnorm
  Rsh_Fir_reg_C_dnorm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dnorm);
  // checkMissing(C_dnorm1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_C_dnorm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 2 [C_dnorm1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_dnorm1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // mean1 = ld mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 3 [C_dnorm1, x2, mean1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_dnorm1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_mean1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // mean2 = force? mean1
  Rsh_Fir_reg_mean2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean1_);
  // checkMissing(mean2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_mean2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // sd1 = ld sd
  Rsh_Fir_reg_sd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 4 [C_dnorm1, x2, mean2, sd1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_dnorm1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_mean2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_sd1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // sd2 = force? sd1
  Rsh_Fir_reg_sd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sd1_);
  // checkMissing(sd2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 5 [C_dnorm1, x2, mean2, sd2, log1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_dnorm1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_mean2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_sd2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_log1_;
  Rsh_Fir_deopt(5, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // vargs = dots[x2, mean2, sd2, log2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_mean2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_sd2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_log2_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_dnorm1, vargs, <missing>)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_dnorm1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
