#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2076870501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2076870501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2076870501
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2076870501_, RHO, CCP);
  // st `deriv.default` = r
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
SEXP Rsh_Fir_user_function_inner2076870501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2076870501 dynamic dispatch ([expr, namevec, `function.arg`, tag, hessian, `...`])

  return Rsh_Fir_user_version_inner2076870501_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2076870501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2076870501 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2076870501/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_namevec;  // namevec
  SEXP Rsh_Fir_reg_function_arg;  // function_arg
  SEXP Rsh_Fir_reg_tag;  // tag
  SEXP Rsh_Fir_reg_hessian;  // hessian
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_function_arg_isMissing;  // function_arg_isMissing
  SEXP Rsh_Fir_reg_function_arg_orDefault;  // function_arg_orDefault
  SEXP Rsh_Fir_reg_tag_isMissing;  // tag_isMissing
  SEXP Rsh_Fir_reg_tag_orDefault;  // tag_orDefault
  SEXP Rsh_Fir_reg_hessian_isMissing;  // hessian_isMissing
  SEXP Rsh_Fir_reg_hessian_orDefault;  // hessian_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_deriv;  // C_deriv
  SEXP Rsh_Fir_reg_C_deriv1_;  // C_deriv1
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2
  SEXP Rsh_Fir_reg_namevec1_;  // namevec1
  SEXP Rsh_Fir_reg_namevec2_;  // namevec2
  SEXP Rsh_Fir_reg_function_arg1_;  // function_arg1
  SEXP Rsh_Fir_reg_function_arg2_;  // function_arg2
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_tag2_;  // tag2
  SEXP Rsh_Fir_reg_hessian1_;  // hessian1
  SEXP Rsh_Fir_reg_hessian2_;  // hessian2
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_namevec = PARAMS[1];
  Rsh_Fir_reg_function_arg = PARAMS[2];
  Rsh_Fir_reg_tag = PARAMS[3];
  Rsh_Fir_reg_hessian = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // st namevec = namevec
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_namevec, RHO);
  (void)(Rsh_Fir_reg_namevec);
  // function_arg_isMissing = missing.0(function_arg)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_function_arg;
  Rsh_Fir_reg_function_arg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if function_arg_isMissing then L0(NULL) else L0(function_arg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_function_arg_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_function_arg_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(function_arg)
    Rsh_Fir_reg_function_arg_orDefault = Rsh_Fir_reg_function_arg;
    goto L0_;
  }

L0_:;
  // st `function.arg` = function_arg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_function_arg_orDefault, RHO);
  (void)(Rsh_Fir_reg_function_arg_orDefault);
  // tag_isMissing = missing.0(tag)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_tag;
  Rsh_Fir_reg_tag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if tag_isMissing then L1(".expr") else L1(tag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tag_isMissing)) {
  // L1(".expr")
    Rsh_Fir_reg_tag_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(tag)
    Rsh_Fir_reg_tag_orDefault = Rsh_Fir_reg_tag;
    goto L1_;
  }

L1_:;
  // st tag = tag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_tag_orDefault, RHO);
  (void)(Rsh_Fir_reg_tag_orDefault);
  // hessian_isMissing = missing.0(hessian)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_hessian;
  Rsh_Fir_reg_hessian_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if hessian_isMissing then L2(FALSE) else L2(hessian)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hessian_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_hessian_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(hessian)
    Rsh_Fir_reg_hessian_orDefault = Rsh_Fir_reg_hessian;
    goto L2_;
  }

L2_:;
  // st hessian = hessian_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_hessian_orDefault, RHO);
  (void)(Rsh_Fir_reg_hessian_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.External`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf `.External` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // C_deriv = ld C_deriv
  Rsh_Fir_reg_C_deriv = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_deriv>, <sym expr>, <sym namevec>, <sym function.arg>, <sym tag>, <sym hessian>)
  SEXP Rsh_Fir_array_args4[6];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[6];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [C_deriv]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_deriv;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // C_deriv1 = force? C_deriv
  Rsh_Fir_reg_C_deriv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_deriv);
  // checkMissing(C_deriv1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_C_deriv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [expr1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // namevec1 = ld namevec
  Rsh_Fir_reg_namevec1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [namevec1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_namevec1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // namevec2 = force? namevec1
  Rsh_Fir_reg_namevec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namevec1_);
  // checkMissing(namevec2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_namevec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // function_arg1 = ld `function.arg`
  Rsh_Fir_reg_function_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 8 [function_arg1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_function_arg1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // function_arg2 = force? function_arg1
  Rsh_Fir_reg_function_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_function_arg1_);
  // checkMissing(function_arg2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_function_arg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // tag1 = ld tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 10 [tag1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // tag2 = force? tag1
  Rsh_Fir_reg_tag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag1_);
  // checkMissing(tag2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_tag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // hessian1 = ld hessian
  Rsh_Fir_reg_hessian1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 12 [hessian1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_hessian1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // hessian2 = force? hessian1
  Rsh_Fir_reg_hessian2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hessian1_);
  // checkMissing(hessian2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_hessian2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn _External(C_deriv1, expr2, namevec2, function_arg2, tag2, hessian2)
  SEXP Rsh_Fir_array_args11[6];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_deriv1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_expr2_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_namevec2_;
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_function_arg2_;
  Rsh_Fir_array_args11[4] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_array_args11[5] = Rsh_Fir_reg_hessian2_;
  SEXP Rsh_Fir_array_arg_names1[6];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 6, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 15 [r2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
