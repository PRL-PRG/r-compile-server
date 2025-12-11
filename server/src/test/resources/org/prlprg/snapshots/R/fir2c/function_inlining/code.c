#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner354062069(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner354062069_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner_1969965770(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner_1969965770_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner354062069
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner354062069, RHO, CCP);
  // st main = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // main = ldf main
  SEXP Rsh_Fir_reg_main = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0:;
  // r1 = dyn main()
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_main, 0, NULL, NULL, CCP, RHO);
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
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // r = clos `inner-1969965770`
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner_1969965770, RHO, CCP);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_function_inner_1969965770(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner-1969965770 dynamic dispatch ([y])

  return Rsh_Fir_user_version_inner_1969965770_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner_1969965770_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner-1969965770 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner-1969965770/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_y = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 3);
}
