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
  // st Wilks = r
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
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_eig3_;  // eig3
  SEXP Rsh_Fir_reg_eig4_;  // eig4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_df_res1_;  // df_res1
  SEXP Rsh_Fir_reg_df_res2_;  // df_res2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_q5_;  // q5
  SEXP Rsh_Fir_reg_q6_;  // q6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_tmp3_;  // tmp3
  SEXP Rsh_Fir_reg_tmp4_;  // tmp4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_q7_;  // q7
  SEXP Rsh_Fir_reg_q8_;  // q8
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_tmp5_;  // tmp5
  SEXP Rsh_Fir_reg_tmp6_;  // tmp6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_test;  // test
  SEXP Rsh_Fir_reg_test1_;  // test1
  SEXP Rsh_Fir_reg_test2_;  // test2
  SEXP Rsh_Fir_reg_test3_;  // test3
  SEXP Rsh_Fir_reg_tmp7_;  // tmp7
  SEXP Rsh_Fir_reg_tmp8_;  // tmp8
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_tmp9_;  // tmp9
  SEXP Rsh_Fir_reg_tmp10_;  // tmp10
  SEXP Rsh_Fir_reg_tmp11_;  // tmp11
  SEXP Rsh_Fir_reg_tmp12_;  // tmp12
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_tmp13_;  // tmp13
  SEXP Rsh_Fir_reg_tmp14_;  // tmp14
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_q9_;  // q9
  SEXP Rsh_Fir_reg_q10_;  // q10
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_q11_;  // q11
  SEXP Rsh_Fir_reg_q12_;  // q12
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_tmp15_;  // tmp15
  SEXP Rsh_Fir_reg_tmp16_;  // tmp16
  SEXP Rsh_Fir_reg_tmp17_;  // tmp17
  SEXP Rsh_Fir_reg_tmp18_;  // tmp18
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_tmp19_;  // tmp19
  SEXP Rsh_Fir_reg_tmp20_;  // tmp20
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r43_;  // r43

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
  // sym = ldf prod
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf prod in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
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
  // df_res1 = ld `df.res`
  Rsh_Fir_reg_df_res1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L2_:;
  // goto L4(1.0)
  // L4(1.0)
  Rsh_Fir_reg_r27_ = Rsh_const(CCP, 8);
  goto L4_;

L3_:;
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r21_;
  goto L4_;

L4_:;
  // st tmp3 = r27
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;

L6_:;
  // eig1 = ld eig
  Rsh_Fir_reg_eig1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<lang `/`(1.0, `(`(`+`(1.0, eig)))>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 4 [1.0, 1.0, eig1]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack[2] = Rsh_Fir_reg_eig1_;
  Rsh_Fir_deopt(4, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // eig2 = force? eig1
  Rsh_Fir_reg_eig2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eig1_);
  // checkMissing(eig2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_eig2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r2 = `+`(1.0, eig2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_eig2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // r3 = `/`(1.0, r2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn prod(r3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L10_:;
  // eig3 = ld eig
  Rsh_Fir_reg_eig3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r5 = dyn base1(<sym eig>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D2_:;
  // deopt 13 [eig3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_eig3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // eig4 = force? eig3
  Rsh_Fir_reg_eig4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eig3_);
  // checkMissing(eig4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_eig4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn length(eig4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_eig4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

