#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4029812677_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4029812677_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4029812677_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4029812677_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4029812677_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4029812677_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4029812677_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4029812677_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner4029812677
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4029812677_, RHO, CCP);
  // st `.undebugMethod` = r
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
SEXP Rsh_Fir_user_function_inner4029812677_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4029812677 dynamic dispatch ([fun, signature])

  return Rsh_Fir_user_version_inner4029812677_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4029812677_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4029812677 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4029812677/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fun;  // fun
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_isdebugged;  // isdebugged
  SEXP Rsh_Fir_reg_fun1_;  // fun1
  SEXP Rsh_Fir_reg_fun2_;  // fun2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_signature1_;  // signature1
  SEXP Rsh_Fir_reg_signature2_;  // signature2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_is_primitive;  // is_primitive
  SEXP Rsh_Fir_reg_fun3_;  // fun3
  SEXP Rsh_Fir_reg_fun4_;  // fun4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_fun5_;  // fun5
  SEXP Rsh_Fir_reg_fun6_;  // fun6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_untrace;  // untrace
  SEXP Rsh_Fir_reg_fun7_;  // fun7
  SEXP Rsh_Fir_reg_fun8_;  // fun8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_signature3_;  // signature3
  SEXP Rsh_Fir_reg_signature4_;  // signature4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r12_;  // r12

  // Bind parameters
  Rsh_Fir_reg_fun = PARAMS[0];
  Rsh_Fir_reg_signature = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fun = fun
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fun, RHO);
  (void)(Rsh_Fir_reg_fun);
  // st signature = signature
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_signature, RHO);
  (void)(Rsh_Fir_reg_signature);
  // isdebugged = ldf isdebugged
  Rsh_Fir_reg_isdebugged = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // is_primitive = ldf `is.primitive`
  Rsh_Fir_reg_is_primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // untrace = ldf untrace
  Rsh_Fir_reg_untrace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L15() else D8()
  // L15()
  goto L15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   fun1 = ld fun;
  //   fun2 = force? fun1;
  //   checkMissing(fun2);
  //   return fun2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_, CCP, RHO);
  // p1 = prom<V +>{
  //   signature1 = ld signature;
  //   signature2 = force? signature1;
  //   checkMissing(signature2);
  //   return signature2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_1, CCP, RHO);
  // r2 = dyn isdebugged(p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isdebugged, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L5() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L0()
    goto L0_;
  }

L5_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn warning("method is not being debugged")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

D4_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   fun3 = ld fun;
  //   fun4 = force? fun3;
  //   checkMissing(fun4);
  //   return fun4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_2, CCP, RHO);
  // r6 = dyn is_primitive(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_primitive, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L1()
    goto L1_;
  }

L11_:;
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   fun5 = ld fun;
  //   fun6 = force? fun5;
  //   checkMissing(fun6);
  //   return fun6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_3, CCP, RHO);
  // r8 = dyn getGeneric(p3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // st fun = r8
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L2()
  // L2()
  goto L2_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p4 = prom<V +>{
  //   fun7 = ld fun;
  //   fun8 = force? fun7;
  //   checkMissing(fun8);
  //   return fun8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_4, CCP, RHO);
  // p5 = prom<V +>{
  //   signature3 = ld signature;
  //   signature4 = force? signature3;
  //   checkMissing(signature4);
  //   return signature4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4029812677_5, CCP, RHO);
  // r12 = dyn untrace[, signature](p4, p5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_untrace, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

D9_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_(SEXP CCP, SEXP RHO) {
  // fun1 = ld fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fun2 = force? fun1
  Rsh_Fir_reg_fun2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun1_);
  // checkMissing(fun2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_fun2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return fun2
  return Rsh_Fir_reg_fun2_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_1(SEXP CCP, SEXP RHO) {
  // signature1 = ld signature
  Rsh_Fir_reg_signature1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // signature2 = force? signature1
  Rsh_Fir_reg_signature2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature1_);
  // checkMissing(signature2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_signature2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return signature2
  return Rsh_Fir_reg_signature2_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_2(SEXP CCP, SEXP RHO) {
  // fun3 = ld fun
  Rsh_Fir_reg_fun3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fun4 = force? fun3
  Rsh_Fir_reg_fun4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun3_);
  // checkMissing(fun4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fun4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return fun4
  return Rsh_Fir_reg_fun4_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_3(SEXP CCP, SEXP RHO) {
  // fun5 = ld fun
  Rsh_Fir_reg_fun5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fun6 = force? fun5
  Rsh_Fir_reg_fun6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun5_);
  // checkMissing(fun6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_fun6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return fun6
  return Rsh_Fir_reg_fun6_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_4(SEXP CCP, SEXP RHO) {
  // fun7 = ld fun
  Rsh_Fir_reg_fun7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fun8 = force? fun7
  Rsh_Fir_reg_fun8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun7_);
  // checkMissing(fun8)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_fun8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return fun8
  return Rsh_Fir_reg_fun8_;
}
SEXP Rsh_Fir_user_promise_inner4029812677_5(SEXP CCP, SEXP RHO) {
  // signature3 = ld signature
  Rsh_Fir_reg_signature3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // signature4 = force? signature3
  Rsh_Fir_reg_signature4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature3_);
  // checkMissing(signature4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_signature4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return signature4
  return Rsh_Fir_reg_signature4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
