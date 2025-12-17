#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2648285261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2648285261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2648285261_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2648285261
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2648285261_, RHO, CCP);
  // st gctorture2 = r
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
SEXP Rsh_Fir_user_function_inner2648285261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2648285261 dynamic dispatch ([step, wait, inhibit_release])

  return Rsh_Fir_user_version_inner2648285261_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2648285261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2648285261 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2648285261/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_step;  // step
  SEXP Rsh_Fir_reg_wait;  // wait
  SEXP Rsh_Fir_reg_inhibit_release;  // inhibit_release
  SEXP Rsh_Fir_reg_wait_isMissing;  // wait_isMissing
  SEXP Rsh_Fir_reg_wait_orDefault;  // wait_orDefault
  SEXP Rsh_Fir_reg_step1_;  // step1
  SEXP Rsh_Fir_reg_step2_;  // step2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_inhibit_release_isMissing;  // inhibit_release_isMissing
  SEXP Rsh_Fir_reg_inhibit_release_orDefault;  // inhibit_release_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_step3_;  // step3
  SEXP Rsh_Fir_reg_step4_;  // step4
  SEXP Rsh_Fir_reg_wait1_;  // wait1
  SEXP Rsh_Fir_reg_wait2_;  // wait2
  SEXP Rsh_Fir_reg_inhibit_release1_;  // inhibit_release1
  SEXP Rsh_Fir_reg_inhibit_release2_;  // inhibit_release2
  SEXP Rsh_Fir_reg_gctorture2_;  // gctorture2
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_step = PARAMS[0];
  Rsh_Fir_reg_wait = PARAMS[1];
  Rsh_Fir_reg_inhibit_release = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st step = step
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_step, RHO);
  (void)(Rsh_Fir_reg_step);
  // wait_isMissing = missing.0(wait)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_wait;
  Rsh_Fir_reg_wait_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if wait_isMissing then L0() else L1(wait)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_wait_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(wait)
    Rsh_Fir_reg_wait_orDefault = Rsh_Fir_reg_wait;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   step1 = ld step;
  //   step2 = force? step1;
  //   checkMissing(step2);
  //   return step2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2648285261_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_wait_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st wait = wait_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_wait_orDefault, RHO);
  (void)(Rsh_Fir_reg_wait_orDefault);
  // inhibit_release_isMissing = missing.0(inhibit_release)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_inhibit_release;
  Rsh_Fir_reg_inhibit_release_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if inhibit_release_isMissing then L2(FALSE) else L2(inhibit_release)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_inhibit_release_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_inhibit_release_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(inhibit_release)
    Rsh_Fir_reg_inhibit_release_orDefault = Rsh_Fir_reg_inhibit_release;
    goto L2_;
  }

L2_:;
  // st inhibit_release = inhibit_release_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_inhibit_release_orDefault, RHO);
  (void)(Rsh_Fir_reg_inhibit_release_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;

L4_:;
  // step3 = ld step
  Rsh_Fir_reg_step3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<lang gctorture2(step, wait, inhibit_release)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

D0_:;
  // deopt 2 [step3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_step3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // step4 = force? step3
  Rsh_Fir_reg_step4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_step3_);
  // checkMissing(step4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_step4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // wait1 = ld wait
  Rsh_Fir_reg_wait1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [wait1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_wait1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // wait2 = force? wait1
  Rsh_Fir_reg_wait2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wait1_);
  // checkMissing(wait2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_wait2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // inhibit_release1 = ld inhibit_release
  Rsh_Fir_reg_inhibit_release1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [inhibit_release1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_inhibit_release1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // inhibit_release2 = force? inhibit_release1
  Rsh_Fir_reg_inhibit_release2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inhibit_release1_);
  // checkMissing(inhibit_release2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_inhibit_release2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // gctorture2 = ldf gctorture2 in base
  Rsh_Fir_reg_gctorture2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r3 = dyn gctorture2(step4, wait2, inhibit_release2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_step4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_wait2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_inhibit_release2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gctorture2_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2648285261_(SEXP CCP, SEXP RHO) {
  // step1 = ld step
  Rsh_Fir_reg_step1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // step2 = force? step1
  Rsh_Fir_reg_step2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_step1_);
  // checkMissing(step2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_step2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return step2
  return Rsh_Fir_reg_step2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
