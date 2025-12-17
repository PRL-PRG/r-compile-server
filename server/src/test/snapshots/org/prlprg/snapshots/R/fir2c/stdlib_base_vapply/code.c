#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1679253917_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1679253917_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1679253917_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1679253917_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner1679253917
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1679253917_, RHO, CCP);
  // st vapply = r
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
SEXP Rsh_Fir_user_function_inner1679253917_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1679253917 dynamic dispatch ([X, FUN, `FUN.VALUE`, `...`, `USE.NAMES`])

  return Rsh_Fir_user_version_inner1679253917_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1679253917_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1679253917 version 0 (*, *, *, dots, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1679253917/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_FUN;  // FUN
  SEXP Rsh_Fir_reg_FUN_VALUE;  // FUN_VALUE
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_USE_NAMES;  // USE_NAMES
  SEXP Rsh_Fir_reg_USE_NAMES_isMissing;  // USE_NAMES_isMissing
  SEXP Rsh_Fir_reg_USE_NAMES_orDefault;  // USE_NAMES_orDefault
  SEXP Rsh_Fir_reg_match_fun;  // match_fun
  SEXP Rsh_Fir_reg_FUN1_;  // FUN1
  SEXP Rsh_Fir_reg_FUN2_;  // FUN2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_is_vector;  // is_vector
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_X4_;  // X4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_X6_;  // X6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg__Internal;  // _Internal
  SEXP Rsh_Fir_reg_r13_;  // r13

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_FUN = PARAMS[1];
  Rsh_Fir_reg_FUN_VALUE = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_USE_NAMES = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // st FUN = FUN
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_FUN, RHO);
  (void)(Rsh_Fir_reg_FUN);
  // st `FUN.VALUE` = FUN_VALUE
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_FUN_VALUE, RHO);
  (void)(Rsh_Fir_reg_FUN_VALUE);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // USE_NAMES_isMissing = missing.0(USE_NAMES)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_USE_NAMES;
  Rsh_Fir_reg_USE_NAMES_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if USE_NAMES_isMissing then L0(TRUE) else L0(USE_NAMES)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_USE_NAMES_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_USE_NAMES_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(USE_NAMES)
    Rsh_Fir_reg_USE_NAMES_orDefault = Rsh_Fir_reg_USE_NAMES;
    goto L0_;
  }

L0_:;
  // st `USE.NAMES` = USE_NAMES_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_USE_NAMES_orDefault, RHO);
  (void)(Rsh_Fir_reg_USE_NAMES_orDefault);
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L1_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L13()
    goto L13_;
  }

L2_:;
  // c10 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c10 then L18() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L18()
    goto L18_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c7 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c8 = `||`(c5, c7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c8)
  // L2(c8)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c8_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1679253917_, CCP, RHO);
  // r1 = dyn match_fun(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st FUN = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.vector`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.vector` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base(<sym X>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D2_:;
  // deopt 7 [X1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r4 = dyn is_vector(X2, "any")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_X2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L13_:;
  // sym1 = ldf `is.object`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.object` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L15_:;
  // r6 = dyn base1(<sym X>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(c, r6)
  // L3(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D4_:;
  // deopt 14 [c, X3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_X3_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(X4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_X4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L3(c, c6)
  // L3(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c6_;
  goto L3_;

L18_:;
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   X5 = ld X;
  //   X6 = force? X5;
  //   checkMissing(X6);
  //   return X6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1679253917_1, CCP, RHO);
  // r9 = dyn as_list(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D6_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // st X = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L5()
  // L5()
  goto L5_;

L22_:;
  // _Internal = ldf `.Internal` in base
  Rsh_Fir_reg__Internal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn _Internal(<lang vapply(X, FUN, FUN.VALUE, USE.NAMES)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Internal, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

L23_:;
  // r11 = dyn base2(<lang vapply(X, FUN, FUN.VALUE, USE.NAMES)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1679253917_(SEXP CCP, SEXP RHO) {
  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1679253917_1(SEXP CCP, SEXP RHO) {
  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return X6
  return Rsh_Fir_reg_X6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
