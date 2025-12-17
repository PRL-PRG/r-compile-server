#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1358582909_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1358582909_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1358582909_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1358582909_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner987613256_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner987613256_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1704214286_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1704214286_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1704214286_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1704214286_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_power;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_quasi;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1358582909
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1358582909_, RHO, CCP);
  // st power = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // power = ldf power
  Rsh_Fir_reg_power = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn power()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_power, 0, NULL, NULL, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // quasi = ldf quasi
  Rsh_Fir_reg_quasi = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   power1 = ldf power;
  //   p = prom<V +>{
  //     return 0.3333333333333333;
  //   };
  //   r3 = dyn power1(p);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn quasi[link](p1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quasi, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // c = `is.object`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L6() else L7(r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(r5)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r5_;
    goto L7_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L6_:;
  // dr = tryDispatchBuiltin.1("[", r5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r14 = dyn __(r11, r12)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L0_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L9_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r13 = dyn c1("linkfun", "linkinv")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L10_:;
  // r10 = dyn base("linkfun", "linkinv")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7, r10)
  // L1(r7, r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
  goto L1_;

D4_:;
  // deopt 16 [r7, r13]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1(r7, r13)
  // L1(r7, r13)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_power1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // power1 = ldf power
  Rsh_Fir_reg_power1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p = prom<V +>{
  //   return 0.3333333333333333;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn power1(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_power1_, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 0.3333333333333333
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_function_inner1358582909_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1358582909 dynamic dispatch ([lambda])

  return Rsh_Fir_user_version_inner1358582909_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1358582909_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1358582909 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1358582909/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_lambda;
  SEXP Rsh_Fir_reg_lambda_isMissing;
  SEXP Rsh_Fir_reg_lambda_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_lambda1_;
  SEXP Rsh_Fir_reg_lambda2_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_lambda3_;
  SEXP Rsh_Fir_reg_lambda4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_lambda5_;
  SEXP Rsh_Fir_reg_lambda6_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_make_link;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_lambda7_;
  SEXP Rsh_Fir_reg_lambda8_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_make_link1_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r30_;

  // Bind parameters
  Rsh_Fir_reg_lambda = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // lambda_isMissing = missing.0(lambda)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_lambda;
  Rsh_Fir_reg_lambda_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if lambda_isMissing then L0(1.0) else L0(lambda)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lambda_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_lambda_orDefault = Rsh_const(CCP, 9);
    goto L0_;
  } else {
  // L0(lambda)
    Rsh_Fir_reg_lambda_orDefault = Rsh_Fir_reg_lambda;
    goto L0_;
  }

L0_:;
  // st lambda = lambda_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_lambda_orDefault, RHO);
  (void)(Rsh_Fir_reg_lambda_orDefault);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args12);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c then L2(c) else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2(c)
    Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c1;
    goto L2_;
  } else {
  // L14()
    goto L14_;
  }

L10_:;
  // lambda1 = ld lambda
  Rsh_Fir_reg_lambda1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<sym lambda>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [lambda1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_lambda1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c9 then L20() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L20()
    goto L20_;
  } else {
  // L4()
    goto L4_;
  }

L12_:;
  // lambda2 = force? lambda1
  Rsh_Fir_reg_lambda2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda1_);
  // checkMissing(lambda2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_lambda2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn is_numeric(lambda2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_lambda2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L14_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L3_:;
  // c6 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args20);
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // lambda5 = ld lambda
  Rsh_Fir_reg_lambda5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L13_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L15_:;
  // lambda3 = ld lambda
  Rsh_Fir_reg_lambda3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L16_:;
  // r4 = dyn base1(<sym lambda>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(c, r4)
  // L3(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L3_;

L20_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D2_:;
  // deopt 9 [c, lambda3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_lambda3_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 [lambda5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_lambda5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // lambda4 = force? lambda3
  Rsh_Fir_reg_lambda4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda3_);
  // checkMissing(lambda4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lambda4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn is_na(lambda4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lambda4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L21_:;
  // r7 = dyn stop("invalid argument 'lambda'")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L24_:;
  // lambda6 = force? lambda5
  Rsh_Fir_reg_lambda6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda5_);
  // checkMissing(lambda6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_lambda6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r9 = `<=`(lambda6, 0.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_lambda6_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args26);
  // c10 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c10 then L25() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L25()
    goto L25_;
  } else {
  // L6()
    goto L6_;
  }

D3_:;
  // deopt 12 [c, r6]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // lambda7 = ld lambda
  Rsh_Fir_reg_lambda7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L18_:;
  // goto L3(c, r6)
  // L3(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L3_;

