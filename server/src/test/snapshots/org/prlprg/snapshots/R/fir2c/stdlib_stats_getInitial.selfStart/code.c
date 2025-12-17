#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner24150463_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner24150463_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner24150463_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24150463_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner24150463
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner24150463_, RHO, CCP);
  // st `getInitial.selfStart` = r
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
SEXP Rsh_Fir_user_function_inner24150463_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner24150463 dynamic dispatch ([object, data, mCall, LHS, `...`])

  return Rsh_Fir_user_version_inner24150463_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner24150463_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner24150463 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner24150463/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_mCall;  // mCall
  SEXP Rsh_Fir_reg_LHS;  // LHS
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_LHS_isMissing;  // LHS_isMissing
  SEXP Rsh_Fir_reg_LHS_orDefault;  // LHS_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_formals;  // formals
  SEXP Rsh_Fir_reg_iniFn;  // iniFn
  SEXP Rsh_Fir_reg_iniFn1_;  // iniFn1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_iniFn2_;  // iniFn2
  SEXP Rsh_Fir_reg_mCall1_;  // mCall1
  SEXP Rsh_Fir_reg_mCall2_;  // mCall2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_LHS1_;  // LHS1
  SEXP Rsh_Fir_reg_LHS2_;  // LHS2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg__Deprecated;  // _Deprecated
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_iniFn3_;  // iniFn3
  SEXP Rsh_Fir_reg_mCall3_;  // mCall3
  SEXP Rsh_Fir_reg_mCall4_;  // mCall4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_data3_;  // data3
  SEXP Rsh_Fir_reg_data4_;  // data4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_LHS3_;  // LHS3
  SEXP Rsh_Fir_reg_LHS4_;  // LHS4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r17_;  // r17

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_mCall = PARAMS[2];
  Rsh_Fir_reg_LHS = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st mCall = mCall
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_mCall, RHO);
  (void)(Rsh_Fir_reg_mCall);
  // LHS_isMissing = missing.0(LHS)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_LHS;
  Rsh_Fir_reg_LHS_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if LHS_isMissing then L0(NULL) else L0(LHS)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_LHS_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_LHS_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(LHS)
    Rsh_Fir_reg_LHS_orDefault = Rsh_Fir_reg_LHS;
    goto L0_;
  }

L0_:;
  // st LHS = LHS_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_LHS_orDefault, RHO);
  (void)(Rsh_Fir_reg_LHS_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // st iniFn = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // r8 = `>`(r4, 3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L13() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // _Deprecated = ldf `.Deprecated`
  Rsh_Fir_reg__Deprecated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

L4_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym object>, "initial")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn attr(object2, "initial")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L8_:;
  // formals = ldf formals
  Rsh_Fir_reg_formals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r3 = dyn base1(<lang formals(iniFn)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   iniFn = ld iniFn;
  //   iniFn1 = force? iniFn;
  //   checkMissing(iniFn1);
  //   return iniFn1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_, CCP, RHO);
  // r6 = dyn formals(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn length(r6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L2_;

L13_:;
  // iniFn2 = ldf iniFn
  Rsh_Fir_reg_iniFn2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   mCall1 = ld mCall;
  //   mCall2 = force? mCall1;
  //   checkMissing(mCall2);
  //   return mCall2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_1, CCP, RHO);
  // p2 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_2, CCP, RHO);
  // p3 = prom<V +>{
  //   LHS1 = ld LHS;
  //   LHS2 = force? LHS1;
  //   checkMissing(LHS2);
  //   return LHS2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r12 = dyn iniFn2[mCall, data, LHS, `...`](p1, p2, p3, ddd1)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args15[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iniFn2_, 4, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 27 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r13 = dyn _Deprecated[msg]("selfStart initializing functions should have a final '...' argument since R 4.1.0")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Deprecated, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 32 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // iniFn3 = ldf iniFn
  Rsh_Fir_reg_iniFn3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p4 = prom<V +>{
  //   mCall3 = ld mCall;
  //   mCall4 = force? mCall3;
  //   checkMissing(mCall4);
  //   return mCall4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_4, CCP, RHO);
  // p5 = prom<V +>{
  //   data3 = ld data;
  //   data4 = force? data3;
  //   checkMissing(data4);
  //   return data4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_5, CCP, RHO);
  // p6 = prom<V +>{
  //   LHS3 = ld LHS;
  //   LHS4 = force? LHS3;
  //   checkMissing(LHS4);
  //   return LHS4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24150463_6, CCP, RHO);
  // r17 = dyn iniFn3[mCall, data, LHS](p4, p5, p6)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iniFn3_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

D10_:;
  // deopt 41 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_inner24150463_(SEXP CCP, SEXP RHO) {
  // iniFn = ld iniFn
  Rsh_Fir_reg_iniFn = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // iniFn1 = force? iniFn
  Rsh_Fir_reg_iniFn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iniFn);
  // checkMissing(iniFn1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_iniFn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return iniFn1
  return Rsh_Fir_reg_iniFn1_;
}
SEXP Rsh_Fir_user_promise_inner24150463_1(SEXP CCP, SEXP RHO) {
  // mCall1 = ld mCall
  Rsh_Fir_reg_mCall1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // mCall2 = force? mCall1
  Rsh_Fir_reg_mCall2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mCall1_);
  // checkMissing(mCall2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_mCall2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return mCall2
  return Rsh_Fir_reg_mCall2_;
}
SEXP Rsh_Fir_user_promise_inner24150463_2(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner24150463_3(SEXP CCP, SEXP RHO) {
  // LHS1 = ld LHS
  Rsh_Fir_reg_LHS1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // LHS2 = force? LHS1
  Rsh_Fir_reg_LHS2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LHS1_);
  // checkMissing(LHS2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_LHS2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return LHS2
  return Rsh_Fir_reg_LHS2_;
}
SEXP Rsh_Fir_user_promise_inner24150463_4(SEXP CCP, SEXP RHO) {
  // mCall3 = ld mCall
  Rsh_Fir_reg_mCall3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // mCall4 = force? mCall3
  Rsh_Fir_reg_mCall4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mCall3_);
  // checkMissing(mCall4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_mCall4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return mCall4
  return Rsh_Fir_reg_mCall4_;
}
SEXP Rsh_Fir_user_promise_inner24150463_5(SEXP CCP, SEXP RHO) {
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return data4
  return Rsh_Fir_reg_data4_;
}
SEXP Rsh_Fir_user_promise_inner24150463_6(SEXP CCP, SEXP RHO) {
  // LHS3 = ld LHS
  Rsh_Fir_reg_LHS3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // LHS4 = force? LHS3
  Rsh_Fir_reg_LHS4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LHS3_);
  // checkMissing(LHS4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_LHS4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return LHS4
  return Rsh_Fir_reg_LHS4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
