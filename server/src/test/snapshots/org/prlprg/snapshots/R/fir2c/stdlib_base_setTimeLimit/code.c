#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1538521688_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1538521688_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1538521688
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1538521688_, RHO, CCP);
  // st setTimeLimit = r
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
SEXP Rsh_Fir_user_function_inner1538521688_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1538521688 dynamic dispatch ([cpu, elapsed, transient])

  return Rsh_Fir_user_version_inner1538521688_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1538521688_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1538521688 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1538521688/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cpu;  // cpu
  SEXP Rsh_Fir_reg_elapsed;  // elapsed
  SEXP Rsh_Fir_reg_transient;  // transient
  SEXP Rsh_Fir_reg_cpu_isMissing;  // cpu_isMissing
  SEXP Rsh_Fir_reg_cpu_orDefault;  // cpu_orDefault
  SEXP Rsh_Fir_reg_elapsed_isMissing;  // elapsed_isMissing
  SEXP Rsh_Fir_reg_elapsed_orDefault;  // elapsed_orDefault
  SEXP Rsh_Fir_reg_transient_isMissing;  // transient_isMissing
  SEXP Rsh_Fir_reg_transient_orDefault;  // transient_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_cpu1_;  // cpu1
  SEXP Rsh_Fir_reg_cpu2_;  // cpu2
  SEXP Rsh_Fir_reg_elapsed1_;  // elapsed1
  SEXP Rsh_Fir_reg_elapsed2_;  // elapsed2
  SEXP Rsh_Fir_reg_transient1_;  // transient1
  SEXP Rsh_Fir_reg_transient2_;  // transient2
  SEXP Rsh_Fir_reg_setTimeLimit;  // setTimeLimit
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_cpu = PARAMS[0];
  Rsh_Fir_reg_elapsed = PARAMS[1];
  Rsh_Fir_reg_transient = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // cpu_isMissing = missing.0(cpu)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_cpu;
  Rsh_Fir_reg_cpu_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if cpu_isMissing then L0(+Infinity) else L0(cpu)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cpu_isMissing)) {
  // L0(+Infinity)
    Rsh_Fir_reg_cpu_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(cpu)
    Rsh_Fir_reg_cpu_orDefault = Rsh_Fir_reg_cpu;
    goto L0_;
  }

L0_:;
  // st cpu = cpu_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_cpu_orDefault, RHO);
  (void)(Rsh_Fir_reg_cpu_orDefault);
  // elapsed_isMissing = missing.0(elapsed)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_elapsed;
  Rsh_Fir_reg_elapsed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if elapsed_isMissing then L1(+Infinity) else L1(elapsed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_elapsed_isMissing)) {
  // L1(+Infinity)
    Rsh_Fir_reg_elapsed_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(elapsed)
    Rsh_Fir_reg_elapsed_orDefault = Rsh_Fir_reg_elapsed;
    goto L1_;
  }

L1_:;
  // st elapsed = elapsed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_elapsed_orDefault, RHO);
  (void)(Rsh_Fir_reg_elapsed_orDefault);
  // transient_isMissing = missing.0(transient)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_transient;
  Rsh_Fir_reg_transient_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if transient_isMissing then L2(FALSE) else L2(transient)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_transient_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_transient_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(transient)
    Rsh_Fir_reg_transient_orDefault = Rsh_Fir_reg_transient;
    goto L2_;
  }

L2_:;
  // st transient = transient_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_transient_orDefault, RHO);
  (void)(Rsh_Fir_reg_transient_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
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
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // cpu1 = ld cpu
  Rsh_Fir_reg_cpu1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang setTimeLimit(cpu, elapsed, transient)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [cpu1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_cpu1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // cpu2 = force? cpu1
  Rsh_Fir_reg_cpu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cpu1_);
  // checkMissing(cpu2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_cpu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // elapsed1 = ld elapsed
  Rsh_Fir_reg_elapsed1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [elapsed1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_elapsed1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // elapsed2 = force? elapsed1
  Rsh_Fir_reg_elapsed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_elapsed1_);
  // checkMissing(elapsed2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_elapsed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // transient1 = ld transient
  Rsh_Fir_reg_transient1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [transient1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_transient1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // transient2 = force? transient1
  Rsh_Fir_reg_transient2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_transient1_);
  // checkMissing(transient2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_transient2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // setTimeLimit = ldf setTimeLimit in base
  Rsh_Fir_reg_setTimeLimit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn setTimeLimit(cpu2, elapsed2, transient2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_cpu2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_elapsed2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_transient2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setTimeLimit, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
