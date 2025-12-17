#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3488850642_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3488850642_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3488850642
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3488850642_, RHO, CCP);
  // st KalmanForecast = r
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
SEXP Rsh_Fir_user_function_inner3488850642_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3488850642 dynamic dispatch ([`n.ahead`, mod, update])

  return Rsh_Fir_user_version_inner3488850642_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3488850642_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3488850642 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3488850642/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n_ahead;  // n_ahead
  SEXP Rsh_Fir_reg_mod;  // mod
  SEXP Rsh_Fir_reg_update;  // update
  SEXP Rsh_Fir_reg_n_ahead_isMissing;  // n_ahead_isMissing
  SEXP Rsh_Fir_reg_n_ahead_orDefault;  // n_ahead_orDefault
  SEXP Rsh_Fir_reg_update_isMissing;  // update_isMissing
  SEXP Rsh_Fir_reg_update_orDefault;  // update_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_KalmanFore;  // C_KalmanFore
  SEXP Rsh_Fir_reg_C_KalmanFore1_;  // C_KalmanFore1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_C_KalmanFore4_;  // C_KalmanFore4
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_n_ahead1_;  // n_ahead1
  SEXP Rsh_Fir_reg_n_ahead2_;  // n_ahead2
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_mod1_;  // mod1
  SEXP Rsh_Fir_reg_mod2_;  // mod2
  SEXP Rsh_Fir_reg_update1_;  // update1
  SEXP Rsh_Fir_reg_update2_;  // update2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_n_ahead = PARAMS[0];
  Rsh_Fir_reg_mod = PARAMS[1];
  Rsh_Fir_reg_update = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // n_ahead_isMissing = missing.0(n_ahead)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_n_ahead;
  Rsh_Fir_reg_n_ahead_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if n_ahead_isMissing then L0(10) else L0(n_ahead)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_ahead_isMissing)) {
  // L0(10)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(n_ahead)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_Fir_reg_n_ahead;
    goto L0_;
  }

L0_:;
  // st `n.ahead` = n_ahead_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n_ahead_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_ahead_orDefault);
  // st mod = mod
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_mod, RHO);
  (void)(Rsh_Fir_reg_mod);
  // update_isMissing = missing.0(update)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_update;
  Rsh_Fir_reg_update_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if update_isMissing then L1(FALSE) else L1(update)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_update_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_update_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(update)
    Rsh_Fir_reg_update_orDefault = Rsh_Fir_reg_update;
    goto L1_;
  }

L1_:;
  // st update = update_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_update_orDefault, RHO);
  (void)(Rsh_Fir_reg_update_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
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
  // return r1
  return Rsh_Fir_reg_r1_;

L3_:;
  // mod1 = ld mod
  Rsh_Fir_reg_mod1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L4_:;
  // C_KalmanFore = ld C_KalmanFore
  Rsh_Fir_reg_C_KalmanFore = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_KalmanFore>, <lang as.integer(n.ahead)>, <sym mod>, <sym update>)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [C_KalmanFore]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_KalmanFore;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // C_KalmanFore1 = force? C_KalmanFore
  Rsh_Fir_reg_C_KalmanFore1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_KalmanFore);
  // checkMissing(C_KalmanFore1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_C_KalmanFore1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // n_ahead1 = ld `n.ahead`
  Rsh_Fir_reg_n_ahead1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base1(<sym n.ahead>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(C_KalmanFore1, r2)
  // L3(C_KalmanFore1, r2)
  Rsh_Fir_reg_C_KalmanFore4_ = Rsh_Fir_reg_C_KalmanFore1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D1_:;
  // deopt 4 [C_KalmanFore1, n_ahead1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_KalmanFore1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n_ahead1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // n_ahead2 = force? n_ahead1
  Rsh_Fir_reg_n_ahead2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_ahead1_);
  // checkMissing(n_ahead2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n_ahead2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r4 = dyn as_integer(n_ahead2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n_ahead2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 7 [C_KalmanFore1, r4]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_KalmanFore1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L3(C_KalmanFore1, r4)
  // L3(C_KalmanFore1, r4)
  Rsh_Fir_reg_C_KalmanFore4_ = Rsh_Fir_reg_C_KalmanFore1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L3_;

D3_:;
  // deopt 7 [C_KalmanFore4, r3, mod1]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_KalmanFore4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_mod1_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // mod2 = force? mod1
  Rsh_Fir_reg_mod2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mod1_);
  // checkMissing(mod2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_mod2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // update1 = ld update
  Rsh_Fir_reg_update1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 8 [C_KalmanFore4, r3, mod2, update1]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_KalmanFore4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_mod2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_update1_;
  Rsh_Fir_deopt(8, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // update2 = force? update1
  Rsh_Fir_reg_update2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update1_);
  // checkMissing(update2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_update2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // vargs = dots[r3, mod2, update2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_mod2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_update2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_KalmanFore4, vargs, <missing>)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_KalmanFore4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
