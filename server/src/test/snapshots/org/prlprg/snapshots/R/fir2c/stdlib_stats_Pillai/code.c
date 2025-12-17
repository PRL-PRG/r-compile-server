#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2186619426_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2186619426_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2186619426
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2186619426_, RHO, CCP);
  // st Pillai = r
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
SEXP Rsh_Fir_user_function_inner2186619426_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2186619426 dynamic dispatch ([eig, q, `df.res`])

  return Rsh_Fir_user_version_inner2186619426_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2186619426_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2186619426 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2186619426/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_eig;  // eig
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_df_res;  // df_res
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_eig1_;  // eig1
  SEXP Rsh_Fir_reg_eig2_;  // eig2
  SEXP Rsh_Fir_reg_eig3_;  // eig3
  SEXP Rsh_Fir_reg_eig4_;  // eig4
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_eig5_;  // eig5
  SEXP Rsh_Fir_reg_eig6_;  // eig6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_df_res1_;  // df_res1
  SEXP Rsh_Fir_reg_df_res2_;  // df_res2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_test;  // test
  SEXP Rsh_Fir_reg_test1_;  // test1
  SEXP Rsh_Fir_reg_tmp2_;  // tmp2
  SEXP Rsh_Fir_reg_tmp3_;  // tmp3
  SEXP Rsh_Fir_reg_tmp4_;  // tmp4
  SEXP Rsh_Fir_reg_tmp5_;  // tmp5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_test2_;  // test2
  SEXP Rsh_Fir_reg_test3_;  // test3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_test4_;  // test4
  SEXP Rsh_Fir_reg_test5_;  // test5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_s6_;  // s6
  SEXP Rsh_Fir_reg_s7_;  // s7
  SEXP Rsh_Fir_reg_tmp6_;  // tmp6
  SEXP Rsh_Fir_reg_tmp7_;  // tmp7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_s8_;  // s8
  SEXP Rsh_Fir_reg_s9_;  // s9
  SEXP Rsh_Fir_reg_tmp8_;  // tmp8
  SEXP Rsh_Fir_reg_tmp9_;  // tmp9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r37_;  // r37

  // Bind parameters
  Rsh_Fir_reg_eig = PARAMS[0];
  Rsh_Fir_reg_q = PARAMS[1];
  Rsh_Fir_reg_df_res = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st eig = eig
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_eig, RHO);
  (void)(Rsh_Fir_reg_eig);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st `df.res` = df_res
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_df_res, RHO);
  (void)(Rsh_Fir_reg_df_res);
  // sym = ldf sum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st test = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // st p = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym2 = ldf min
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf min in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L2_:;
  // st s = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // df_res1 = ld `df.res`
  Rsh_Fir_reg_df_res1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

L3_:;
  // r21 = `-`(r18, 1.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // r22 = `*`(r17, r21)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st m = r22
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L26() else D13()
  // L26()
  goto L26_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;

L5_:;
  // eig1 = ld eig
  Rsh_Fir_reg_eig1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<lang `/`(eig, `(`(`+`(1.0, eig)))>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [eig1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_eig1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // eig2 = force? eig1
  Rsh_Fir_reg_eig2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eig1_);
  // checkMissing(eig2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_eig2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // eig3 = ld eig
  Rsh_Fir_reg_eig3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [eig2, 1.0, eig3]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_eig2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_eig3_;
  Rsh_Fir_deopt(4, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // eig4 = force? eig3
  Rsh_Fir_reg_eig4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eig3_);
  // checkMissing(eig4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_eig4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r2 = `+`(1.0, eig4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_eig4_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // r3 = `/`(eig2, r2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_eig2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn sum(r3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L10_:;
  // eig5 = ld eig
  Rsh_Fir_reg_eig5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L11_:;
  // r5 = dyn base1(<sym eig>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D3_:;
  // deopt 13 [eig5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_eig5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // eig6 = force? eig5
  Rsh_Fir_reg_eig6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eig5_);
  // checkMissing(eig6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_eig6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn length(eig6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_eig6_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

L14_:;
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L15_:;
  // r8 = dyn base2(<sym p>, <sym q>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L2_;

D5_:;
  // deopt 20 [p]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 22 [q1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r10 = dyn min(p1, q2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 25 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L2_;

D8_:;
  // deopt 28 [0.5, df_res1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_df_res1_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // df_res2 = force? df_res1
  Rsh_Fir_reg_df_res2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_res1_);
  // checkMissing(df_res2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_df_res2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 29 [0.5, df_res2, p2]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_df_res2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r11 = `-`(df_res2, p3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_df_res2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // r12 = `-`(r11, 1.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // r13 = `*`(0.5, r12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st n = r13
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf abs
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf abs in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

L22_:;
  // r16 = dyn base3(<lang `-`(p, q)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(0.5, r16)
  // L3(0.5, r16)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
  goto L3_;

D10_:;
  // deopt 39 [0.5, p4]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

