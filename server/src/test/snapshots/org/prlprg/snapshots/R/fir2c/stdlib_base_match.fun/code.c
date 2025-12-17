#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3643817200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3643817200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3643817200_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3643817200_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_match_fun;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_match_fun2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_match_fun3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_is_function;
  SEXP Rsh_Fir_reg_r11_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3643817200
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3643817200_, RHO, CCP);
  // st `match.fun` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn match_fun("*")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st outer = <int 1, 2, 3, 4, 5>
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   match_fun1 = ldf `match.fun`;
  //   p = prom<V +>{
  //     outer = ld outer;
  //     outer1 = force? outer;
  //     checkMissing(outer1);
  //     return outer1;
  //   };
  //   r3 = dyn match_fun1[, descend](p, FALSE);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn try(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // match_fun2 = ldf `match.fun`
  Rsh_Fir_reg_match_fun2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   outer2 = ld outer;
  //   outer3 = force? outer2;
  //   checkMissing(outer3);
  //   return outer3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn match_fun2(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun2_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L7_:;
  // match_fun3 = ldf `match.fun`
  Rsh_Fir_reg_match_fun3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

L8_:;
  // r8 = dyn base(<lang match.fun("outer")>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r10 = dyn match_fun3("outer")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun3_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn is_function(r10)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_match_fun1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // match_fun1 = ldf `match.fun`
  Rsh_Fir_reg_match_fun1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p = prom<V +>{
  //   outer = ld outer;
  //   outer1 = force? outer;
  //   checkMissing(outer1);
  //   return outer1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn match_fun1[, descend](p, FALSE)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_outer1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // outer = ld outer
  Rsh_Fir_reg_outer = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // outer1 = force? outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer);
  // checkMissing(outer1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_outer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return outer1
  return Rsh_Fir_reg_outer1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_outer2_;
  SEXP Rsh_Fir_reg_outer3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // outer2 = ld outer
  Rsh_Fir_reg_outer2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // outer3 = force? outer2
  Rsh_Fir_reg_outer3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer2_);
  // checkMissing(outer3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_outer3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return outer3
  return Rsh_Fir_reg_outer3_;
}
SEXP Rsh_Fir_user_function_inner3643817200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3643817200 dynamic dispatch ([FUN, descend])

  return Rsh_Fir_user_version_inner3643817200_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3643817200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3643817200 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3643817200/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_FUN;
  SEXP Rsh_Fir_reg_descend;
  SEXP Rsh_Fir_reg_descend_isMissing;
  SEXP Rsh_Fir_reg_descend_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_FUN1_;
  SEXP Rsh_Fir_reg_FUN2_;
  SEXP Rsh_Fir_reg_is_function1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_FUN3_;
  SEXP Rsh_Fir_reg_FUN4_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_FUN5_;
  SEXP Rsh_Fir_reg_FUN6_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_FUN7_;
  SEXP Rsh_Fir_reg_FUN8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_FUN9_;
  SEXP Rsh_Fir_reg_FUN10_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_eval_parent;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_FUN11_;
  SEXP Rsh_Fir_reg_FUN12_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_descend1_;
  SEXP Rsh_Fir_reg_descend2_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_get;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_get1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_FUN19_;
  SEXP Rsh_Fir_reg_FUN20_;
  SEXP Rsh_Fir_reg_is_function1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_FUN23_;
  SEXP Rsh_Fir_reg_FUN24_;

  // Bind parameters
  Rsh_Fir_reg_FUN = PARAMS[0];
  Rsh_Fir_reg_descend = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st FUN = FUN
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_FUN, RHO);
  (void)(Rsh_Fir_reg_FUN);
  // descend_isMissing = missing.0(descend)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_descend;
  Rsh_Fir_reg_descend_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if descend_isMissing then L0(TRUE) else L0(descend)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_descend_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_descend_orDefault = Rsh_const(CCP, 11);
    goto L0_;
  } else {
  // L0(descend)
    Rsh_Fir_reg_descend_orDefault = Rsh_Fir_reg_descend;
    goto L0_;
  }

