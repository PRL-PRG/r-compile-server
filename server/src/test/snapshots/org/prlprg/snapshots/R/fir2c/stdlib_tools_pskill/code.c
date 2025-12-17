#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1187088163_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1187088163_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1187088163_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1187088163
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1187088163_, RHO, CCP);
  // st pskill = r
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
SEXP Rsh_Fir_user_function_inner1187088163_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1187088163 dynamic dispatch ([pid, signal])

  return Rsh_Fir_user_version_inner1187088163_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1187088163_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1187088163 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1187088163/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pid;  // pid
  SEXP Rsh_Fir_reg_signal;  // signal
  SEXP Rsh_Fir_reg_signal_isMissing;  // signal_isMissing
  SEXP Rsh_Fir_reg_signal_orDefault;  // signal_orDefault
  SEXP Rsh_Fir_reg_SIGTERM;  // SIGTERM
  SEXP Rsh_Fir_reg_SIGTERM1_;  // SIGTERM1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_ps_kill;  // C_ps_kill
  SEXP Rsh_Fir_reg_C_ps_kill1_;  // C_ps_kill1
  SEXP Rsh_Fir_reg_pid1_;  // pid1
  SEXP Rsh_Fir_reg_pid2_;  // pid2
  SEXP Rsh_Fir_reg_signal1_;  // signal1
  SEXP Rsh_Fir_reg_signal2_;  // signal2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_pid = PARAMS[0];
  Rsh_Fir_reg_signal = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pid = pid
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pid, RHO);
  (void)(Rsh_Fir_reg_pid);
  // signal_isMissing = missing.0(signal)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_signal;
  Rsh_Fir_reg_signal_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if signal_isMissing then L0() else L1(signal)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_signal_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(signal)
    Rsh_Fir_reg_signal_orDefault = Rsh_Fir_reg_signal;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   SIGTERM = ld SIGTERM;
  //   SIGTERM1 = force? SIGTERM;
  //   checkMissing(SIGTERM1);
  //   return SIGTERM1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1187088163_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_signal_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st signal = signal_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_signal_orDefault, RHO);
  (void)(Rsh_Fir_reg_signal_orDefault);
  // sym = ldf invisible
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf invisible in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;

L3_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn invisible(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L4_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r1 = dyn base(<lang .Call(C_ps_kill, pid, signal)>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r1)
  // L2(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L2_;

L6_:;
  // C_ps_kill = ld C_ps_kill
  Rsh_Fir_reg_C_ps_kill = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r3 = dyn base1(<sym C_ps_kill>, <sym pid>, <sym signal>)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D0_:;
  // deopt 3 [C_ps_kill]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_ps_kill;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // C_ps_kill1 = force? C_ps_kill
  Rsh_Fir_reg_C_ps_kill1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_ps_kill);
  // checkMissing(C_ps_kill1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_ps_kill1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // pid1 = ld pid
  Rsh_Fir_reg_pid1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [C_ps_kill1, pid1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_ps_kill1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_pid1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // pid2 = force? pid1
  Rsh_Fir_reg_pid2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pid1_);
  // checkMissing(pid2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_pid2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // signal1 = ld signal
  Rsh_Fir_reg_signal1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 5 [C_ps_kill1, pid2, signal1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_ps_kill1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_pid2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_signal1_;
  Rsh_Fir_deopt(5, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // signal2 = force? signal1
  Rsh_Fir_reg_signal2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signal1_);
  // checkMissing(signal2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_signal2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // vargs = dots[pid2, signal2]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_pid2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_signal2_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_ps_kill1, vargs, <missing>)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_ps_kill1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

D3_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1187088163_(SEXP CCP, SEXP RHO) {
  // SIGTERM = ld SIGTERM
  Rsh_Fir_reg_SIGTERM = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // SIGTERM1 = force? SIGTERM
  Rsh_Fir_reg_SIGTERM1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_SIGTERM);
  // checkMissing(SIGTERM1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_SIGTERM1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return SIGTERM1
  return Rsh_Fir_reg_SIGTERM1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
