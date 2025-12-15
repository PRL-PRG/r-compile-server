#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner560854305(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner560854305_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner560854305(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner354062069(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner354062069_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner560854305
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner560854305, RHO, CCP);
  // st f = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // f = ldf f
  SEXP Rsh_Fir_reg_f = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0:;
  // r1 = dyn f()
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_function_inner560854305(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner560854305 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner560854305_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner560854305_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner560854305 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner560854305/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner354062069
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner354062069, RHO, CCP);
  // st g = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // g = ldf g
  SEXP Rsh_Fir_reg_g = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0:;
  // p = prom<V +>{
  //   return 42;
  // }
  SEXP Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner560854305, CCP, RHO);
  // r1 = dyn g(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r11 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_g, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 2
  return Rsh_const(CCP, 3);
}
SEXP Rsh_Fir_user_promise_inner560854305(SEXP CCP, SEXP RHO) {
  // return 42
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_function_inner354062069(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner354062069 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner354062069_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner354062069_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner354062069 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner354062069/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // x1 = ld x
  SEXP Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L0:;
  // x2 = force? x1
  SEXP Rsh_Fir_reg_x2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // st y = x2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x2, RHO);
  (void)(Rsh_Fir_reg_x2);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1
  return Rsh_const(CCP, 6);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
