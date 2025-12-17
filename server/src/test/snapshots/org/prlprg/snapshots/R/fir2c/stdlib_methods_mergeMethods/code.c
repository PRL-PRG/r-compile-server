#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2450096059_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2450096059_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2450096059_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2450096059
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2450096059_, RHO, CCP);
  // st mergeMethods = r
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
SEXP Rsh_Fir_user_function_inner2450096059_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2450096059 dynamic dispatch ([m1, m2, genericLabel])

  return Rsh_Fir_user_version_inner2450096059_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2450096059_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2450096059 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2450096059/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_genericLabel;  // genericLabel
  SEXP Rsh_Fir_reg_genericLabel_isMissing;  // genericLabel_isMissing
  SEXP Rsh_Fir_reg_genericLabel_orDefault;  // genericLabel_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__MlistDefunct;  // _MlistDefunct
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_m1_ = PARAMS[0];
  Rsh_Fir_reg_m2_ = PARAMS[1];
  Rsh_Fir_reg_genericLabel = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m1 = m1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_m1_, RHO);
  (void)(Rsh_Fir_reg_m1_);
  // st m2 = m2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_m2_, RHO);
  (void)(Rsh_Fir_reg_m2_);
  // genericLabel_isMissing = missing.0(genericLabel)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_genericLabel;
  Rsh_Fir_reg_genericLabel_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if genericLabel_isMissing then L0() else L1(genericLabel)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_genericLabel_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(genericLabel)
    Rsh_Fir_reg_genericLabel_orDefault = Rsh_Fir_reg_genericLabel;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2450096059_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_genericLabel_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st genericLabel = genericLabel_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_genericLabel_orDefault, RHO);
  (void)(Rsh_Fir_reg_genericLabel_orDefault);
  // _MlistDefunct = ldf `.MlistDefunct`
  Rsh_Fir_reg__MlistDefunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn _MlistDefunct("mergeMethods()")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__MlistDefunct, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2450096059_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
