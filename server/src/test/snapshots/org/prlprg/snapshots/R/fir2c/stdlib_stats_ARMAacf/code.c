#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2124986904_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2124986904_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2124986904_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2124986904_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_ARMAacf;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_ARMAacf1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_ARMAacf2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_zapsmall;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_toeplitz;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r41_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2124986904
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2124986904_, RHO, CCP);
  // st ARMAacf = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // ARMAacf = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(1.0, -0.25);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(1.0, <lang `-`(0.25)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn ARMAacf[, , `lag.max`](p, 1.0, 10.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st n = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 14 [2.0, n]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r6 = `-`(<missing>, n1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args5);
  // r7 = `^`(2.0, r6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args6);
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 19 [r7, 10.666666666666666, 8.0, n2]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(19, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r8 = `*`(8.0, n3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args8);
  // r9 = `+`(10.666666666666666, r8)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args9);
  // r10 = `*`(r7, r9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args10);
  // r11 = `/`(r10, 10.666666666666666)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args11);
  // st `a.n` = r11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // ARMAacf1 = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   c1 = ldf c in base;
  //   r14 = dyn c1(1.0, -0.25);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base1(1.0, <lang `-`(0.25)>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r16 = dyn ARMAacf1[, , `lag.max`](p1, 1.0, 10.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf1_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L5_:;
  // st `A.n` = r16
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p5 = prom<V +>{
  //   all_equal = ldf `all.equal`;
  //   p3 = prom<V +>{
  //     unname = ldf unname;
  //     p2 = prom<V +>{
  //       A_n = ld `A.n`;
  //       A_n1 = force? A_n;
  //       checkMissing(A_n1);
  //       return A_n1;
  //     };
  //     r18 = dyn unname(p2);
  //     return r18;
  //   };
  //   p4 = prom<V +>{
  //     sym2 = ldf c;
  //     base2 = ldf c in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r21):
  //     return r21;
  //   L1():
  //     a_n = ld `a.n`;
  //     a_n1 = force? a_n;
  //     checkMissing(a_n1);
  //     c2 = ldf c in base;
  //     r22 = dyn c2(1.0, a_n1);
  //     goto L0(r22);
  //   L2():
  //     r20 = dyn base2(1.0, <sym a.n>);
  //     goto L0(r20);
  //   };
  //   r24 = dyn all_equal(p3, p4);
  //   return r24;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r26 = dyn stopifnot(p5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 38 [r26]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // ARMAacf2 = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c3 = ldf c in base;
  //   r29 = dyn c3(1.0, -0.25);
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base3(1.0, <lang `-`(0.25)>);
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r31 = dyn ARMAacf2[, , `lag.max`, pacf](p6, 1.0, 10.0, TRUE)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf2_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 47 [r31]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L9_:;
  // zapsmall = ldf zapsmall
  Rsh_Fir_reg_zapsmall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p8 = prom<V +>{
  //   ARMAacf3 = ldf ARMAacf;
  //   p7 = prom<V +>{
  //     sym4 = ldf c;
  //     base4 = ldf c in base;
  //     guard4 = `==`.4(sym4, base4);
  //     if guard4 then L1() else L2();
  //   L0(r33):
  //     return r33;
  //   L1():
  //     c4 = ldf c in base;
  //     r34 = dyn c4(1.0, -0.25);
  //     goto L0(r34);
  //   L2():
  //     r32 = dyn base4(1.0, <lang `-`(0.25)>);
  //     goto L0(r32);
  //   };
  //   r36 = dyn ARMAacf3[, `lag.max`, pacf](p7, 10.0, TRUE);
  //   return r36;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r38 = dyn zapsmall(p8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_zapsmall, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 51 [r38]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L11_:;
  // toeplitz = ldf toeplitz
  Rsh_Fir_reg_toeplitz = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p9 = prom<V +>{
  //   ARMAacf4 = ldf ARMAacf;
  //   r39 = dyn ARMAacf4[, `lag.max`](0.8, 7.0);
  //   return r39;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r41 = dyn toeplitz(p9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toeplitz, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 55 [r41]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(1.0, -0.25)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(1.0, <lang `-`(0.25)>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r14 = dyn c1(1.0, -0.25)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base1(1.0, <lang `-`(0.25)>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p3 = prom<V +>{
  //   unname = ldf unname;
  //   p2 = prom<V +>{
  //     A_n = ld `A.n`;
  //     A_n1 = force? A_n;
  //     checkMissing(A_n1);
  //     return A_n1;
  //   };
  //   r18 = dyn unname(p2);
  //   return r18;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   a_n = ld `a.n`;
  //   a_n1 = force? a_n;
  //   checkMissing(a_n1);
  //   c2 = ldf c in base;
  //   r22 = dyn c2(1.0, a_n1);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base2(1.0, <sym a.n>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r24 = dyn all_equal(p3, p4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unname;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // unname = ldf unname
  Rsh_Fir_reg_unname = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p2 = prom<V +>{
  //   A_n = ld `A.n`;
  //   A_n1 = force? A_n;
  //   checkMissing(A_n1);
  //   return A_n1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r18 = dyn unname(p2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unname, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_A_n;
  SEXP Rsh_Fir_reg_A_n1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // A_n = ld `A.n`
  Rsh_Fir_reg_A_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // A_n1 = force? A_n
  Rsh_Fir_reg_A_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_A_n);
  // checkMissing(A_n1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_A_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return A_n1
  return Rsh_Fir_reg_A_n1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_a_n;
  SEXP Rsh_Fir_reg_a_n1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // a_n = ld `a.n`
  Rsh_Fir_reg_a_n = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // a_n1 = force? a_n
  Rsh_Fir_reg_a_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a_n);
  // checkMissing(a_n1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_a_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r22 = dyn c2(1.0, a_n1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_a_n1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base2(1.0, <sym a.n>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r29 = dyn c3(1.0, -0.25)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base3(1.0, <lang `-`(0.25)>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ARMAacf3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ARMAacf3 = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p7 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   c4 = ldf c in base;
  //   r34 = dyn c4(1.0, -0.25);
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base4(1.0, <lang `-`(0.25)>);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r36 = dyn ARMAacf3[, `lag.max`, pacf](p7, 10.0, TRUE)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf3_, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r34 = dyn c4(1.0, -0.25)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base4(1.0, <lang `-`(0.25)>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ARMAacf4_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ARMAacf4 = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r39 = dyn ARMAacf4[, `lag.max`](0.8, 7.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_function_inner2124986904_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2124986904 dynamic dispatch ([ar, ma, `lag.max`, pacf])

  return Rsh_Fir_user_version_inner2124986904_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2124986904_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2124986904 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2124986904/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ar;
  SEXP Rsh_Fir_reg_ma;
  SEXP Rsh_Fir_reg_lag_max;
  SEXP Rsh_Fir_reg_pacf;
  SEXP Rsh_Fir_reg_ar_isMissing;
  SEXP Rsh_Fir_reg_ar_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_ma_isMissing;
  SEXP Rsh_Fir_reg_ma_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_lag_max_isMissing;
  SEXP Rsh_Fir_reg_lag_max_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_pacf_isMissing;
  SEXP Rsh_Fir_reg_pacf_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_ar1_;
  SEXP Rsh_Fir_reg_ar2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_ma1_;
  SEXP Rsh_Fir_reg_ma2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_q;
  SEXP Rsh_Fir_reg_q1_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_reg_q3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_ar3_;
  SEXP Rsh_Fir_reg_ar4_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r41_1;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_ind8_;
  SEXP Rsh_Fir_reg_ind9_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_ar5_;
  SEXP Rsh_Fir_reg_ar6_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_ind12_;
  SEXP Rsh_Fir_reg_ind13_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_A;
  SEXP Rsh_Fir_reg_A1_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_A3_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_A4_;
  SEXP Rsh_Fir_reg_A5_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_A7_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_p2_3_;
  SEXP Rsh_Fir_reg_p2_4_;
  SEXP Rsh_Fir_reg_p28_;
  SEXP Rsh_Fir_reg_p29_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_p30_;
  SEXP Rsh_Fir_reg_p31_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_rep1_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_q4_;
  SEXP Rsh_Fir_reg_q5_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_ARMAtoMA;
  SEXP Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_reg_p33_;
  SEXP Rsh_Fir_reg_p34_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_ma5_;
  SEXP Rsh_Fir_reg_ma6_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_rep2_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_q8_;
  SEXP Rsh_Fir_reg_q9_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_psi;
  SEXP Rsh_Fir_reg_psi1_;
  SEXP Rsh_Fir_reg_theta;
  SEXP Rsh_Fir_reg_theta1_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_psi3_;
  SEXP Rsh_Fir_reg_theta3_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_psi5_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_k;
  SEXP Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_reg_q10_;
  SEXP Rsh_Fir_reg_q11_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_k2_;
  SEXP Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_p35_;
  SEXP Rsh_Fir_reg_p36_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_solve;
  SEXP Rsh_Fir_reg_p37_;
  SEXP Rsh_Fir_reg_p38_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_Acf;
  SEXP Rsh_Fir_reg_Acf1_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_Acf3_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_Acf4_;
  SEXP Rsh_Fir_reg_Acf5_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_Acf7_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_ar9_;
  SEXP Rsh_Fir_reg_ar10_;
  SEXP Rsh_Fir_reg_lag_max1_;
  SEXP Rsh_Fir_reg_lag_max2_;
  SEXP Rsh_Fir_reg_p39_;
  SEXP Rsh_Fir_reg_p40_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_rep3_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_Acf8_;
  SEXP Rsh_Fir_reg_Acf9_;
  SEXP Rsh_Fir_reg_filter;
  SEXP Rsh_Fir_reg_p41_;
  SEXP Rsh_Fir_reg_p42_;
  SEXP Rsh_Fir_reg_p44_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_Acf12_;
  SEXP Rsh_Fir_reg_Acf13_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_Acf15_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_reg_lag_max3_;
  SEXP Rsh_Fir_reg_lag_max4_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_q12_;
  SEXP Rsh_Fir_reg_q13_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_ma7_;
  SEXP Rsh_Fir_reg_ma8_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_filter1_;
  SEXP Rsh_Fir_reg_p45_;
  SEXP Rsh_Fir_reg_p47_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg_q14_;
  SEXP Rsh_Fir_reg_q15_;
  SEXP Rsh_Fir_reg_r163_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_lag_max5_;
  SEXP Rsh_Fir_reg_lag_max6_;
  SEXP Rsh_Fir_reg_q16_;
  SEXP Rsh_Fir_reg_q17_;
  SEXP Rsh_Fir_reg_r166_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_r168_;
  SEXP Rsh_Fir_reg_Acf16_;
  SEXP Rsh_Fir_reg_Acf17_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_reg_rep5_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_Acf18_;
  SEXP Rsh_Fir_reg_Acf19_;
  SEXP Rsh_Fir_reg_Acf20_;
  SEXP Rsh_Fir_reg_Acf21_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_Acf24_;
  SEXP Rsh_Fir_reg_Acf25_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_Acf27_;
  SEXP Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_reg___11_;
  SEXP Rsh_Fir_reg_r174_;
  SEXP Rsh_Fir_reg_r175_;
  SEXP Rsh_Fir_reg_lag_max7_;
  SEXP Rsh_Fir_reg_lag_max8_;
  SEXP Rsh_Fir_reg_r176_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r177_;
  SEXP Rsh_Fir_reg_pacf1_;
  SEXP Rsh_Fir_reg_pacf2_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r178_;
  SEXP Rsh_Fir_reg_r179_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r180_;
  SEXP Rsh_Fir_reg_r181_;
  SEXP Rsh_Fir_reg_C_pacf1_;
  SEXP Rsh_Fir_reg_C_pacf2_;
  SEXP Rsh_Fir_reg_Acf28_;
  SEXP Rsh_Fir_reg_Acf29_;
  SEXP Rsh_Fir_reg_lag_max9_;
  SEXP Rsh_Fir_reg_lag_max10_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r182_;
  SEXP Rsh_Fir_reg_drop;
  SEXP Rsh_Fir_reg_r183_;
  SEXP Rsh_Fir_reg_Acf30_;
  SEXP Rsh_Fir_reg_Acf31_;

  // Bind parameters
  Rsh_Fir_reg_ar = PARAMS[0];
  Rsh_Fir_reg_ma = PARAMS[1];
  Rsh_Fir_reg_lag_max = PARAMS[2];
  Rsh_Fir_reg_pacf = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // ar_isMissing = missing.0(ar)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ar;
  Rsh_Fir_reg_ar_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if ar_isMissing then L0() else L1(ar)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ar_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(ar)
    Rsh_Fir_reg_ar_orDefault = Rsh_Fir_reg_ar;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   numeric = ldf numeric;
  //   r = dyn numeric();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_ar_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st ar = ar_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_ar_orDefault, RHO);
  (void)(Rsh_Fir_reg_ar_orDefault);
  // ma_isMissing = missing.0(ma)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ma;
  Rsh_Fir_reg_ma_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if ma_isMissing then L2() else L3(ma)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ma_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(ma)
    Rsh_Fir_reg_ma_orDefault = Rsh_Fir_reg_ma;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   numeric1 = ldf numeric;
  //   r2 = dyn numeric1();
  //   return r2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_ma_orDefault = Rsh_Fir_reg_p1_1;
  goto L3_;

L3_:;
  // st ma = ma_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ma_orDefault, RHO);
  (void)(Rsh_Fir_reg_ma_orDefault);
  // lag_max_isMissing = missing.0(lag_max)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_lag_max;
  Rsh_Fir_reg_lag_max_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if lag_max_isMissing then L4() else L5(lag_max)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lag_max_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(lag_max)
    Rsh_Fir_reg_lag_max_orDefault = Rsh_Fir_reg_lag_max;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   r4 = ld r;
  //   r5 = force? r4;
  //   checkMissing(r5);
  //   return r5;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_2, 0, NULL, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_lag_max_orDefault = Rsh_Fir_reg_p2_1;
  goto L5_;

L5_:;
  // st `lag.max` = lag_max_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_lag_max_orDefault, RHO);
  (void)(Rsh_Fir_reg_lag_max_orDefault);
  // pacf_isMissing = missing.0(pacf)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_pacf;
  Rsh_Fir_reg_pacf_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if pacf_isMissing then L6(FALSE) else L6(pacf)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pacf_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_pacf_orDefault = Rsh_const(CCP, 28);
    goto L6_;
  } else {
  // L6(pacf)
    Rsh_Fir_reg_pacf_orDefault = Rsh_Fir_reg_pacf;
    goto L6_;
  }

L6_:;
  // st pacf = pacf_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_pacf_orDefault, RHO);
  (void)(Rsh_Fir_reg_pacf_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L7_:;
  // st p = r8
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard1 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L62_:;
  // ar1 = ld ar
  Rsh_Fir_reg_ar1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L64() else D0()
  // L64()
  goto L64_;

L63_:;
  // r7 = dyn base(<sym ar>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L7_;

D0_:;
  // deopt 2 [ar1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ar1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L8_:;
  // st q = r11
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // p3 = ld p
  Rsh_Fir_reg_p3_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L70() else D4()
  // L70()
  goto L70_;

L64_:;
  // ar2 = force? ar1
  Rsh_Fir_reg_ar2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar1_);
  // checkMissing(ar2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ar2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r9 = dyn length(ar2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ar2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L65() else D1()
  // L65()
  goto L65_;

L66_:;
  // ma1 = ld ma
  Rsh_Fir_reg_ma1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L68() else D2()
  // L68()
  goto L68_;

L67_:;
  // r10 = dyn base1(<sym ma>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L8_;

D1_:;
  // deopt 5 [r9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [ma1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ma1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 [p3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L7_;

L68_:;
  // ma2 = force? ma1
  Rsh_Fir_reg_ma2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma1_);
  // checkMissing(ma2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ma2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r12 = dyn length1(ma2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ma2_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L69() else D3()
  // L69()
  goto L69_;

L70_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_1);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r13 = `!`(p4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args49);
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c then L71() else L9(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L71()
    goto L71_;
  } else {
  // L9(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L9_;
  }

D3_:;
  // deopt 12 [r12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L9_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c6 then L74() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L74()
    goto L74_;
  } else {
  // L10()
    goto L10_;
  }

L69_:;
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_1;
  goto L8_;

L71_:;
  // q = ld q
  Rsh_Fir_reg_q = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L72() else D5()
  // L72()
  goto L72_;

D5_:;
  // deopt 17 [c, q]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_q;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym2 = ldf max
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf max in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard2 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L72_:;
  // q1 = force? q
  Rsh_Fir_reg_q1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q);
  // checkMissing(q1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_q1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r14 = `!`(q1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_q1_;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args54);
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args56);
  // goto L9(c4)
  // L9(c4)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c4_1;
  goto L9_;

