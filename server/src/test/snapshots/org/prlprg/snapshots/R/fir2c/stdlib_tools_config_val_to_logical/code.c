#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3295070213_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3295070213_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3295070213_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3295070213_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3295070213
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3295070213_, RHO, CCP);
  // st config_val_to_logical = r
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
SEXP Rsh_Fir_user_function_inner3295070213_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3295070213 dynamic dispatch ([val, `na.ok`])

  return Rsh_Fir_user_version_inner3295070213_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3295070213_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3295070213 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3295070213/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_na_ok;  // na_ok
  SEXP Rsh_Fir_reg_na_ok_isMissing;  // na_ok_isMissing
  SEXP Rsh_Fir_reg_na_ok_orDefault;  // na_ok_orDefault
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_na_ok1_;  // na_ok1
  SEXP Rsh_Fir_reg_na_ok2_;  // na_ok2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_val = PARAMS[0];
  Rsh_Fir_reg_na_ok = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st val = val
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_val, RHO);
  (void)(Rsh_Fir_reg_val);
  // na_ok_isMissing = missing.0(na_ok)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_na_ok;
  Rsh_Fir_reg_na_ok_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if na_ok_isMissing then L0(TRUE) else L0(na_ok)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_ok_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_na_ok_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(na_ok)
    Rsh_Fir_reg_na_ok_orDefault = Rsh_Fir_reg_na_ok;
    goto L0_;
  }

L0_:;
  // st `na.ok` = na_ok_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_na_ok_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_ok_orDefault);
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r = dyn ___("utils", "str2logical")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // checkFun.0(r)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args2));
  // r1 = r as cls
  Rsh_Fir_reg_r1_ = Rsh_Fir_cast(Rsh_Fir_reg_r1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   val1 = ld val;
  //   val2 = force? val1;
  //   checkMissing(val2);
  //   return val2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3295070213_, CCP, RHO);
  // p1 = prom<V +>{
  //   na_ok1 = ld `na.ok`;
  //   na_ok2 = force? na_ok1;
  //   checkMissing(na_ok2);
  //   return na_ok2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3295070213_1, CCP, RHO);
  // r4 = dyn r1[, `na.ok`](p, p1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3295070213_(SEXP CCP, SEXP RHO) {
  // val1 = ld val
  Rsh_Fir_reg_val1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // val2 = force? val1
  Rsh_Fir_reg_val2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val1_);
  // checkMissing(val2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_val2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return val2
  return Rsh_Fir_reg_val2_;
}
SEXP Rsh_Fir_user_promise_inner3295070213_1(SEXP CCP, SEXP RHO) {
  // na_ok1 = ld `na.ok`
  Rsh_Fir_reg_na_ok1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // na_ok2 = force? na_ok1
  Rsh_Fir_reg_na_ok2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_ok1_);
  // checkMissing(na_ok2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_na_ok2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return na_ok2
  return Rsh_Fir_reg_na_ok2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
