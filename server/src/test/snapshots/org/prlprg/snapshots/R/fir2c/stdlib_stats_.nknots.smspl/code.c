#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4266987626
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4266987626_, RHO, CCP);
  // st `.nknots.smspl` = r
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
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4266987626 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner4266987626_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4266987626 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4266987626/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
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
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_log3_;  // log3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_log4_;  // log4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_log5_;  // log5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_a5_;  // a5
  SEXP Rsh_Fir_reg_a6_;  // a6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_a7_;  // a7
  SEXP Rsh_Fir_reg_a8_;  // a8
  SEXP Rsh_Fir_reg_a9_;  // a9
  SEXP Rsh_Fir_reg_a10_;  // a10
  SEXP Rsh_Fir_reg_a11_;  // a11
  SEXP Rsh_Fir_reg_a12_;  // a12
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_a13_;  // a13
  SEXP Rsh_Fir_reg_a14_;  // a14
  SEXP Rsh_Fir_reg_a15_;  // a15
  SEXP Rsh_Fir_reg_a16_;  // a16
  SEXP Rsh_Fir_reg_a17_;  // a17
  SEXP Rsh_Fir_reg_a18_;  // a18
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_n18_;  // n18
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_trunc;  // trunc
  SEXP Rsh_Fir_reg_r40_;  // r40

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L0_:;
  // sym = ldf trunc
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf trunc in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;

L2_:;
  // st a1 = r4
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf log2
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf log2 in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L3_:;
  // st a2 = r7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf log2
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf log2 in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L4_:;
  // st a3 = r10
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym4 = ldf log2
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf log2 in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L5_:;
  // st a4 = r13
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L6_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

L7_:;
  // trunc = ldf trunc in base
  Rsh_Fir_reg_trunc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r40 = dyn trunc(r22)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_trunc, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L50() else D22()
  // L50()
  goto L50_;

L8_:;
  // n13 = ld n
  Rsh_Fir_reg_n13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

L9_:;
  // n17 = ld n
  Rsh_Fir_reg_n17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

D0_:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r = `<`(n2, 50)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L11() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L0()
    goto L0_;
  }

L11_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 4 [n3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return n4
  return Rsh_Fir_reg_n4_;

L14_:;
  // sym1 = ldf log2
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf log2 in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // r1 = dyn base(<lang {
  //   `<-`(a1, log2(50.0));
  //   `<-`(a2, log2(100.0));
  //   `<-`(a3, log2(140.0));
  //   `<-`(a4, log2(200.0));
  //   if(`<`(n, 200), `^`(2.0, `(`(`+`(a1, `/`(`*`(`(`(`-`(a2, a1)), `(`(`-`(n, 50.0))), 150.0)))), if(`<`(n, 800), `^`(2.0, `(`(`+`(a2, `/`(`*`(`(`(`-`(a3, a2)), `(`(`-`(n, 200.0))), 600.0)))), if(`<`(n, 3200), `^`(2.0, `(`(`+`(a3, `/`(`*`(`(`(`-`(a4, a3)), `(`(`-`(n, 800.0))), 2400.0)))), `+`(200.0, `^`(`(`(`-`(n, 3200.0)), 0.2)))))
  // }>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

L16_:;
  // log2 = ldf log2 in base
  Rsh_Fir_reg_log2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn log2(50.0)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L17_:;
  // r3 = dyn base1(50.0)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L19_:;
  // log3 = ldf log2 in base
  Rsh_Fir_reg_log3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn log3(100.0)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log3_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L20_:;
  // r6 = dyn base2(100.0)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L22_:;
  // log4 = ldf log2 in base
  Rsh_Fir_reg_log4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r11 = dyn log4(140.0)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log4_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L23_:;
  // r9 = dyn base3(140.0)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D4_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L4_;

L25_:;
  // log5 = ldf log2 in base
  Rsh_Fir_reg_log5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r14 = dyn log5(200.0)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log5_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L26_:;
  // r12 = dyn base4(200.0)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D5_:;
  // deopt 30 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

D6_:;
  // deopt 32 [n5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r15 = `<`(n6, 200)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c1 then L29() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L29()
    goto L29_;
  } else {
  // L6()
    goto L6_;
  }

