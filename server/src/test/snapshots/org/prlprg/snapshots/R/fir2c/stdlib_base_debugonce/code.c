#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner346659450_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner346659450_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner346659450_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner346659450_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner346659450_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner346659450_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner346659450
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner346659450_, RHO, CCP);
  // st debugonce = r
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
SEXP Rsh_Fir_user_function_inner346659450_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner346659450 dynamic dispatch ([fun, text, condition, signature])

  return Rsh_Fir_user_version_inner346659450_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner346659450_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner346659450 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner346659450/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fun;  // fun
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_condition;  // condition
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_text_isMissing;  // text_isMissing
  SEXP Rsh_Fir_reg_text_orDefault;  // text_orDefault
  SEXP Rsh_Fir_reg_condition_isMissing;  // condition_isMissing
  SEXP Rsh_Fir_reg_condition_orDefault;  // condition_orDefault
  SEXP Rsh_Fir_reg_signature_isMissing;  // signature_isMissing
  SEXP Rsh_Fir_reg_signature_orDefault;  // signature_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_signature1_;  // signature1
  SEXP Rsh_Fir_reg_signature2_;  // signature2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_fun1_;  // fun1
  SEXP Rsh_Fir_reg_fun2_;  // fun2
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_condition1_;  // condition1
  SEXP Rsh_Fir_reg_condition2_;  // condition2
  SEXP Rsh_Fir_reg_debugonce;  // debugonce
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_requireNamespace;  // requireNamespace
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_fun3_;  // fun3
  SEXP Rsh_Fir_reg_fun4_;  // fun4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_condition3_;  // condition3
  SEXP Rsh_Fir_reg_condition4_;  // condition4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_signature3_;  // signature3
  SEXP Rsh_Fir_reg_signature4_;  // signature4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r13_;  // r13

  // Bind parameters
  Rsh_Fir_reg_fun = PARAMS[0];
  Rsh_Fir_reg_text = PARAMS[1];
  Rsh_Fir_reg_condition = PARAMS[2];
  Rsh_Fir_reg_signature = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fun = fun
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fun, RHO);
  (void)(Rsh_Fir_reg_fun);
  // text_isMissing = missing.0(text)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_text;
  Rsh_Fir_reg_text_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if text_isMissing then L0("") else L0(text)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_text_isMissing)) {
  // L0("")
    Rsh_Fir_reg_text_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(text)
    Rsh_Fir_reg_text_orDefault = Rsh_Fir_reg_text;
    goto L0_;
  }

L0_:;
  // st text = text_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_text_orDefault, RHO);
  (void)(Rsh_Fir_reg_text_orDefault);
  // condition_isMissing = missing.0(condition)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_condition;
  Rsh_Fir_reg_condition_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if condition_isMissing then L1(NULL) else L1(condition)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_condition_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_condition_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(condition)
    Rsh_Fir_reg_condition_orDefault = Rsh_Fir_reg_condition;
    goto L1_;
  }

L1_:;
  // st condition = condition_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_condition_orDefault, RHO);
  (void)(Rsh_Fir_reg_condition_orDefault);
  // signature_isMissing = missing.0(signature)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_signature;
  Rsh_Fir_reg_signature_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if signature_isMissing then L2(NULL) else L2(signature)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_signature_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_signature_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(signature)
    Rsh_Fir_reg_signature_orDefault = Rsh_Fir_reg_signature;
    goto L2_;
  }

L2_:;
  // st signature = signature_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_signature_orDefault, RHO);
  (void)(Rsh_Fir_reg_signature_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
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
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // requireNamespace = ldf requireNamespace
  Rsh_Fir_reg_requireNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L6_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

L7_:;
  // signature1 = ld signature
  Rsh_Fir_reg_signature1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym signature>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [signature1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_signature1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // signature2 = force? signature1
  Rsh_Fir_reg_signature2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature1_);
  // checkMissing(signature2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_signature2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `==`(signature2, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_signature2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L3_;

L10_:;
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // fun1 = ld fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r2 = dyn base1(<lang debugonce(fun, text, condition)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5(r2)
  // L5(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L5_;

D1_:;
  // deopt 6 [fun1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_fun1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // fun2 = force? fun1
  Rsh_Fir_reg_fun2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun1_);
  // checkMissing(fun2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fun2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 8 [text1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // condition1 = ld condition
  Rsh_Fir_reg_condition1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 10 [condition1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_condition1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // condition2 = force? condition1
  Rsh_Fir_reg_condition2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_condition1_);
  // checkMissing(condition2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_condition2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // debugonce = ldf debugonce in base
  Rsh_Fir_reg_debugonce = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r4 = dyn debugonce(fun2, text2, condition2)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_fun2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_text2_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_condition2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_debugonce, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L5_;

D5_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r5 = dyn requireNamespace("methods")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_requireNamespace, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 17 [r5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // c2 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L6()
    goto L6_;
  }

L20_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r6 = dyn ___("methods", ".debugMethod")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 22 [r6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // checkFun.0(r6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args17));
  // r7 = r6 as cls
  Rsh_Fir_reg_r7_ = Rsh_Fir_cast(Rsh_Fir_reg_r6_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   fun3 = ld fun;
  //   fun4 = force? fun3;
  //   checkMissing(fun4);
  //   return fun4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner346659450_, CCP, RHO);
  // p1 = prom<V +>{
  //   text3 = ld text;
  //   text4 = force? text3;
  //   checkMissing(text4);
  //   return text4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner346659450_1, CCP, RHO);
  // p2 = prom<V +>{
  //   condition3 = ld condition;
  //   condition4 = force? condition3;
  //   checkMissing(condition4);
  //   return condition4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner346659450_2, CCP, RHO);
  // p3 = prom<V +>{
  //   signature3 = ld signature;
  //   signature4 = force? signature3;
  //   checkMissing(signature4);
  //   return signature4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner346659450_3, CCP, RHO);
  // r12 = dyn r7[, , , , once](p, p1, p2, p3, TRUE)
  SEXP Rsh_Fir_array_args22[5];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args22[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args22[4] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[5];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r7_, 5, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r13 = dyn stop("failed to load the methods package for debugging by signature")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 34 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner346659450_(SEXP CCP, SEXP RHO) {
  // fun3 = ld fun
  Rsh_Fir_reg_fun3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fun4 = force? fun3
  Rsh_Fir_reg_fun4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun3_);
  // checkMissing(fun4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_fun4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return fun4
  return Rsh_Fir_reg_fun4_;
}
SEXP Rsh_Fir_user_promise_inner346659450_1(SEXP CCP, SEXP RHO) {
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return text4
  return Rsh_Fir_reg_text4_;
}
SEXP Rsh_Fir_user_promise_inner346659450_2(SEXP CCP, SEXP RHO) {
  // condition3 = ld condition
  Rsh_Fir_reg_condition3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // condition4 = force? condition3
  Rsh_Fir_reg_condition4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_condition3_);
  // checkMissing(condition4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_condition4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return condition4
  return Rsh_Fir_reg_condition4_;
}
SEXP Rsh_Fir_user_promise_inner346659450_3(SEXP CCP, SEXP RHO) {
  // signature3 = ld signature
  Rsh_Fir_reg_signature3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // signature4 = force? signature3
  Rsh_Fir_reg_signature4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature3_);
  // checkMissing(signature4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_signature4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return signature4
  return Rsh_Fir_reg_signature4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
