#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1041539299_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1041539299_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1041539299_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1041539299_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1041539299_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1041539299_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1041539299
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1041539299_, RHO, CCP);
  // st rt = r
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
SEXP Rsh_Fir_user_function_inner1041539299_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1041539299 dynamic dispatch ([n, df, ncp])

  return Rsh_Fir_user_version_inner1041539299_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1041539299_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1041539299 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1041539299/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_df;  // df
  SEXP Rsh_Fir_reg_ncp;  // ncp
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
  SEXP Rsh_Fir_reg_C_rt;  // C_rt
  SEXP Rsh_Fir_reg_C_rt1_;  // C_rt1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_df2_;  // df2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_rnorm;  // rnorm
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_ncp1_;  // ncp1
  SEXP Rsh_Fir_reg_ncp2_;  // ncp2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_rchisq;  // rchisq
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_df3_;  // df3
  SEXP Rsh_Fir_reg_df4_;  // df4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_df5_;  // df5
  SEXP Rsh_Fir_reg_df6_;  // df6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_df = PARAMS[1];
  Rsh_Fir_reg_ncp = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st df = df
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_df, RHO);
  (void)(Rsh_Fir_reg_df);
  // st ncp = ncp
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ncp, RHO);
  (void)(Rsh_Fir_reg_ncp);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L3_:;
  // r19 = `/`(r12, r13)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

L4_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn missing(<sym ncp>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L5_:;
  // r = dyn base(<sym ncp>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L6_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
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
  // C_rt = ld C_rt
  Rsh_Fir_reg_C_rt = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r3 = dyn base1(<sym C_rt>, <sym n>, <sym df>)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D0_:;
  // deopt 4 [C_rt]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_rt;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // C_rt1 = force? C_rt
  Rsh_Fir_reg_C_rt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rt);
  // checkMissing(C_rt1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_rt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [C_rt1, n1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_rt1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // df1 = ld df
  Rsh_Fir_reg_df1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 6 [C_rt1, n2, df1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_rt1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_df1_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // df2 = force? df1
  Rsh_Fir_reg_df2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df1_);
  // checkMissing(df2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_df2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, df2]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_df2_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_rt1, vargs, <missing>)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_rt1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1041539299_, CCP, RHO);
  // p1 = prom<V +>{
  //   ncp1 = ld ncp;
  //   ncp2 = force? ncp1;
  //   checkMissing(ncp2);
  //   return ncp2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1041539299_1, CCP, RHO);
  // r8 = dyn rnorm(p, p1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // rchisq = ldf rchisq
  Rsh_Fir_reg_rchisq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L16_:;
  // r11 = dyn base2(<lang `/`(rchisq(n, df), df)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r8, r11)
  // L3(r8, r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
  goto L3_;

D5_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   return n6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1041539299_2, CCP, RHO);
  // p3 = prom<V +>{
  //   df3 = ld df;
  //   df4 = force? df3;
  //   checkMissing(df4);
  //   return df4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1041539299_3, CCP, RHO);
  // r16 = dyn rchisq(p2, p3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rchisq, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 18 [r8, r16]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // df5 = ld df
  Rsh_Fir_reg_df5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 18 [r8, r16, df5]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_df5_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // df6 = force? df5
  Rsh_Fir_reg_df6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df5_);
  // checkMissing(df6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_df6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r17 = `/`(r16, df6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_df6_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // r18 = sqrt(r17)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L3(r8, r18)
  // L3(r8, r18)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r18_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner1041539299_(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner1041539299_1(SEXP CCP, SEXP RHO) {
  // ncp1 = ld ncp
  Rsh_Fir_reg_ncp1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // ncp2 = force? ncp1
  Rsh_Fir_reg_ncp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncp1_);
  // checkMissing(ncp2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ncp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return ncp2
  return Rsh_Fir_reg_ncp2_;
}
SEXP Rsh_Fir_user_promise_inner1041539299_2(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return n6
  return Rsh_Fir_reg_n6_;
}
SEXP Rsh_Fir_user_promise_inner1041539299_3(SEXP CCP, SEXP RHO) {
  // df3 = ld df
  Rsh_Fir_reg_df3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // df4 = force? df3
  Rsh_Fir_reg_df4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df3_);
  // checkMissing(df4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_df4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return df4
  return Rsh_Fir_reg_df4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
