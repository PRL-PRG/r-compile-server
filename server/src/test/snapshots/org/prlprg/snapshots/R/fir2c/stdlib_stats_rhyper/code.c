#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3447018290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3447018290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3447018290
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3447018290_, RHO, CCP);
  // st rhyper = r
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
SEXP Rsh_Fir_user_function_inner3447018290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3447018290 dynamic dispatch ([nn, m, n, k])

  return Rsh_Fir_user_version_inner3447018290_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3447018290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3447018290 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3447018290/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_nn;  // nn
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_rhyper;  // C_rhyper
  SEXP Rsh_Fir_reg_C_rhyper1_;  // C_rhyper1
  SEXP Rsh_Fir_reg_nn1_;  // nn1
  SEXP Rsh_Fir_reg_nn2_;  // nn2
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_nn = PARAMS[0];
  Rsh_Fir_reg_m = PARAMS[1];
  Rsh_Fir_reg_n = PARAMS[2];
  Rsh_Fir_reg_k = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st nn = nn
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_nn, RHO);
  (void)(Rsh_Fir_reg_nn);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st k = k
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_k, RHO);
  (void)(Rsh_Fir_reg_k);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // C_rhyper = ld C_rhyper
  Rsh_Fir_reg_C_rhyper = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym C_rhyper>, <sym nn>, <sym m>, <sym n>, <sym k>)
  SEXP Rsh_Fir_array_args1[5];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [C_rhyper]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_rhyper;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // C_rhyper1 = force? C_rhyper
  Rsh_Fir_reg_C_rhyper1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rhyper);
  // checkMissing(C_rhyper1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_C_rhyper1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // nn1 = ld nn
  Rsh_Fir_reg_nn1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 2 [C_rhyper1, nn1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_rhyper1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_nn1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // nn2 = force? nn1
  Rsh_Fir_reg_nn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn1_);
  // checkMissing(nn2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_nn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 3 [C_rhyper1, nn2, m1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_rhyper1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_nn2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_m1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 4 [C_rhyper1, nn2, m2, n1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_rhyper1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_nn2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 5 [C_rhyper1, nn2, m2, n2, k1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_rhyper1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_nn2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(5, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // vargs = dots[nn2, m2, n2, k2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_nn2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_k2_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_rhyper1, vargs, <missing>)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_rhyper1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
