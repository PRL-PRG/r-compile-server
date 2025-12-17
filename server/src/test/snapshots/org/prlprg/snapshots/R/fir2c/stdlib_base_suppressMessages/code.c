#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner212786265_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner212786265_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner212786265_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner212786265_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner4061490079_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4061490079_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner212786265
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner212786265_, RHO, CCP);
  // st suppressMessages = r
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
SEXP Rsh_Fir_user_function_inner212786265_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner212786265 dynamic dispatch ([expr, classes])

  return Rsh_Fir_user_version_inner212786265_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner212786265_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner212786265 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner212786265/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_classes_isMissing;  // classes_isMissing
  SEXP Rsh_Fir_reg_classes_orDefault;  // classes_orDefault
  SEXP Rsh_Fir_reg_withCallingHandlers;  // withCallingHandlers
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_classes = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // classes_isMissing = missing.0(classes)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_reg_classes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if classes_isMissing then L0("message") else L0(classes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classes_isMissing)) {
  // L0("message")
    Rsh_Fir_reg_classes_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(classes)
    Rsh_Fir_reg_classes_orDefault = Rsh_Fir_reg_classes;
    goto L0_;
  }

L0_:;
  // st classes = classes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_classes_orDefault, RHO);
  (void)(Rsh_Fir_reg_classes_orDefault);
  // withCallingHandlers = ldf withCallingHandlers
  Rsh_Fir_reg_withCallingHandlers = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   expr1 = ld expr;
  //   expr2 = force? expr1;
  //   checkMissing(expr2);
  //   return expr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner212786265_, CCP, RHO);
  // p1 = prom<V +>{
  //   r1 = clos inner4061490079;
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner212786265_1, CCP, RHO);
  // r3 = dyn withCallingHandlers[, message](p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_withCallingHandlers, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner212786265_(SEXP CCP, SEXP RHO) {
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return expr2
  return Rsh_Fir_reg_expr2_;
}
SEXP Rsh_Fir_user_promise_inner212786265_1(SEXP CCP, SEXP RHO) {
  // r1 = clos inner4061490079
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4061490079_, RHO, CCP);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_inner4061490079_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4061490079 dynamic dispatch ([c])

  return Rsh_Fir_user_version_inner4061490079_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4061490079_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4061490079 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4061490079/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_classes1;  // classes
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_tryInvokeRestart;  // tryInvokeRestart
  SEXP Rsh_Fir_reg_r3_1;  // r3

  // Bind parameters
  Rsh_Fir_reg_c = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st c = c
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_c, RHO);
  (void)(Rsh_Fir_reg_c);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c3 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L7() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L7()
    goto L7_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 8);

L2_:;
  // c1 = ld c
  Rsh_Fir_reg_c1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym c>, <sym classes>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [c1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // c2 = force? c1
  Rsh_Fir_reg_c2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c1_);
  // checkMissing(c2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // classes = ld classes
  Rsh_Fir_reg_classes1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [classes]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_classes1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // classes1 = force? classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1);
  // checkMissing(classes1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_classes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn inherits(c2, classes1, FALSE)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L7_:;
  // tryInvokeRestart = ldf tryInvokeRestart
  Rsh_Fir_reg_tryInvokeRestart = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r3 = dyn tryInvokeRestart("muffleMessage")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryInvokeRestart, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 12 [r3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