L74_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L75() else D6()
  // L75()
  goto L75_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // st r = r18
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r18_1, RHO);
  (void)(Rsh_Fir_reg_r18_1);
  // p7 = ld p
  Rsh_Fir_reg_p7_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L83() else D11()
  // L83()
  goto L83_;

L75_:;
  // r15 = dyn stop("empty model supplied")
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L76() else D7()
  // L76()
  goto L76_;

L78_:;
  // p5 = ld p
  Rsh_Fir_reg_p5_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L80() else D8()
  // L80()
  goto L80_;

L79_:;
  // r17 = dyn base2(<sym p>, <lang `+`(q, 1.0)>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L12(r17)
  // L12(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L12_;

D7_:;
  // deopt 24 [r15]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 29 [p5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 38 [p7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L11()
  // L11()
  goto L11_;

L80_:;
  // p6 = force? p5
  Rsh_Fir_reg_p6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_1);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // q2 = ld q
  Rsh_Fir_reg_q2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L81() else D9()
  // L81()
  goto L81_;

L83_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_1);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p8_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r21 = `>`(p8, 0.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args61);
  // c7 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c7 then L84() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L84()
    goto L84_;
  } else {
  // L13()
    goto L13_;
  }

D9_:;
  // deopt 31 [q2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_q2_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L13_:;
  // q12 = ld q
  Rsh_Fir_reg_q12_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L214() else D66()
  // L214()
  goto L214_;

L50_:;
  // lag_max7 = ld `lag.max`
  Rsh_Fir_reg_lag_max7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L242() else D78()
  // L242()
  goto L242_;

L81_:;
  // q3 = force? q2
  Rsh_Fir_reg_q3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q2_);
  // checkMissing(q3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_q3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r19 = `+`(q3, 1.0)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_q3_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args64);
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r20 = dyn max(p6, r19)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L82() else D10()
  // L82()
  goto L82_;

L84_:;
  // r22 = ld r
  Rsh_Fir_reg_r22_1 = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L85() else D12()
  // L85()
  goto L85_;

D10_:;
  // deopt 36 [r20]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 42 [r22]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 289 [q12]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_q12_;
  Rsh_Fir_deopt(289, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D78_:;
  // deopt 342 [0.0, lag_max7]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_lag_max7_;
  Rsh_Fir_deopt(342, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r20_1;
  goto L12_;

L85_:;
  // r23 = force? r22
  Rsh_Fir_reg_r23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r22_1);
  // checkMissing(r23)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r24 = `>`(r23, 1.0)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args67);
  // c8 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c8 then L86() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L86()
    goto L86_;
  } else {
  // L14()
    goto L14_;
  }

L214_:;
  // q13 = force? q12
  Rsh_Fir_reg_q13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q12_);
  // checkMissing(q13)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_q13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r146 = `>`(q13, 0.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args70);
  // c34 = `as.logical`(r146)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // if c34 then L215() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L215()
    goto L215_;
  } else {
  // L51()
    goto L51_;
  }

L242_:;
  // lag_max8 = force? lag_max7
  Rsh_Fir_reg_lag_max8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max7_);
  // checkMissing(lag_max8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_lag_max8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r176 = `:`(0.0, lag_max8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_lag_max8_;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args73);
  // l13 = ld Acf
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L243() else D79()
  // L243()
  goto L243_;

D79_:;
  // deopt 346 [r176, l13, r176]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r176_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r176_;
  Rsh_Fir_deopt(346, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L14_:;
  // ar9 = ld ar
  Rsh_Fir_reg_ar9_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L192() else D56()
  // L192()
  goto L192_;

L43_:;
  // lag_max1 = ld `lag.max`
  Rsh_Fir_reg_lag_max1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L193() else D57()
  // L193()
  goto L193_;

L51_:;
  // goto L50()
  // L50()
  goto L50_;

L86_:;
  // r25 = ld r
  Rsh_Fir_reg_r25_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L87() else D13()
  // L87()
  goto L87_;

L215_:;
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard16 then L216() else L217()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L216()
    goto L216_;
  } else {
  // L217()
    goto L217_;
  }