L22_:;
  // goto L5()
  // L5()
  goto L5_;

L25_:;
  // make_link = ldf `make.link`
  Rsh_Fir_reg_make_link = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [lambda7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_lambda7_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // r10 = dyn make_link("log")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_link, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L30_:;
  // lambda8 = force? lambda7
  Rsh_Fir_reg_lambda8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda7_);
  // checkMissing(lambda8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_lambda8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r13 = `==`(lambda8, 1.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_lambda8_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args30);
  // c11 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c11 then L31() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L31()
    goto L31_;
  } else {
  // L8()
    goto L8_;
  }

D8_:;
  // deopt 27 [r10]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // r17 = clos inner987613256
  Rsh_Fir_reg_r17_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner987613256_, RHO, CCP);
  // st linkfun = r17
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // r18 = clos inner1704214286
  Rsh_Fir_reg_r18_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1704214286_, RHO, CCP);
  // st linkinv = r18
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // r19 = clos inner1704214286
  Rsh_Fir_reg_r19_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1704214286_, RHO, CCP);
  // st `mu.eta` = r19
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // r20 = clos inner1704214286
  Rsh_Fir_reg_r20_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1704214286_, RHO, CCP);
  // st valideta = r20
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_1;

L31_:;
  // make_link1 = ldf `make.link`
  Rsh_Fir_reg_make_link1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L32() else D10()
  // L32()
  goto L32_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r14 = dyn make_link1("identity")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_link1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L36_:;
  // p = prom<V +>{
  //   sym2 = ldf round;
  //   base2 = ldf round in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   round = ldf round in base;
  //   r23 = dyn round(<sym lambda>, 3.0);
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base2(<sym lambda>, 3.0);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1358582909_, 0, NULL, CCP, RHO);
  // r25 = dyn paste0("mu^", p)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

D11_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 58 [r25]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_1;

L37_:;
  // st link = r25
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

