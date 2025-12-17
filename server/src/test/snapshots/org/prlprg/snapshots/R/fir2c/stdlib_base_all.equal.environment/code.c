#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1204728016_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1204728016_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1204728016_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1204728016_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3233253192_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3233253192_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3233253192_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3233253192_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner1204728016
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1204728016_, RHO, CCP);
  // st `all.equal.environment` = r
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
SEXP Rsh_Fir_user_function_inner1204728016_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1204728016 dynamic dispatch ([target, current, `all.names`, evaluate, `...`])

  return Rsh_Fir_user_version_inner1204728016_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1204728016_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1204728016 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1204728016/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_all_names;
  SEXP Rsh_Fir_reg_evaluate;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_all_names_isMissing;
  SEXP Rsh_Fir_reg_all_names_orDefault;
  SEXP Rsh_Fir_reg_evaluate_isMissing;
  SEXP Rsh_Fir_reg_evaluate_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;
  SEXP Rsh_Fir_reg_is_environment;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;
  SEXP Rsh_Fir_reg_is_environment1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dynGet;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_ae_run;
  SEXP Rsh_Fir_reg_ae_run1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_do1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_evaluate1_;
  SEXP Rsh_Fir_reg_evaluate2_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_as_list_environment;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_as_list_environment1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_Lt;
  SEXP Rsh_Fir_reg_Lt1_;
  SEXP Rsh_Fir_reg_Lc;
  SEXP Rsh_Fir_reg_Lc1_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_all_equal_list;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sort1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r56_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_all_names = PARAMS[2];
  Rsh_Fir_reg_evaluate = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // all_names_isMissing = missing.0(all_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_all_names;
  Rsh_Fir_reg_all_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if all_names_isMissing then L0(TRUE) else L0(all_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_names_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_all_names_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(all_names)
    Rsh_Fir_reg_all_names_orDefault = Rsh_Fir_reg_all_names;
    goto L0_;
  }

L0_:;
  // st `all.names` = all_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_all_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_names_orDefault);
  // evaluate_isMissing = missing.0(evaluate)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_evaluate;
  Rsh_Fir_reg_evaluate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if evaluate_isMissing then L1(TRUE) else L1(evaluate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_evaluate_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_evaluate_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(evaluate)
    Rsh_Fir_reg_evaluate_orDefault = Rsh_Fir_reg_evaluate;
    goto L1_;
  }