L243_:;
  // r177 = dyn names__(l13, NULL, r176)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_r176_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r177_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L244() else D80()
  // L244()
  goto L244_;

D13_:;
  // deopt 46 [r25]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 248 [ar9]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ar9_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 251 [lag_max1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_lag_max1_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D80_:;
  // deopt 348 [r176, r177]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r176_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r177_;
  Rsh_Fir_deopt(348, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L52_:;
  // st x = r148
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r148_, RHO);
  (void)(Rsh_Fir_reg_r148_);
  // filter1 = ldf filter
  Rsh_Fir_reg_filter1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L220() else D69()
  // L220()
  goto L220_;

L87_:;
  // r26 = force? r25
  Rsh_Fir_reg_r26_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r25_);
  // checkMissing(r26)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r26_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // p9 = ld p
  Rsh_Fir_reg_p9_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L88() else D14()
  // L88()
  goto L88_;

L192_:;
  // ar10 = force? ar9
  Rsh_Fir_reg_ar10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar9_);
  // checkMissing(ar10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_ar10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // st Acf = ar10
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_ar10_, RHO);
  (void)(Rsh_Fir_reg_ar10_);
  // goto L43()
  // L43()
  goto L43_;

L193_:;
  // lag_max2 = force? lag_max1
  Rsh_Fir_reg_lag_max2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max1_);
  // checkMissing(lag_max2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_lag_max2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // p39 = ld p
  Rsh_Fir_reg_p39_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L194() else D58()
  // L194()
  goto L194_;

L216_:;
  // ma7 = ld ma
  Rsh_Fir_reg_ma7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L218() else D67()
  // L218()
  goto L218_;

L217_:;
  // r147 = dyn base16(1.0, <sym ma>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L52(r147)
  // L52(r147)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r147_;
  goto L52_;

L244_:;
  // st Acf = r177
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r177_, RHO);
  (void)(Rsh_Fir_reg_r177_);
  // pacf1 = ld pacf
  Rsh_Fir_reg_pacf1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L245() else D81()
  // L245()
  goto L245_;

D14_:;
  // deopt 47 [r26, p9]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 252 [lag_max2, p39]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_lag_max2_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_p39_;
  Rsh_Fir_deopt(252, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 296 [ma7]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_ma7_;
  Rsh_Fir_deopt(296, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 302 []
  Rsh_Fir_deopt(302, 0, NULL, CCP, RHO);
  return R_NilValue;

D81_:;
  // deopt 350 [pacf1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_pacf1_;
  Rsh_Fir_deopt(350, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L88_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_1);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r27 = `>`(r26, p10)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args81);
  // c9 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c9 then L89() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L89()
    goto L89_;
  } else {
  // L15()
    goto L15_;
  }

L194_:;
  // p40 = force? p39
  Rsh_Fir_reg_p40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p39_);
  // checkMissing(p40)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r126 = `>`(lag_max2, p40)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_lag_max2_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_p40_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args84);
  // c30 = `as.logical`(r126)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // if c30 then L195() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L195()
    goto L195_;
  } else {
  // L44()
    goto L44_;
  }

L218_:;
  // ma8 = force? ma7
  Rsh_Fir_reg_ma8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma7_);
  // checkMissing(ma8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_ma8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c35 = ldf c in base
  Rsh_Fir_reg_c35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r149 = dyn c35(1.0, ma8)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_ma8_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c35_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L219() else D68()
  // L219()
  goto L219_;

L220_:;
  // p45 = prom<V +>{
  //   sym17 = ldf c;
  //   base17 = ldf c in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L2() else L3();
  // L0(r151):
  //   return r151;
  // L2():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   sym18 = ldf rep;
  //   base18 = ldf rep in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L4() else L5();
  // L3():
  //   r150 = dyn base17(<sym x>, <lang rep(0.0, q)>);
  //   goto L0(r150);
  // L1(r153):
  //   c36 = ldf c in base;
  //   r155 = dyn c36(x2, r153);
  //   goto L0(r155);
  // L4():
  //   rep4 = ldf rep in base;
  //   r154 = dyn rep4(0.0, <sym q>);
  //   goto L1(r154);
  // L5():
  //   r152 = dyn base18(0.0, <sym q>);
  //   goto L1(r152);
  // }
  Rsh_Fir_reg_p45_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_3, 0, NULL, CCP, RHO);
  // p47 = prom<V +>{
  //   rev1 = ldf rev;
  //   p46 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   r158 = dyn rev1(p46);
  //   return r158;
  // }
  Rsh_Fir_reg_p47_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_4, 0, NULL, CCP, RHO);
  // r160 = dyn filter1[, , sides](p45, p47, 1.0)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p45_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p47_;
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_filter1_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L221() else D70()
  // L221()
  goto L221_;

L245_:;
  // pacf2 = force? pacf1
  Rsh_Fir_reg_pacf2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pacf1_);
  // checkMissing(pacf2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_pacf2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c41 = `as.logical`(pacf2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_pacf2_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // if c41 then L246() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L246()
    goto L246_;
  } else {
  // L59()
    goto L59_;
  }

D68_:;
  // deopt 299 [r149]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_deopt(299, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 307 [r160]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_deopt(307, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L98() else D18()
  // L98()
  goto L98_;

L44_:;
  // goto L47()
  // L47()
  goto L47_;

L47_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard15 then L205() else L206()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L205()
    goto L205_;
  } else {
  // L206()
    goto L206_;
  }

L59_:;
  // Acf30 = ld Acf
  Rsh_Fir_reg_Acf30_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L256() else D86()
  // L256()
  goto L256_;

L89_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard3 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L195_:;
  // sym13 = ldf rep
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base13 = ldf rep in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard13 then L196() else L197()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L196()
    goto L196_;
  } else {
  // L197()
    goto L197_;
  }

L219_:;
  // goto L52(r149)
  // L52(r149)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r149_;
  goto L52_;

L221_:;
  // c37 = `is.object`(r160)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args103);
  // if c37 then L222() else L223(r160)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L222()
    goto L222_;
  } else {
  // L223(r160)
    Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r160_;
    goto L223_;
  }

L246_:;
  // sym21 = ldf drop
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base21 = ldf drop in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard21 then L247() else L248()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L247()
    goto L247_;
  } else {
  // L248()
    goto L248_;
  }

D18_:;
  // deopt 65 [p11]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D86_:;
  // deopt 362 [Acf30]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_Acf30_;
  Rsh_Fir_deopt(362, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L16_:;
  // st ar = r29
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r29_1, RHO);
  (void)(Rsh_Fir_reg_r29_1);
  // r34 = ld r
  Rsh_Fir_reg_r34_1 = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L96() else D17()
  // L96()
  goto L96_;

L45_:;
  // st xx = r128
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard14 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L48_:;
  // st Acf = r141
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r141_, RHO);
  (void)(Rsh_Fir_reg_r141_);
  // goto L50()
  // L50()
  goto L50_;

L53_:;
  // st Acf = dx41
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx41_, RHO);
  (void)(Rsh_Fir_reg_dx41_);
  // lag_max5 = ld `lag.max`
  Rsh_Fir_reg_lag_max5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L226() else D72()
  // L226()
  goto L226_;

L60_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r179
  return Rsh_Fir_reg_r179_;

L90_:;
  // ar3 = ld ar
  Rsh_Fir_reg_ar3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L92() else D15()
  // L92()
  goto L92_;

L91_:;
  // r28 = dyn base3(<sym ar>, <lang rep(0.0, `-`(r, p))>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L16(r28)
  // L16(r28)
  Rsh_Fir_reg_r29_1 = Rsh_Fir_reg_r28_1;
  goto L16_;

L98_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r37 = `+`(p12, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args108);
  // st p1 = r37
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // p13 = ld p
  Rsh_Fir_reg_p13_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L99() else D19()
  // L99()
  goto L99_;

L196_:;
  // rep3 = ldf rep in base
  Rsh_Fir_reg_rep3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r129 = dyn rep3(0.0, <lang `-`(lag.max, p)>)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep3_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L45(r129)
  // L45(r129)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L45_;

L197_:;
  // r127 = dyn base13(0.0, <lang `-`(lag.max, p)>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L45(r127)
  // L45(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L45_;

L205_:;
  // Acf12 = ld Acf
  Rsh_Fir_reg_Acf12_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L207() else D63()
  // L207()
  goto L207_;

L206_:;
  // r140 = dyn base15(1.0, <lang `[`(Acf, `:`(1, lag.max))>)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L48(r140)
  // L48(r140)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L48_;

L222_:;
  // dr28 = tryDispatchBuiltin.1("[", r160)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r160_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc14 then L224() else L223(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L224()
    goto L224_;
  } else {
  // L223(dr28)
    Rsh_Fir_reg_r162_ = Rsh_Fir_reg_dr28_;
    goto L223_;
  }

L223_:;
  // q14 = ld q
  Rsh_Fir_reg_q14_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L225() else D71()
  // L225()
  goto L225_;

L247_:;
  // sym22 = ldf `.Call`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base22 = ldf `.Call` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args114);
  // if guard22 then L249() else L250()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L249()
    goto L249_;
  } else {
  // L250()
    goto L250_;
  }

L248_:;
  // r178 = dyn base21(<lang .Call(C_pacf1, Acf, lag.max)>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r178_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L60(r178)
  // L60(r178)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r178_;
  goto L60_;

L256_:;
  // Acf31 = force? Acf30
  Rsh_Fir_reg_Acf31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf30_);
  // checkMissing(Acf31)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_Acf31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return Acf31
  return Rsh_Fir_reg_Acf31_;

D15_:;
  // deopt 52 [ar3]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ar3_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 60 [r34]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 70 [p13]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 279 [Acf12]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_Acf12_;
  Rsh_Fir_deopt(279, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 309 [r162, 1, q14]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_q14_;
  Rsh_Fir_deopt(309, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 315 [lag_max5]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_lag_max5_;
  Rsh_Fir_deopt(315, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L46_:;
  // st Acf = r131
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r131_, RHO);
  (void)(Rsh_Fir_reg_r131_);
  // goto L47()
  // L47()
  goto L47_;

L61_:;
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r183 = dyn drop(r181)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r181_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L254() else D85()
  // L254()
  goto L254_;

L92_:;
  // ar4 = force? ar3
  Rsh_Fir_reg_ar4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar3_);
  // checkMissing(ar4)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_ar4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // sym4 = ldf rep
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf rep in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard4 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L96_:;
  // r35 = force? r34
  Rsh_Fir_reg_r35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r34_1);
  // checkMissing(r35)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // st p = r35
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L18()
  // L18()
  goto L18_;

