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
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_factor1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_spineplot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_spineplot1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_spineplot2_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_factor2_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_spineplot3_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_spineplot4_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_spineplot5_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_spineplot6_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r77_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st spineplot = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf rep;
  //   base = ldf rep in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   rep = ldf rep in base;
  //   r3 = dyn rep(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c(1.0, 2.0);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(1.0, 2.0);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   c1 = ldf c in base;
  //   r11 = dyn c1("placebo", "treated");
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base2("placebo", "treated");
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r13 = dyn factor[, levels, labels](p, p1, p2)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st treatment = r13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // factor1 = ldf factor
  Rsh_Fir_reg_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p3 = prom<V +>{
  //   sym3 = ldf rep;
  //   base3 = ldf rep in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   rep1 = ldf rep in base;
  //   r16 = dyn rep1(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base3(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   c2 = ldf c in base;
  //   r20 = dyn c2(1.0, 2.0, 3.0);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base4(1.0, 2.0, 3.0);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   c3 = ldf c in base;
  //   r24 = dyn c3("none", "some", "marked");
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base5("none", "some", "marked");
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r26 = dyn factor1[, levels, labels](p3, p4, p5)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 19 [r26]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st improved = r26
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // spineplot = ldf spineplot
  Rsh_Fir_reg_spineplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p6 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r27 = dyn __(<sym improved>, <sym treatment>);
  //   return r27;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r29 = dyn spineplot(p6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 24 [r29]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // spineplot1 = ldf spineplot
  Rsh_Fir_reg_spineplot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p9 = prom<V +>{
  //   marginSums = ldf marginSums;
  //   p7 = prom<V +>{
  //     UCBAdmissions = ld UCBAdmissions;
  //     UCBAdmissions1 = force? UCBAdmissions;
  //     checkMissing(UCBAdmissions1);
  //     return UCBAdmissions1;
  //   };
  //   p8 = prom<V +>{
  //     sym6 = ldf c;
  //     base6 = ldf c in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L1() else L2();
  //   L0(r32):
  //     return r32;
  //   L1():
  //     c4 = ldf c in base;
  //     r33 = dyn c4(3.0, 2.0);
  //     goto L0(r33);
  //   L2():
  //     r31 = dyn base6(3.0, 2.0);
  //     goto L0(r31);
  //   };
  //   r35 = dyn marginSums(p7, p8);
  //   return r35;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r37 = dyn spineplot1[, main](p9, "Applications at UCB")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 30 [r37]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // spineplot2 = ldf spineplot
  Rsh_Fir_reg_spineplot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D8()
  // L9()
  goto L9_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p12 = prom<V +>{
  //   marginSums1 = ldf marginSums;
  //   p10 = prom<V +>{
  //     UCBAdmissions2 = ld UCBAdmissions;
  //     UCBAdmissions3 = force? UCBAdmissions2;
  //     checkMissing(UCBAdmissions3);
  //     return UCBAdmissions3;
  //   };
  //   p11 = prom<V +>{
  //     sym7 = ldf c;
  //     base7 = ldf c in base;
  //     guard7 = `==`.4(sym7, base7);
  //     if guard7 then L1() else L2();
  //   L0(r40):
  //     return r40;
  //   L1():
  //     c5 = ldf c in base;
  //     r41 = dyn c5(3.0, 1.0);
  //     goto L0(r41);
  //   L2():
  //     r39 = dyn base7(3.0, 1.0);
  //     goto L0(r39);
  //   };
  //   r43 = dyn marginSums1(p10, p11);
  //   return r43;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r45 = dyn spineplot2[, main](p12, "Admissions at UCB")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L10() else D9()
  // L10()
  goto L10_;

D9_:;
  // deopt 36 [r45]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // factor2 = ldf factor
  Rsh_Fir_reg_factor2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L11() else D10()
  // L11()
  goto L11_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p13 = prom<V +>{
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   c6 = ldf c in base;
  //   r48 = dyn c6(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base8(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   sym9 = ldf c;
  //   base9 = ldf c in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r51):
  //   return r51;
  // L1():
  //   c7 = ldf c in base;
  //   r52 = dyn c7(1.0, 2.0);
  //   goto L0(r52);
  // L2():
  //   r50 = dyn base9(1.0, 2.0);
  //   goto L0(r50);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r55):
  //   return r55;
  // L1():
  //   c8 = ldf c in base;
  //   r56 = dyn c8("no", "yes");
  //   goto L0(r56);
  // L2():
  //   r54 = dyn base10("no", "yes");
  //   goto L0(r54);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r58 = dyn factor2[, levels, labels](p13, p14, p15)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor2_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L12() else D11()
  // L12()
  goto L12_;

D11_:;
  // deopt 44 [r58]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // st fail = r58
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard11 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L0_:;
  // st temperature = r60
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // spineplot3 = ldf spineplot
  Rsh_Fir_reg_spineplot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

L13_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r61 = dyn c9(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0)
  SEXP Rsh_Fir_array_args45[23];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args45[4] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args45[6] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args45[7] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args45[8] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args45[9] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args45[10] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[11] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[12] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[13] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[14] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args45[15] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args45[16] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args45[17] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args45[18] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args45[19] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args45[20] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args45[21] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args45[22] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names31[23];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_array_arg_names31[4] = R_MissingArg;
  Rsh_Fir_array_arg_names31[5] = R_MissingArg;
  Rsh_Fir_array_arg_names31[6] = R_MissingArg;
  Rsh_Fir_array_arg_names31[7] = R_MissingArg;
  Rsh_Fir_array_arg_names31[8] = R_MissingArg;
  Rsh_Fir_array_arg_names31[9] = R_MissingArg;
  Rsh_Fir_array_arg_names31[10] = R_MissingArg;
  Rsh_Fir_array_arg_names31[11] = R_MissingArg;
  Rsh_Fir_array_arg_names31[12] = R_MissingArg;
  Rsh_Fir_array_arg_names31[13] = R_MissingArg;
  Rsh_Fir_array_arg_names31[14] = R_MissingArg;
  Rsh_Fir_array_arg_names31[15] = R_MissingArg;
  Rsh_Fir_array_arg_names31[16] = R_MissingArg;
  Rsh_Fir_array_arg_names31[17] = R_MissingArg;
  Rsh_Fir_array_arg_names31[18] = R_MissingArg;
  Rsh_Fir_array_arg_names31[19] = R_MissingArg;
  Rsh_Fir_array_arg_names31[20] = R_MissingArg;
  Rsh_Fir_array_arg_names31[21] = R_MissingArg;
  Rsh_Fir_array_arg_names31[22] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 23, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

L14_:;
  // r59 = dyn base11(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0)
  SEXP Rsh_Fir_array_args46[23];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args46[4] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args46[5] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args46[6] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args46[7] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args46[8] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args46[9] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args46[10] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args46[11] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args46[12] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args46[13] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args46[14] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args46[15] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args46[16] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args46[17] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args46[18] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args46[19] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args46[20] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args46[21] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args46[22] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names32[23];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_array_arg_names32[6] = R_MissingArg;
  Rsh_Fir_array_arg_names32[7] = R_MissingArg;
  Rsh_Fir_array_arg_names32[8] = R_MissingArg;
  Rsh_Fir_array_arg_names32[9] = R_MissingArg;
  Rsh_Fir_array_arg_names32[10] = R_MissingArg;
  Rsh_Fir_array_arg_names32[11] = R_MissingArg;
  Rsh_Fir_array_arg_names32[12] = R_MissingArg;
  Rsh_Fir_array_arg_names32[13] = R_MissingArg;
  Rsh_Fir_array_arg_names32[14] = R_MissingArg;
  Rsh_Fir_array_arg_names32[15] = R_MissingArg;
  Rsh_Fir_array_arg_names32[16] = R_MissingArg;
  Rsh_Fir_array_arg_names32[17] = R_MissingArg;
  Rsh_Fir_array_arg_names32[18] = R_MissingArg;
  Rsh_Fir_array_arg_names32[19] = R_MissingArg;
  Rsh_Fir_array_arg_names32[20] = R_MissingArg;
  Rsh_Fir_array_arg_names32[21] = R_MissingArg;
  Rsh_Fir_array_arg_names32[22] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 23, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r59)
  // L0(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L0_;

D12_:;
  // deopt 72 [r61]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L0_;

L16_:;
  // p16 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r62 = dyn __1(<sym fail>, <sym temperature>);
  //   return r62;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r64 = dyn spineplot3(p16)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 77 [r64]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // spineplot4 = ldf spineplot
  Rsh_Fir_reg_spineplot4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p17 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r65 = dyn __2(<sym fail>, <sym temperature>);
  //   return r65;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r67 = dyn spineplot4[, breaks](p17, 3.0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot4_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 83 [r67]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // spineplot5 = ldf spineplot
  Rsh_Fir_reg_spineplot5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p18 = prom<V +>{
  //   __3 = ldf `~` in base;
  //   r68 = dyn __3(<sym fail>, <sym temperature>);
  //   return r68;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   quantile = ldf quantile;
  //   p19 = prom<V +>{
  //     temperature = ld temperature;
  //     temperature1 = force? temperature;
  //     checkMissing(temperature1);
  //     return temperature1;
  //   };
  //   r71 = dyn quantile(p19);
  //   return r71;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // r73 = dyn spineplot5[, breaks](p18, p20)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot5_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 89 [r73]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // spineplot6 = ldf spineplot
  Rsh_Fir_reg_spineplot6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p21 = prom<V +>{
  //   __4 = ldf `~` in base;
  //   r74 = dyn __4(<sym fail>, <sym temperature>);
  //   return r74;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // p22 = prom<V +>{
  //   return <int 2, 1>;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r77 = dyn spineplot6[, ylevels](p21, p22)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot6_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 95 [r77]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn rep(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
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
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn c(1.0, 2.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base1(1.0, 2.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r11 = dyn c1("placebo", "treated")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base2("placebo", "treated")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_rep1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf rep
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf rep in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r16 = dyn rep1(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base3(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r20 = dyn c2(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base4(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r24 = dyn c3("none", "some", "marked")
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base5("none", "some", "marked")
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r27 = dyn __(<sym improved>, <sym treatment>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_marginSums;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // marginSums = ldf marginSums
  Rsh_Fir_reg_marginSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p7 = prom<V +>{
  //   UCBAdmissions = ld UCBAdmissions;
  //   UCBAdmissions1 = force? UCBAdmissions;
  //   checkMissing(UCBAdmissions1);
  //   return UCBAdmissions1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   c4 = ldf c in base;
  //   r33 = dyn c4(3.0, 2.0);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base6(3.0, 2.0);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r35 = dyn marginSums(p7, p8)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_marginSums, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r35
  return Rsh_Fir_reg_r35_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_UCBAdmissions;
  SEXP Rsh_Fir_reg_UCBAdmissions1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // UCBAdmissions = ld UCBAdmissions
  Rsh_Fir_reg_UCBAdmissions = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // UCBAdmissions1 = force? UCBAdmissions
  Rsh_Fir_reg_UCBAdmissions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_UCBAdmissions);
  // checkMissing(UCBAdmissions1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_UCBAdmissions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return UCBAdmissions1
  return Rsh_Fir_reg_UCBAdmissions1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r33 = dyn c4(3.0, 2.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base6(3.0, 2.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_marginSums1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // marginSums1 = ldf marginSums
  Rsh_Fir_reg_marginSums1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p10 = prom<V +>{
  //   UCBAdmissions2 = ld UCBAdmissions;
  //   UCBAdmissions3 = force? UCBAdmissions2;
  //   checkMissing(UCBAdmissions3);
  //   return UCBAdmissions3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r40):
  //   return r40;
  // L1():
  //   c5 = ldf c in base;
  //   r41 = dyn c5(3.0, 1.0);
  //   goto L0(r41);
  // L2():
  //   r39 = dyn base7(3.0, 1.0);
  //   goto L0(r39);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r43 = dyn marginSums1(p10, p11)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_marginSums1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_UCBAdmissions2_;
  SEXP Rsh_Fir_reg_UCBAdmissions3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // UCBAdmissions2 = ld UCBAdmissions
  Rsh_Fir_reg_UCBAdmissions2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // UCBAdmissions3 = force? UCBAdmissions2
  Rsh_Fir_reg_UCBAdmissions3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_UCBAdmissions2_);
  // checkMissing(UCBAdmissions3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_UCBAdmissions3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return UCBAdmissions3
  return Rsh_Fir_reg_UCBAdmissions3_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r41 = dyn c5(3.0, 1.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L0_;

L2_:;
  // r39 = dyn base7(3.0, 1.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r48 = dyn c6(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args35[23];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[7] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[8] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[9] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[10] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[11] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[12] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[13] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[14] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[15] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[16] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[17] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[18] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[19] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[20] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[21] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args35[22] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names24[23];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_array_arg_names24[7] = R_MissingArg;
  Rsh_Fir_array_arg_names24[8] = R_MissingArg;
  Rsh_Fir_array_arg_names24[9] = R_MissingArg;
  Rsh_Fir_array_arg_names24[10] = R_MissingArg;
  Rsh_Fir_array_arg_names24[11] = R_MissingArg;
  Rsh_Fir_array_arg_names24[12] = R_MissingArg;
  Rsh_Fir_array_arg_names24[13] = R_MissingArg;
  Rsh_Fir_array_arg_names24[14] = R_MissingArg;
  Rsh_Fir_array_arg_names24[15] = R_MissingArg;
  Rsh_Fir_array_arg_names24[16] = R_MissingArg;
  Rsh_Fir_array_arg_names24[17] = R_MissingArg;
  Rsh_Fir_array_arg_names24[18] = R_MissingArg;
  Rsh_Fir_array_arg_names24[19] = R_MissingArg;
  Rsh_Fir_array_arg_names24[20] = R_MissingArg;
  Rsh_Fir_array_arg_names24[21] = R_MissingArg;
  Rsh_Fir_array_arg_names24[22] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 23, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base8(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args36[23];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[7] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[8] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[9] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[10] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[11] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[12] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[13] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[14] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[15] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[16] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[17] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[18] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[19] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[20] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[21] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[22] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names25[23];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_array_arg_names25[9] = R_MissingArg;
  Rsh_Fir_array_arg_names25[10] = R_MissingArg;
  Rsh_Fir_array_arg_names25[11] = R_MissingArg;
  Rsh_Fir_array_arg_names25[12] = R_MissingArg;
  Rsh_Fir_array_arg_names25[13] = R_MissingArg;
  Rsh_Fir_array_arg_names25[14] = R_MissingArg;
  Rsh_Fir_array_arg_names25[15] = R_MissingArg;
  Rsh_Fir_array_arg_names25[16] = R_MissingArg;
  Rsh_Fir_array_arg_names25[17] = R_MissingArg;
  Rsh_Fir_array_arg_names25[18] = R_MissingArg;
  Rsh_Fir_array_arg_names25[19] = R_MissingArg;
  Rsh_Fir_array_arg_names25[20] = R_MissingArg;
  Rsh_Fir_array_arg_names25[21] = R_MissingArg;
  Rsh_Fir_array_arg_names25[22] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 23, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r51
  return Rsh_Fir_reg_r51_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r52 = dyn c7(1.0, 2.0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L0_;

L2_:;
  // r50 = dyn base9(1.0, 2.0)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r55
  return Rsh_Fir_reg_r55_;

L1_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r56 = dyn c8("no", "yes")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L0_;

L2_:;
  // r54 = dyn base10("no", "yes")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r62_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r62 = dyn __1(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names33, CCP, RHO);
  // return r62
  return Rsh_Fir_reg_r62_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r65_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r65 = dyn __2(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names35, CCP, RHO);
  // return r65
  return Rsh_Fir_reg_r65_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r68_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __3 = ldf `~` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r68 = dyn __3(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names37, CCP, RHO);
  // return r68
  return Rsh_Fir_reg_r68_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_quantile;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r71_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // quantile = ldf quantile
  Rsh_Fir_reg_quantile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // p19 = prom<V +>{
  //   temperature = ld temperature;
  //   temperature1 = force? temperature;
  //   checkMissing(temperature1);
  //   return temperature1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r71 = dyn quantile(p19)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quantile, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names38, CCP, RHO);
  // return r71
  return Rsh_Fir_reg_r71_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_temperature;
  SEXP Rsh_Fir_reg_temperature1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // temperature = ld temperature
  Rsh_Fir_reg_temperature = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // temperature1 = force? temperature
  Rsh_Fir_reg_temperature1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temperature);
  // checkMissing(temperature1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_temperature1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return temperature1
  return Rsh_Fir_reg_temperature1_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __4 = ldf `~` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r74 = dyn __4(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names40, CCP, RHO);
  // return r74
  return Rsh_Fir_reg_r74_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 2, 1>
  return Rsh_const(CCP, 48);
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r2 = dyn UseMethod("spineplot")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("spineplot")
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
