#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3882044078_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3882044078_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3882044078_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3882044078
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3882044078_, RHO, CCP);
  // st `all.vars` = r
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
SEXP Rsh_Fir_user_function_inner3882044078_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3882044078 dynamic dispatch ([expr, functions, `max.names`, unique])

  return Rsh_Fir_user_version_inner3882044078_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3882044078_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3882044078 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3882044078/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_functions;  // functions
  SEXP Rsh_Fir_reg_max_names;  // max_names
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_functions_isMissing;  // functions_isMissing
  SEXP Rsh_Fir_reg_functions_orDefault;  // functions_orDefault
  SEXP Rsh_Fir_reg_max_names_isMissing;  // max_names_isMissing
  SEXP Rsh_Fir_reg_max_names_orDefault;  // max_names_orDefault
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_unique_isMissing;  // unique_isMissing
  SEXP Rsh_Fir_reg_unique_orDefault;  // unique_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2
  SEXP Rsh_Fir_reg_functions1_;  // functions1
  SEXP Rsh_Fir_reg_functions2_;  // functions2
  SEXP Rsh_Fir_reg_max_names1_;  // max_names1
  SEXP Rsh_Fir_reg_max_names2_;  // max_names2
  SEXP Rsh_Fir_reg_unique1_;  // unique1
  SEXP Rsh_Fir_reg_unique2_;  // unique2
  SEXP Rsh_Fir_reg_all_names;  // all_names
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_functions = PARAMS[1];
  Rsh_Fir_reg_max_names = PARAMS[2];
  Rsh_Fir_reg_unique = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // functions_isMissing = missing.0(functions)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_functions;
  Rsh_Fir_reg_functions_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if functions_isMissing then L0(FALSE) else L0(functions)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_functions_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_functions_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(functions)
    Rsh_Fir_reg_functions_orDefault = Rsh_Fir_reg_functions;
    goto L0_;
  }

L0_:;
  // st functions = functions_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_functions_orDefault, RHO);
  (void)(Rsh_Fir_reg_functions_orDefault);
  // max_names_isMissing = missing.0(max_names)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_max_names;
  Rsh_Fir_reg_max_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if max_names_isMissing then L1() else L2(max_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_names_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(max_names)
    Rsh_Fir_reg_max_names_orDefault = Rsh_Fir_reg_max_names;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3882044078_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_max_names_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st `max.names` = max_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_max_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_names_orDefault);
  // unique_isMissing = missing.0(unique)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_unique;
  Rsh_Fir_reg_unique_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if unique_isMissing then L3(TRUE) else L3(unique)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unique_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_unique_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(unique)
    Rsh_Fir_reg_unique_orDefault = Rsh_Fir_reg_unique;
    goto L3_;
  }

L3_:;
  // st unique = unique_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_unique_orDefault, RHO);
  (void)(Rsh_Fir_reg_unique_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;

L5_:;
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r1 = dyn base(<lang all.names(expr, functions, max.names, unique)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L4_;

D0_:;
  // deopt 2 [expr1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // functions1 = ld functions
  Rsh_Fir_reg_functions1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [functions1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_functions1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // functions2 = force? functions1
  Rsh_Fir_reg_functions2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_functions1_);
  // checkMissing(functions2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_functions2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // max_names1 = ld `max.names`
  Rsh_Fir_reg_max_names1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 [max_names1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_max_names1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // max_names2 = force? max_names1
  Rsh_Fir_reg_max_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_names1_);
  // checkMissing(max_names2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_max_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // unique1 = ld unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 8 [unique1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_unique1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // unique2 = force? unique1
  Rsh_Fir_reg_unique2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unique1_);
  // checkMissing(unique2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_unique2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // all_names = ldf `all.names` in base
  Rsh_Fir_reg_all_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r3 = dyn all_names(expr2, functions2, max_names2, unique2)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_expr2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_functions2_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_max_names2_;
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_unique2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_names, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner3882044078_(SEXP CCP, SEXP RHO) {
  // return -1
  return Rsh_const(CCP, 4);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
