#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3853165829_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3853165829_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3853165829_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3853165829_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner3853165829
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3853165829_, RHO, CCP);
  // st assignMethodsMetaData = r
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
SEXP Rsh_Fir_user_function_inner3853165829_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3853165829 dynamic dispatch ([f, value, fdef, where])

  return Rsh_Fir_user_version_inner3853165829_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3853165829_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3853165829 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3853165829/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_as_environment;  // as_environment
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__MlistDefunct;  // _MlistDefunct
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_methodsPackageMetaName;  // methodsPackageMetaName
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_mname;  // mname
  SEXP Rsh_Fir_reg_mname1_;  // mname1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_bindingIsLocked;  // bindingIsLocked
  SEXP Rsh_Fir_reg_mname2_;  // mname2
  SEXP Rsh_Fir_reg_mname3_;  // mname3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_mname4_;  // mname4
  SEXP Rsh_Fir_reg_mname5_;  // mname5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_where8_;  // where8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dispatchIsInternal;  // dispatchIsInternal
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_setPrimitiveMethods;  // setPrimitiveMethods
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_fdef3_;  // fdef3
  SEXP Rsh_Fir_reg_fdef4_;  // fdef4
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_fdef5_;  // fdef5
  SEXP Rsh_Fir_reg_fdef6_;  // fdef6
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_cacheGenericsMetaData;  // cacheGenericsMetaData
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_fdef7_;  // fdef7
  SEXP Rsh_Fir_reg_fdef8_;  // fdef8
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_where9_;  // where9
  SEXP Rsh_Fir_reg_where10_;  // where10
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r38_;  // r38

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];
  Rsh_Fir_reg_fdef = PARAMS[2];
  Rsh_Fir_reg_where = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // st fdef = fdef
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_fdef, RHO);
  (void)(Rsh_Fir_reg_fdef);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // sym = ldf `as.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `as.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // st where = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L1_:;
  // goto L5()
  // L5()
  goto L5_;

L2_:;
  // c7 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c7 then L26() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L26()
    goto L26_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L28() else D12()
  // L28()
  goto L28_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // dispatchIsInternal = ldf dispatchIsInternal
  Rsh_Fir_reg_dispatchIsInternal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L31() else D14()
  // L31()
  goto L31_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L37() else D18()
  // L37()
  goto L37_;

L8_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 9);

L9_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [where1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn as_environment(where2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_, CCP, RHO);
  // r4 = dyn is(p, "MethodsList")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L15() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L1()
    goto L1_;
  }

L15_:;
  // _MlistDefunct = ldf `.MlistDefunct`
  Rsh_Fir_reg__MlistDefunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r5 = dyn _MlistDefunct()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__MlistDefunct, 0, NULL, NULL, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // methodsPackageMetaName = ldf methodsPackageMetaName
  Rsh_Fir_reg_methodsPackageMetaName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   __ = ldf `@` in base;
  //   r6 = dyn __(<sym fdef>, <sym generic>);
  //   return r6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_1, CCP, RHO);
  // p2 = prom<V +>{
  //   __1 = ldf `@` in base;
  //   r8 = dyn __1(<sym fdef>, <sym package>);
  //   return r8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_2, CCP, RHO);
  // r10 = dyn methodsPackageMetaName("M", p1, p2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_methodsPackageMetaName, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // st mname = r10
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = prom<V +>{
  //   mname = ld mname;
  //   mname1 = force? mname;
  //   checkMissing(mname1);
  //   return mname1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_3, CCP, RHO);
  // p4 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_4, CCP, RHO);
  // r13 = dyn exists[, envir, inherits](p3, p4, FALSE)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L22() else L2(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L22()
    goto L22_;
  } else {
  // L2(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L2_;
  }

L22_:;
  // bindingIsLocked = ldf bindingIsLocked
  Rsh_Fir_reg_bindingIsLocked = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 31 [c1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // p5 = prom<V +>{
  //   mname2 = ld mname;
  //   mname3 = force? mname2;
  //   checkMissing(mname3);
  //   return mname3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_5, CCP, RHO);
  // p6 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_6, CCP, RHO);
  // r16 = dyn bindingIsLocked(p5, p6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bindingIsLocked, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

D11_:;
  // deopt 34 [c1, r16]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // c4 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c5 = `&&`(c1, c4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L2(c5)
  // L2(c5)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c5_;
  goto L2_;

L26_:;
  // goto L4(NULL)
  // L4(NULL)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 9);
  goto L4_;

D12_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p7 = prom<V +>{
  //   mname4 = ld mname;
  //   mname5 = force? mname4;
  //   checkMissing(mname5);
  //   return mname5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_7, CCP, RHO);
  // p8 = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_8, CCP, RHO);
  // p9 = prom<V +>{
  //   where7 = ld where;
  //   where8 = force? where7;
  //   checkMissing(where8);
  //   return where8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_9, CCP, RHO);
  // r21 = dyn assign(p7, p8, p9)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L29() else D13()
  // L29()
  goto L29_;

D13_:;
  // deopt 43 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r21_;
  goto L4_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p10 = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_10, CCP, RHO);
  // r24 = dyn dispatchIsInternal(p10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dispatchIsInternal, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L32() else D15()
  // L32()
  goto L32_;

D15_:;
  // deopt 49 [r24]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // c8 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c8 then L33() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L33()
    goto L33_;
  } else {
  // L6()
    goto L6_;
  }