L99_:;
  // p14 = force? p13
  Rsh_Fir_reg_p14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p13_);
  // checkMissing(p14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // p15 = ld p1
  Rsh_Fir_reg_p15_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L100() else D20()
  // L100()
  goto L100_;

L198_:;
  // Acf8 = ld Acf
  Rsh_Fir_reg_Acf8_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L200() else D59()
  // L200()
  goto L200_;

L199_:;
  // r130 = dyn base14(<sym Acf>, <lang filter(xx, ar, "recursive", init=rev(Acf))>)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L46(r130)
  // L46(r130)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L46_;

L207_:;
  // Acf13 = force? Acf12
  Rsh_Fir_reg_Acf13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf12_);
  // checkMissing(Acf13)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_Acf13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(Acf13)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_Acf13_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args124);
  // if c32 then L208() else L209(Acf13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L208()
    goto L208_;
  } else {
  // L209(Acf13)
    Rsh_Fir_reg_Acf15_ = Rsh_Fir_reg_Acf13_;
    goto L209_;
  }

L224_:;
  // dx40 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L53(dx40)
  // L53(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L53_;

L225_:;
  // q15 = force? q14
  Rsh_Fir_reg_q15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q14_);
  // checkMissing(q15)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_q15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r163 = `:`(1, q15)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_q15_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args127);
  // r164 = `-`(<missing>, r163)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_r163_;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args128);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r165 = dyn __10(r162, r164)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L53(r165)
  // L53(r165)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r165_;
  goto L53_;

L226_:;
  // lag_max6 = force? lag_max5
  Rsh_Fir_reg_lag_max6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max5_);
  // checkMissing(lag_max6)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_lag_max6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // q16 = ld q
  Rsh_Fir_reg_q16_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L227() else D73()
  // L227()
  goto L227_;

L249_:;
  // C_pacf1 = ld C_pacf1
  Rsh_Fir_reg_C_pacf1_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L251() else D82()
  // L251()
  goto L251_;

L250_:;
  // r180 = dyn base22(<sym C_pacf1>, <sym Acf>, <sym lag.max>)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args131[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r180_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 3, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L61(r180)
  // L61(r180)
  Rsh_Fir_reg_r181_ = Rsh_Fir_reg_r180_;
  goto L61_;

D20_:;
  // deopt 71 [p14, p15]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 261 [Acf8]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_Acf8_;
  Rsh_Fir_deopt(261, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 316 [lag_max6, q16]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_lag_max6_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_q16_;
  Rsh_Fir_deopt(316, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D82_:;
  // deopt 355 [C_pacf1]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_C_pacf1_;
  Rsh_Fir_deopt(355, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D85_:;
  // deopt 361 [r183]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r183_;
  Rsh_Fir_deopt(361, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L17_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r33 = dyn c10(ar4, r31)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_ar4_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L95() else D16()
  // L95()
  goto L95_;

L49_:;
  // c33 = ldf c in base
  Rsh_Fir_reg_c33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r144 = dyn c33(1.0, dx39)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c33_, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L212() else D65()
  // L212()
  goto L212_;

L93_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r32 = dyn rep(0.0, <lang `-`(r, p)>)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L17(r32)
  // L17(r32)
  Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_r32_1;
  goto L17_;

L94_:;
  // r30 = dyn base4(0.0, <lang `-`(r, p)>)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L17(r30)
  // L17(r30)
  Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_r30_;
  goto L17_;

L100_:;
  // p16 = force? p15
  Rsh_Fir_reg_p16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p15_);
  // checkMissing(p16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_p16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // r38 = `+`(p14, p16)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args137);
  // st `p2.1` = r38
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_r38_1, RHO);
  (void)(Rsh_Fir_reg_r38_1);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L101() else D21()
  // L101()
  goto L101_;

L200_:;
  // Acf9 = force? Acf8
  Rsh_Fir_reg_Acf9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf8_);
  // checkMissing(Acf9)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_Acf9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // filter = ldf filter
  Rsh_Fir_reg_filter = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L201() else D60()
  // L201()
  goto L201_;

L208_:;
  // dr26 = tryDispatchBuiltin.1("[", Acf13)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_Acf13_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if dc13 then L210() else L209(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L210()
    goto L210_;
  } else {
  // L209(dr26)
    Rsh_Fir_reg_Acf15_ = Rsh_Fir_reg_dr26_;
    goto L209_;
  }

L209_:;
  // lag_max3 = ld `lag.max`
  Rsh_Fir_reg_lag_max3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L211() else D64()
  // L211()
  goto L211_;

L227_:;
  // q17 = force? q16
  Rsh_Fir_reg_q17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q16_);
  // checkMissing(q17)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_q17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // r166 = `>`(lag_max6, q17)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_lag_max6_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_q17_;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args142);
  // c38 = `as.logical`(r166)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args143);
  // if c38 then L228() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L228()
    goto L228_;
  } else {
  // L54()
    goto L54_;
  }

L251_:;
  // C_pacf2 = force? C_pacf1
  Rsh_Fir_reg_C_pacf2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_pacf1_);
  // checkMissing(C_pacf2)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_C_pacf2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // Acf28 = ld Acf
  Rsh_Fir_reg_Acf28_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L252() else D83()
  // L252()
  goto L252_;

L254_:;
  // goto L60(r183)
  // L60(r183)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r183_;
  goto L60_;

D16_:;
  // deopt 58 [r33]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 264 []
  Rsh_Fir_deopt(264, 0, NULL, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 282 [Acf15, 1, lag_max3]
  SEXP Rsh_Fir_array_deopt_stack47[3];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_Acf15_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_lag_max3_;
  Rsh_Fir_deopt(282, 3, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 287 [r144]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D83_:;
  // deopt 356 [C_pacf2, Acf28]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_C_pacf2_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_Acf28_;
  Rsh_Fir_deopt(356, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L57()
  // L57()
  goto L57_;

L57_:;
  // Acf18 = ld Acf
  Rsh_Fir_reg_Acf18_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L236() else D76()
  // L236()
  goto L236_;

L95_:;
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r29_1 = Rsh_Fir_reg_r33_1;
  goto L16_;

L101_:;
  // p19 = prom<V +>{
  //   p17 = ld p1;
  //   p18 = force? p17;
  //   checkMissing(p18);
  //   return p18;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_6, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   p2_1 = ld `p2.1`;
  //   p2_2 = force? p2_1;
  //   checkMissing(p2_2);
  //   return p2_2;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_7, 0, NULL, CCP, RHO);
  // r41 = dyn matrix(0.0, p19, p20)
  SEXP Rsh_Fir_array_args147[3];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args147[2] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r41_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L102() else D22()
  // L102()
  goto L102_;

L201_:;
  // p41 = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p41_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_8, 0, NULL, CCP, RHO);
  // p42 = prom<V +>{
  //   ar11 = ld ar;
  //   ar12 = force? ar11;
  //   checkMissing(ar12);
  //   return ar12;
  // }
  Rsh_Fir_reg_p42_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_9, 0, NULL, CCP, RHO);
  // p44 = prom<V +>{
  //   rev = ldf rev;
  //   p43 = prom<V +>{
  //     Acf10 = ld Acf;
  //     Acf11 = force? Acf10;
  //     checkMissing(Acf11);
  //     return Acf11;
  //   };
  //   r135 = dyn rev(p43);
  //   return r135;
  // }
  Rsh_Fir_reg_p44_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_10, 0, NULL, CCP, RHO);
  // r137 = dyn filter[, , , init](p41, p42, "recursive", p44)
  SEXP Rsh_Fir_array_args152[4];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p41_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_p42_;
  Rsh_Fir_array_args152[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args152[3] = Rsh_Fir_reg_p44_;
  SEXP Rsh_Fir_array_arg_names51[4];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_array_arg_names51[3] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_filter, 4, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L202() else D61()
  // L202()
  goto L202_;

L210_:;
  // dx38 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L49(dx38)
  // L49(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L49_;

L211_:;
  // lag_max4 = force? lag_max3
  Rsh_Fir_reg_lag_max4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max3_);
  // checkMissing(lag_max4)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_lag_max4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // r142 = `:`(1, lag_max4)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_lag_max4_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args155);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r143 = dyn __9(Acf15, r142)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_Acf15_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L49(r143)
  // L49(r143)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r143_;
  goto L49_;

L212_:;
  // goto L48(r144)
  // L48(r144)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r144_;
  goto L48_;

L228_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args157);
  // if guard19 then L229() else L230()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L229()
    goto L229_;
  } else {
  // L230()
    goto L230_;
  }

L252_:;
  // Acf29 = force? Acf28
  Rsh_Fir_reg_Acf29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf28_);
  // checkMissing(Acf29)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_Acf29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // lag_max9 = ld `lag.max`
  Rsh_Fir_reg_lag_max9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L253() else D84()
  // L253()
  goto L253_;

D22_:;
  // deopt 80 [r41]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r41_1;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 270 [r137]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_deopt(270, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D76_:;
  // deopt 331 [Acf18]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_Acf18_;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D84_:;
  // deopt 357 [C_pacf2, Acf29, lag_max9]
  SEXP Rsh_Fir_array_deopt_stack53[3];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_C_pacf2_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_Acf29_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_lag_max9_;
  Rsh_Fir_deopt(357, 3, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L55_:;
  // st Acf = r168
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r168_, RHO);
  (void)(Rsh_Fir_reg_r168_);
  // goto L57()
  // L57()
  goto L57_;

L102_:;
  // st A = r41
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r41_1, RHO);
  (void)(Rsh_Fir_reg_r41_1);
  // sym5 = ldf seq_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base5 = ldf seq_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard5 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L202_:;
  // c31 = ldf c in base
  Rsh_Fir_reg_c31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r138 = dyn c31(Acf9, r137)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_Acf9_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c31_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L203() else D62()
  // L203()
  goto L203_;

L229_:;
  // Acf16 = ld Acf
  Rsh_Fir_reg_Acf16_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L231() else D74()
  // L231()
  goto L231_;

L230_:;
  // r167 = dyn base19(<sym Acf>, <lang rep(0.0, `-`(lag.max, q))>)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L55(r167)
  // L55(r167)
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r167_;
  goto L55_;

L236_:;
  // Acf19 = force? Acf18
  Rsh_Fir_reg_Acf19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf18_);
  // checkMissing(Acf19)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_Acf19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // Acf20 = ld Acf
  Rsh_Fir_reg_Acf20_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L237() else D77()
  // L237()
  goto L237_;

