#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2764574881_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2764574881_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2764574881
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2764574881_, RHO, CCP);
  // st qbeta = r
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
SEXP Rsh_Fir_user_function_inner2764574881_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2764574881 dynamic dispatch ([p, shape1, shape2, ncp, `lower.tail`, `log.p`])

  return Rsh_Fir_user_version_inner2764574881_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2764574881_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2764574881 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2764574881/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_shape1_;  // shape1
  SEXP Rsh_Fir_reg_shape2_;  // shape2
  SEXP Rsh_Fir_reg_ncp;  // ncp
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_ncp_isMissing;  // ncp_isMissing
  SEXP Rsh_Fir_reg_ncp_orDefault;  // ncp_orDefault
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_qbeta;  // C_qbeta
  SEXP Rsh_Fir_reg_C_qbeta1_;  // C_qbeta1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_shape3_;  // shape3
  SEXP Rsh_Fir_reg_shape4_;  // shape4
  SEXP Rsh_Fir_reg_shape5_;  // shape5
  SEXP Rsh_Fir_reg_shape6_;  // shape6
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_C_qnbeta;  // C_qnbeta
  SEXP Rsh_Fir_reg_C_qnbeta1_;  // C_qnbeta1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_shape7_;  // shape7
  SEXP Rsh_Fir_reg_shape8_;  // shape8
  SEXP Rsh_Fir_reg_shape9_;  // shape9
  SEXP Rsh_Fir_reg_shape10_;  // shape10
  SEXP Rsh_Fir_reg_ncp1_;  // ncp1
  SEXP Rsh_Fir_reg_ncp2_;  // ncp2
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_log_p3_;  // log_p3
  SEXP Rsh_Fir_reg_log_p4_;  // log_p4
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_p = PARAMS[0];
  Rsh_Fir_reg_shape1_ = PARAMS[1];
  Rsh_Fir_reg_shape2_ = PARAMS[2];
  Rsh_Fir_reg_ncp = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];
  Rsh_Fir_reg_log_p = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_p, RHO);
  (void)(Rsh_Fir_reg_p);
  // st shape1 = shape1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_shape1_, RHO);
  (void)(Rsh_Fir_reg_shape1_);
  // st shape2 = shape2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_shape2_, RHO);
  (void)(Rsh_Fir_reg_shape2_);
  // ncp_isMissing = missing.0(ncp)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ncp;
  Rsh_Fir_reg_ncp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ncp_isMissing then L0(0.0) else L0(ncp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ncp_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_ncp_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(ncp)
    Rsh_Fir_reg_ncp_orDefault = Rsh_Fir_reg_ncp;
    goto L0_;
  }

L0_:;
  // st ncp = ncp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ncp_orDefault, RHO);
  (void)(Rsh_Fir_reg_ncp_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lower_tail_isMissing then L1(TRUE) else L1(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 6);
    goto L1_;
  } else {
  // L1(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L1_;
  }

L1_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if log_p_isMissing then L2(FALSE) else L2(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 8);
    goto L2_;
  } else {
  // L2(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L2_;
  }

