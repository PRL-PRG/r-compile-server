#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3833187206_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3833187206_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3833187206_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3833187206_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3833187206
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3833187206_, RHO, CCP);
  // st `all.equal.language` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3833187206_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3833187206 dynamic dispatch ([target, current, `...`])

  return Rsh_Fir_user_version_inner3833187206_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3833187206_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3833187206 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3833187206/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_mode;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_mode1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_mt;
  SEXP Rsh_Fir_reg_mt1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_mc;
  SEXP Rsh_Fir_reg_mc1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_all_equal_list;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_tryCatch;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_mt2_;
  SEXP Rsh_Fir_reg_mt3_;
  SEXP Rsh_Fir_reg_mc2_;
  SEXP Rsh_Fir_reg_mc3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ctxt;
  SEXP Rsh_Fir_reg_ctxt1_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_ttxt;
  SEXP Rsh_Fir_reg_ttxt1_;
  SEXP Rsh_Fir_reg_ctxt2_;
  SEXP Rsh_Fir_reg_ctxt3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_pmatch1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L0_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args);
  // if c6 then L23() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L23()
    goto L23_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L28() else D8()
  // L28()
  goto L28_;

L3_:;
  // st msg = r24
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 8);
  goto L5_;

L5_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L6_:;
  // c9 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c9 then L43() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L43()
    goto L43_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // ttxt = ld ttxt
  Rsh_Fir_reg_ttxt = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

L8_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r41 = dyn c13(r29, r32)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L57() else D23()
  // L57()
  goto L57_;

L9_:;
  // goto L8(NULL)
  // L8(NULL)
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 8);
  goto L8_;

L10_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L52() else D21()
  // L52()
  goto L52_;

L11_:;
  // goto L8(r37)
  // L8(r37)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r37_;
  goto L8_;

L12_:;
  // goto L11("target, current do not match when deparsed")
  // L11("target, current do not match when deparsed")
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 12);
  goto L11_;

L13_:;
  // c15 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c15 then L61() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L61()
    goto L61_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L63() else D25()
  // L63()
  goto L63_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   target1 = ld target;
  //   target2 = force? target1;
  //   checkMissing(target2);
  //   return target2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_, 0, NULL, CCP, RHO);
  // r1 = dyn mode(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // st mt = r1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // mode1 = ldf mode
  Rsh_Fir_reg_mode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   current1 = ld current;
  //   current2 = force? current1;
  //   checkMissing(current2);
  //   return current2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_1, 0, NULL, CCP, RHO);
  // r3 = dyn mode1(p1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // st mc = r3
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // mt = ld mt
  Rsh_Fir_reg_mt = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 10 [mt]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_mt;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // mt1 = force? mt
  Rsh_Fir_reg_mt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mt);
  // checkMissing(mt1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_mt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r4 = `==`(mt1, "expression")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mt1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L20() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L20_:;
  // mc = ld mc
  Rsh_Fir_reg_mc = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 14 [c, mc]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_mc;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // mc1 = force? mc
  Rsh_Fir_reg_mc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mc);
  // checkMissing(mc1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_mc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r5 = `==`(mc1, "expression")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_mc1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args14);
  // c3 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args16);
  // goto L0(c4)
  // L0(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L0_;

