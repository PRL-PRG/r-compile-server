#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3503827405_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3503827405_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3503827405
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3503827405_, RHO, CCP);
  // st pkolmogorov_one_exact = r
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
SEXP Rsh_Fir_user_function_inner3503827405_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3503827405 dynamic dispatch ([q, n, `lower.tail`])

  return Rsh_Fir_user_version_inner3503827405_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3503827405_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3503827405 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3503827405/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_q3_;  // q3
  SEXP Rsh_Fir_reg_q4_;  // q4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_q7_;  // q7
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_q10_;  // q10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_q13_;  // q13
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_lchoose;  // lchoose
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_q16_;  // q16
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_q17_;  // q17
  SEXP Rsh_Fir_reg_q18_;  // q18
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_q21_;  // q21
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_q22_;  // q22
  SEXP Rsh_Fir_reg_q23_;  // q23
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_lower_tail = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lower_tail_isMissing then L0(TRUE) else L0(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L0_;
  }

L0_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // sym = ldf `seq.int`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `seq.int` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // st j = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L2_:;
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn seq_int(0.0, r3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L3_:;
  // r46 = `*`(q7, r9)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_q7_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st p = r46
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

L4_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r45 = dyn sum(r11)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

L5_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L6_:;
  // r28 = `*`(r22, r23)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // r29 = `+`(r21, r28)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // j6 = ld j
  Rsh_Fir_reg_j6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

L7_:;
  // r42 = `*`(r37, r38)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // r43 = `+`(r36, r42)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // r44 = exp(r43)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(172, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L4(q21, r44)
  // L4(q21, r44)
  Rsh_Fir_reg_q10_ = Rsh_Fir_reg_q21_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r44_;
  goto L4_;

L8_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D19()
  // L44()
  goto L44_;

L9_:;
  // sym1 = ldf floor
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf floor in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // r = dyn base[from, to](0.0, <lang floor(`*`(n, `(`(`-`(1.0, q))))>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L11_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r2 = dyn base1(<lang `*`(n, `(`(`-`(1.0, q)))>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 5 [n1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 7 [n2, 1.0, q1]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r4 = `-`(1.0, q2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_q2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // r5 = `*`(n2, r4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r6 = floor(r5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r6_;
  goto L2_;

D2_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r7_;
  goto L1_;

D3_:;
  // deopt 16 [q3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_q3_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // sym3 = ldf exp
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf exp in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L18_:;
  // r8 = dyn base2(<lang exp(`+`(`+`(lchoose(n, j), `*`(`(`(`-`(n, j)), log(`-`(`-`(1.0, q), `/`(j, n))))), `*`(`(`(`-`(j, 1.0)), log(`+`(q, `/`(j, n))))))>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(q4, r8)
  // L3(q4, r8)
  Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

L19_:;
  // sym4 = ldf lchoose
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf lchoose in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard4 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r10 = dyn base3(<lang `+`(`+`(lchoose(n, j), `*`(`(`(`-`(n, j)), log(`-`(`-`(1.0, q), `/`(j, n))))), `*`(`(`(`-`(j, 1.0)), log(`+`(q, `/`(j, n)))))>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(q4, r10)
  // L4(q4, r10)
  Rsh_Fir_reg_q10_ = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

L21_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r12 = dyn base4(<sym n>, <sym j>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(q4, r12)
  // L5(q4, r12)
  Rsh_Fir_reg_q13_ = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D4_:;
  // deopt 22 [q4, n3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 24 [q4, j]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // lchoose = ldf lchoose in base
  Rsh_Fir_reg_lchoose = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r14 = dyn lchoose(n4, j1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lchoose, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D6_:;
  // deopt 27 [q4, r14]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(q4, r14)
  // L5(q4, r14)
  Rsh_Fir_reg_q13_ = Rsh_Fir_reg_q4_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

D7_:;
  // deopt 27 [q13, r13, n5]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 28 [q13, r13, n6, j2]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(28, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r15 = `-`(n6, j3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_j3_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // sym5 = ldf log
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf log in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard5 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // q17 = ld q
  Rsh_Fir_reg_q17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L29_:;
  // r20 = dyn base5(<lang `-`(`-`(1.0, q), `/`(j, n))>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(q13, r13, r15, r20)
  // L6(q13, r13, r15, r20)
  Rsh_Fir_reg_q16_ = Rsh_Fir_reg_q13_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r20_;
  goto L6_;

D9_:;
  // deopt 32 [q13, r13, r15, 1.0, q17]
  SEXP Rsh_Fir_array_deopt_stack9[5];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_q17_;
  Rsh_Fir_deopt(32, 5, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // q18 = force? q17
  Rsh_Fir_reg_q18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q17_);
  // checkMissing(q18)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_q18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r24 = `-`(1.0, q18)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_q18_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 34 [q13, r13, r15, r24, j4]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(34, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // checkMissing(j5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 35 [q13, r13, r15, r24, j5, n7]
  SEXP Rsh_Fir_array_deopt_stack11[6];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_deopt_stack11[5] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(35, 6, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r25 = `/`(j5, n8)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r26 = `-`(r24, r25)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // r27 = log(r26, 2.718281828459045)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L6(q13, r13, r15, r27)
  // L6(q13, r13, r15, r27)
  Rsh_Fir_reg_q16_ = Rsh_Fir_reg_q13_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r27_;
  goto L6_;

D12_:;
  // deopt 41 [q16, r29, j6]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_j6_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // j7 = force? j6
  Rsh_Fir_reg_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j6_);
  // checkMissing(j7)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_j7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r30 = `-`(j7, 1.0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_j7_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // sym6 = ldf log
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf log in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // q22 = ld q
  Rsh_Fir_reg_q22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

L35_:;
  // r35 = dyn base6(<lang `+`(q, `/`(j, n))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(q16, r29, r30, r35)
  // L7(q16, r29, r30, r35)
  Rsh_Fir_reg_q21_ = Rsh_Fir_reg_q16_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r35_;
  goto L7_;

D13_:;
  // deopt 45 [q16, r29, r30, q22]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_q22_;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // q23 = force? q22
  Rsh_Fir_reg_q23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q22_);
  // checkMissing(q23)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_q23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // j8 = ld j
  Rsh_Fir_reg_j8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 46 [q16, r29, r30, q23, j8]
  SEXP Rsh_Fir_array_deopt_stack14[5];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_q23_;
  Rsh_Fir_array_deopt_stack14[4] = Rsh_Fir_reg_j8_;
  Rsh_Fir_deopt(46, 5, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // j9 = force? j8
  Rsh_Fir_reg_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j8_);
  // checkMissing(j9)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_j9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

D15_:;
  // deopt 47 [q16, r29, r30, q23, j9, n9]
  SEXP Rsh_Fir_array_deopt_stack15[6];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_q23_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_j9_;
  Rsh_Fir_array_deopt_stack15[5] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(47, 6, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L38_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r39 = `/`(j9, n10)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_j9_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_n10_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // r40 = `+`(q23, r39)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_q23_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // r41 = log(r40, 2.718281828459045)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L7(q16, r29, r30, r41)
  // L7(q16, r29, r30, r41)
  Rsh_Fir_reg_q21_ = Rsh_Fir_reg_q16_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r41_;
  goto L7_;

D16_:;
  // deopt 56 [q10, r45]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_q10_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L3(q10, r45)
  // L3(q10, r45)
  Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q10_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r45_;
  goto L3_;

D17_:;
  // deopt 59 [lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L40_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(lower_tail2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c then L41() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L41()
    goto L41_;
  } else {
  // L8()
    goto L8_;
  }

L41_:;
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L42() else D18()
  // L42()
  goto L42_;

D18_:;
  // deopt 62 [1.0, p]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L42_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r47 = `-`(1.0, p1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;

D19_:;
  // deopt 65 [p2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L44_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return p3
  return Rsh_Fir_reg_p3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
