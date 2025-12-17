#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner860501261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner860501261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner860501261_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner860501261_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner860501261_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner860501261_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1384373858_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1384373858_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1384373858_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384373858_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner860501261
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner860501261_, RHO, CCP);
  // st `.get_S3_generics_in_env` = r
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
SEXP Rsh_Fir_user_function_inner860501261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner860501261 dynamic dispatch ([env, nms])

  return Rsh_Fir_user_version_inner860501261_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner860501261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner860501261 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner860501261/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_nms;  // nms
  SEXP Rsh_Fir_reg_nms_isMissing;  // nms_isMissing
  SEXP Rsh_Fir_reg_nms_orDefault;  // nms_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_nms1_;  // nms1
  SEXP Rsh_Fir_reg_nms2_;  // nms2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_nms3_;  // nms3
  SEXP Rsh_Fir_reg_nms4_;  // nms4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_Filter;  // Filter
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_nms5_;  // nms5
  SEXP Rsh_Fir_reg_nms6_;  // nms6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_env = PARAMS[0];
  Rsh_Fir_reg_nms = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // nms_isMissing = missing.0(nms)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nms;
  Rsh_Fir_reg_nms_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nms_isMissing then L0(NULL) else L0(nms)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nms_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_nms_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(nms)
    Rsh_Fir_reg_nms_orDefault = Rsh_Fir_reg_nms;
    goto L0_;
  }

L0_:;
  // st nms = nms_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_nms_orDefault, RHO);
  (void)(Rsh_Fir_reg_nms_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L8() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L4_:;
  // Filter = ldf Filter
  Rsh_Fir_reg_Filter = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

L5_:;
  // nms1 = ld nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym nms>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [nms1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_nms1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // nms2 = force? nms1
  Rsh_Fir_reg_nms2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms1_);
  // checkMissing(nms2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_nms2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `==`(nms2, NULL)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_nms2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L8_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   env1 = ld env;
  //   env2 = force? env1;
  //   checkMissing(env2);
  //   names = ldf names in base;
  //   r4 = dyn names(env2);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base1(<sym env>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner860501261_, CCP, RHO);
  // r6 = dyn sort(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // st nms = r6
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   nms3 = ld nms;
  //   nms4 = force? nms3;
  //   checkMissing(nms4);
  //   return nms4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner860501261_1, CCP, RHO);
  // r9 = dyn _in_(".no_S3_generics", p1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c2 then L14() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L4()
    goto L4_;
  }

L14_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r10 = dyn character()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

D7_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   r11 = clos inner1384373858;
  //   return r11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner860501261_2, CCP, RHO);
  // p3 = prom<V +>{
  //   nms5 = ld nms;
  //   nms6 = force? nms5;
  //   checkMissing(nms6);
  //   return nms6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner860501261_3, CCP, RHO);
  // r14 = dyn Filter(p2, p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Filter, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 23 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner860501261_(SEXP CCP, SEXP RHO) {
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r4 = dyn names(env2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_env2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base1(<sym env>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner860501261_1(SEXP CCP, SEXP RHO) {
  // nms3 = ld nms
  Rsh_Fir_reg_nms3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nms4 = force? nms3
  Rsh_Fir_reg_nms4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms3_);
  // checkMissing(nms4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_nms4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return nms4
  return Rsh_Fir_reg_nms4_;
}
SEXP Rsh_Fir_user_promise_inner860501261_2(SEXP CCP, SEXP RHO) {
  // r11 = clos inner1384373858
  Rsh_Fir_reg_r11_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1384373858_, RHO, CCP);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner860501261_3(SEXP CCP, SEXP RHO) {
  // nms5 = ld nms
  Rsh_Fir_reg_nms5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nms6 = force? nms5
  Rsh_Fir_reg_nms6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms5_);
  // checkMissing(nms6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nms6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return nms6
  return Rsh_Fir_reg_nms6_;
}
SEXP Rsh_Fir_user_function_inner1384373858_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1384373858 dynamic dispatch ([f])

  return Rsh_Fir_user_version_inner1384373858_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1384373858_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1384373858 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1384373858/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg__is_S3_generic;  // _is_S3_generic
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_env1;  // env
  SEXP Rsh_Fir_reg_env1_1;  // env1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r2_1;  // r2

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // _is_S3_generic = ldf `.is_S3_generic`
  Rsh_Fir_reg__is_S3_generic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384373858_, CCP, RHO);
  // p1 = prom<V +>{
  //   env = ld env;
  //   env1 = force? env;
  //   checkMissing(env1);
  //   return env1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384373858_1, CCP, RHO);
  // r2 = dyn _is_S3_generic[, envir](p, p1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__is_S3_generic, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner1384373858_(SEXP CCP, SEXP RHO) {
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner1384373858_1(SEXP CCP, SEXP RHO) {
  // env = ld env
  Rsh_Fir_reg_env1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // env1 = force? env
  Rsh_Fir_reg_env1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1);
  // checkMissing(env1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_env1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return env1
  return Rsh_Fir_reg_env1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
