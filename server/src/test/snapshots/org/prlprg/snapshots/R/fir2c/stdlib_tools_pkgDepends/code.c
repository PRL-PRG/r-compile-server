#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1057735717_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1057735717_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1057735717
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1057735717_, RHO, CCP);
  // st pkgDepends = r
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
SEXP Rsh_Fir_user_function_inner1057735717_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1057735717 dynamic dispatch ([pkg, recursive, local, reduce, `lib.loc`])

  return Rsh_Fir_user_version_inner1057735717_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1057735717_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1057735717 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1057735717/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_recursive;  // recursive
  SEXP Rsh_Fir_reg_local;  // local
  SEXP Rsh_Fir_reg_reduce;  // reduce
  SEXP Rsh_Fir_reg_lib_loc;  // lib_loc
  SEXP Rsh_Fir_reg_recursive_isMissing;  // recursive_isMissing
  SEXP Rsh_Fir_reg_recursive_orDefault;  // recursive_orDefault
  SEXP Rsh_Fir_reg_local_isMissing;  // local_isMissing
  SEXP Rsh_Fir_reg_local_orDefault;  // local_orDefault
  SEXP Rsh_Fir_reg_reduce_isMissing;  // reduce_isMissing
  SEXP Rsh_Fir_reg_reduce_orDefault;  // reduce_orDefault
  SEXP Rsh_Fir_reg_lib_loc_isMissing;  // lib_loc_isMissing
  SEXP Rsh_Fir_reg_lib_loc_orDefault;  // lib_loc_orDefault
  SEXP Rsh_Fir_reg__Defunct;  // _Defunct
  SEXP Rsh_Fir_reg_r1;  // r

  // Bind parameters
  Rsh_Fir_reg_pkg = PARAMS[0];
  Rsh_Fir_reg_recursive = PARAMS[1];
  Rsh_Fir_reg_local = PARAMS[2];
  Rsh_Fir_reg_reduce = PARAMS[3];
  Rsh_Fir_reg_lib_loc = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pkg = pkg
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pkg, RHO);
  (void)(Rsh_Fir_reg_pkg);
  // recursive_isMissing = missing.0(recursive)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_recursive;
  Rsh_Fir_reg_recursive_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if recursive_isMissing then L0(TRUE) else L0(recursive)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recursive_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_recursive_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(recursive)
    Rsh_Fir_reg_recursive_orDefault = Rsh_Fir_reg_recursive;
    goto L0_;
  }

L0_:;
  // st recursive = recursive_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_recursive_orDefault, RHO);
  (void)(Rsh_Fir_reg_recursive_orDefault);
  // local_isMissing = missing.0(local)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_local;
  Rsh_Fir_reg_local_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if local_isMissing then L1(TRUE) else L1(local)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_local_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_local_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(local)
    Rsh_Fir_reg_local_orDefault = Rsh_Fir_reg_local;
    goto L1_;
  }

L1_:;
  // st local = local_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_local_orDefault, RHO);
  (void)(Rsh_Fir_reg_local_orDefault);
  // reduce_isMissing = missing.0(reduce)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_reduce;
  Rsh_Fir_reg_reduce_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if reduce_isMissing then L2(TRUE) else L2(reduce)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_reduce_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_reduce_orDefault = Rsh_const(CCP, 2);
    goto L2_;
  } else {
  // L2(reduce)
    Rsh_Fir_reg_reduce_orDefault = Rsh_Fir_reg_reduce;
    goto L2_;
  }

L2_:;
  // st reduce = reduce_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_reduce_orDefault, RHO);
  (void)(Rsh_Fir_reg_reduce_orDefault);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if lib_loc_isMissing then L3(NULL) else L3(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L3_;
  }

L3_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // _Defunct = ldf `.Defunct`
  Rsh_Fir_reg__Defunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r = dyn _Defunct("package_dependencies()")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Defunct, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