L29_:;
  // a1 = ld a1
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 37 [2.0, a1]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // a3 = ld a2
  Rsh_Fir_reg_a3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D8_:;
  // deopt 38 [2.0, a2, a3]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_a3_;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // a4 = force? a3
  Rsh_Fir_reg_a4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a3_);
  // checkMissing(a4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_a4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // a5 = ld a1
  Rsh_Fir_reg_a5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 39 [2.0, a2, a4, a5]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_a4_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_a5_;
  Rsh_Fir_deopt(39, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // a6 = force? a5
  Rsh_Fir_reg_a6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a5_);
  // checkMissing(a6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_a6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r16 = `-`(a4, a6)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_a4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_a6_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 41 [2.0, a2, r16, n7]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(41, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r17 = `-`(n8, 50.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // r18 = `*`(r16, r17)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // r19 = `/`(r18, 150.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // r20 = `+`(a2, r19)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_a2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // r21 = `^`(2.0, r20)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L7_;

D11_:;
  // deopt 50 [n9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r23 = `<`(n10, 800)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c2 then L36() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L36()
    goto L36_;
  } else {
  // L8()
    goto L8_;
  }

L36_:;
  // a7 = ld a2
  Rsh_Fir_reg_a7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 55 [2.0, a7]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_a7_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // a8 = force? a7
  Rsh_Fir_reg_a8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a7_);
  // checkMissing(a8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_a8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // a9 = ld a3
  Rsh_Fir_reg_a9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 56 [2.0, a8, a9]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_a8_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_a9_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L38_:;
  // a10 = force? a9
  Rsh_Fir_reg_a10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a9_);
  // checkMissing(a10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_a10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // a11 = ld a2
  Rsh_Fir_reg_a11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 57 [2.0, a8, a10, a11]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_a8_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_a10_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_a11_;
  Rsh_Fir_deopt(57, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L39_:;
  // a12 = force? a11
  Rsh_Fir_reg_a12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a11_);
  // checkMissing(a12)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_a12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r24 = `-`(a10, a12)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_a10_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_a12_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

D15_:;
  // deopt 59 [2.0, a8, r24, n11]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_a8_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_n11_;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L40_:;
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r25 = `-`(n12, 200.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // r26 = `*`(r24, r25)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // r27 = `/`(r26, 600.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // r28 = `+`(a8, r27)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_a8_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // r29 = `^`(2.0, r28)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r29_;
  goto L7_;

D16_:;
  // deopt 68 [n13]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L42_:;
  // n14 = force? n13
  Rsh_Fir_reg_n14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n13_);
  // checkMissing(n14)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r30 = `<`(n14, 3200)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_n14_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L9()
    goto L9_;
  }

L43_:;
  // a13 = ld a3
  Rsh_Fir_reg_a13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L44() else D17()
  // L44()
  goto L44_;

D17_:;
  // deopt 73 [2.0, a13]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_a13_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L44_:;
  // a14 = force? a13
  Rsh_Fir_reg_a14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a13_);
  // checkMissing(a14)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_a14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // a15 = ld a4
  Rsh_Fir_reg_a15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L45() else D18()
  // L45()
  goto L45_;

D18_:;
  // deopt 74 [2.0, a14, a15]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_a15_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L45_:;
  // a16 = force? a15
  Rsh_Fir_reg_a16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a15_);
  // checkMissing(a16)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_a16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // a17 = ld a3
  Rsh_Fir_reg_a17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L46() else D19()
  // L46()
  goto L46_;

D19_:;
  // deopt 75 [2.0, a14, a16, a17]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_a16_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_a17_;
  Rsh_Fir_deopt(75, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L46_:;
  // a18 = force? a17
  Rsh_Fir_reg_a18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a17_);
  // checkMissing(a18)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_a18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r31 = `-`(a16, a18)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_a16_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_a18_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // n15 = ld n
  Rsh_Fir_reg_n15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D20()
  // L47()
  goto L47_;

D20_:;
  // deopt 77 [2.0, a14, r31, n15]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_n15_;
  Rsh_Fir_deopt(77, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L47_:;
  // n16 = force? n15
  Rsh_Fir_reg_n16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n15_);
  // checkMissing(n16)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r32 = `-`(n16, 800.0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n16_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // r33 = `*`(r31, r32)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // r34 = `/`(r33, 2400.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // r35 = `+`(a14, r34)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // r36 = `^`(2.0, r35)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L7(r36)
  // L7(r36)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r36_;
  goto L7_;

D21_:;
  // deopt 87 [200.0, n17]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_n17_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L49_:;
  // n18 = force? n17
  Rsh_Fir_reg_n18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n17_);
  // checkMissing(n18)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_n18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r37 = `-`(n18, 3200.0)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_n18_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // r38 = `^`(r37, 0.2)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // r39 = `+`(200.0, r38)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L7(r39)
  // L7(r39)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r39_;
  goto L7_;

D22_:;
  // deopt 95 [r40]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L1(r40)
  // L1(r40)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r40_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