D11_:;
  // deopt 40 [0.5, p5, q3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L24_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r19 = `-`(p5, q4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r20 = dyn abs(r19)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D12()
  // L25()
  goto L25_;

D12_:;
  // deopt 44 [0.5, r20]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L3(0.5, r20)
  // L3(0.5, r20)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r20_;
  goto L3_;

D13_:;
  // deopt 50 [2.0, m]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L26_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r23 = `*`(2.0, m1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L27() else D14()
  // L27()
  goto L27_;

D14_:;
  // deopt 52 [r23, s]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L27_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r24 = `+`(r23, s1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // r25 = `+`(r24, 1.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // st tmp1 = r25
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L28() else D15()
  // L28()
  goto L28_;

D15_:;
  // deopt 59 [2.0, n]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L28_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r26 = `*`(2.0, n1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L29() else D16()
  // L29()
  goto L29_;

D16_:;
  // deopt 61 [r26, s2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_s2_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L29_:;
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r27 = `+`(r26, s3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r28 = `+`(r27, 1.0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // st tmp2 = r28
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard4 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // test = ld test
  Rsh_Fir_reg_test = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

L31_:;
  // r29 = dyn base4(<sym test>, <lang `/`(`(`(`*`(`/`(tmp2, tmp1), test)), `(`(`-`(s, test)))>, <lang `*`(s, tmp1)>, <lang `*`(s, tmp2)>)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r29)
  // L4(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L4_;

D17_:;
  // deopt 69 [test]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_test;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L32_:;
  // test1 = force? test
  Rsh_Fir_reg_test1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test);
  // checkMissing(test1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_test1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // tmp2 = ld tmp2
  Rsh_Fir_reg_tmp2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D18_:;
  // deopt 71 [tmp2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tmp2_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L33_:;
  // tmp3 = force? tmp2
  Rsh_Fir_reg_tmp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp2_);
  // checkMissing(tmp3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_tmp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // tmp4 = ld tmp1
  Rsh_Fir_reg_tmp4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L34() else D19()
  // L34()
  goto L34_;

D19_:;
  // deopt 72 [tmp3, tmp4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_tmp3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_tmp4_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L34_:;
  // tmp5 = force? tmp4
  Rsh_Fir_reg_tmp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp4_);
  // checkMissing(tmp5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_tmp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r31 = `/`(tmp3, tmp5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_tmp3_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_tmp5_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // test2 = ld test
  Rsh_Fir_reg_test2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L35() else D20()
  // L35()
  goto L35_;

D20_:;
  // deopt 74 [r31, test2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_test2_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L35_:;
  // test3 = force? test2
  Rsh_Fir_reg_test3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test2_);
  // checkMissing(test3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_test3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r32 = `*`(r31, test3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_test3_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L36() else D21()
  // L36()
  goto L36_;

D21_:;
  // deopt 76 [r32, s4]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L36_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // test4 = ld test
  Rsh_Fir_reg_test4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D22()
  // L37()
  goto L37_;

D22_:;
  // deopt 77 [r32, s5, test4]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_test4_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L37_:;
  // test5 = force? test4
  Rsh_Fir_reg_test5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test4_);
  // checkMissing(test5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_test5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r33 = `-`(s5, test5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_test5_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // r34 = `/`(r32, r33)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // s6 = ld s
  Rsh_Fir_reg_s6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L38() else D23()
  // L38()
  goto L38_;

D23_:;
  // deopt 81 [s6]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_s6_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L38_:;
  // s7 = force? s6
  Rsh_Fir_reg_s7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s6_);
  // checkMissing(s7)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // tmp6 = ld tmp1
  Rsh_Fir_reg_tmp6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L39() else D24()
  // L39()
  goto L39_;

D24_:;
  // deopt 82 [s7, tmp6]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_tmp6_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L39_:;
  // tmp7 = force? tmp6
  Rsh_Fir_reg_tmp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp6_);
  // checkMissing(tmp7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_tmp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r35 = `*`(s7, tmp7)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_tmp7_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // s8 = ld s
  Rsh_Fir_reg_s8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L40() else D25()
  // L40()
  goto L40_;

D25_:;
  // deopt 85 [s8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_s8_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L40_:;
  // s9 = force? s8
  Rsh_Fir_reg_s9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s8_);
  // checkMissing(s9)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_s9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // tmp8 = ld tmp2
  Rsh_Fir_reg_tmp8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L41() else D26()
  // L41()
  goto L41_;

D26_:;
  // deopt 86 [s9, tmp8]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_tmp8_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L41_:;
  // tmp9 = force? tmp8
  Rsh_Fir_reg_tmp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp8_);
  // checkMissing(tmp9)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_tmp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r36 = `*`(s9, tmp9)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_tmp9_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r37 = dyn c(test1, r34, r35, r36)
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_test1_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args57[3] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D27()
  // L42()
  goto L42_;

D27_:;
  // deopt 90 [r37]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L4(r37)
  // L4(r37)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r37_;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