L253_:;
  // lag_max10 = force? lag_max9
  Rsh_Fir_reg_lag_max10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max9_);
  // checkMissing(lag_max10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_lag_max10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // vargs = dots[Acf29, lag_max10]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_Acf29_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_lag_max10_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r182 = `.Call`(C_pacf2, vargs, <missing>)
  SEXP Rsh_Fir_array_args164[3];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_C_pacf2_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args164[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args164);
  // goto L61(r182)
  // L61(r182)
  Rsh_Fir_reg_r181_ = Rsh_Fir_reg_r182_;
  goto L61_;

D62_:;
  // deopt 272 [r138]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 321 [Acf16]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_Acf16_;
  Rsh_Fir_deopt(321, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 332 [Acf19, Acf20]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_Acf19_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_Acf20_;
  Rsh_Fir_deopt(332, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L19_:;
  // st ind = r43
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L106() else D24()
  // L106()
  goto L106_;

L103_:;
  // p21 = ld p1
  Rsh_Fir_reg_p21_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L105() else D23()
  // L105()
  goto L105_;

L104_:;
  // r42 = dyn base5(<sym p1>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L19(r42)
  // L19(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L19_;

L203_:;
  // goto L46(r138)
  // L46(r138)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r138_;
  goto L46_;

L231_:;
  // Acf17 = force? Acf16
  Rsh_Fir_reg_Acf17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf16_);
  // checkMissing(Acf17)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_Acf17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // sym20 = ldf rep
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base20 = ldf rep in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if guard20 then L232() else L233()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L232()
    goto L232_;
  } else {
  // L233()
    goto L233_;
  }

L237_:;
  // Acf21 = force? Acf20
  Rsh_Fir_reg_Acf21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf20_);
  // checkMissing(Acf21)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_Acf21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(Acf21)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_Acf21_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args169);
  // if c40 then L238() else L239(Acf19, Acf21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L238()
    goto L238_;
  } else {
  // L239(Acf19, Acf21)
    Rsh_Fir_reg_Acf24_ = Rsh_Fir_reg_Acf19_;
    Rsh_Fir_reg_Acf25_ = Rsh_Fir_reg_Acf21_;
    goto L239_;
  }

D23_:;
  // deopt 83 [p21]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // c39 = ldf c in base
  Rsh_Fir_reg_c39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r172 = dyn c39(Acf17, r170)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_Acf17_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c39_, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L234() else D75()
  // L234()
  goto L234_;

L58_:;
  // r175 = `/`(Acf27, dx43)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_Acf27_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args171);
  // st Acf = r175
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r175_, RHO);
  (void)(Rsh_Fir_reg_r175_);
  // goto L50()
  // L50()
  goto L50_;

L105_:;
  // p22 = force? p21
  Rsh_Fir_reg_p22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p21_);
  // checkMissing(p22)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_p22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r44 = seq_len(p22)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args173);
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L19_;

L106_:;
  // p25 = prom<V +>{
  //   expand_grid = ldf `expand.grid`;
  //   p23 = prom<V +>{
  //     ind = ld ind;
  //     ind1 = force? ind;
  //     checkMissing(ind1);
  //     return ind1;
  //   };
  //   p24 = prom<V +>{
  //     ind2 = ld ind;
  //     ind3 = force? ind2;
  //     checkMissing(ind3);
  //     return ind3;
  //   };
  //   r47 = dyn expand_grid(p23, p24);
  //   return r47;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_12, 0, NULL, CCP, RHO);
  // r49 = dyn as_matrix(p25)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L107() else D25()
  // L107()
  goto L107_;

L232_:;
  // rep5 = ldf rep in base
  Rsh_Fir_reg_rep5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r171 = dyn rep5(0.0, <lang `-`(lag.max, q)>)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args178[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep5_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L56(r171)
  // L56(r171)
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r171_;
  goto L56_;

L233_:;
  // r169 = dyn base20(0.0, <lang `-`(lag.max, q)>)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L56(r169)
  // L56(r169)
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r169_;
  goto L56_;

L238_:;
  // dr30 = tryDispatchBuiltin.1("[", Acf21)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_Acf21_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args180);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // if dc15 then L240() else L239(Acf19, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L240()
    goto L240_;
  } else {
  // L239(Acf19, dr30)
    Rsh_Fir_reg_Acf24_ = Rsh_Fir_reg_Acf19_;
    Rsh_Fir_reg_Acf25_ = Rsh_Fir_reg_dr30_;
    goto L239_;
  }

L239_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r174 = dyn __11(Acf25, 1)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_Acf25_;
  Rsh_Fir_array_args182[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L58(Acf24, r174)
  // L58(Acf24, r174)
  Rsh_Fir_reg_Acf27_ = Rsh_Fir_reg_Acf24_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r174_;
  goto L58_;

D25_:;
  // deopt 90 [r49]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D75_:;
  // deopt 327 [r172]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r172_;
  Rsh_Fir_deopt(327, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L107_:;
  // c11 = `is.object`(r49)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args183);
  // if c11 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L234_:;
  // goto L55(r172)
  // L55(r172)
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r172_;
  goto L55_;

L240_:;
  // dx42 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // goto L58(Acf19, dx42)
  // L58(Acf19, dx42)
  Rsh_Fir_reg_Acf27_ = Rsh_Fir_reg_Acf19_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L58_;

L20_:;
  // st ind = dx1
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L111() else D26()
  // L111()
  goto L111_;

L108_:;
  // dr = tryDispatchBuiltin.1("[", r49)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args185);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc then L110() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L110()
    goto L110_;
  } else {
  // L109()
    goto L109_;
  }

L109_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r52 = dyn __(r49, <missing>, <int 2, 1>)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args187[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args187[2] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names62[3];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L20(r52)
  // L20(r52)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r52_;
  goto L20_;

D26_:;
  // deopt 97 [ind4]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L110_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L20(dx)
  // L20(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

L111_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(ind5)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args190);
  // if c12 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L21_:;
  // ind8 = ld ind
  Rsh_Fir_reg_ind8_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L115() else D27()
  // L115()
  goto L115_;

L112_:;
  // dr2 = tryDispatchBuiltin.1("[", ind5)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args191);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc1 then L114() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L114()
    goto L114_;
  } else {
  // L113()
    goto L113_;
  }

L113_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r53 = dyn __1(ind5, <missing>, 1)
  SEXP Rsh_Fir_array_args193[3];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args193[2] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L21(r53)
  // L21(r53)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r53_;
  goto L21_;

D27_:;
  // deopt 102 [dx3, ind8]
  SEXP Rsh_Fir_array_deopt_stack61[2];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_ind8_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L114_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L21(dx2)
  // L21(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L21_;

L115_:;
  // ind9 = force? ind8
  Rsh_Fir_reg_ind9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind8_);
  // checkMissing(ind9)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_ind9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(ind9)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args196);
  // if c13 then L116() else L117(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L116()
    goto L116_;
  } else {
  // L117(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L117_;
  }

L22_:;
  // r55 = `+`(dx8, dx9)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args197);
  // r56 = `-`(r55, 1)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args198[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args198);
  // l = ld ind
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // c14 = `is.object`(l)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args199);
  // if c14 then L119() else L120(r56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L119()
    goto L119_;
  } else {
  // L120(r56)
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    goto L120_;
  }

L116_:;
  // dr4 = tryDispatchBuiltin.1("[", ind9)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args200);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc2 then L118() else L117(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L118()
    goto L118_;
  } else {
  // L117(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L117_;
  }

L117_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r54 = dyn __2(ind9, <missing>, 2)
  SEXP Rsh_Fir_array_args202[3];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args202[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L22(dx5, r54)
  // L22(dx5, r54)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r54_;
  goto L22_;

L23_:;
  // st ind = dx11
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args203);
  // if guard6 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L118_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // goto L22(dx3, dx7)
  // L22(dx3, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L22_;

L119_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, r56)
  SEXP Rsh_Fir_array_args205[3];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args205[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args205);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc3 then L121() else L120(r56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L121()
    goto L121_;
  } else {
  // L120(r56)
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    goto L120_;
  }

L120_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r61 = dyn ___(l, <missing>, 2.0, r56)
  SEXP Rsh_Fir_array_args207[4];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args207[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args207[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args207[3] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names65[4];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_array_arg_names65[3] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L23(r61)
  // L23(r61)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r61_;
  goto L23_;

L24_:;
  // l3 = ld A
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // c16 = `is.object`(l3)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args208);
  // if c16 then L126() else L127(r63, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L126()
    goto L126_;
  } else {
  // L127(r63, l3)
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L127_;
  }

L121_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // goto L23(dx10)
  // L23(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L23_;

L122_:;
  // ar5 = ld ar
  Rsh_Fir_reg_ar5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L124() else D28()
  // L124()
  goto L124_;

L123_:;
  // r62 = dyn base6(1.0, <lang `-`(ar)>)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args210[1] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L24(r62)
  // L24(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L24_;

D28_:;
  // deopt 120 [ar5]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_ar5_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L25_:;
  // st A = dx13
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // A = ld A
  Rsh_Fir_reg_A = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L130() else D31()
  // L130()
  goto L130_;

L124_:;
  // ar6 = force? ar5
  Rsh_Fir_reg_ar6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar5_);
  // checkMissing(ar6)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_ar6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // r64 = `-`(<missing>, ar6)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_ar6_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args212);
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r65 = dyn c15(1.0, r64)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L125() else D29()
  // L125()
  goto L125_;

L126_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l3, r63)
  SEXP Rsh_Fir_array_args214[3];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args214[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args214);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if dc4 then L128() else L127(r63, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L128()
    goto L128_;
  } else {
  // L127(r63, dr8)
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L127_;
  }

L127_:;
  // ind12 = ld ind
  Rsh_Fir_reg_ind12_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L129() else D30()
  // L129()
  goto L129_;

D29_:;
  // deopt 124 [r65]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 126 [r67, l5, r63, ind12]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_ind12_;
  Rsh_Fir_deopt(126, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 130 [A]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_A;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L24(r65)
  // L24(r65)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r65_;
  goto L24_;

L128_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // goto L25(dx12)
  // L25(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L25_;

L129_:;
  // ind13 = force? ind12
  Rsh_Fir_reg_ind13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind12_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r70 = dyn ___1(l5, r63, ind13)
  SEXP Rsh_Fir_array_args217[3];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args217[2] = Rsh_Fir_reg_ind13_;
  SEXP Rsh_Fir_array_arg_names68[3];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_array_arg_names68[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L25(r70)
  // L25(r70)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r70_;
  goto L25_;

L130_:;
  // A1 = force? A
  Rsh_Fir_reg_A1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_A);
  // checkMissing(A1)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_A1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(A1)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_A1_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args219);
  // if c17 then L131() else L132(A1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L131()
    goto L131_;
  } else {
  // L132(A1)
    Rsh_Fir_reg_A3_ = Rsh_Fir_reg_A1_;
    goto L132_;
  }