L1_:;
  // st evaluate = evaluate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_evaluate_orDefault, RHO);
  (void)(Rsh_Fir_reg_evaluate_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args3);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c then L24() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym1 = ldf `is.environment`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.environment` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c1 then L31() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L8_:;
  // c2 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c2 then L39() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // dynGet = ldf dynGet
  Rsh_Fir_reg_dynGet = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

L11_:;
  // c4 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c4 then L47() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L47()
    goto L47_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // r22 = clos inner3233253192
  Rsh_Fir_reg_r22_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3233253192_, RHO, CCP);
  // st do1 = r22
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // do1 = ldf do1
  Rsh_Fir_reg_do1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

L13_:;
  // evaluate1 = ld evaluate
  Rsh_Fir_reg_evaluate1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L14_:;
  // goto L13()
  // L13()
  goto L13_;

L15_:;
  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard5 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L16_:;
  // c7 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c7 then L67() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L67()
    goto L67_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // all_equal_list = ldf `all.equal.list`
  Rsh_Fir_reg_all_equal_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

L18_:;
  // r51 = `!`(r39)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args13);
  // c8 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c8 then L79() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L79()
    goto L79_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "environments contain objects of the same names, but are not identical"
  return Rsh_const(CCP, 12);

L20_:;
  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r = dyn base(<sym target>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [target1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_target1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn is_environment(target2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_target2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'target' is not an environment"
  return Rsh_const(CCP, 13);

L27_:;
  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L28_:;
  // r6 = dyn base1(<sym current>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

D2_:;
  // deopt 14 [current1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_current1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // is_environment1 = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn is_environment1(current2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_current2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'current' is not an environment"
  return Rsh_const(CCP, 14);

L34_:;
  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L35_:;
  // r12 = dyn base2(<sym target>, <sym current>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L8_;

D4_:;
  // deopt 26 [target3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_target3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D5_:;
  // deopt 28 [current3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_current3_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn identical(target4, current4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args24[9];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_target4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_current4_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[8] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L8_;

L39_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 3);

D7_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // r17 = dyn dynGet("__all.eq.E__", NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dynGet, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

D8_:;
  // deopt 48 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // st `ae.run` = r17
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // ae_run = ld `ae.run`
  Rsh_Fir_reg_ae_run = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

L45_:;
  // r18 = dyn base3(<sym ae.run>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L11(r18)
  // L11(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L11_;

D9_:;
  // deopt 51 [ae_run]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ae_run;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // ae_run1 = force? ae_run
  Rsh_Fir_reg_ae_run1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ae_run);
  // checkMissing(ae_run1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ae_run1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c3 = `==`(ae_run1, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_ae_run1_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args29);
  // goto L11(c3)
  // L11(c3)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_c3_;
  goto L11_;

L47_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

D10_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r20 = dyn environment()
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 0, NULL, NULL, CCP, RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

D11_:;
  // deopt 56 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // st `__all.eq.E__` = r20
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L13()
  // L13()
  goto L13_;

D12_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p = prom<V +>{
  //   ae_run2 = ld `ae.run`;
  //   ae_run3 = force? ae_run2;
  //   checkMissing(ae_run3);
  //   return ae_run3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_, 0, NULL, CCP, RHO);
  // r24 = dyn do1(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

D13_:;
  // deopt 64 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // c5 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c5 then L53() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L53()
    goto L53_;
  } else {
  // L14()
    goto L14_;
  }

L53_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 3);

D14_:;
  // deopt 70 [evaluate1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_evaluate1_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // evaluate2 = force? evaluate1
  Rsh_Fir_reg_evaluate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluate1_);
  // checkMissing(evaluate2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_evaluate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(evaluate2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_evaluate2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c6 then L57() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L57()
    goto L57_;
  } else {
  // L15()
    goto L15_;
  }

L57_:;
  // as_list_environment = ldf `as.list.environment`
  Rsh_Fir_reg_as_list_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p1 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   all_names1 = ld `all.names`;
  //   all_names2 = force? all_names1;
  //   checkMissing(all_names2);
  //   return all_names2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_2, 0, NULL, CCP, RHO);
  // r28 = dyn as_list_environment[, `all.names`, sorted](p1, p2, TRUE)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list_environment, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 79 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // st Lt = r28
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // as_list_environment1 = ldf `as.list.environment`
  Rsh_Fir_reg_as_list_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p3 = prom<V +>{
  //   current5 = ld current;
  //   current6 = force? current5;
  //   checkMissing(current6);
  //   return current6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   all_names3 = ld `all.names`;
  //   all_names4 = force? all_names3;
  //   checkMissing(all_names4);
  //   return all_names4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_4, 0, NULL, CCP, RHO);
  // r31 = dyn as_list_environment1[, `all.names`, sorted](p3, p4, TRUE)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list_environment1_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

D18_:;
  // deopt 88 [r31]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // st Lc = r31
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // Lt = ld Lt
  Rsh_Fir_reg_Lt = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L64() else D19()
  // L64()
  goto L64_;

L63_:;
  // r32 = dyn base4(<sym Lt>, <sym Lc>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L16_;

D19_:;
  // deopt 92 [Lt]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_Lt;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // Lt1 = force? Lt
  Rsh_Fir_reg_Lt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Lt);
  // checkMissing(Lt1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_Lt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // Lc = ld Lc
  Rsh_Fir_reg_Lc = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

D20_:;
  // deopt 94 [Lc]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_Lc;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // Lc1 = force? Lc
  Rsh_Fir_reg_Lc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Lc);
  // checkMissing(Lc1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_Lc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r34 = dyn identical1(Lt1, Lc1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args45[9];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_Lt1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_Lc1_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args45[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[8] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names12[9];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

D21_:;
  // deopt 104 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L16_;

L67_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 3);

D22_:;
  // deopt 108 []
  Rsh_Fir_deopt(108, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p5 = prom<V +>{
  //   Lt2 = ld Lt;
  //   Lt3 = force? Lt2;
  //   checkMissing(Lt3);
  //   return Lt3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   Lc2 = ld Lc;
  //   Lc3 = force? Lc2;
  //   checkMissing(Lc3);
  //   return Lc3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_6, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r37 = dyn all_equal_list[, , `...`](p5, p6, ddd1)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal_list, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

D23_:;
  // deopt 112 [r37]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;

L72_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

L73_:;
  // r38 = dyn base5(<lang `<-`(nt, sort(names(target)))>, <lang `<-`(nc, sort(names(current)))>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L18_;

D24_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p7 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   target7 = ld target;
  //   target8 = force? target7;
  //   checkMissing(target8);
  //   names = ldf names in base;
  //   r42 = dyn names(target8);
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base6(<sym target>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_7, 0, NULL, CCP, RHO);
  // r44 = dyn sort(p7)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

D25_:;
  // deopt 118 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L75_:;
  // st nt = r44
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sort1 = ldf sort
  Rsh_Fir_reg_sort1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

D26_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p8 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r46):
  //   return r46;
  // L1():
  //   current7 = ld current;
  //   current8 = force? current7;
  //   checkMissing(current8);
  //   names1 = ldf names in base;
  //   r47 = dyn names1(current8);
  //   goto L0(r47);
  // L2():
  //   r45 = dyn base7(<sym current>);
  //   goto L0(r45);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_8, 0, NULL, CCP, RHO);
  // r49 = dyn sort1(p8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L77() else D27()
  // L77()
  goto L77_;

D27_:;
  // deopt 123 [r49]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L77_:;
  // st nc = r49
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r50 = dyn identical2(r44, r49, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args60[9];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args60[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args60[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args60[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args60[8] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names21[9];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L78() else D28()
  // L78()
  goto L78_;

D28_:;
  // deopt 133 [r50]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L18(r50)
  // L18(r50)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r50_;
  goto L18_;

L79_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p11 = prom<V +>{
  //   all_equal = ldf `all.equal`;
  //   p9 = prom<V +>{
  //     nt = ld nt;
  //     nt1 = force? nt;
  //     checkMissing(nt1);
  //     return nt1;
  //   };
  //   p10 = prom<V +>{
  //     nc = ld nc;
  //     nc1 = force? nc;
  //     checkMissing(nc1);
  //     return nc1;
  //   };
  //   ddd2 = ld `...`;
  //   r54 = dyn all_equal[, , `...`](p9, p10, ddd2);
  //   return r54;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_9, 0, NULL, CCP, RHO);
  // r56 = dyn paste[, , collapse]("names of environments differ:", p11, " ")
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L81() else D30()
  // L81()
  goto L81_;

D30_:;
  // deopt 141 [r56]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L81_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ae_run2_;
  SEXP Rsh_Fir_reg_ae_run3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // ae_run2 = ld `ae.run`
  Rsh_Fir_reg_ae_run2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // ae_run3 = force? ae_run2
  Rsh_Fir_reg_ae_run3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ae_run2_);
  // checkMissing(ae_run3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_ae_run3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return ae_run3
  return Rsh_Fir_reg_ae_run3_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_names1_;
  SEXP Rsh_Fir_reg_all_names2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // all_names1 = ld `all.names`
  Rsh_Fir_reg_all_names1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // all_names2 = force? all_names1
  Rsh_Fir_reg_all_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_names1_);
  // checkMissing(all_names2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_all_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return all_names2
  return Rsh_Fir_reg_all_names2_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return current6
  return Rsh_Fir_reg_current6_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_names3_;
  SEXP Rsh_Fir_reg_all_names4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // all_names3 = ld `all.names`
  Rsh_Fir_reg_all_names3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // all_names4 = force? all_names3
  Rsh_Fir_reg_all_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_names3_);
  // checkMissing(all_names4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_all_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return all_names4
  return Rsh_Fir_reg_all_names4_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Lt2_;
  SEXP Rsh_Fir_reg_Lt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // Lt2 = ld Lt
  Rsh_Fir_reg_Lt2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // Lt3 = force? Lt2
  Rsh_Fir_reg_Lt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Lt2_);
  // checkMissing(Lt3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_Lt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return Lt3
  return Rsh_Fir_reg_Lt3_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Lc2_;
  SEXP Rsh_Fir_reg_Lc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // Lc2 = ld Lc
  Rsh_Fir_reg_Lc2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // Lc3 = force? Lc2
  Rsh_Fir_reg_Lc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Lc2_);
  // checkMissing(Lc3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_Lc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return Lc3
  return Rsh_Fir_reg_Lc3_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_target7_;
  SEXP Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // target7 = ld target
  Rsh_Fir_reg_target7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target8 = force? target7
  Rsh_Fir_reg_target8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target7_);
  // checkMissing(target8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_target8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r42 = dyn names(target8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base6(<sym target>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_current7_;
  SEXP Rsh_Fir_reg_current8_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // current7 = ld current
  Rsh_Fir_reg_current7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current8 = force? current7
  Rsh_Fir_reg_current8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current7_);
  // checkMissing(current8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_current8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r47 = dyn names1(current8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_current8_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L0_;

L2_:;
  // r45 = dyn base7(<sym current>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p9 = prom<V +>{
  //   nt = ld nt;
  //   nt1 = force? nt;
  //   checkMissing(nt1);
  //   return nt1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   nc = ld nc;
  //   nc1 = force? nc;
  //   checkMissing(nc1);
  //   return nc1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204728016_11, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r54 = dyn all_equal[, , `...`](p9, p10, ddd2)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r54
  return Rsh_Fir_reg_r54_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nt;
  SEXP Rsh_Fir_reg_nt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // nt = ld nt
  Rsh_Fir_reg_nt = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // nt1 = force? nt
  Rsh_Fir_reg_nt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt);
  // checkMissing(nt1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_nt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return nt1
  return Rsh_Fir_reg_nt1_;
}
SEXP Rsh_Fir_user_promise_inner1204728016_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1204728016/0: expected 0, got %d", NCAPTURES);

  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return nc1
  return Rsh_Fir_reg_nc1_;
}
SEXP Rsh_Fir_user_function_inner3233253192_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3233253192 dynamic dispatch ([em])

  return Rsh_Fir_user_version_inner3233253192_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3233253192_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3233253192 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3233253192/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_em;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_target1;
  SEXP Rsh_Fir_reg_target1_1;
  SEXP Rsh_Fir_reg_em1_;
  SEXP Rsh_Fir_reg_em2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_em4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_identical1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c6_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_current1;
  SEXP Rsh_Fir_reg_current1_1;
  SEXP Rsh_Fir_reg_em5_;
  SEXP Rsh_Fir_reg_em6_;
  SEXP Rsh_Fir_reg_c7_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_em8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_identical1_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_em9_;
  SEXP Rsh_Fir_reg_em10_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_em12_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_do1_1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_new_env;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_target2_1;
  SEXP Rsh_Fir_reg_target3_1;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_target5_1;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_current2_1;
  SEXP Rsh_Fir_reg_current3_1;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_current5_1;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_e;
  SEXP Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_e3_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r22_1;

  // Bind parameters
  Rsh_Fir_reg_em = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st em = em
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_em, RHO);
  (void)(Rsh_Fir_reg_em);
  // sym = ldf identical
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c1 then L15() else L1(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L15()
    goto L15_;
  } else {
  // L1(c1)
    Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c1_1;
    goto L1_;
  }

L1_:;
  // c15 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c15 then L26() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L26()
    goto L26_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // c12 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // c13 = `&&`(c6, c12)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_c6_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args69);
  // goto L1(c13)
  // L1(c13)
  Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c13_;
  goto L1_;

L3_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L4_:;
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args71);
  // c18 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c18 then L35() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L35()
    goto L35_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L6_:;
  // target = ld target
  Rsh_Fir_reg_target1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<sym target>, <lang `$`(em, target)>)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [target]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_target1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L8_:;
  // target1 = force? target
  Rsh_Fir_reg_target1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1);
  // checkMissing(target1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_target1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // em1 = ld em
  Rsh_Fir_reg_em1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [em1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_em1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L9_:;
  // em2 = force? em1
  Rsh_Fir_reg_em2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_em1_);
  // checkMissing(em2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_em2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c = `is.object`(em2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_em2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c then L11() else L12(em2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L11()
    goto L11_;
  } else {
  // L12(em2)
    Rsh_Fir_reg_em4_ = Rsh_Fir_reg_em2_;
    goto L12_;
  }

L10_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn identical(target1, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args77[9];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_target1_1;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args77[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args77[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args77[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args77[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args77[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args77[8] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names25[9];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1, 9, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L11_:;
  // dr = tryDispatchBuiltin.1("$", em2)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_em2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc then L13() else L12(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr)
    Rsh_Fir_reg_em4_ = Rsh_Fir_reg_dr;
    goto L12_;
  }

L12_:;
  // r2 = `$`(em4, <sym target>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_em4_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args80);
  // goto L10(r2)
  // L10(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_1;
  goto L10_;

L13_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

D2_:;
  // deopt 15 [r3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

L15_:;
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // current = ld current
  Rsh_Fir_reg_current1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // r4 = dyn base1(<sym current>, <lang `$`(em, current)>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L2(c1, r4)
  // L2(c1, r4)
  Rsh_Fir_reg_c6_1 = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 18 [c1, current]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_current1;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L18_:;
  // current1 = force? current
  Rsh_Fir_reg_current1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1);
  // checkMissing(current1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_current1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // em5 = ld em
  Rsh_Fir_reg_em5_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 20 [c1, em5]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_em5_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L19_:;
  // em6 = force? em5
  Rsh_Fir_reg_em6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_em5_);
  // checkMissing(em6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_em6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(em6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_em6_;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args86);
  // if c7 then L21() else L22(c1, em6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_1)) {
  // L21()
    goto L21_;
  } else {
  // L22(c1, em6)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_1;
    Rsh_Fir_reg_em8_ = Rsh_Fir_reg_em6_;
    goto L22_;
  }

L20_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn identical1(current1, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args87[9];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_current1_1;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args87[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args87[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args87[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args87[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args87[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args87[8] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names27[9];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_array_arg_names27[5] = R_MissingArg;
  Rsh_Fir_array_arg_names27[6] = R_MissingArg;
  Rsh_Fir_array_arg_names27[7] = R_MissingArg;
  Rsh_Fir_array_arg_names27[8] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_1, 9, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L21_:;
  // dr2 = tryDispatchBuiltin.1("$", em6)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_em6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(c1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(c1, dr2)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_1;
    Rsh_Fir_reg_em8_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // r6 = `$`(em8, <sym current>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_em8_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args90);
  // goto L20(c9, r6)
  // L20(c9, r6)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_1;
  goto L20_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L20(c1, dx2)
  // L20(c1, dx2)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

D5_:;
  // deopt 31 [c11, r7]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(c11, r7)
  // L2(c11, r7)
  Rsh_Fir_reg_c6_1 = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_1;
  goto L2_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 3);

L28_:;
  // em9 = ld em
  Rsh_Fir_reg_em9_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r8 = dyn base2(<lang `$`(em, mm)>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L4_;

D6_:;
  // deopt 36 [em9]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_em9_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L30_:;
  // em10 = force? em9
  Rsh_Fir_reg_em10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_em9_);
  // checkMissing(em10)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_em10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(em10)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_em10_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c16 then L32() else L33(em10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L32()
    goto L32_;
  } else {
  // L33(em10)
    Rsh_Fir_reg_em12_ = Rsh_Fir_reg_em10_;
    goto L33_;
  }

L31_:;
  // c17 = `==`(dx5, NULL)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args95);
  // goto L4(c17)
  // L4(c17)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_c17_;
  goto L4_;

L32_:;
  // dr4 = tryDispatchBuiltin.1("$", em10)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_em10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc2 then L34() else L33(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr4)
    Rsh_Fir_reg_em12_ = Rsh_Fir_reg_dr4_;
    goto L33_;
  }

L33_:;
  // r10 = `$`(em12, <sym mm>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_em12_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args98);
  // goto L31(r10)
  // L31(r10)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r10_;
  goto L31_;

L34_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L31(dx4)
  // L31(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L31_;

L35_:;
  // do1 = ldf do1
  Rsh_Fir_reg_do1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p = prom<V +>{
  //   em13 = ld em;
  //   em14 = force? em13;
  //   checkMissing(em14);
  //   c19 = `is.object`(em14);
  //   if c19 then L1() else L2(em14);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", em14);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(em16):
  //   r12 = `$`(em16, <sym mm>);
  //   goto L0(r12);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3233253192_, 0, NULL, CCP, RHO);
  // r14 = dyn do1(p)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do1_1, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D8_:;
  // deopt 44 [r14]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L37_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_1;

D9_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p1 = prom<V +>{
  //   sym3 = ldf emptyenv;
  //   base3 = ldf emptyenv in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   emptyenv = ldf emptyenv in base;
  //   r17 = dyn emptyenv();
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base3();
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3233253192_1, 0, NULL, CCP, RHO);
  // r19 = dyn new_env[parent](p1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 49 [r19]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L40_:;
  // st e = r19
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r19_1, RHO);
  (void)(Rsh_Fir_reg_r19_1);
  // target2 = ld target
  Rsh_Fir_reg_target2_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 51 [target2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_target2_1;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L41_:;
  // target3 = force? target2
  Rsh_Fir_reg_target3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_target2_1);
  // checkMissing(target3)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_target3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // l = ld e
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // c20 = `is.object`(l)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args110);
  // if c20 then L43() else L44(target3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L43()
    goto L43_;
  } else {
  // L44(target3, l)
    Rsh_Fir_reg_target5_1 = Rsh_Fir_reg_target3_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L44_;
  }

L42_:;
  // st e = dx9
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // current2 = ld current
  Rsh_Fir_reg_current2_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L43_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l, target3)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_target3_1;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args111);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc4 then L45() else L44(target3, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L45()
    goto L45_;
  } else {
  // L44(target3, dr8)
    Rsh_Fir_reg_target5_1 = Rsh_Fir_reg_target3_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr8_;
    goto L44_;
  }

L44_:;
  // r20 = `$<-`(l2, <sym target>, target3)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_target3_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args113);
  // goto L42(r20)
  // L42(r20)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r20_1;
  goto L42_;

L45_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L42(dx8)
  // L42(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L42_;

D12_:;
  // deopt 56 [current2]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_current2_1;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L46_:;
  // current3 = force? current2
  Rsh_Fir_reg_current3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_current2_1);
  // checkMissing(current3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_current3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // l3 = ld e
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // c21 = `is.object`(l3)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args116);
  // if c21 then L48() else L49(current3, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L48()
    goto L48_;
  } else {
  // L49(current3, l3)
    Rsh_Fir_reg_current5_1 = Rsh_Fir_reg_current3_1;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L49_;
  }

L47_:;
  // st e = dx11
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

L48_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l3, current3)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_current3_1;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args117);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc5 then L50() else L49(current3, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L50()
    goto L50_;
  } else {
  // L49(current3, dr10)
    Rsh_Fir_reg_current5_1 = Rsh_Fir_reg_current3_1;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr10_;
    goto L49_;
  }

L49_:;
  // r21 = `$<-`(l5, <sym current>, current3)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_current3_1;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args119);
  // goto L47(r21)
  // L47(r21)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r21_;
  goto L47_;

L50_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L47(dx10)
  // L47(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L47_;

D13_:;
  // deopt 61 [e]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_e;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L51_:;
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // l6 = ld em
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // c22 = `is.object`(l6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args122);
  // if c22 then L53() else L54(e1, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L53()
    goto L53_;
  } else {
  // L54(e1, l6)
    Rsh_Fir_reg_e3_ = Rsh_Fir_reg_e1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L54_;
  }

L52_:;
  // st em = dx13
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 15);

L53_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l6, e1)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_e1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args123);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc6 then L55() else L54(e1, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L55()
    goto L55_;
  } else {
  // L54(e1, dr12)
    Rsh_Fir_reg_e3_ = Rsh_Fir_reg_e1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr12_;
    goto L54_;
  }

L54_:;
  // r22 = `$<-`(l8, <sym mm>, e1)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args125[2] = Rsh_Fir_reg_e1_;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args125);
  // goto L52(r22)
  // L52(r22)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r22_1;
  goto L52_;

L55_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L52(dx12)
  // L52(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L52_;
}
SEXP Rsh_Fir_user_promise_inner3233253192_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_em13_;
  SEXP Rsh_Fir_reg_em14_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_em16_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3233253192/0: expected 0, got %d", NCAPTURES);

  // em13 = ld em
  Rsh_Fir_reg_em13_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // em14 = force? em13
  Rsh_Fir_reg_em14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_em13_);
  // checkMissing(em14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_em14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(em14)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_em14_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c19 then L1() else L2(em14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2(em14)
    Rsh_Fir_reg_em16_ = Rsh_Fir_reg_em14_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", em14)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_em14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args102);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_em16_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r12 = `$`(em16, <sym mm>)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_em16_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args104);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_1;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3233253192_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_emptyenv;
  SEXP Rsh_Fir_reg_r17_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3233253192/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf emptyenv
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base3 = ldf emptyenv in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // emptyenv = ldf emptyenv in base
  Rsh_Fir_reg_emptyenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r17 = dyn emptyenv()
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_emptyenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_1;
  goto L0_;

L2_:;
  // r15 = dyn base3()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
