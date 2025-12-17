#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3460980932_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3460980932_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3460980932
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3460980932_, RHO, CCP);
  // st df = r
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
SEXP Rsh_Fir_user_function_inner3460980932_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3460980932 dynamic dispatch ([x, df1, df2, ncp, log])

  return Rsh_Fir_user_version_inner3460980932_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3460980932_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3460980932 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3460980932/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_df2_;  // df2
  SEXP Rsh_Fir_reg_ncp;  // ncp
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
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
  SEXP Rsh_Fir_reg_C_df;  // C_df
  SEXP Rsh_Fir_reg_C_df1_;  // C_df1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_df3_;  // df3
  SEXP Rsh_Fir_reg_df4_;  // df4
  SEXP Rsh_Fir_reg_df5_;  // df5
  SEXP Rsh_Fir_reg_df6_;  // df6
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_C_dnf;  // C_dnf
  SEXP Rsh_Fir_reg_C_dnf1_;  // C_dnf1
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_df7_;  // df7
  SEXP Rsh_Fir_reg_df8_;  // df8
  SEXP Rsh_Fir_reg_df9_;  // df9
  SEXP Rsh_Fir_reg_df10_;  // df10
  SEXP Rsh_Fir_reg_ncp1_;  // ncp1
  SEXP Rsh_Fir_reg_ncp2_;  // ncp2
  SEXP Rsh_Fir_reg_log3_;  // log3
  SEXP Rsh_Fir_reg_log4_;  // log4
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_df1_ = PARAMS[1];
  Rsh_Fir_reg_df2_ = PARAMS[2];
  Rsh_Fir_reg_ncp = PARAMS[3];
  Rsh_Fir_reg_log = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st df1 = df1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_df1_, RHO);
  (void)(Rsh_Fir_reg_df1_);
  // st df2 = df2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_df2_, RHO);
  (void)(Rsh_Fir_reg_df2_);
  // st ncp = ncp
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ncp, RHO);
  (void)(Rsh_Fir_reg_ncp);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if log_isMissing then L0(FALSE) else L0(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L0_;
  }

L0_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L7() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L7()
    goto L7_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym2 = ldf `.Call`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `.Call` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L5_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn missing(<sym ncp>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L6_:;
  // r = dyn base(<sym ncp>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L7_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // C_df = ld C_df
  Rsh_Fir_reg_C_df = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r3 = dyn base1(<sym C_df>, <sym x>, <sym df1>, <sym df2>, <sym log>)
  SEXP Rsh_Fir_array_args7[5];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[5];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 5, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D0_:;
  // deopt 4 [C_df]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_df;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // C_df1 = force? C_df
  Rsh_Fir_reg_C_df1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_df);
  // checkMissing(C_df1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_C_df1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 5 [C_df1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_df1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // df3 = ld df1
  Rsh_Fir_reg_df3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 6 [C_df1, x2, df3]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_df1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_df3_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // df4 = force? df3
  Rsh_Fir_reg_df4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df3_);
  // checkMissing(df4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_df4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // df5 = ld df2
  Rsh_Fir_reg_df5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 7 [C_df1, x2, df4, df5]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_df1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_df5_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // df6 = force? df5
  Rsh_Fir_reg_df6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df5_);
  // checkMissing(df6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_df6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 8 [C_df1, x2, df4, df6, log1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_df1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_df6_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_log1_;
  Rsh_Fir_deopt(8, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // vargs = dots[x2, df4, df6, log2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_df4_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_df6_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_log2_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_df1, vargs, <missing>)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_C_df1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

L16_:;
  // C_dnf = ld C_dnf
  Rsh_Fir_reg_C_dnf = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // r6 = dyn base2(<sym C_dnf>, <sym x>, <sym df1>, <sym df2>, <sym ncp>, <sym log>)
  SEXP Rsh_Fir_array_args14[6];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[6];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 6, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D5_:;
  // deopt 12 [C_dnf]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_dnf;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // C_dnf1 = force? C_dnf
  Rsh_Fir_reg_C_dnf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dnf);
  // checkMissing(C_dnf1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_C_dnf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 13 [C_dnf1, x3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // df7 = ld df1
  Rsh_Fir_reg_df7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 14 [C_dnf1, x4, df7]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_df7_;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // df8 = force? df7
  Rsh_Fir_reg_df8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df7_);
  // checkMissing(df8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_df8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // df9 = ld df2
  Rsh_Fir_reg_df9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 15 [C_dnf1, x4, df8, df9]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_df9_;
  Rsh_Fir_deopt(15, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // df10 = force? df9
  Rsh_Fir_reg_df10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df9_);
  // checkMissing(df10)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_df10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // ncp1 = ld ncp
  Rsh_Fir_reg_ncp1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 16 [C_dnf1, x4, df8, df10, ncp1]
  SEXP Rsh_Fir_array_deopt_stack9[5];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_ncp1_;
  Rsh_Fir_deopt(16, 5, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // ncp2 = force? ncp1
  Rsh_Fir_reg_ncp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncp1_);
  // checkMissing(ncp2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_ncp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // log3 = ld log
  Rsh_Fir_reg_log3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 17 [C_dnf1, x4, df8, df10, ncp2, log3]
  SEXP Rsh_Fir_array_deopt_stack10[6];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_deopt_stack10[5] = Rsh_Fir_reg_log3_;
  Rsh_Fir_deopt(17, 6, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // log4 = force? log3
  Rsh_Fir_reg_log4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log3_);
  // checkMissing(log4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_log4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[x4, df8, df10, ncp2, log4]
  SEXP Rsh_Fir_array_vector_values1[5];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_df8_;
  Rsh_Fir_array_vector_values1[2] = Rsh_Fir_reg_df10_;
  Rsh_Fir_array_vector_values1[3] = Rsh_Fir_reg_ncp2_;
  Rsh_Fir_array_vector_values1[4] = Rsh_Fir_reg_log4_;
  SEXP Rsh_Fir_array_vector_names1[5];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_array_vector_names1[2] = R_MissingArg;
  Rsh_Fir_array_vector_names1[3] = R_MissingArg;
  Rsh_Fir_array_vector_names1[4] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values1, NULL);
  // r8 = `.Call`(C_dnf1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_C_dnf1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