L26_:;
  // A4 = ld A
  Rsh_Fir_reg_A4_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L135() else D33()
  // L135()
  goto L135_;

L131_:;
  // dr10 = tryDispatchBuiltin.1("[", A1)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_A1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args220);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // if dc5 then L133() else L132(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L133()
    goto L133_;
  } else {
  // L132(dr10)
    Rsh_Fir_reg_A3_ = Rsh_Fir_reg_dr10_;
    goto L132_;
  }

L132_:;
  // p26 = ld p
  Rsh_Fir_reg_p26_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L134() else D32()
  // L134()
  goto L134_;

D32_:;
  // deopt 134 [A3, 1, p26]
  SEXP Rsh_Fir_array_deopt_stack66[3];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_A3_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_p26_;
  Rsh_Fir_deopt(134, 3, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 138 [dx15, A4]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_A4_;
  Rsh_Fir_deopt(138, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L133_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L26(dx14)
  // L26(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L26_;

L134_:;
  // p27 = force? p26
  Rsh_Fir_reg_p27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p26_);
  // checkMissing(p27)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_p27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // r71 = `:`(1, p27)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_p27_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args224);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r72 = dyn __3(A1, <missing>, r71)
  SEXP Rsh_Fir_array_args225[3];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_A1_;
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args225[2] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names69[3];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L26(r72)
  // L26(r72)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r72_;
  goto L26_;

L135_:;
  // A5 = force? A4
  Rsh_Fir_reg_A5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_A4_);
  // checkMissing(A5)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_A5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(A5)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_A5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args227);
  // if c18 then L136() else L137(dx15, A5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L136()
    goto L136_;
  } else {
  // L137(dx15, A5)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_A7_ = Rsh_Fir_reg_A5_;
    goto L137_;
  }

L27_:;
  // r76 = `+`(dx20, dx21)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args228);
  // l6 = ld A
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // c19 = `is.object`(l6)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args229);
  // if c19 then L141() else L142(r76, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L141()
    goto L141_;
  } else {
  // L142(r76, l6)
    Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L142_;
  }

L136_:;
  // dr12 = tryDispatchBuiltin.1("[", A5)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_A5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args230);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc6 then L138() else L137(dx15, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L138()
    goto L138_;
  } else {
  // L137(dx15, dr12)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_A7_ = Rsh_Fir_reg_dr12_;
    goto L137_;
  }

L137_:;
  // p2_3 = ld `p2.1`
  Rsh_Fir_reg_p2_3_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L139() else D34()
  // L139()
  goto L139_;

D34_:;
  // deopt 141 [dx17, A7, p2_3]
  SEXP Rsh_Fir_array_deopt_stack68[3];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_A7_;
  Rsh_Fir_array_deopt_stack68[2] = Rsh_Fir_reg_p2_3_;
  Rsh_Fir_deopt(141, 3, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L28_:;
  // st A = dx23
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args232);
  // if guard7 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L138_:;
  // dx19 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L27(dx15, dx19)
  // L27(dx15, dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L27_;

L139_:;
  // p2_4 = force? p2_3
  Rsh_Fir_reg_p2_4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_3_);
  // checkMissing(p2_4)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_p2_4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // p28 = ld p
  Rsh_Fir_reg_p28_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L140() else D35()
  // L140()
  goto L140_;

L141_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l6, r76)
  SEXP Rsh_Fir_array_args235[3];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args235[2] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args235);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // if dc7 then L143() else L142(r76, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L143()
    goto L143_;
  } else {
  // L142(r76, dr14)
    Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr14_;
    goto L142_;
  }

L142_:;
  // p30 = ld p
  Rsh_Fir_reg_p30_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L144() else D36()
  // L144()
  goto L144_;

D35_:;
  // deopt 142 [dx17, A7, p2_4, p28]
  SEXP Rsh_Fir_array_deopt_stack69[4];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_A7_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_p2_4_;
  Rsh_Fir_array_deopt_stack69[3] = Rsh_Fir_reg_p28_;
  Rsh_Fir_deopt(142, 4, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 153 [r78, l8, r76, 1, p30]
  SEXP Rsh_Fir_array_deopt_stack70[5];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_r76_;
  Rsh_Fir_array_deopt_stack70[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack70[4] = Rsh_Fir_reg_p30_;
  Rsh_Fir_deopt(153, 5, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L29_:;
  // st rhs = r84
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_r84_, RHO);
  (void)(Rsh_Fir_reg_r84_);
  // q4 = ld q
  Rsh_Fir_reg_q4_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L150() else D38()
  // L150()
  goto L150_;

L140_:;
  // p29 = force? p28
  Rsh_Fir_reg_p29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p28_);
  // checkMissing(p29)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_p29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // r73 = `+`(p29, 2)
  SEXP Rsh_Fir_array_args238[2];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args238[1] = Rsh_const(CCP, 72);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args238);
  // r74 = `:`(p2_4, r73)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_p2_4_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args239);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r75 = dyn __4(A5, <missing>, r74)
  SEXP Rsh_Fir_array_args240[3];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_A5_;
  Rsh_Fir_array_args240[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args240[2] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names70[3];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_array_arg_names70[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L27(dx17, r75)
  // L27(dx17, r75)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r75_;
  goto L27_;

L143_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // goto L28(dx22)
  // L28(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L28_;

L144_:;
  // p31 = force? p30
  Rsh_Fir_reg_p31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p30_);
  // checkMissing(p31)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_p31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r81 = `:`(1, p31)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_p31_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args243);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r82 = dyn ___2(l6, <missing>, r81, r76)
  SEXP Rsh_Fir_array_args244[4];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args244[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args244[2] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_args244[3] = Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_array_arg_names71[4];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = R_MissingArg;
  Rsh_Fir_array_arg_names71[3] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L28(r82)
  // L28(r82)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r82_;
  goto L28_;

L145_:;
  // sym8 = ldf rep
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base8 = ldf rep in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args245);
  // if guard8 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L146_:;
  // r83 = dyn base7(1.0, <lang rep(0.0, p)>)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args246[1] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L29(r83)
  // L29(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L29_;

D38_:;
  // deopt 168 [q4]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_q4_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L30_:;
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r88 = dyn c20(1.0, r86)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 2, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L149() else D37()
  // L149()
  goto L149_;

L147_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r87 = dyn rep1(0.0, <sym p>)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args248[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L30(r87)
  // L30(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L30_;

L148_:;
  // r85 = dyn base8(0.0, <sym p>)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args249[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L30(r85)
  // L30(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L30_;

L150_:;
  // q5 = force? q4
  Rsh_Fir_reg_q5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q4_);
  // checkMissing(q5)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_q5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // r89 = `>`(q5, 0.0)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_array_args251[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args251);
  // c21 = `as.logical`(r89)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args252);
  // if c21 then L151() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L151()
    goto L151_;
  } else {
  // L31()
    goto L31_;
  }

D37_:;
  // deopt 166 [r88]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L40()
  // L40()
  goto L40_;

L40_:;
  // p35 = ld p1
  Rsh_Fir_reg_p35_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L180() else D51()
  // L180()
  goto L180_;

L149_:;
  // goto L29(r88)
  // L29(r88)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r88_;
  goto L29_;

L151_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args253);
  // if guard9 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

D51_:;
  // deopt 226 [p35]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_p35_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L32_:;
  // st psi = r91
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args254);
  // if guard10 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L152_:;
  // ARMAtoMA = ldf ARMAtoMA
  Rsh_Fir_reg_ARMAtoMA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // check L154() else D39()
  // L154()
  goto L154_;

L153_:;
  // r90 = dyn base9(1.0, <lang ARMAtoMA(ar, ma, q)>)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args255[1] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args255, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L32(r90)
  // L32(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L32_;

L180_:;
  // p36 = force? p35
  Rsh_Fir_reg_p36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p35_);
  // checkMissing(p36)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_p36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // r117 = `:`(p36, 1.0)
  SEXP Rsh_Fir_array_args257[2];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_p36_;
  Rsh_Fir_array_args257[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args257);
  // st ind = r117
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r117_, RHO);
  (void)(Rsh_Fir_reg_r117_);
  // solve = ldf solve
  Rsh_Fir_reg_solve = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // check L181() else D52()
  // L181()
  goto L181_;

D39_:;
  // deopt 176 []
  Rsh_Fir_deopt(176, 0, NULL, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 232 []
  Rsh_Fir_deopt(232, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // st theta = r98
  Rsh_Fir_store(Rsh_const(CCP, 82), Rsh_Fir_reg_r98_, RHO);
  (void)(Rsh_Fir_reg_r98_);
  // q8 = ld q
  Rsh_Fir_reg_q8_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L163() else D44()
  // L163()
  goto L163_;

L154_:;
  // p32 = prom<V +>{
  //   ar7 = ld ar;
  //   ar8 = force? ar7;
  //   checkMissing(ar8);
  //   return ar8;
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_15, 0, NULL, CCP, RHO);
  // p33 = prom<V +>{
  //   ma3 = ld ma;
  //   ma4 = force? ma3;
  //   checkMissing(ma4);
  //   return ma4;
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_16, 0, NULL, CCP, RHO);
  // p34 = prom<V +>{
  //   q6 = ld q;
  //   q7 = force? q6;
  //   checkMissing(q7);
  //   return q7;
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_17, 0, NULL, CCP, RHO);
  // r95 = dyn ARMAtoMA(p32, p33, p34)
  SEXP Rsh_Fir_array_args261[3];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_p32_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args261[2] = Rsh_Fir_reg_p34_;
  SEXP Rsh_Fir_array_arg_names77[3];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAtoMA, 3, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L155() else D40()
  // L155()
  goto L155_;

L157_:;
  // ma5 = ld ma
  Rsh_Fir_reg_ma5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L159() else D42()
  // L159()
  goto L159_;