L23_:;
  // all_equal_list = ldf `all.equal.list`
  Rsh_Fir_reg_all_equal_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p2 = prom<V +>{
  //   target3 = ld target;
  //   target4 = force? target3;
  //   checkMissing(target4);
  //   return target4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   current3 = ld current;
  //   current4 = force? current3;
  //   checkMissing(current4);
  //   return current4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_3, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r8 = dyn all_equal_list[, , `...`](p2, p3, ddd1)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal_list, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 24 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p5 = prom<V +>{
  //   deparse = ldf deparse;
  //   p4 = prom<V +>{
  //     target5 = ld target;
  //     target6 = force? target5;
  //     checkMissing(target6);
  //     return target6;
  //   };
  //   r12 = dyn deparse(p4);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_4, 0, NULL, CCP, RHO);
  // r14 = dyn paste[, collapse](p5, "\n")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

D9_:;
  // deopt 33 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // st ttxt = r14
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p8 = prom<V +>{
  //   paste1 = ldf paste;
  //   p7 = prom<V +>{
  //     deparse1 = ldf deparse;
  //     p6 = prom<V +>{
  //       current5 = ld current;
  //       current6 = force? current5;
  //       checkMissing(current6);
  //       return current6;
  //     };
  //     r16 = dyn deparse1(p6);
  //     return r16;
  //   };
  //   r18 = dyn paste1[, collapse](p7, "\n");
  //   return r18;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_6, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   r20 = clos inner3708401697;
  //   return r20;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_9, 0, NULL, CCP, RHO);
  // r22 = dyn tryCatch[, error](p8, p9)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D11_:;
  // deopt 40 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // st ctxt = r22
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // mt2 = ld mt
  Rsh_Fir_reg_mt2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

L33_:;
  // r23 = dyn base(<lang if(`!=`(mt, mc), paste0("Modes of target, current: ", mt, ", ", mc))>, <lang if(is.null(ctxt), "current is not deparse()able", if(`!=`(ttxt, ctxt), {
  //       if(pmatch(ttxt, ctxt, 0), "target is a subset of current", if(pmatch(ctxt, ttxt, 0), "current is a subset of target", "target, current do not match when deparsed"))
  //     }))>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r23)
  // L3(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L3_;

D12_:;
  // deopt 44 [mt2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_mt2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // mt3 = force? mt2
  Rsh_Fir_reg_mt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mt2_);
  // checkMissing(mt3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_mt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // mc2 = ld mc
  Rsh_Fir_reg_mc2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L35() else D13()
  // L35()
  goto L35_;

D13_:;
  // deopt 45 [mt3, mc2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_mt3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_mc2_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L35_:;
  // mc3 = force? mc2
  Rsh_Fir_reg_mc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mc2_);
  // checkMissing(mc3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_mc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r25 = `!=`(mt3, mc3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_mt3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_mc3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args31);
  // c7 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c7 then L36() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L36()
    goto L36_;
  } else {
  // L4()
    goto L4_;
  }

L36_:;
  // paste2 = ldf paste0
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p10 = prom<V +>{
  //   mt4 = ld mt;
  //   mt5 = force? mt4;
  //   checkMissing(mt5);
  //   return mt5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   mc4 = ld mc;
  //   mc5 = force? mc4;
  //   checkMissing(mc5);
  //   return mc5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_11, 0, NULL, CCP, RHO);
  // r28 = dyn paste2("Modes of target, current: ", p10, ", ", p11)
  SEXP Rsh_Fir_array_args35[4];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args35[3] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 4, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

D15_:;
  // deopt 54 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(r28)
  // L5(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L5_;

L40_:;
  // ctxt = ld ctxt
  Rsh_Fir_reg_ctxt = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

L41_:;
  // r30 = dyn base1(<sym ctxt>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r30)
  // L6(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L6_;

D16_:;
  // deopt 58 [ctxt]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ctxt;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // ctxt1 = force? ctxt
  Rsh_Fir_reg_ctxt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctxt);
  // checkMissing(ctxt1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ctxt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c8 = `==`(ctxt1, NULL)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ctxt1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args38);
  // goto L6(c8)
  // L6(c8)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_c8_;
  goto L6_;

L43_:;
  // goto L8("current is not deparse()able")
  // L8("current is not deparse()able")
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 28);
  goto L8_;

D17_:;
  // deopt 63 [ttxt]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ttxt;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // ttxt1 = force? ttxt
  Rsh_Fir_reg_ttxt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ttxt);
  // checkMissing(ttxt1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ttxt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // ctxt2 = ld ctxt
  Rsh_Fir_reg_ctxt2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L46() else D18()
  // L46()
  goto L46_;

D18_:;
  // deopt 64 [ttxt1, ctxt2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_ttxt1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ctxt2_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // ctxt3 = force? ctxt2
  Rsh_Fir_reg_ctxt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctxt2_);
  // checkMissing(ctxt3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ctxt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r33 = `!=`(ttxt1, ctxt3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ttxt1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_ctxt3_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args41);
  // c10 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c10 then L47() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L47()
    goto L47_;
  } else {
  // L9()
    goto L9_;
  }

L47_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L48() else D19()
  // L48()
  goto L48_;

D19_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p12 = prom<V +>{
  //   ttxt2 = ld ttxt;
  //   ttxt3 = force? ttxt2;
  //   checkMissing(ttxt3);
  //   return ttxt3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   ctxt4 = ld ctxt;
  //   ctxt5 = force? ctxt4;
  //   checkMissing(ctxt5);
  //   return ctxt5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_13, 0, NULL, CCP, RHO);
  // r36 = dyn pmatch(p12, p13, 0)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L49() else D20()
  // L49()
  goto L49_;

D20_:;
  // deopt 72 [r36]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // c11 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c11 then L50() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L50()
    goto L50_;
  } else {
  // L10()
    goto L10_;
  }

L50_:;
  // goto L11("target is a subset of current")
  // L11("target is a subset of current")
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 30);
  goto L11_;

