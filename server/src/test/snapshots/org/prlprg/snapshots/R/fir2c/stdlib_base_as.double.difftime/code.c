#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1294433711_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1294433711_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1294433711_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1294433711
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1294433711_, RHO, CCP);
  // st `as.double.difftime` = r
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
SEXP Rsh_Fir_user_function_inner1294433711_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1294433711 dynamic dispatch ([x, units, `...`])

  return Rsh_Fir_user_version_inner1294433711_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1294433711_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1294433711 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1294433711/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_units;  // units
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_units_isMissing;  // units_isMissing
  SEXP Rsh_Fir_reg_units_orDefault;  // units_orDefault
  SEXP Rsh_Fir_reg_units1_;  // units1
  SEXP Rsh_Fir_reg_units2_;  // units2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_units3_;  // units3
  SEXP Rsh_Fir_reg_units4_;  // units4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_units__;  // units__
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_units = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // units_isMissing = missing.0(units)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_units;
  Rsh_Fir_reg_units_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if units_isMissing then L0("auto") else L0(units)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_units_isMissing)) {
  // L0("auto")
    Rsh_Fir_reg_units_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(units)
    Rsh_Fir_reg_units_orDefault = Rsh_Fir_reg_units;
    goto L0_;
  }

L0_:;
  // st units = units_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_units_orDefault, RHO);
  (void)(Rsh_Fir_reg_units_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // units1 = ld units
  Rsh_Fir_reg_units1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D0_:;
  // deopt 0 [units1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_units1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // units2 = force? units1
  Rsh_Fir_reg_units2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_units1_);
  // checkMissing(units2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_units2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `!=`(units2, "auto")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_units2_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // units3 = ld units
  Rsh_Fir_reg_units3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [units3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_units3_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // units4 = force? units3
  Rsh_Fir_reg_units4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_units3_);
  // checkMissing(units4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_units4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // units__ = ldf `units<-`
  Rsh_Fir_reg_units__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 7 [units4, l, units4]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_units4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_units4_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // r1 = dyn units__(l, NULL, units4)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_units4_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_units__, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 9 [units4, r1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_units4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // goto L2()
  // L2()
  goto L2_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1294433711_, CCP, RHO);
  // r3 = dyn as_vector(p, "double")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 17 [r3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner1294433711_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