D4_:;
  // deopt 18 [df_res1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_df_res1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // df_res2 = force? df_res1
  Rsh_Fir_reg_df_res2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_res1_);
  // checkMissing(df_res2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_df_res2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 20 [df_res2, 0.5, p]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_df_res2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 21 [df_res2, 0.5, p1, q1]
  SEXP Rsh_Fir_array_deopt_stack6[4];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_df_res2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r8 = `-`(p1, q2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // r9 = `+`(r8, 1.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // r10 = `*`(0.5, r9)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r11 = `-`(df_res2, r10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_df_res2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // st tmp1 = r11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 29 [p2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 30 [p3, q3]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r12 = `*`(p3, q4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // r13 = `-`(r12, 2.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // r14 = `/`(r13, 4.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st tmp2 = r14
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 38 [p4]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L19_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r15 = `^`(p5, 2.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // q5 = ld q
  Rsh_Fir_reg_q5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

D10_:;
  // deopt 41 [r15, q5]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_q5_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // q6 = force? q5
  Rsh_Fir_reg_q6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q5_);
  // checkMissing(q6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_q6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r16 = `^`(q6, 2.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_q6_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // r17 = `+`(r15, r16)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // r18 = `-`(r17, 5.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // st tmp3 = r18
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // tmp3 = ld tmp3
  Rsh_Fir_reg_tmp3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

D11_:;
  // deopt 49 [tmp3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_tmp3_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L21_:;
  // tmp4 = force? tmp3
  Rsh_Fir_reg_tmp4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp3_);
  // checkMissing(tmp4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_tmp4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r19 = `>`(tmp4, 0.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_tmp4_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r19)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L22_:;
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // p6 = ld p
  Rsh_Fir_reg_p6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L25() else D12()
  // L25()
  goto L25_;

L24_:;
  // r20 = dyn base2(<lang `/`(`(`(`-`(`^`(`(`(`*`(p, q)), 2.0), 4.0)), tmp3)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L3_;

D12_:;
  // deopt 54 [p6]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L25_:;
  // p7 = force? p6
  Rsh_Fir_reg_p7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p6_);
  // checkMissing(p7)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // q7 = ld q
  Rsh_Fir_reg_q7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D13()
  // L26()
  goto L26_;

D13_:;
  // deopt 55 [p7, q7]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_q7_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L26_:;
  // q8 = force? q7
  Rsh_Fir_reg_q8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q7_);
  // checkMissing(q8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_q8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r22 = `*`(p7, q8)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_q8_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // r23 = `^`(r22, 2.0)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r24 = `-`(r23, 4.0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // tmp5 = ld tmp3
  Rsh_Fir_reg_tmp5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L27() else D14()
  // L27()
  goto L27_;

D14_:;
  // deopt 61 [r24, tmp5]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_tmp5_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L27_:;
  // tmp6 = force? tmp5
  Rsh_Fir_reg_tmp6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp5_);
  // checkMissing(tmp6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_tmp6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r25 = `/`(r24, tmp6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_tmp6_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // r26 = sqrt(r25)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L3(r26)
  // L3(r26)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r26_;
  goto L3_;

L29_:;
  // test = ld test
  Rsh_Fir_reg_test = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D15()
  // L31()
  goto L31_;

L30_:;
  // r28 = dyn base3(<sym test>, <lang `/`(`/`(`(`(`*`(`(`(`-`(`^`(test, `(`(`/`(`-`(1.0), tmp3))), 1.0)), `(`(`-`(`*`(tmp1, tmp3), `*`(2.0, tmp2))))), p), q)>, <lang `*`(p, q)>, <lang `-`(`*`(tmp1, tmp3), `*`(2.0, tmp2))>)
  SEXP Rsh_Fir_array_args42[4];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args42[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r28)
  // L5(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L5_;

D15_:;
  // deopt 70 [test]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_test;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L31_:;
  // test1 = force? test
  Rsh_Fir_reg_test1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test);
  // checkMissing(test1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_test1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // test2 = ld test
  Rsh_Fir_reg_test2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L32() else D16()
  // L32()
  goto L32_;

D16_:;
  // deopt 72 [test2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_test2_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L32_:;
  // test3 = force? test2
  Rsh_Fir_reg_test3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test2_);
  // checkMissing(test3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_test3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // tmp7 = ld tmp3
  Rsh_Fir_reg_tmp7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L33() else D17()
  // L33()
  goto L33_;

D17_:;
  // deopt 74 [test3, -1.0, tmp7]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_test3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_tmp7_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L33_:;
  // tmp8 = force? tmp7
  Rsh_Fir_reg_tmp8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp7_);
  // checkMissing(tmp8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_tmp8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r30 = `/`(-1.0, tmp8)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_tmp8_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // r31 = `^`(test3, r30)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_test3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // r32 = `-`(r31, 1.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // tmp9 = ld tmp1
  Rsh_Fir_reg_tmp9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L34() else D18()
  // L34()
  goto L34_;