D14_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p1 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   linkfun = ld linkfun;
  //   linkfun1 = force? linkfun;
  //   checkMissing(linkfun1);
  //   linkinv = ld linkinv;
  //   linkinv1 = force? linkinv;
  //   checkMissing(linkinv1);
  //   mu_eta = ld `mu.eta`;
  //   mu_eta1 = force? mu_eta;
  //   checkMissing(mu_eta1);
  //   valideta = ld valideta;
  //   valideta1 = force? valideta;
  //   checkMissing(valideta1);
  //   link = ld link;
  //   link1 = force? link;
  //   checkMissing(link1);
  //   list = ldf list in base;
  //   r28 = dyn list(linkfun1, linkinv1, mu_eta1, valideta1, link1);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base3[linkfun, linkinv, `mu.eta`, valideta, name](<sym linkfun>, <sym linkinv>, <sym mu.eta>, <sym valideta>, <sym link>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1358582909_1, 0, NULL, CCP, RHO);
  // r30 = dyn structure[, class](p1, "link-glm")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D15_:;
  // deopt 65 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L39_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner1358582909_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1358582909/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf round
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf round in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r23 = dyn round(<sym lambda>, 3.0)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base2(<sym lambda>, 3.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1358582909_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_linkfun;
  SEXP Rsh_Fir_reg_linkfun1_;
  SEXP Rsh_Fir_reg_linkinv;
  SEXP Rsh_Fir_reg_linkinv1_;
  SEXP Rsh_Fir_reg_mu_eta;
  SEXP Rsh_Fir_reg_mu_eta1_;
  SEXP Rsh_Fir_reg_valideta;
  SEXP Rsh_Fir_reg_valideta1_;
  SEXP Rsh_Fir_reg_link;
  SEXP Rsh_Fir_reg_link1_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1358582909/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // linkfun = ld linkfun
  Rsh_Fir_reg_linkfun = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // linkfun1 = force? linkfun
  Rsh_Fir_reg_linkfun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linkfun);
  // checkMissing(linkfun1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_linkfun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // linkinv = ld linkinv
  Rsh_Fir_reg_linkinv = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // linkinv1 = force? linkinv
  Rsh_Fir_reg_linkinv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linkinv);
  // checkMissing(linkinv1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_linkinv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // mu_eta = ld `mu.eta`
  Rsh_Fir_reg_mu_eta = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // mu_eta1 = force? mu_eta
  Rsh_Fir_reg_mu_eta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu_eta);
  // checkMissing(mu_eta1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_mu_eta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // valideta = ld valideta
  Rsh_Fir_reg_valideta = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // valideta1 = force? valideta
  Rsh_Fir_reg_valideta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valideta);
  // checkMissing(valideta1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_valideta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // link = ld link
  Rsh_Fir_reg_link = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // link1 = force? link
  Rsh_Fir_reg_link1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_link);
  // checkMissing(link1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_link1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r28 = dyn list(linkfun1, linkinv1, mu_eta1, valideta1, link1)
  SEXP Rsh_Fir_array_args43[5];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_linkfun1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_linkinv1_;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_mu_eta1_;
  Rsh_Fir_array_args43[3] = Rsh_Fir_reg_valideta1_;
  Rsh_Fir_array_args43[4] = Rsh_Fir_reg_link1_;
  SEXP Rsh_Fir_array_arg_names15[5];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 5, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base3[linkfun, linkinv, `mu.eta`, valideta, name](<sym linkfun>, <sym linkinv>, <sym mu.eta>, <sym valideta>, <sym link>)
  SEXP Rsh_Fir_array_args44[5];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args44[4] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[5];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names16[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names16[4] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 5, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner987613256_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner987613256 dynamic dispatch ([mu])

  return Rsh_Fir_user_version_inner987613256_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner987613256_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner987613256 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner987613256/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_mu;
  SEXP Rsh_Fir_reg_mu1_;
  SEXP Rsh_Fir_reg_mu2_;
  SEXP Rsh_Fir_reg_lambda1;
  SEXP Rsh_Fir_reg_lambda1_1;
  SEXP Rsh_Fir_reg_r2;

  // Bind parameters
  Rsh_Fir_reg_mu = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st mu = mu
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_mu, RHO);
  (void)(Rsh_Fir_reg_mu);
  // mu1 = ld mu
  Rsh_Fir_reg_mu1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [mu1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_mu1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L0_:;
  // mu2 = force? mu1
  Rsh_Fir_reg_mu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu1_);
  // checkMissing(mu2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_mu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // lambda = ld lambda
  Rsh_Fir_reg_lambda1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 1 [mu2, lambda]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_lambda1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L1_:;
  // lambda1 = force? lambda
  Rsh_Fir_reg_lambda1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda1);
  // checkMissing(lambda1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_lambda1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r = `^`(mu2, lambda1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_lambda1_1;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args48);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_function_inner1704214286_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1704214286 dynamic dispatch ([eta])

  return Rsh_Fir_user_version_inner1704214286_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1704214286_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1704214286 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1704214286/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_eta;
  SEXP Rsh_Fir_reg_pmax;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r5_2;

  // Bind parameters
  Rsh_Fir_reg_eta = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st eta = eta
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_eta, RHO);
  (void)(Rsh_Fir_reg_eta);
  // pmax = ldf pmax
  Rsh_Fir_reg_pmax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   eta1 = ld eta;
  //   eta2 = force? eta1;
  //   checkMissing(eta2);
  //   lambda = ld lambda;
  //   lambda1 = force? lambda;
  //   checkMissing(lambda1);
  //   r = `/`(1.0, lambda1);
  //   r1 = `^`(eta2, r);
  //   return r1;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1704214286_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c = `is.object`(_Machine1);
  //   if c then L1() else L2(_Machine1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_Machine3):
  //   r3 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r3);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1704214286_1, 0, NULL, CCP, RHO);
  // r5 = dyn pmax(p, p1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmax, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_2;
}
SEXP Rsh_Fir_user_promise_inner1704214286_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eta1_;
  SEXP Rsh_Fir_reg_eta2_;
  SEXP Rsh_Fir_reg_lambda2;
  SEXP Rsh_Fir_reg_lambda1_2;
  SEXP Rsh_Fir_reg_r3;
  SEXP Rsh_Fir_reg_r1_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1704214286/0: expected 0, got %d", NCAPTURES);

  // eta1 = ld eta
  Rsh_Fir_reg_eta1_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // eta2 = force? eta1
  Rsh_Fir_reg_eta2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eta1_);
  // checkMissing(eta2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_eta2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // lambda = ld lambda
  Rsh_Fir_reg_lambda2 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // lambda1 = force? lambda
  Rsh_Fir_reg_lambda1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_lambda2);
  // checkMissing(lambda1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_lambda1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r = `/`(1.0, lambda1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_lambda1_2;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args51);
  // r1 = `^`(eta2, r)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_eta2_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r3;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args52);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_promise_inner1704214286_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_r3_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1704214286/0: expected 0, got %d", NCAPTURES);

  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args54);
  // if c then L1() else L2(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // r3 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args57);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r3_2;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
