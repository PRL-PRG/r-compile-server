#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3608797442_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3608797442_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3608797442
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3608797442_, RHO, CCP);
  // st `as.dist` = r
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
SEXP Rsh_Fir_user_function_inner3608797442_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3608797442 dynamic dispatch ([m, diag, upper])

  return Rsh_Fir_user_version_inner3608797442_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3608797442_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3608797442 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3608797442/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_upper;  // upper
  SEXP Rsh_Fir_reg_diag_isMissing;  // diag_isMissing
  SEXP Rsh_Fir_reg_diag_orDefault;  // diag_orDefault
  SEXP Rsh_Fir_reg_upper_isMissing;  // upper_isMissing
  SEXP Rsh_Fir_reg_upper_orDefault;  // upper_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_UseMethod;  // UseMethod
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_m = PARAMS[0];
  Rsh_Fir_reg_diag = PARAMS[1];
  Rsh_Fir_reg_upper = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // diag_isMissing = missing.0(diag)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_diag;
  Rsh_Fir_reg_diag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if diag_isMissing then L0(FALSE) else L0(diag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_diag_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_diag_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(diag)
    Rsh_Fir_reg_diag_orDefault = Rsh_Fir_reg_diag;
    goto L0_;
  }

L0_:;
  // st diag = diag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_diag_orDefault, RHO);
  (void)(Rsh_Fir_reg_diag_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if upper_isMissing then L1(FALSE) else L1(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_upper_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L1_;
  }

L1_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
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
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn UseMethod("as.dist")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L4_:;
  // r = dyn base("as.dist")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