L158_:;
  // r97 = dyn base10(1.0, <sym ma>, <lang rep(0.0, `+`(q, 1))>)
  SEXP Rsh_Fir_array_args262[3];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args262[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args262[2] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names78[3];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_array_arg_names78[2] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L33(r97)
  // L33(r97)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L33_;

L181_:;
  // p37 = prom<V +>{
  //   A8 = ld A;
  //   A9 = force? A8;
  //   checkMissing(A9);
  //   c27 = `is.object`(A9);
  //   if c27 then L1() else L2(A9);
  // L0(dx29):
  //   return dx29;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", A9);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(A11):
  //   ind14 = ld ind;
  //   ind15 = force? ind14;
  //   ind16 = ld ind;
  //   ind17 = force? ind16;
  //   __6 = ldf `[` in base;
  //   r118 = dyn __6(A11, ind15, ind17);
  //   goto L0(r118);
  // L3():
  //   dx28 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx28);
  // }
  Rsh_Fir_reg_p37_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_18, 0, NULL, CCP, RHO);
  // p38 = prom<V +>{
  //   rhs = ld rhs;
  //   rhs1 = force? rhs;
  //   checkMissing(rhs1);
  //   return rhs1;
  // }
  Rsh_Fir_reg_p38_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_19, 0, NULL, CCP, RHO);
  // r121 = dyn solve(p37, p38)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_p37_;
  Rsh_Fir_array_args270[1] = Rsh_Fir_reg_p38_;
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_solve, 2, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L182() else D53()
  // L182()
  goto L182_;

D40_:;
  // deopt 180 [r95]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 187 [ma5]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_ma5_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 197 [1, 0.0, q8]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_deopt_stack76[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_q8_;
  Rsh_Fir_deopt(197, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 235 [r121]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L155_:;
  // c22 = ldf c in base
  Rsh_Fir_reg_c22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r96 = dyn c22(1.0, r95)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c22_, 2, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L156() else D41()
  // L156()
  goto L156_;

L159_:;
  // ma6 = force? ma5
  Rsh_Fir_reg_ma6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma5_);
  // checkMissing(ma6)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_ma6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // sym11 = ldf rep
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base11 = ldf rep in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args273);
  // if guard11 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L163_:;
  // q9 = force? q8
  Rsh_Fir_reg_q9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q8_);
  // checkMissing(q9)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_q9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty()));
  // r103 = `:`(0.0, q9)
  SEXP Rsh_Fir_array_args275[2];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args275[1] = Rsh_Fir_reg_q9_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args275);
  // r104 = `+`(1, r103)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args276);
  // s = toForSeq(r104)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty());
  // l9 = length(s)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l9_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args278);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 84);
  // goto L35(i)
  // L35(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L35_;

L182_:;
  // st Acf = r121
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // Acf = ld Acf
  Rsh_Fir_reg_Acf = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L183() else D54()
  // L183()
  goto L183_;

D41_:;
  // deopt 182 [r96]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 237 [Acf]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_Acf;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L34_:;
  // c23 = ldf c in base
  Rsh_Fir_reg_c23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r102 = dyn c23(1.0, ma6, r100)
  SEXP Rsh_Fir_array_args279[3];
  Rsh_Fir_array_args279[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args279[1] = Rsh_Fir_reg_ma6_;
  Rsh_Fir_array_args279[2] = Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_array_arg_names82[3];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_array_arg_names82[2] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c23_, 3, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L162() else D43()
  // L162()
  goto L162_;

L35_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args280[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args280);
  // c24 = `<`.1(l9, i2)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args281);
  // if c24 then L164() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L164()
    goto L164_;
  } else {
  // L39()
    goto L39_;
  }

L156_:;
  // goto L32(r96)
  // L32(r96)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r96_;
  goto L32_;

L160_:;
  // rep2 = ldf rep in base
  Rsh_Fir_reg_rep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r101 = dyn rep2(0.0, <lang `+`(q, 1)>)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args282[1] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep2_, 2, Rsh_Fir_array_args282, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L34(r101)
  // L34(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L34_;

L161_:;
  // r99 = dyn base11(0.0, <lang `+`(q, 1)>)
  SEXP Rsh_Fir_array_args283[2];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args283[1] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L34(r99)
  // L34(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L34_;

L183_:;
  // Acf1 = force? Acf
  Rsh_Fir_reg_Acf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf);
  // checkMissing(Acf1)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_Acf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(Acf1)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_Acf1_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args285);
  // if c28 then L184() else L185(Acf1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L184()
    goto L184_;
  } else {
  // L185(Acf1)
    Rsh_Fir_reg_Acf3_ = Rsh_Fir_reg_Acf1_;
    goto L185_;
  }

D43_:;
  // deopt 193 [r102]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L39_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args286[4];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args286[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args286[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args286[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args286);
  // st k = x
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args287[2];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args287);
  // if guard12 then L165() else L166()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L165()
    goto L165_;
  } else {
  // L166()
    goto L166_;
  }

L41_:;
  // Acf4 = ld Acf
  Rsh_Fir_reg_Acf4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L187() else D55()
  // L187()
  goto L187_;

L162_:;
  // goto L33(r102)
  // L33(r102)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r102_;
  goto L33_;

L164_:;
  // goto L40()
  // L40()
  goto L40_;

L184_:;
  // dr22 = tryDispatchBuiltin.1("[", Acf1)
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args288[1] = Rsh_Fir_reg_Acf1_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args288);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty());
  // if dc11 then L186() else L185(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L186()
    goto L186_;
  } else {
  // L185(dr22)
    Rsh_Fir_reg_Acf3_ = Rsh_Fir_reg_dr22_;
    goto L185_;
  }

L185_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r122 = dyn __7(Acf3, -1)
  SEXP Rsh_Fir_array_args290[2];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_Acf3_;
  Rsh_Fir_array_args290[1] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names85[2];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args290, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L41(r122)
  // L41(r122)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r122_;
  goto L41_;

D55_:;
  // deopt 241 [dx31, Acf4]
  SEXP Rsh_Fir_array_deopt_stack81[2];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_Acf4_;
  Rsh_Fir_deopt(241, 2, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L36_:;
  // l10 = ld rhs
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // c26 = `is.object`(l10)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args291);
  // if c26 then L175() else L176(i7, r106, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L175()
    goto L175_;
  } else {
  // L176(i7, r106, l10)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r106_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L176_;
  }

L165_:;
  // psi = ld psi
  Rsh_Fir_reg_psi = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // check L167() else D45()
  // L167()
  goto L167_;

L166_:;
  // r105 = dyn base12(<lang `*`(psi, `[`(theta, `+`(k, `:`(0.0, q))))>)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args292, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L36(i2, r105)
  // L36(i2, r105)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r105_;
  goto L36_;

L186_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // goto L41(dx30)
  // L41(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L41_;

L187_:;
  // Acf5 = force? Acf4
  Rsh_Fir_reg_Acf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf4_);
  // checkMissing(Acf5)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_Acf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(Acf5)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_Acf5_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args295);
  // if c29 then L188() else L189(dx31, Acf5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L188()
    goto L188_;
  } else {
  // L189(dx31, Acf5)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_Acf7_ = Rsh_Fir_reg_Acf5_;
    goto L189_;
  }

D45_:;
  // deopt 203 [i2, psi]
  SEXP Rsh_Fir_array_deopt_stack82[2];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_psi;
  Rsh_Fir_deopt(203, 2, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L38_:;
  // st rhs = dx27
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // goto L35(i15)
  // L35(i15)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i15_;
  goto L35_;

L42_:;
  // r124 = `/`(dx36, dx37)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_args296[1] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args296);
  // st Acf = r124
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r124_, RHO);
  (void)(Rsh_Fir_reg_r124_);
  // goto L43()
  // L43()
  goto L43_;

L167_:;
  // psi1 = force? psi
  Rsh_Fir_reg_psi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_psi);
  // checkMissing(psi1)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_psi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // theta = ld theta
  Rsh_Fir_reg_theta = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L168() else D46()
  // L168()
  goto L168_;

L175_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l10, r106)
  SEXP Rsh_Fir_array_args298[3];
  Rsh_Fir_array_args298[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args298[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args298[2] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args298);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty());
  // if dc9 then L177() else L176(i7, r106, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L177()
    goto L177_;
  } else {
  // L176(i7, r106, dr18)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r106_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr18_;
    goto L176_;
  }

L176_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L178() else D50()
  // L178()
  goto L178_;

L188_:;
  // dr24 = tryDispatchBuiltin.1("[", Acf5)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_Acf5_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args300);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty());
  // if dc12 then L190() else L189(dx31, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L190()
    goto L190_;
  } else {
  // L189(dx31, dr24)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_Acf7_ = Rsh_Fir_reg_dr24_;
    goto L189_;
  }