L0_:;
  // st descend = descend_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_descend_orDefault, RHO);
  (void)(Rsh_Fir_reg_descend_orDefault);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L18_:;
  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym FUN>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [FUN1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_FUN1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L20_:;
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn is_function(FUN2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_FUN2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function1, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L22_:;
  // FUN3 = ld FUN
  Rsh_Fir_reg_FUN3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 6 [FUN3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_FUN3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L4_:;
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c2 then L29() else L5(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L29()
    goto L29_;
  } else {
  // L5(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L5_;
  }

L21_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L23_:;
  // FUN4 = force? FUN3
  Rsh_Fir_reg_FUN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN3_);
  // checkMissing(FUN4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_FUN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FUN4
  return Rsh_Fir_reg_FUN4_;

L26_:;
  // FUN5 = ld FUN
  Rsh_Fir_reg_FUN5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

L27_:;
  // r5 = dyn base1(<sym FUN>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L4_;

D3_:;
  // deopt 12 [FUN5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_FUN5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L5_:;
  // c11 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c11 then L7(c11) else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L7(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L7_;
  } else {
  // L35()
    goto L35_;
  }

L28_:;
  // FUN6 = force? FUN5
  Rsh_Fir_reg_FUN6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN5_);
  // checkMissing(FUN6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_FUN6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(FUN6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_FUN6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args22);
  // goto L4(c1)
  // L4(c1)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_c1_;
  goto L4_;

L29_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L6_:;
  // r10 = `==`(r8, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args24);
  // c8 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // c9 = `&&`(c7, c8)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args26);
  // goto L5(c9)
  // L5(c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c9_;
  goto L5_;

L7_:;
  // r13 = `!`(c12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args27);
  // c21 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c21 then L40() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L40()
    goto L40_;
  } else {
  // L9()
    goto L9_;
  }

L30_:;
  // FUN7 = ld FUN
  Rsh_Fir_reg_FUN7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L31_:;
  // r7 = dyn base2(<sym FUN>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(c2, r7)
  // L6(c2, r7)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L6_;

L35_:;
  // sym3 = ldf `is.symbol`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf `is.symbol` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

D4_:;
  // deopt 17 [c2, FUN7]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_FUN7_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L8_:;
  // c18 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // c19 = `||`(c16, c18)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args32);
  // goto L7(c19)
  // L7(c19)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c19_;
  goto L7_;

L9_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

L32_:;
  // FUN8 = force? FUN7
  Rsh_Fir_reg_FUN8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN7_);
  // checkMissing(FUN8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_FUN8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn length(FUN8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_FUN8_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

L36_:;
  // FUN9 = ld FUN
  Rsh_Fir_reg_FUN9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L37_:;
  // r11 = dyn base3(<sym FUN>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(c11, r11)
  // L8(c11, r11)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L8_;

L40_:;
  // eval_parent = ldf `eval.parent`
  Rsh_Fir_reg_eval_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D5_:;
  // deopt 20 [c2, r9]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [c11, FUN9]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_FUN9_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L6(c2, r9)
  // L6(c2, r9)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L6_;

L38_:;
  // FUN10 = force? FUN9
  Rsh_Fir_reg_FUN10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN9_);
  // checkMissing(FUN10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_FUN10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c17 = `is.symbol`(FUN10)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_FUN10_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args37);
  // goto L8(c11, c17)
  // L8(c11, c17)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c17_;
  goto L8_;

L41_:;
  // p = prom<V +>{
  //   sym4 = ldf substitute;
  //   base4 = ldf substitute in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   substitute = ldf substitute in base;
  //   r16 = dyn substitute(<lang substitute(FUN)>);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base4(<lang substitute(FUN)>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_, 0, NULL, CCP, RHO);
  // r18 = dyn eval_parent(p)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval_parent, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L51_:;
  // r30 = dyn parent_frame(2.0)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

D8_:;
  // deopt 33 [r18]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 53 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L42_:;
  // st FUN = r18
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym5 = ldf `is.symbol`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf `is.symbol` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L52_:;
  // st envir = r30
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // descend1 = ld descend
  Rsh_Fir_reg_descend1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

D14_:;
  // deopt 55 [descend1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_descend1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L10_:;
  // r21 = `!`(r20)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args44);
  // c23 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c23 then L46() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L46()
    goto L46_;
  } else {
  // L11()
    goto L11_;
  }

