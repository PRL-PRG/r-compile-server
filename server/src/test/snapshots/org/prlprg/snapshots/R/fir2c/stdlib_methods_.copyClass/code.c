#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1420655279_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1420655279_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1420655279_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1420655279
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1420655279_, RHO, CCP);
  // st `.copyClass` = r
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
SEXP Rsh_Fir_user_function_inner1420655279_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1420655279 dynamic dispatch ([class, env, envwhere])

  return Rsh_Fir_user_version_inner1420655279_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1420655279_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1420655279 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1420655279/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_envwhere;  // envwhere
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1

  // Bind parameters
  Rsh_Fir_reg_class = PARAMS[0];
  Rsh_Fir_reg_env = PARAMS[1];
  Rsh_Fir_reg_envwhere = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st class = class
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_class, RHO);
  (void)(Rsh_Fir_reg_class);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // st envwhere = envwhere
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_envwhere, RHO);
  (void)(Rsh_Fir_reg_envwhere);
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   class1 = ld class;
  //   class2 = force? class1;
  //   checkMissing(class2);
  //   return class2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1420655279_, CCP, RHO);
  // r1 = dyn message[, , domain]("Pretend we inserted class ", p, NA_LGL)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner1420655279_(SEXP CCP, SEXP RHO) {
  // class1 = ld class
  Rsh_Fir_reg_class1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class2 = force? class1
  Rsh_Fir_reg_class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class1_);
  // checkMissing(class2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return class2
  return Rsh_Fir_reg_class2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
