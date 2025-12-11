#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner_901363989(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner_901363989_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos `inner-901363989`
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner_901363989, RHO, CCP);
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
  // r1 = dyn f(42.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_function_inner_901363989(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner-901363989 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner_901363989_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner_901363989_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner-901363989 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner-901363989/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // __1 = ld `..1`
  SEXP Rsh_Fir_reg___1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 0 [__1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg___1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L0:;
  // __2 = force? __1
  SEXP Rsh_Fir_reg___2 = Rsh_Fir_maybe_force(Rsh_Fir_reg___1);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg___2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // st x = __2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg___2, RHO);
  (void)(Rsh_Fir_reg___2);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return __2
  return Rsh_Fir_reg___2;
}
