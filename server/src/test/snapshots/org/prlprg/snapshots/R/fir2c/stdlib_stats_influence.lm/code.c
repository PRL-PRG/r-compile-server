#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2245717122_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2245717122_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2245717122_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2245717122_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2245717122
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2245717122_, RHO, CCP);
  // st `influence.lm` = r
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
SEXP Rsh_Fir_user_function_inner2245717122_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2245717122 dynamic dispatch ([model, `do.coef`, `...`])

  return Rsh_Fir_user_version_inner2245717122_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2245717122_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2245717122 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2245717122/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_model;  // model
  SEXP Rsh_Fir_reg_do_coef;  // do_coef
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_do_coef_isMissing;  // do_coef_isMissing
  SEXP Rsh_Fir_reg_do_coef_orDefault;  // do_coef_orDefault
  SEXP Rsh_Fir_reg_lm_influence;  // lm_influence
  SEXP Rsh_Fir_reg_model1_;  // model1
  SEXP Rsh_Fir_reg_model2_;  // model2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_do_coef1_;  // do_coef1
  SEXP Rsh_Fir_reg_do_coef2_;  // do_coef2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_model = PARAMS[0];
  Rsh_Fir_reg_do_coef = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st model = model
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_model, RHO);
  (void)(Rsh_Fir_reg_model);
  // do_coef_isMissing = missing.0(do_coef)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_do_coef;
  Rsh_Fir_reg_do_coef_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if do_coef_isMissing then L0(TRUE) else L0(do_coef)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_do_coef_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_do_coef_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(do_coef)
    Rsh_Fir_reg_do_coef_orDefault = Rsh_Fir_reg_do_coef;
    goto L0_;
  }

L0_:;
  // st `do.coef` = do_coef_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_do_coef_orDefault, RHO);
  (void)(Rsh_Fir_reg_do_coef_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // lm_influence = ldf `lm.influence`
  Rsh_Fir_reg_lm_influence = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   model1 = ld model;
  //   model2 = force? model1;
  //   checkMissing(model2);
  //   return model2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2245717122_, CCP, RHO);
  // p1 = prom<V +>{
  //   do_coef1 = ld `do.coef`;
  //   do_coef2 = force? do_coef1;
  //   checkMissing(do_coef2);
  //   return do_coef2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2245717122_1, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r2 = dyn lm_influence[, `do.coef`, `...`](p, p1, ddd1)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm_influence, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2245717122_(SEXP CCP, SEXP RHO) {
  // model1 = ld model
  Rsh_Fir_reg_model1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // model2 = force? model1
  Rsh_Fir_reg_model2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model1_);
  // checkMissing(model2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_model2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return model2
  return Rsh_Fir_reg_model2_;
}
SEXP Rsh_Fir_user_promise_inner2245717122_1(SEXP CCP, SEXP RHO) {
  // do_coef1 = ld `do.coef`
  Rsh_Fir_reg_do_coef1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // do_coef2 = force? do_coef1
  Rsh_Fir_reg_do_coef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_do_coef1_);
  // checkMissing(do_coef2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_do_coef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return do_coef2
  return Rsh_Fir_reg_do_coef2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