L2_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L3_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L9() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf `.Call`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf `.Call` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L7_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn missing(<sym ncp>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L8_:;
  // r = dyn base(<sym ncp>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

L9_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // C_qbeta = ld C_qbeta
  Rsh_Fir_reg_C_qbeta = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base1(<sym C_qbeta>, <sym p>, <sym shape1>, <sym shape2>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args9[6];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[6];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 6, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r3)
  // L5(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L5_;

D0_:;
  // deopt 4 [C_qbeta]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_qbeta;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // C_qbeta1 = force? C_qbeta
  Rsh_Fir_reg_C_qbeta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_qbeta);
  // checkMissing(C_qbeta1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_qbeta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // p1 = ld p
  Rsh_Fir_reg_p1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 5 [C_qbeta1, p1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // shape3 = ld shape1
  Rsh_Fir_reg_shape3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 6 [C_qbeta1, p2, shape3]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_shape3_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // shape4 = force? shape3
  Rsh_Fir_reg_shape4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape3_);
  // checkMissing(shape4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_shape4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // shape5 = ld shape2
  Rsh_Fir_reg_shape5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 7 [C_qbeta1, p2, shape4, shape5]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_shape5_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // shape6 = force? shape5
  Rsh_Fir_reg_shape6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape5_);
  // checkMissing(shape6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_shape6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 8 [C_qbeta1, p2, shape4, shape6, lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_shape6_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(8, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 9 [C_qbeta1, p2, shape4, shape6, lower_tail2, log_p1]
  SEXP Rsh_Fir_array_deopt_stack5[6];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_shape6_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_deopt_stack5[5] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(9, 6, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // vargs = dots[p2, shape4, shape6, lower_tail2, log_p2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_shape6_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_log_p2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_qbeta1, vargs, <missing>)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_C_qbeta1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L5(r5)
  // L5(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L5_;

L19_:;
  // C_qnbeta = ld C_qnbeta
  Rsh_Fir_reg_C_qnbeta = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

L20_:;
  // r6 = dyn base2(<sym C_qnbeta>, <sym p>, <sym shape1>, <sym shape2>, <sym ncp>, <sym lower.tail>, <sym log.p>)
  SEXP Rsh_Fir_array_args17[7];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args17[5] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args17[6] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[7];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 7, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r6)
  // L6(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L6_;

D6_:;
  // deopt 13 [C_qnbeta]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_qnbeta;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // C_qnbeta1 = force? C_qnbeta
  Rsh_Fir_reg_C_qnbeta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_qnbeta);
  // checkMissing(C_qnbeta1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_C_qnbeta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 14 [C_qnbeta1, p3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // shape7 = ld shape1
  Rsh_Fir_reg_shape7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 15 [C_qnbeta1, p4, shape7]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_shape7_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // shape8 = force? shape7
  Rsh_Fir_reg_shape8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape7_);
  // checkMissing(shape8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_shape8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // shape9 = ld shape2
  Rsh_Fir_reg_shape9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 16 [C_qnbeta1, p4, shape8, shape9]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_shape9_;
  Rsh_Fir_deopt(16, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // shape10 = force? shape9
  Rsh_Fir_reg_shape10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape9_);
  // checkMissing(shape10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_shape10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // ncp1 = ld ncp
  Rsh_Fir_reg_ncp1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 17 [C_qnbeta1, p4, shape8, shape10, ncp1]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_shape10_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_ncp1_;
  Rsh_Fir_deopt(17, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // ncp2 = force? ncp1
  Rsh_Fir_reg_ncp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncp1_);
  // checkMissing(ncp2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ncp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 18 [C_qnbeta1, p4, shape8, shape10, ncp2, lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack11[6];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_shape10_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_deopt_stack11[5] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(18, 6, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L26_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // log_p3 = ld `log.p`
  Rsh_Fir_reg_log_p3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 19 [C_qnbeta1, p4, shape8, shape10, ncp2, lower_tail4, log_p3]
  SEXP Rsh_Fir_array_deopt_stack12[7];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_shape10_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_deopt_stack12[5] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_deopt_stack12[6] = Rsh_Fir_reg_log_p3_;
  Rsh_Fir_deopt(19, 7, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // log_p4 = force? log_p3
  Rsh_Fir_reg_log_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p3_);
  // checkMissing(log_p4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_log_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[p4, shape8, shape10, ncp2, lower_tail4, log_p4]
  SEXP Rsh_Fir_array_vector_values1[6];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_array_vector_values1[2] = Rsh_Fir_reg_shape10_;
  Rsh_Fir_array_vector_values1[3] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_vector_values1[4] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_array_vector_values1[5] = Rsh_Fir_reg_log_p4_;
  SEXP Rsh_Fir_array_vector_names1[6];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_array_vector_names1[2] = R_MissingArg;
  Rsh_Fir_array_vector_names1[3] = R_MissingArg;
  Rsh_Fir_array_vector_names1[4] = R_MissingArg;
  Rsh_Fir_array_vector_names1[5] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 6, Rsh_Fir_array_vector_values1, NULL);
  // r8 = `.Call`(C_qnbeta1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_C_qnbeta1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
