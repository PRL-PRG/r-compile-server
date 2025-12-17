#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4258959003_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4258959003_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4258959003_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4258959003_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4258959003_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner4258959003
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4258959003_, RHO, CCP);
  // st dynamicHelpURL = r
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
SEXP Rsh_Fir_user_function_inner4258959003_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4258959003 dynamic dispatch ([path, port])

  return Rsh_Fir_user_version_inner4258959003_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4258959003_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4258959003 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4258959003/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_path;  // path
  SEXP Rsh_Fir_reg_port;  // port
  SEXP Rsh_Fir_reg_port_isMissing;  // port_isMissing
  SEXP Rsh_Fir_reg_port_orDefault;  // port_orDefault
  SEXP Rsh_Fir_reg_httpdPort;  // httpdPort
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_port1_;  // port1
  SEXP Rsh_Fir_reg_port2_;  // port2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_path1_;  // path1
  SEXP Rsh_Fir_reg_path2_;  // path2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_path = PARAMS[0];
  Rsh_Fir_reg_port = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st path = path
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_path, RHO);
  (void)(Rsh_Fir_reg_path);
  // port_isMissing = missing.0(port)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_port;
  Rsh_Fir_reg_port_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if port_isMissing then L0() else L1(port)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_port_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(port)
    Rsh_Fir_reg_port_orDefault = Rsh_Fir_reg_port;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   httpdPort = ldf httpdPort;
  //   r = dyn httpdPort();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4258959003_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_port_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st port = port_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_port_orDefault, RHO);
  (void)(Rsh_Fir_reg_port_orDefault);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   port1 = ld port;
  //   port2 = force? port1;
  //   checkMissing(port2);
  //   return port2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4258959003_1, CCP, RHO);
  // p2 = prom<V +>{
  //   path1 = ld path;
  //   path2 = force? path1;
  //   checkMissing(path2);
  //   return path2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4258959003_2, CCP, RHO);
  // r4 = dyn paste0("http://127.0.0.1:", p1, p2)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner4258959003_(SEXP CCP, SEXP RHO) {
  // httpdPort = ldf httpdPort
  Rsh_Fir_reg_httpdPort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn httpdPort()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4258959003_1(SEXP CCP, SEXP RHO) {
  // port1 = ld port
  Rsh_Fir_reg_port1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // port2 = force? port1
  Rsh_Fir_reg_port2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port1_);
  // checkMissing(port2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_port2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return port2
  return Rsh_Fir_reg_port2_;
}
SEXP Rsh_Fir_user_promise_inner4258959003_2(SEXP CCP, SEXP RHO) {
  // path1 = ld path
  Rsh_Fir_reg_path1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // path2 = force? path1
  Rsh_Fir_reg_path2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path1_);
  // checkMissing(path2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_path2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return path2
  return Rsh_Fir_reg_path2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