L43_:;
  // FUN11 = ld FUN
  Rsh_Fir_reg_FUN11_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L44_:;
  // r19 = dyn base5(<sym FUN>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L10_;

L53_:;
  // descend2 = force? descend1
  Rsh_Fir_reg_descend2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_descend1_);
  // checkMissing(descend2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_descend2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(descend2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_descend2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c24 then L54() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L54()
    goto L54_;
  } else {
  // L14()
    goto L14_;
  }

D9_:;
  // deopt 36 [FUN11]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_FUN11_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_r28_ = Rsh_const(CCP, 22);
  goto L12_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L14_:;
  // get1 = ldf get
  Rsh_Fir_reg_get1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L15_:;
  // FUN23 = ld FUN
  Rsh_Fir_reg_FUN23_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

L45_:;
  // FUN12 = force? FUN11
  Rsh_Fir_reg_FUN12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN11_);
  // checkMissing(FUN12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_FUN12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c22 = `is.symbol`(FUN12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_FUN12_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args50);
  // goto L10(c22)
  // L10(c22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_c22_;
  goto L10_;

L46_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

L54_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

D10_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 90 [FUN23]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_FUN23_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L47_:;
  // p3 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p2 = prom<V +>{
  //     deparse = ldf deparse;
  //     p1 = prom<V +>{
  //       FUN13 = ld FUN;
  //       FUN14 = force? FUN13;
  //       checkMissing(FUN14);
  //       return FUN14;
  //     };
  //     r23 = dyn deparse(p1);
  //     return r23;
  //   };
  //   r25 = dyn gettextf("'%s' is not a function, character or symbol", p2);
  //   return r25;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_1, 0, NULL, CCP, RHO);
  // r27 = dyn stop[, domain](p3, NA_LGL)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L55_:;
  // p4 = prom<V +>{
  //   sym6 = ldf `as.character`;
  //   base6 = ldf `as.character` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   FUN15 = ld FUN;
  //   FUN16 = force? FUN15;
  //   checkMissing(FUN16);
  //   as_character = ldf `as.character` in base;
  //   r33 = dyn as_character(FUN16);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base6(<sym FUN>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   envir = ld envir;
  //   envir1 = force? envir;
  //   checkMissing(envir1);
  //   return envir1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_5, 0, NULL, CCP, RHO);
  // r36 = dyn get[, mode, envir](p4, "function", p5)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

L58_:;
  // p6 = prom<V +>{
  //   sym7 = ldf `as.character`;
  //   base7 = ldf `as.character` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r39):
  //   return r39;
  // L1():
  //   FUN17 = ld FUN;
  //   FUN18 = force? FUN17;
  //   checkMissing(FUN18);
  //   as_character1 = ldf `as.character` in base;
  //   r40 = dyn as_character1(FUN18);
  //   goto L0(r40);
  // L2():
  //   r38 = dyn base7(<sym FUN>);
  //   goto L0(r38);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   envir2 = ld envir;
  //   envir3 = force? envir2;
  //   checkMissing(envir3);
  //   return envir3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_7, 0, NULL, CCP, RHO);
  // r43 = dyn get1[, mode, envir](p6, "any", p7)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

L68_:;
  // FUN24 = force? FUN23
  Rsh_Fir_reg_FUN24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN23_);
  // checkMissing(FUN24)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_FUN24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FUN24
  return Rsh_Fir_reg_FUN24_;

D11_:;
  // deopt 45 [r27]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 64 [r36]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 73 [r43]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

L56_:;
  // st FUN = r36
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L15()
  // L15()
  goto L15_;

L59_:;
  // st FUN = r43
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym8 = ldf `is.function`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base8 = ldf `is.function` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard8 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L16_:;
  // r47 = `!`(r45)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args69);
  // c25 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c25 then L64() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L64()
    goto L64_;
  } else {
  // L17()
    goto L17_;
  }

L60_:;
  // FUN19 = ld FUN
  Rsh_Fir_reg_FUN19_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

L61_:;
  // r44 = dyn base8(<sym FUN>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L16(r44)
  // L16(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L16_;

D19_:;
  // deopt 77 [FUN19]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_FUN19_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L15()
  // L15()
  goto L15_;

