#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2975030429_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2975030429_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2975030429
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2975030429_, RHO, CCP);
  // st dwilcox = r
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
SEXP Rsh_Fir_user_function_inner2975030429_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2975030429 dynamic dispatch ([x, m, n, log])

  return Rsh_Fir_user_version_inner2975030429_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2975030429_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2975030429 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2975030429/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_dwilcox;  // C_dwilcox
  SEXP Rsh_Fir_reg_C_dwilcox1_;  // C_dwilcox1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_m = PARAMS[1];
  Rsh_Fir_reg_n = PARAMS[2];
  Rsh_Fir_reg_log = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if log_isMissing then L0(FALSE) else L0(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L0_;
  }

L0_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // sym = ldf `on.exit`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `on.exit` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L1_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L3_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn on_exit(<lang .External(C_wilcox_free)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L4_:;
  // r = dyn base(<lang .External(C_wilcox_free)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L5_:;
  // C_dwilcox = ld C_dwilcox
  Rsh_Fir_reg_C_dwilcox = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r3 = dyn base1(<sym C_dwilcox>, <sym x>, <sym m>, <sym n>, <sym log>)
  SEXP Rsh_Fir_array_args5[5];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[5];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 5, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D0_:;
  // deopt 4 [C_dwilcox]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_dwilcox;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // C_dwilcox1 = force? C_dwilcox
  Rsh_Fir_reg_C_dwilcox1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dwilcox);
  // checkMissing(C_dwilcox1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_C_dwilcox1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 5 [C_dwilcox1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_dwilcox1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 [C_dwilcox1, x2, m1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_dwilcox1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_m1_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 7 [C_dwilcox1, x2, m2, n1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_dwilcox1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 8 [C_dwilcox1, x2, m2, n2, log1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_dwilcox1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_log1_;
  Rsh_Fir_deopt(8, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // vargs = dots[x2, m2, n2, log2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_log2_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_dwilcox1, vargs, <missing>)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_dwilcox1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
