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
  // st `deriv.formula` = r
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
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_C_deriv;  // C_deriv
  SEXP Rsh_Fir_reg_C_deriv1_;  // C_deriv1
  SEXP Rsh_Fir_reg_expr3_;  // expr3
  SEXP Rsh_Fir_reg_expr4_;  // expr4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_expr6_;  // expr6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_le;  // le
  SEXP Rsh_Fir_reg_le1_;  // le1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_namevec1_;  // namevec1
  SEXP Rsh_Fir_reg_namevec2_;  // namevec2
  SEXP Rsh_Fir_reg_function_arg1_;  // function_arg1
  SEXP Rsh_Fir_reg_function_arg2_;  // function_arg2
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_tag2_;  // tag2
  SEXP Rsh_Fir_reg_hessian1_;  // hessian1
  SEXP Rsh_Fir_reg_hessian2_;  // hessian2
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8

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
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L3_:;
  // st le = r1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r3 = `>`(r1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L11() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L6_:;
  // namevec1 = ld namevec
  Rsh_Fir_reg_namevec1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L7_:;
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym expr>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [expr1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn length(expr2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_expr2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L11_:;
  // sym1 = ldf `.External`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `.External` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // C_deriv = ld C_deriv
  Rsh_Fir_reg_C_deriv = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base1(<sym C_deriv>, <lang `[[`(expr, le)>, <sym namevec>, <sym function.arg>, <sym tag>, <sym hessian>)
  SEXP Rsh_Fir_array_args10[6];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[6];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 6, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L5_;

D2_:;
  // deopt 11 [C_deriv]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_deriv;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // C_deriv1 = force? C_deriv
  Rsh_Fir_reg_C_deriv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_deriv);
  // checkMissing(C_deriv1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_deriv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // expr3 = ld expr
  Rsh_Fir_reg_expr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 13 [expr3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_expr3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // expr4 = force? expr3
  Rsh_Fir_reg_expr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr3_);
  // checkMissing(expr4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_expr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(expr4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_expr4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L17(expr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(expr4)
    Rsh_Fir_reg_expr6_ = Rsh_Fir_reg_expr4_;
    goto L17_;
  }

L16_:;
  // dr = tryDispatchBuiltin.1("[[", expr4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_expr4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_expr6_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // le = ld le
  Rsh_Fir_reg_le = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D4_:;
  // deopt 15 [expr6, le]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_expr6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_le;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // le1 = force? le
  Rsh_Fir_reg_le1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_le);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r6 = dyn __(expr6, le1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_expr6_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_le1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r6)
  // L6(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L6_;

D5_:;
  // deopt 18 [namevec1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_namevec1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // namevec2 = force? namevec1
  Rsh_Fir_reg_namevec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namevec1_);
  // checkMissing(namevec2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_namevec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // function_arg1 = ld `function.arg`
  Rsh_Fir_reg_function_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 20 [function_arg1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_function_arg1_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // function_arg2 = force? function_arg1
  Rsh_Fir_reg_function_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_function_arg1_);
  // checkMissing(function_arg2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_function_arg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // tag1 = ld tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 22 [tag1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // tag2 = force? tag1
  Rsh_Fir_reg_tag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag1_);
  // checkMissing(tag2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_tag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // hessian1 = ld hessian
  Rsh_Fir_reg_hessian1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 24 [hessian1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_hessian1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // hessian2 = force? hessian1
  Rsh_Fir_reg_hessian2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hessian1_);
  // checkMissing(hessian2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_hessian2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r7 = dyn _External(C_deriv1, dx1, namevec2, function_arg2, tag2, hessian2)
  SEXP Rsh_Fir_array_args22[6];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_C_deriv1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_namevec2_;
  Rsh_Fir_array_args22[3] = Rsh_Fir_reg_function_arg2_;
  Rsh_Fir_array_args22[4] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_array_args22[5] = Rsh_Fir_reg_hessian2_;
  SEXP Rsh_Fir_array_arg_names4[6];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 6, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 27 [r7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L5_;

D10_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // r8 = dyn stop("invalid formula in deriv")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

D11_:;
  // deopt 31 [r8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
