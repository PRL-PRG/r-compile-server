#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1410043808_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1410043808_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1410043808
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1410043808_, RHO, CCP);
  // st rcauchy = r
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
SEXP Rsh_Fir_user_function_inner1410043808_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1410043808 dynamic dispatch ([n, location, scale])

  return Rsh_Fir_user_version_inner1410043808_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1410043808_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1410043808 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1410043808/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_location;  // location
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_location_isMissing;  // location_isMissing
  SEXP Rsh_Fir_reg_location_orDefault;  // location_orDefault
  SEXP Rsh_Fir_reg_scale_isMissing;  // scale_isMissing
  SEXP Rsh_Fir_reg_scale_orDefault;  // scale_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_rcauchy;  // C_rcauchy
  SEXP Rsh_Fir_reg_C_rcauchy1_;  // C_rcauchy1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_location1_;  // location1
  SEXP Rsh_Fir_reg_location2_;  // location2
  SEXP Rsh_Fir_reg_scale1_;  // scale1
  SEXP Rsh_Fir_reg_scale2_;  // scale2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_location = PARAMS[1];
  Rsh_Fir_reg_scale = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
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
  // C_rcauchy = ld C_rcauchy
  Rsh_Fir_reg_C_rcauchy = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<sym C_rcauchy>, <sym n>, <sym location>, <sym scale>)
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
  // deopt 1 [C_rcauchy]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_rcauchy;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // C_rcauchy1 = force? C_rcauchy
  Rsh_Fir_reg_C_rcauchy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rcauchy);
  // checkMissing(C_rcauchy1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_C_rcauchy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 2 [C_rcauchy1, n1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_rcauchy1_;
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
  // location1 = ld location
  Rsh_Fir_reg_location1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 3 [C_rcauchy1, n2, location1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_rcauchy1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_location1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // location2 = force? location1
  Rsh_Fir_reg_location2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_location1_);
  // checkMissing(location2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_location2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 4 [C_rcauchy1, n2, location2, scale1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_rcauchy1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_location2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, location2, scale2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_location2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_scale2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_rcauchy1, vargs, <missing>)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_C_rcauchy1_;
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
