#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner687643580_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner687643580_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner687643580
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner687643580_, RHO, CCP);
  // st dlogis = r
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
SEXP Rsh_Fir_user_function_inner687643580_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner687643580 dynamic dispatch ([x, location, scale, log])

  return Rsh_Fir_user_version_inner687643580_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner687643580_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner687643580 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner687643580/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_location;  // location
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_location_isMissing;  // location_isMissing
  SEXP Rsh_Fir_reg_location_orDefault;  // location_orDefault
  SEXP Rsh_Fir_reg_scale_isMissing;  // scale_isMissing
  SEXP Rsh_Fir_reg_scale_orDefault;  // scale_orDefault
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_dlogis;  // C_dlogis
  SEXP Rsh_Fir_reg_C_dlogis1_;  // C_dlogis1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_location1_;  // location1
  SEXP Rsh_Fir_reg_location2_;  // location2
  SEXP Rsh_Fir_reg_scale1_;  // scale1
  SEXP Rsh_Fir_reg_scale2_;  // scale2
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_location = PARAMS[1];
  Rsh_Fir_reg_scale = PARAMS[2];
  Rsh_Fir_reg_log = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // location_isMissing = missing.0(location)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_location;
  Rsh_Fir_reg_location_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if location_isMissing then L0(0.0) else L0(location)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_location_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_location_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(location)
    Rsh_Fir_reg_location_orDefault = Rsh_Fir_reg_location;
    goto L0_;
  }

L0_:;
  // st location = location_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_location_orDefault, RHO);
  (void)(Rsh_Fir_reg_location_orDefault);
  // scale_isMissing = missing.0(scale)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_scale;
  Rsh_Fir_reg_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if scale_isMissing then L1(1.0) else L1(scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_scale_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(scale)
    Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_scale;
    goto L1_;
  }

L1_:;
  // st scale = scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_scale_orDefault);
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
  // C_dlogis = ld C_dlogis
  Rsh_Fir_reg_C_dlogis = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_dlogis>, <sym x>, <sym location>, <sym scale>, <sym log>)
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
  // deopt 1 [C_dlogis]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_dlogis;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // C_dlogis1 = force? C_dlogis
  Rsh_Fir_reg_C_dlogis1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dlogis);
  // checkMissing(C_dlogis1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_C_dlogis1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 2 [C_dlogis1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_dlogis1_;
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
  // location1 = ld location
  Rsh_Fir_reg_location1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 3 [C_dlogis1, x2, location1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_dlogis1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_location1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // location2 = force? location1
  Rsh_Fir_reg_location2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_location1_);
  // checkMissing(location2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_location2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 4 [C_dlogis1, x2, location2, scale1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_dlogis1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_location2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 5 [C_dlogis1, x2, location2, scale2, log1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_dlogis1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_location2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_scale2_;
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
  // vargs = dots[x2, location2, scale2, log2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_location2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_scale2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_log2_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_dlogis1, vargs, <missing>)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_dlogis1_;
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