D21_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p14 = prom<V +>{
  //   ctxt6 = ld ctxt;
  //   ctxt7 = force? ctxt6;
  //   checkMissing(ctxt7);
  //   return ctxt7;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   ttxt4 = ld ttxt;
  //   ttxt5 = force? ttxt4;
  //   checkMissing(ttxt5);
  //   return ttxt5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_15, 0, NULL, CCP, RHO);
  // r40 = dyn pmatch1(p14, p15, 0)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D22_:;
  // deopt 80 [r40]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // c12 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c12 then L54() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L54()
    goto L54_;
  } else {
  // L12()
    goto L12_;
  }

L54_:;
  // goto L11("current is a subset of target")
  // L11("current is a subset of target")
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 31);
  goto L11_;

D23_:;
  // deopt 88 [r41]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L3(r41)
  // L3(r41)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r41_;
  goto L3_;

L58_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L60() else D24()
  // L60()
  goto L60_;

L59_:;
  // r42 = dyn base2(<sym msg>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r42)
  // L13(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L13_;

D24_:;
  // deopt 91 [msg]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L60_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c14 = `==`(msg1, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // goto L13(c14)
  // L13(c14)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_c14_;
  goto L13_;

L61_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 32);

D25_:;
  // deopt 96 [msg2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg3
  return Rsh_Fir_reg_msg3_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return target2
  return Rsh_Fir_reg_target2_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return current2
  return Rsh_Fir_reg_current2_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return target4
  return Rsh_Fir_reg_target4_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return current4
  return Rsh_Fir_reg_current4_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p4 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_5, 0, NULL, CCP, RHO);
  // r12 = dyn deparse(p4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // p7 = prom<V +>{
  //   deparse1 = ldf deparse;
  //   p6 = prom<V +>{
  //     current5 = ld current;
  //     current6 = force? current5;
  //     checkMissing(current6);
  //     return current6;
  //   };
  //   r16 = dyn deparse1(p6);
  //   return r16;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_7, 0, NULL, CCP, RHO);
  // r18 = dyn paste1[, collapse](p7, "\n")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p6 = prom<V +>{
  //   current5 = ld current;
  //   current6 = force? current5;
  //   checkMissing(current6);
  //   return current6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3833187206_8, 0, NULL, CCP, RHO);
  // r16 = dyn deparse1(p6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return current6
  return Rsh_Fir_reg_current6_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // r20 = clos inner3708401697
  Rsh_Fir_reg_r20_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mt4_;
  SEXP Rsh_Fir_reg_mt5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // mt4 = ld mt
  Rsh_Fir_reg_mt4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // mt5 = force? mt4
  Rsh_Fir_reg_mt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mt4_);
  // checkMissing(mt5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_mt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return mt5
  return Rsh_Fir_reg_mt5_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mc4_;
  SEXP Rsh_Fir_reg_mc5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // mc4 = ld mc
  Rsh_Fir_reg_mc4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // mc5 = force? mc4
  Rsh_Fir_reg_mc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mc4_);
  // checkMissing(mc5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_mc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return mc5
  return Rsh_Fir_reg_mc5_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ttxt2_;
  SEXP Rsh_Fir_reg_ttxt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // ttxt2 = ld ttxt
  Rsh_Fir_reg_ttxt2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // ttxt3 = force? ttxt2
  Rsh_Fir_reg_ttxt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ttxt2_);
  // checkMissing(ttxt3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ttxt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return ttxt3
  return Rsh_Fir_reg_ttxt3_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ctxt4_;
  SEXP Rsh_Fir_reg_ctxt5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // ctxt4 = ld ctxt
  Rsh_Fir_reg_ctxt4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ctxt5 = force? ctxt4
  Rsh_Fir_reg_ctxt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctxt4_);
  // checkMissing(ctxt5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ctxt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return ctxt5
  return Rsh_Fir_reg_ctxt5_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ctxt6_;
  SEXP Rsh_Fir_reg_ctxt7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // ctxt6 = ld ctxt
  Rsh_Fir_reg_ctxt6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ctxt7 = force? ctxt6
  Rsh_Fir_reg_ctxt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctxt6_);
  // checkMissing(ctxt7)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ctxt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return ctxt7
  return Rsh_Fir_reg_ctxt7_;
}
SEXP Rsh_Fir_user_promise_inner3833187206_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ttxt4_;
  SEXP Rsh_Fir_reg_ttxt5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3833187206/0: expected 0, got %d", NCAPTURES);

  // ttxt4 = ld ttxt
  Rsh_Fir_reg_ttxt4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // ttxt5 = force? ttxt4
  Rsh_Fir_reg_ttxt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ttxt4_);
  // checkMissing(ttxt5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ttxt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return ttxt5
  return Rsh_Fir_reg_ttxt5_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e;

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 8);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
