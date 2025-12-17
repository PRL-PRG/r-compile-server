#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner330488393_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner330488393_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner330488393_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner330488393_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner330488393
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner330488393_, RHO, CCP);
  // st `.getOrMakeMethodsList` = r
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
SEXP Rsh_Fir_user_function_inner330488393_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner330488393 dynamic dispatch ([f, where, genericFun])

  return Rsh_Fir_user_version_inner330488393_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner330488393_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner330488393 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner330488393/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_genericFun;  // genericFun
  SEXP Rsh_Fir_reg_getMethodsMetaData;  // getMethodsMetaData
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_allMethods;  // allMethods
  SEXP Rsh_Fir_reg_allMethods1_;  // allMethods1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_allMethods2_;  // allMethods2
  SEXP Rsh_Fir_reg_allMethods3_;  // allMethods3

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];
  Rsh_Fir_reg_genericFun = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // st genericFun = genericFun
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_genericFun, RHO);
  (void)(Rsh_Fir_reg_genericFun);
  // getMethodsMetaData = ldf getMethodsMetaData
  Rsh_Fir_reg_getMethodsMetaData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L9() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L9()
    goto L9_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L3()
  // L3()
  goto L3_;

L2_:;
  // st argName = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L3_:;
  // allMethods2 = ld allMethods
  Rsh_Fir_reg_allMethods2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner330488393_, CCP, RHO);
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner330488393_1, CCP, RHO);
  // r2 = dyn getMethodsMetaData[, where](p, p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getMethodsMetaData, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st allMethods = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // allMethods = ld allMethods
  Rsh_Fir_reg_allMethods = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r3 = dyn base(<sym allMethods>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;

D2_:;
  // deopt 8 [allMethods]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_allMethods;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // allMethods1 = force? allMethods
  Rsh_Fir_reg_allMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allMethods);
  // checkMissing(allMethods1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_allMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `==`(allMethods1, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_allMethods1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L0_;

L9_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r5 = dyn __(<sym genericFun>, <sym signature>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // c2 = `is.object`(r5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c2 then L10() else L11(r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L10()
    goto L10_;
  } else {
  // L11(r5)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r5_;
    goto L11_;
  }

L10_:;
  // dr = tryDispatchBuiltin.1("[[", r5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r8 = dyn __1(r7, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L2_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r9 = dyn warning("\"MethodsList\" is defunct; allMethods now are empty")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3()
  // L3()
  goto L3_;

D5_:;
  // deopt 23 [allMethods2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_allMethods2_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // allMethods3 = force? allMethods2
  Rsh_Fir_reg_allMethods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allMethods2_);
  // checkMissing(allMethods3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_allMethods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return allMethods3
  return Rsh_Fir_reg_allMethods3_;
}
SEXP Rsh_Fir_user_promise_inner330488393_(SEXP CCP, SEXP RHO) {
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner330488393_1(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
