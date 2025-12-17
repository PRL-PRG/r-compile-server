#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3019521939_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3019521939_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3019521939
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3019521939_, RHO, CCP);
  // st rnorm = r
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
SEXP Rsh_Fir_user_function_inner3019521939_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3019521939 dynamic dispatch ([n, mean, sd])

  return Rsh_Fir_user_version_inner3019521939_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3019521939_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3019521939 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3019521939/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_mean;  // mean
  SEXP Rsh_Fir_reg_sd;  // sd
  SEXP Rsh_Fir_reg_mean_isMissing;  // mean_isMissing
  SEXP Rsh_Fir_reg_mean_orDefault;  // mean_orDefault
  SEXP Rsh_Fir_reg_sd_isMissing;  // sd_isMissing
  SEXP Rsh_Fir_reg_sd_orDefault;  // sd_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_rnorm;  // C_rnorm
  SEXP Rsh_Fir_reg_C_rnorm1_;  // C_rnorm1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_mean1_;  // mean1
  SEXP Rsh_Fir_reg_mean2_;  // mean2
  SEXP Rsh_Fir_reg_sd1_;  // sd1
  SEXP Rsh_Fir_reg_sd2_;  // sd2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_mean = PARAMS[1];
  Rsh_Fir_reg_sd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
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
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L3_:;
  // C_rnorm = ld C_rnorm
  Rsh_Fir_reg_C_rnorm = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<sym C_rnorm>, <sym n>, <sym mean>, <sym sd>)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [C_rnorm]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_rnorm;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // C_rnorm1 = force? C_rnorm
  Rsh_Fir_reg_C_rnorm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rnorm);
  // checkMissing(C_rnorm1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_C_rnorm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 2 [C_rnorm1, n1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_rnorm1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // mean1 = ld mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 3 [C_rnorm1, n2, mean1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_rnorm1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_mean1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // mean2 = force? mean1
  Rsh_Fir_reg_mean2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean1_);
  // checkMissing(mean2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_mean2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // sd1 = ld sd
  Rsh_Fir_reg_sd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 4 [C_rnorm1, n2, mean2, sd1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_rnorm1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_mean2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_sd1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // sd2 = force? sd1
  Rsh_Fir_reg_sd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sd1_);
  // checkMissing(sd2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, mean2, sd2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_mean2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_sd2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_rnorm1, vargs, <missing>)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_C_rnorm1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
