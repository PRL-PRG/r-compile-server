#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1115738149_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1115738149_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1115738149_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1115738149_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1115738149_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1115738149_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1115738149_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1115738149_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1115738149
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1115738149_, RHO, CCP);
  // st sapply = r
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
SEXP Rsh_Fir_user_function_inner1115738149_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1115738149 dynamic dispatch ([X, FUN, `...`, simplify, `USE.NAMES`])

  return Rsh_Fir_user_version_inner1115738149_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1115738149_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1115738149 version 0 (*, *, dots, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1115738149/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_FUN;  // FUN
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_simplify;  // simplify
  SEXP Rsh_Fir_reg_USE_NAMES;  // USE_NAMES
  SEXP Rsh_Fir_reg_simplify_isMissing;  // simplify_isMissing
  SEXP Rsh_Fir_reg_simplify_orDefault;  // simplify_orDefault
  SEXP Rsh_Fir_reg_USE_NAMES_isMissing;  // USE_NAMES_isMissing
  SEXP Rsh_Fir_reg_USE_NAMES_orDefault;  // USE_NAMES_orDefault
  SEXP Rsh_Fir_reg_match_fun;  // match_fun
  SEXP Rsh_Fir_reg_FUN1_;  // FUN1
  SEXP Rsh_Fir_reg_FUN2_;  // FUN2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_FUN3_;  // FUN3
  SEXP Rsh_Fir_reg_FUN4_;  // FUN4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_USE_NAMES1_;  // USE_NAMES1
  SEXP Rsh_Fir_reg_USE_NAMES2_;  // USE_NAMES2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_X4_;  // X4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_answer;  // answer
  SEXP Rsh_Fir_reg_answer1_;  // answer1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_X6_;  // X6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_isFALSE;  // isFALSE
  SEXP Rsh_Fir_reg_simplify1_;  // simplify1
  SEXP Rsh_Fir_reg_simplify2_;  // simplify2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_simplify2array;  // simplify2array
  SEXP Rsh_Fir_reg_answer2_;  // answer2
  SEXP Rsh_Fir_reg_answer3_;  // answer3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_simplify3_;  // simplify3
  SEXP Rsh_Fir_reg_simplify4_;  // simplify4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_answer4_;  // answer4
  SEXP Rsh_Fir_reg_answer5_;  // answer5

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_FUN = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_simplify = PARAMS[3];
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
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // simplify_isMissing = missing.0(simplify)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_simplify;
  Rsh_Fir_reg_simplify_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if simplify_isMissing then L0(TRUE) else L0(simplify)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_simplify_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_simplify_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(simplify)
    Rsh_Fir_reg_simplify_orDefault = Rsh_Fir_reg_simplify;
    goto L0_;
  }

L0_:;
  // st simplify = simplify_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_simplify_orDefault, RHO);
  (void)(Rsh_Fir_reg_simplify_orDefault);
  // USE_NAMES_isMissing = missing.0(USE_NAMES)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_USE_NAMES;
  Rsh_Fir_reg_USE_NAMES_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if USE_NAMES_isMissing then L1(TRUE) else L1(USE_NAMES)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_USE_NAMES_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_USE_NAMES_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(USE_NAMES)
    Rsh_Fir_reg_USE_NAMES_orDefault = Rsh_Fir_reg_USE_NAMES;
    goto L1_;
  }

L1_:;
  // st `USE.NAMES` = USE_NAMES_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_USE_NAMES_orDefault, RHO);
  (void)(Rsh_Fir_reg_USE_NAMES_orDefault);
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L2_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c10 then L20() else L4(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L20()
    goto L20_;
  } else {
  // L4(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L4_;
  }

L3_:;
  // c7 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L2(c8)
  // L2(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L2_;

L4_:;
  // c23 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c23 then L28() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L28()
    goto L28_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // c20 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c15, c20)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L4(c21)
  // L4(c21)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c21_;
  goto L4_;

L6_:;
  // c19 = `==`(r10, NULL)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L5(c18, c19)
  // L5(c18, c19)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c19_;
  goto L5_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L9_:;
  // answer4 = ld answer
  Rsh_Fir_reg_answer4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_, CCP, RHO);
  // r1 = dyn match_fun(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // st FUN = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   X1 = ld X;
  //   X2 = force? X1;
  //   checkMissing(X2);
  //   return X2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_1, CCP, RHO);
  // p2 = prom<V +>{
  //   FUN3 = ld FUN;
  //   FUN4 = force? FUN3;
  //   checkMissing(FUN4);
  //   return FUN4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_2, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r4 = dyn lapply[X, FUN, `...`](p1, p2, ddd1)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // st answer = r4
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // USE_NAMES1 = ld `USE.NAMES`
  Rsh_Fir_reg_USE_NAMES1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 14 [USE_NAMES1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_USE_NAMES1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // USE_NAMES2 = force? USE_NAMES1
  Rsh_Fir_reg_USE_NAMES2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_USE_NAMES1_);
  // checkMissing(USE_NAMES2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_USE_NAMES2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(USE_NAMES2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_USE_NAMES2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L15() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L2_;
  }