L33_:;
  // setPrimitiveMethods = ldf setPrimitiveMethods
  Rsh_Fir_reg_setPrimitiveMethods = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L34() else D16()
  // L34()
  goto L34_;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p11 = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_11, CCP, RHO);
  // p12 = prom<V +>{
  //   __2 = ldf `@` in base;
  //   r26 = dyn __2(<sym fdef>, <sym default>);
  //   return r26;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_12, CCP, RHO);
  // p13 = prom<V +>{
  //   fdef3 = ld fdef;
  //   fdef4 = force? fdef3;
  //   checkMissing(fdef4);
  //   return fdef4;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_13, CCP, RHO);
  // r29 = dyn setPrimitiveMethods(p11, p12, "reset", p13, NULL)
  SEXP Rsh_Fir_array_args30[5];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args30[3] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args30[4] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setPrimitiveMethods, 5, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L35() else D17()
  // L35()
  goto L35_;

D17_:;
  // deopt 57 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L7()
  // L7()
  goto L7_;

D18_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p14 = prom<V +>{
  //   fdef5 = ld fdef;
  //   fdef6 = force? fdef5;
  //   checkMissing(fdef6);
  //   return fdef6;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_14, CCP, RHO);
  // r32 = dyn is1(p14, "groupGenericFunction")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L38() else D19()
  // L38()
  goto L38_;

D19_:;
  // deopt 64 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // c9 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c9 then L39() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L39()
    goto L39_;
  } else {
  // L8()
    goto L8_;
  }

L39_:;
  // cacheGenericsMetaData = ldf cacheGenericsMetaData
  Rsh_Fir_reg_cacheGenericsMetaData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L40() else D20()
  // L40()
  goto L40_;

D20_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p15 = prom<V +>{
  //   f3 = ld f;
  //   f4 = force? f3;
  //   checkMissing(f4);
  //   return f4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_15, CCP, RHO);
  // p16 = prom<V +>{
  //   fdef7 = ld fdef;
  //   fdef8 = force? fdef7;
  //   checkMissing(fdef8);
  //   return fdef8;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_16, CCP, RHO);
  // p17 = prom<V +>{
  //   where9 = ld where;
  //   where10 = force? where9;
  //   checkMissing(where10);
  //   return where10;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_17, CCP, RHO);
  // p18 = prom<V +>{
  //   __3 = ldf `@` in base;
  //   r36 = dyn __3(<sym fdef>, <sym package>);
  //   return r36;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3853165829_18, CCP, RHO);
  // r38 = dyn cacheGenericsMetaData[, , where, package](p15, p16, p17, p18)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args38[3] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cacheGenericsMetaData, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L41() else D21()
  // L41()
  goto L41_;

D21_:;
  // deopt 73 [r38]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_(SEXP CCP, SEXP RHO) {
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_1(SEXP CCP, SEXP RHO) {
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r6 = dyn __(<sym fdef>, <sym generic>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_2(SEXP CCP, SEXP RHO) {
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r8 = dyn __1(<sym fdef>, <sym package>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_3(SEXP CCP, SEXP RHO) {
  // mname = ld mname
  Rsh_Fir_reg_mname = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // mname1 = force? mname
  Rsh_Fir_reg_mname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mname);
  // checkMissing(mname1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return mname1
  return Rsh_Fir_reg_mname1_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_4(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_5(SEXP CCP, SEXP RHO) {
  // mname2 = ld mname
  Rsh_Fir_reg_mname2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // mname3 = force? mname2
  Rsh_Fir_reg_mname3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mname2_);
  // checkMissing(mname3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_mname3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return mname3
  return Rsh_Fir_reg_mname3_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_6(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_7(SEXP CCP, SEXP RHO) {
  // mname4 = ld mname
  Rsh_Fir_reg_mname4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // mname5 = force? mname4
  Rsh_Fir_reg_mname5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mname4_);
  // checkMissing(mname5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_mname5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return mname5
  return Rsh_Fir_reg_mname5_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_8(SEXP CCP, SEXP RHO) {
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_9(SEXP CCP, SEXP RHO) {
  // where7 = ld where
  Rsh_Fir_reg_where7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where8 = force? where7
  Rsh_Fir_reg_where8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where7_);
  // checkMissing(where8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_where8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return where8
  return Rsh_Fir_reg_where8_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_10(SEXP CCP, SEXP RHO) {
  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_11(SEXP CCP, SEXP RHO) {
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_12(SEXP CCP, SEXP RHO) {
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r26 = dyn __2(<sym fdef>, <sym default>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_13(SEXP CCP, SEXP RHO) {
  // fdef3 = ld fdef
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fdef4 = force? fdef3
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef3_);
  // checkMissing(fdef4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return fdef4
  return Rsh_Fir_reg_fdef4_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_14(SEXP CCP, SEXP RHO) {
  // fdef5 = ld fdef
  Rsh_Fir_reg_fdef5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fdef6 = force? fdef5
  Rsh_Fir_reg_fdef6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef5_);
  // checkMissing(fdef6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_fdef6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return fdef6
  return Rsh_Fir_reg_fdef6_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_15(SEXP CCP, SEXP RHO) {
  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return f4
  return Rsh_Fir_reg_f4_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_16(SEXP CCP, SEXP RHO) {
  // fdef7 = ld fdef
  Rsh_Fir_reg_fdef7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fdef8 = force? fdef7
  Rsh_Fir_reg_fdef8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef7_);
  // checkMissing(fdef8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_fdef8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return fdef8
  return Rsh_Fir_reg_fdef8_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_17(SEXP CCP, SEXP RHO) {
  // where9 = ld where
  Rsh_Fir_reg_where9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where10 = force? where9
  Rsh_Fir_reg_where10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where9_);
  // checkMissing(where10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_where10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return where10
  return Rsh_Fir_reg_where10_;
}
SEXP Rsh_Fir_user_promise_inner3853165829_18(SEXP CCP, SEXP RHO) {
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r36 = dyn __3(<sym fdef>, <sym package>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