L62_:;
  // FUN20 = force? FUN19
  Rsh_Fir_reg_FUN20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN19_);
  // checkMissing(FUN20)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_FUN20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // is_function1 = ldf `is.function` in base
  Rsh_Fir_reg_is_function1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r46 = dyn is_function1(FUN20)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_FUN20_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L64_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D20_:;
  // deopt 80 [r46]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L16(r46)
  // L16(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L16_;

L65_:;
  // p9 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p8 = prom<V +>{
  //     FUN21 = ld FUN;
  //     FUN22 = force? FUN21;
  //     checkMissing(FUN22);
  //     return FUN22;
  //   };
  //   r49 = dyn gettextf1("found non-function '%s'", p8);
  //   return r49;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_8, 0, NULL, CCP, RHO);
  // r51 = dyn stop1[, domain](p9, NA_LGL)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D22_:;
  // deopt 87 [r51]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L15()
  // L15()
  goto L15_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf substitute
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf substitute in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r16 = dyn substitute(<lang substitute(FUN)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base4(<lang substitute(FUN)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // p2 = prom<V +>{
  //   deparse = ldf deparse;
  //   p1 = prom<V +>{
  //     FUN13 = ld FUN;
  //     FUN14 = force? FUN13;
  //     checkMissing(FUN14);
  //     return FUN14;
  //   };
  //   r23 = dyn deparse(p1);
  //   return r23;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_2, 0, NULL, CCP, RHO);
  // r25 = dyn gettextf("'%s' is not a function, character or symbol", p2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p1 = prom<V +>{
  //   FUN13 = ld FUN;
  //   FUN14 = force? FUN13;
  //   checkMissing(FUN14);
  //   return FUN14;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_3, 0, NULL, CCP, RHO);
  // r23 = dyn deparse(p1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN13_;
  SEXP Rsh_Fir_reg_FUN14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // FUN13 = ld FUN
  Rsh_Fir_reg_FUN13_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // FUN14 = force? FUN13
  Rsh_Fir_reg_FUN14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN13_);
  // checkMissing(FUN14)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_FUN14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return FUN14
  return Rsh_Fir_reg_FUN14_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_FUN15_;
  SEXP Rsh_Fir_reg_FUN16_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf `as.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf `as.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // FUN15 = ld FUN
  Rsh_Fir_reg_FUN15_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // FUN16 = force? FUN15
  Rsh_Fir_reg_FUN16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN15_);
  // checkMissing(FUN16)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_FUN16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r33 = dyn as_character(FUN16)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_FUN16_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base6(<sym FUN>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_envir1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // envir = ld envir
  Rsh_Fir_reg_envir = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // envir1 = force? envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir);
  // checkMissing(envir1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_envir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return envir1
  return Rsh_Fir_reg_envir1_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_FUN17_;
  SEXP Rsh_Fir_reg_FUN18_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf `as.character`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base7 = ldf `as.character` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L1_:;
  // FUN17 = ld FUN
  Rsh_Fir_reg_FUN17_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // FUN18 = force? FUN17
  Rsh_Fir_reg_FUN18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN17_);
  // checkMissing(FUN18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_FUN18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r40 = dyn as_character1(FUN18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_FUN18_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r38 = dyn base7(<sym FUN>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_envir3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // envir2 = ld envir
  Rsh_Fir_reg_envir2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // envir3 = force? envir2
  Rsh_Fir_reg_envir3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir2_);
  // checkMissing(envir3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_envir3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return envir3
  return Rsh_Fir_reg_envir3_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // p8 = prom<V +>{
  //   FUN21 = ld FUN;
  //   FUN22 = force? FUN21;
  //   checkMissing(FUN22);
  //   return FUN22;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3643817200_9, 0, NULL, CCP, RHO);
  // r49 = dyn gettextf1("found non-function '%s'", p8)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner3643817200_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN21_;
  SEXP Rsh_Fir_reg_FUN22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3643817200/0: expected 0, got %d", NCAPTURES);

  // FUN21 = ld FUN
  Rsh_Fir_reg_FUN21_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // FUN22 = force? FUN21
  Rsh_Fir_reg_FUN22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN21_);
  // checkMissing(FUN22)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_FUN22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return FUN22
  return Rsh_Fir_reg_FUN22_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