D18_:;
  // deopt 79 [r32, tmp9]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_tmp9_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L34_:;
  // tmp10 = force? tmp9
  Rsh_Fir_reg_tmp10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp9_);
  // checkMissing(tmp10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_tmp10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // tmp11 = ld tmp3
  Rsh_Fir_reg_tmp11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L35() else D19()
  // L35()
  goto L35_;

D19_:;
  // deopt 80 [r32, tmp10, tmp11]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_tmp10_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_tmp11_;
  Rsh_Fir_deopt(80, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L35_:;
  // tmp12 = force? tmp11
  Rsh_Fir_reg_tmp12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp11_);
  // checkMissing(tmp12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_tmp12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r33 = `*`(tmp10, tmp12)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_tmp10_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_tmp12_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // tmp13 = ld tmp2
  Rsh_Fir_reg_tmp13_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L36() else D20()
  // L36()
  goto L36_;

D20_:;
  // deopt 83 [r32, r33, 2.0, tmp13]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_tmp13_;
  Rsh_Fir_deopt(83, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L36_:;
  // tmp14 = force? tmp13
  Rsh_Fir_reg_tmp14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp13_);
  // checkMissing(tmp14)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_tmp14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r34 = `*`(2.0, tmp14)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_tmp14_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // r35 = `-`(r33, r34)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // r36 = `*`(r32, r35)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // p8 = ld p
  Rsh_Fir_reg_p8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L37() else D21()
  // L37()
  goto L37_;

D21_:;
  // deopt 87 [r36, p8]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L37_:;
  // p9 = force? p8
  Rsh_Fir_reg_p9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p8_);
  // checkMissing(p9)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r37 = `/`(r36, p9)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // q9 = ld q
  Rsh_Fir_reg_q9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L38() else D22()
  // L38()
  goto L38_;

D22_:;
  // deopt 89 [r37, q9]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_q9_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L38_:;
  // q10 = force? q9
  Rsh_Fir_reg_q10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q9_);
  // checkMissing(q10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_q10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r38 = `/`(r37, q10)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_q10_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // p10 = ld p
  Rsh_Fir_reg_p10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L39() else D23()
  // L39()
  goto L39_;

D23_:;
  // deopt 92 [p10]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L39_:;
  // p11 = force? p10
  Rsh_Fir_reg_p11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p10_);
  // checkMissing(p11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // q11 = ld q
  Rsh_Fir_reg_q11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L40() else D24()
  // L40()
  goto L40_;

D24_:;
  // deopt 93 [p11, q11]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_q11_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L40_:;
  // q12 = force? q11
  Rsh_Fir_reg_q12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q11_);
  // checkMissing(q12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_q12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r39 = `*`(p11, q12)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_q12_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // tmp15 = ld tmp1
  Rsh_Fir_reg_tmp15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L41() else D25()
  // L41()
  goto L41_;

D25_:;
  // deopt 96 [tmp15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_tmp15_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L41_:;
  // tmp16 = force? tmp15
  Rsh_Fir_reg_tmp16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp15_);
  // checkMissing(tmp16)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tmp16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // tmp17 = ld tmp3
  Rsh_Fir_reg_tmp17_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L42() else D26()
  // L42()
  goto L42_;

D26_:;
  // deopt 97 [tmp16, tmp17]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_tmp16_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_tmp17_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L42_:;
  // tmp18 = force? tmp17
  Rsh_Fir_reg_tmp18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp17_);
  // checkMissing(tmp18)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_tmp18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r40 = `*`(tmp16, tmp18)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_tmp16_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_tmp18_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // tmp19 = ld tmp2
  Rsh_Fir_reg_tmp19_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L43() else D27()
  // L43()
  goto L43_;

D27_:;
  // deopt 100 [r40, 2.0, tmp19]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_tmp19_;
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L43_:;
  // tmp20 = force? tmp19
  Rsh_Fir_reg_tmp20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp19_);
  // checkMissing(tmp20)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_tmp20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r41 = `*`(2.0, tmp20)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_tmp20_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // r42 = `-`(r40, r41)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r43 = dyn c1(test1, r38, r39, r42)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_test1_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args69[3] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D28()
  // L44()
  goto L44_;

D28_:;
  // deopt 105 [r43]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(r43)
  // L5(r43)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r43_;
  goto L5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
