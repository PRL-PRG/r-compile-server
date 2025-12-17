#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4148249736_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4148249736_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4148249736
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4148249736_, RHO, CCP);
  // st fft = r
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
SEXP Rsh_Fir_user_function_inner4148249736_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4148249736 dynamic dispatch ([z, inverse])

  return Rsh_Fir_user_version_inner4148249736_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4148249736_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4148249736 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4148249736/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_inverse;  // inverse
  SEXP Rsh_Fir_reg_inverse_isMissing;  // inverse_isMissing
  SEXP Rsh_Fir_reg_inverse_orDefault;  // inverse_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_fft;  // C_fft
  SEXP Rsh_Fir_reg_C_fft1_;  // C_fft1
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_inverse1_;  // inverse1
  SEXP Rsh_Fir_reg_inverse2_;  // inverse2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_z = PARAMS[0];
  Rsh_Fir_reg_inverse = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // inverse_isMissing = missing.0(inverse)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_inverse;
  Rsh_Fir_reg_inverse_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if inverse_isMissing then L0(FALSE) else L0(inverse)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_inverse_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_inverse_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(inverse)
    Rsh_Fir_reg_inverse_orDefault = Rsh_Fir_reg_inverse;
    goto L0_;
  }

L0_:;
  // st inverse = inverse_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_inverse_orDefault, RHO);
  (void)(Rsh_Fir_reg_inverse_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L2_:;
  // C_fft = ld C_fft
  Rsh_Fir_reg_C_fft = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym C_fft>, <sym z>, <sym inverse>)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [C_fft]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_fft;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // C_fft1 = force? C_fft
  Rsh_Fir_reg_C_fft1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_fft);
  // checkMissing(C_fft1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_C_fft1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [C_fft1, z1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_fft1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // inverse1 = ld inverse
  Rsh_Fir_reg_inverse1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 3 [C_fft1, z2, inverse1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_fft1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_inverse1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // inverse2 = force? inverse1
  Rsh_Fir_reg_inverse2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inverse1_);
  // checkMissing(inverse2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_inverse2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // vargs = dots[z2, inverse2]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_inverse2_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_fft1, vargs, <missing>)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_C_fft1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