L189_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r123 = dyn __8(Acf7, 1)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_Acf7_;
  Rsh_Fir_array_args302[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names87[2];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_array_arg_names87[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L42(dx33, r123)
  // L42(dx33, r123)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r123_;
  goto L42_;

D46_:;
  // deopt 204 [i2, psi1, theta]
  SEXP Rsh_Fir_array_deopt_stack83[3];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_psi1_;
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_theta;
  Rsh_Fir_deopt(204, 3, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 217 [i13, r113, l12, r106, k2]
  SEXP Rsh_Fir_array_deopt_stack84[5];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_deopt_stack84[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack84[3] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack84[4] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(217, 5, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L168_:;
  // theta1 = force? theta
  Rsh_Fir_reg_theta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta);
  // checkMissing(theta1)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_theta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(theta1)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_theta1_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args304);
  // if c25 then L169() else L170(i2, psi1, theta1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L169()
    goto L169_;
  } else {
  // L170(i2, psi1, theta1)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_psi3_ = Rsh_Fir_reg_psi1_;
    Rsh_Fir_reg_theta3_ = Rsh_Fir_reg_theta1_;
    goto L170_;
  }

L177_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty());
  // goto L38(i7, dx26)
  // L38(i7, dx26)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L38_;

L178_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r116 = dyn ___3(l12, r106, k3)
  SEXP Rsh_Fir_array_args306[3];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args306[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_args306[2] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names88[3];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_array_arg_names88[2] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L38(i13, r116)
  // L38(i13, r116)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r116_;
  goto L38_;

L190_:;
  // dx35 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty());
  // goto L42(dx31, dx35)
  // L42(dx31, dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx35_;
  goto L42_;

L37_:;
  // r110 = `*`(psi5, dx25)
  SEXP Rsh_Fir_array_args308[2];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_psi5_;
  Rsh_Fir_array_args308[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args308);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // r111 = dyn sum(r110)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_array_arg_names89[1];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args309, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L174() else D49()
  // L174()
  goto L174_;

L169_:;
  // dr16 = tryDispatchBuiltin.1("[", theta1)
  SEXP Rsh_Fir_array_args310[2];
  Rsh_Fir_array_args310[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args310[1] = Rsh_Fir_reg_theta1_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args310);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args311[1];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args311, Rsh_Fir_param_types_empty());
  // if dc8 then L171() else L170(i2, psi1, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L171()
    goto L171_;
  } else {
  // L170(i2, psi1, dr16)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_psi3_ = Rsh_Fir_reg_psi1_;
    Rsh_Fir_reg_theta3_ = Rsh_Fir_reg_dr16_;
    goto L170_;
  }

L170_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L172() else D47()
  // L172()
  goto L172_;

D47_:;
  // deopt 206 [i9, psi3, theta3, k]
  SEXP Rsh_Fir_array_deopt_stack85[4];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_psi3_;
  Rsh_Fir_array_deopt_stack85[2] = Rsh_Fir_reg_theta3_;
  Rsh_Fir_array_deopt_stack85[3] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(206, 4, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 215 [i11, r111]
  SEXP Rsh_Fir_array_deopt_stack86[2];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(215, 2, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L171_:;
  // dx24 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args312, Rsh_Fir_param_types_empty());
  // goto L37(i2, psi1, dx24)
  // L37(i2, psi1, dx24)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_psi5_ = Rsh_Fir_reg_psi1_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L37_;

L172_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // q10 = ld q
  Rsh_Fir_reg_q10_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L173() else D48()
  // L173()
  goto L173_;

L174_:;
  // goto L36(i11, r111)
  // L36(i11, r111)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r111_;
  goto L36_;

D48_:;
  // deopt 208 [i9, psi3, theta3, k1, 0.0, q10]
  SEXP Rsh_Fir_array_deopt_stack87[6];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack87[1] = Rsh_Fir_reg_psi3_;
  Rsh_Fir_array_deopt_stack87[2] = Rsh_Fir_reg_theta3_;
  Rsh_Fir_array_deopt_stack87[3] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_deopt_stack87[4] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack87[5] = Rsh_Fir_reg_q10_;
  Rsh_Fir_deopt(208, 6, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L173_:;
  // q11 = force? q10
  Rsh_Fir_reg_q11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q10_);
  // checkMissing(q11)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_q11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // r107 = `:`(0.0, q11)
  SEXP Rsh_Fir_array_args315[2];
  Rsh_Fir_array_args315[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args315[1] = Rsh_Fir_reg_q11_;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args315);
  // r108 = `+`(k1, r107)
  SEXP Rsh_Fir_array_args316[2];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args316[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args316);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r109 = dyn __5(theta3, r108)
  SEXP Rsh_Fir_array_args317[2];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_theta3_;
  Rsh_Fir_array_args317[1] = Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_array_arg_names90[2];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args317, Rsh_Fir_array_arg_names90, CCP, RHO);
  // goto L37(i9, psi3, r109)
  // L37(i9, psi3, r109)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_psi5_ = Rsh_Fir_reg_psi3_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r109_;
  goto L37_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r = dyn numeric()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2124986904_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric1_;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // numeric1 = ldf numeric
  Rsh_Fir_reg_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r2 = dyn numeric1()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric1_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner2124986904_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // r4 = ld r
  Rsh_Fir_reg_r4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // r5 = force? r4
  Rsh_Fir_reg_r5_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r4_);
  // checkMissing(r5)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r5_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return r5
  return Rsh_Fir_reg_r5_1;
}
SEXP Rsh_Fir_user_promise_inner2124986904_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_reg_rep4_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r155_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard17 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r151
  return Rsh_Fir_reg_r151_;

L2_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // sym18 = ldf rep
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base18 = ldf rep in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard18 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r150 = dyn base17(<sym x>, <lang rep(0.0, q)>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r150)
  // L0(r150)
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r150_;
  goto L0_;

L1_:;
  // c36 = ldf c in base
  Rsh_Fir_reg_c36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r155 = dyn c36(x2, r153)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c36_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r155)
  // L0(r155)
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r155_;
  goto L0_;

L4_:;
  // rep4 = ldf rep in base
  Rsh_Fir_reg_rep4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r154 = dyn rep4(0.0, <sym q>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep4_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(r154)
  // L1(r154)
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r154_;
  goto L1_;

L5_:;
  // r152 = dyn base18(0.0, <sym q>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L1(r152)
  // L1(r152)
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r152_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rev1_;
  SEXP Rsh_Fir_reg_p46_;
  SEXP Rsh_Fir_reg_r158_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // rev1 = ldf rev
  Rsh_Fir_reg_rev1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p46 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p46_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_5, 0, NULL, CCP, RHO);
  // r158 = dyn rev1(p46)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p46_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev1_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r158
  return Rsh_Fir_reg_r158_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // p17 = ld p1
  Rsh_Fir_reg_p17_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // p18 = force? p17
  Rsh_Fir_reg_p18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p17_);
  // checkMissing(p18)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_p18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // return p18
  return Rsh_Fir_reg_p18_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p2_1_;
  SEXP Rsh_Fir_reg_p2_2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // p2_1 = ld `p2.1`
  Rsh_Fir_reg_p2_1_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // p2_2 = force? p2_1
  Rsh_Fir_reg_p2_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_1_);
  // checkMissing(p2_2)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p2_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // return p2_2
  return Rsh_Fir_reg_p2_2_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ar11_;
  SEXP Rsh_Fir_reg_ar12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // ar11 = ld ar
  Rsh_Fir_reg_ar11_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // ar12 = force? ar11
  Rsh_Fir_reg_ar12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar11_);
  // checkMissing(ar12)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_ar12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return ar12
  return Rsh_Fir_reg_ar12_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rev;
  SEXP Rsh_Fir_reg_p43_;
  SEXP Rsh_Fir_reg_r135_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // rev = ldf rev
  Rsh_Fir_reg_rev = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p43 = prom<V +>{
  //   Acf10 = ld Acf;
  //   Acf11 = force? Acf10;
  //   checkMissing(Acf11);
  //   return Acf11;
  // }
  Rsh_Fir_reg_p43_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_11, 0, NULL, CCP, RHO);
  // r135 = dyn rev(p43)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p43_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names50, CCP, RHO);
  // return r135
  return Rsh_Fir_reg_r135_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Acf10_;
  SEXP Rsh_Fir_reg_Acf11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // Acf10 = ld Acf
  Rsh_Fir_reg_Acf10_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // Acf11 = force? Acf10
  Rsh_Fir_reg_Acf11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf10_);
  // checkMissing(Acf11)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_Acf11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // return Acf11
  return Rsh_Fir_reg_Acf11_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_expand_grid;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // expand_grid = ldf `expand.grid`
  Rsh_Fir_reg_expand_grid = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // p23 = prom<V +>{
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   checkMissing(ind1);
  //   return ind1;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_13, 0, NULL, CCP, RHO);
  // p24 = prom<V +>{
  //   ind2 = ld ind;
  //   ind3 = force? ind2;
  //   checkMissing(ind3);
  //   return ind3;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2124986904_14, 0, NULL, CCP, RHO);
  // r47 = dyn expand_grid(p23, p24)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expand_grid, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names57, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind;
  SEXP Rsh_Fir_reg_ind1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // return ind1
  return Rsh_Fir_reg_ind1_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind2_;
  SEXP Rsh_Fir_reg_ind3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // checkMissing(ind3)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_ind3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // return ind3
  return Rsh_Fir_reg_ind3_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ar7_;
  SEXP Rsh_Fir_reg_ar8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // ar7 = ld ar
  Rsh_Fir_reg_ar7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // ar8 = force? ar7
  Rsh_Fir_reg_ar8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar7_);
  // checkMissing(ar8)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_ar8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // return ar8
  return Rsh_Fir_reg_ar8_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ma3_;
  SEXP Rsh_Fir_reg_ma4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // ma3 = ld ma
  Rsh_Fir_reg_ma3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // ma4 = force? ma3
  Rsh_Fir_reg_ma4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma3_);
  // checkMissing(ma4)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_ma4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // return ma4
  return Rsh_Fir_reg_ma4_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_q6_;
  SEXP Rsh_Fir_reg_q7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // q6 = ld q
  Rsh_Fir_reg_q6_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // q7 = force? q6
  Rsh_Fir_reg_q7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q6_);
  // checkMissing(q7)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_q7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // return q7
  return Rsh_Fir_reg_q7_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_A8_;
  SEXP Rsh_Fir_reg_A9_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_A11_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_ind14_;
  SEXP Rsh_Fir_reg_ind15_;
  SEXP Rsh_Fir_reg_ind16_;
  SEXP Rsh_Fir_reg_ind17_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r118_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // A8 = ld A
  Rsh_Fir_reg_A8_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // A9 = force? A8
  Rsh_Fir_reg_A9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_A8_);
  // checkMissing(A9)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_A9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(A9)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_A9_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args264);
  // if c27 then L1() else L2(A9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L1()
    goto L1_;
  } else {
  // L2(A9)
    Rsh_Fir_reg_A11_ = Rsh_Fir_reg_A9_;
    goto L2_;
  }

L0_:;
  // return dx29
  return Rsh_Fir_reg_dx29_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", A9)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_A9_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args265);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_A11_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // ind14 = ld ind
  Rsh_Fir_reg_ind14_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // ind15 = force? ind14
  Rsh_Fir_reg_ind15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind14_);
  // ind16 = ld ind
  Rsh_Fir_reg_ind16_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // ind17 = force? ind16
  Rsh_Fir_reg_ind17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind16_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r118 = dyn __6(A11, ind15, ind17)
  SEXP Rsh_Fir_array_args267[3];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_A11_;
  Rsh_Fir_array_args267[1] = Rsh_Fir_reg_ind15_;
  Rsh_Fir_array_args267[2] = Rsh_Fir_reg_ind17_;
  SEXP Rsh_Fir_array_arg_names79[3];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L0(r118)
  // L0(r118)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r118_;
  goto L0_;

L3_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // goto L0(dx28)
  // L0(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2124986904_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rhs;
  SEXP Rsh_Fir_reg_rhs1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2124986904/0: expected 0, got %d", NCAPTURES);

  // rhs = ld rhs
  Rsh_Fir_reg_rhs = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // rhs1 = force? rhs
  Rsh_Fir_reg_rhs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rhs);
  // checkMissing(rhs1)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_rhs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // return rhs1
  return Rsh_Fir_reg_rhs1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