L15_:;
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // r5 = dyn base(<sym X>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(c, r5)
  // L3(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D5_:;
  // deopt 17 [c, X3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_X3_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c6 = `is.character`(X4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_X4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L3(c, c6)
  // L3(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_c6_;
  goto L3_;

L20_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L22_:;
  // r7 = dyn base1(<lang names(answer)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(c10, r7)
  // L5(c10, r7)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

L23_:;
  // answer = ld answer
  Rsh_Fir_reg_answer = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

L24_:;
  // r9 = dyn base2(<sym answer>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(c10, r9)
  // L6(c10, r9)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

D6_:;
  // deopt 24 [c10, answer]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_answer;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // answer1 = force? answer
  Rsh_Fir_reg_answer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_answer);
  // checkMissing(answer1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_answer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r11 = dyn names(answer1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_answer1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 27 [c10, r11]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L6(c10, r11)
  // L6(c10, r11)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L6_;

L28_:;
  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

D8_:;
  // deopt 30 [X5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // l = ld answer
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

D9_:;
  // deopt 33 [X6, l, X6]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_X6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_X6_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // r12 = dyn names__(l, NULL, X6)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 35 [X6, r12]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_X6_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // st answer = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L8()
  // L8()
  goto L8_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p3 = prom<V +>{
  //   simplify1 = ld simplify;
  //   simplify2 = force? simplify1;
  //   checkMissing(simplify2);
  //   return simplify2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_3, CCP, RHO);
  // r14 = dyn isFALSE(p3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

D12_:;
  // deopt 42 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c24 then L35() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L35()
    goto L35_;
  } else {
  // L9()
    goto L9_;
  }

L35_:;
  // simplify2array = ldf simplify2array
  Rsh_Fir_reg_simplify2array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p4 = prom<V +>{
  //   answer2 = ld answer;
  //   answer3 = force? answer2;
  //   checkMissing(answer3);
  //   return answer3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_4, CCP, RHO);
  // p5 = prom<V +>{
  //   simplify3 = ld simplify;
  //   simplify4 = force? simplify3;
  //   checkMissing(simplify4);
  //   r17 = `==`(simplify4, "array");
  //   visible.0();
  //   return r17;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1115738149_5, CCP, RHO);
  // r19 = dyn simplify2array[, higher](p4, p5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_simplify2array, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 49 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

D15_:;
  // deopt 50 [answer4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_answer4_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // answer5 = force? answer4
  Rsh_Fir_reg_answer5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_answer4_);
  // checkMissing(answer5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_answer5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return answer5
  return Rsh_Fir_reg_answer5_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_(SEXP CCP, SEXP RHO) {
  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_1(SEXP CCP, SEXP RHO) {
  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return X2
  return Rsh_Fir_reg_X2_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_2(SEXP CCP, SEXP RHO) {
  // FUN3 = ld FUN
  Rsh_Fir_reg_FUN3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // FUN4 = force? FUN3
  Rsh_Fir_reg_FUN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN3_);
  // checkMissing(FUN4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_FUN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return FUN4
  return Rsh_Fir_reg_FUN4_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_3(SEXP CCP, SEXP RHO) {
  // simplify1 = ld simplify
  Rsh_Fir_reg_simplify1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // simplify2 = force? simplify1
  Rsh_Fir_reg_simplify2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simplify1_);
  // checkMissing(simplify2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_simplify2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return simplify2
  return Rsh_Fir_reg_simplify2_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_4(SEXP CCP, SEXP RHO) {
  // answer2 = ld answer
  Rsh_Fir_reg_answer2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // answer3 = force? answer2
  Rsh_Fir_reg_answer3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_answer2_);
  // checkMissing(answer3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_answer3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return answer3
  return Rsh_Fir_reg_answer3_;
}
SEXP Rsh_Fir_user_promise_inner1115738149_5(SEXP CCP, SEXP RHO) {
  // simplify3 = ld simplify
  Rsh_Fir_reg_simplify3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // simplify4 = force? simplify3
  Rsh_Fir_reg_simplify4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simplify3_);
  // checkMissing(simplify4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_simplify4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r17 = `==`(simplify4, "array")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_simplify4_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
