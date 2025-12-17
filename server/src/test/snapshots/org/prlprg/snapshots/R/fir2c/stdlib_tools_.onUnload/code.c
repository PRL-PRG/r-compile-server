#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner772001958_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner772001958_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner772001958_(SEXP CCP, SEXP RHO);
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
  // r = clos inner772001958
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner772001958_, RHO, CCP);
  // st `.onUnload` = r
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
SEXP Rsh_Fir_user_function_inner772001958_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner772001958 dynamic dispatch ([libpath])

  return Rsh_Fir_user_version_inner772001958_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner772001958_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner772001958 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner772001958/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_libpath;  // libpath
  SEXP Rsh_Fir_reg_library_dynam_unload;  // library_dynam_unload
  SEXP Rsh_Fir_reg_libpath1_;  // libpath1
  SEXP Rsh_Fir_reg_libpath2_;  // libpath2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1

  // Bind parameters
  Rsh_Fir_reg_libpath = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st libpath = libpath
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_libpath, RHO);
  (void)(Rsh_Fir_reg_libpath);
  // library_dynam_unload = ldf `library.dynam.unload`
  Rsh_Fir_reg_library_dynam_unload = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   libpath1 = ld libpath;
  //   libpath2 = force? libpath1;
  //   checkMissing(libpath2);
  //   return libpath2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner772001958_, CCP, RHO);
  // r1 = dyn library_dynam_unload("tools", p)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_library_dynam_unload, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner772001958_(SEXP CCP, SEXP RHO) {
  // libpath1 = ld libpath
  Rsh_Fir_reg_libpath1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // libpath2 = force? libpath1
  Rsh_Fir_reg_libpath2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_libpath1_);
  // checkMissing(libpath2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_libpath2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return libpath2
  return Rsh_Fir_reg_libpath2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
