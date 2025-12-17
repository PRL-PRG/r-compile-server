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
SEXP Rsh_Fir_user_function_inner2884979931_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2884979931_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_rowSums;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_colSums;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_rowTotals;
  SEXP Rsh_Fir_reg_rowTotals1_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_nOfCases;
  SEXP Rsh_Fir_reg_nOfCases1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sapply;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_simMaxSqResid;
  SEXP Rsh_Fir_reg_simMaxSqResid1_;
  SEXP Rsh_Fir_reg_maxSqResid2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2884979931
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2884979931_, RHO, CCP);
  // st r2dtable = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(3.0, 1.0, 1.0, 3.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(3.0, 1.0, 1.0, 3.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L3() else L4();
  // L0(r6):
  //   return r6;
  // L3():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L5() else L6();
  // L4():
  //   r5 = dyn base1[Guess, Truth](<lang c("Milk", "Tea")>, <lang c("Milk", "Tea")>);
  //   goto L0(r5);
  // L1(r8):
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L7() else L8();
  // L5():
  //   c1 = ldf c in base;
  //   r9 = dyn c1("Milk", "Tea");
  //   goto L1(r9);
  // L6():
  //   r7 = dyn base2("Milk", "Tea");
  //   goto L1(r7);
  // L2(r11):
  //   list = ldf list in base;
  //   r13 = dyn list(r8, r11);
  //   goto L0(r13);
  // L7():
  //   c2 = ldf c in base;
  //   r12 = dyn c2("Milk", "Tea");
  //   goto L2(r12);
  // L8():
  //   r10 = dyn base3("Milk", "Tea");
  //   goto L2(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r15 = dyn matrix[, nrow, dimnames](p, 2.0, p1)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st TeaTasting = r15
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // rowSums = ldf rowSums
  Rsh_Fir_reg_rowSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   TeaTasting = ld TeaTasting;
  //   TeaTasting1 = force? TeaTasting;
  //   checkMissing(TeaTasting1);
  //   return TeaTasting1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r17 = dyn rowSums(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowSums, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 15 [r17]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // st rowTotals = r17
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // colSums = ldf colSums
  Rsh_Fir_reg_colSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L6() else D4()
  // L6()
  goto L6_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   TeaTasting2 = ld TeaTasting;
  //   TeaTasting3 = force? TeaTasting2;
  //   checkMissing(TeaTasting3);
  //   return TeaTasting3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r19 = dyn colSums(p3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colSums, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L7() else D5()
  // L7()
  goto L7_;

D5_:;
  // deopt 20 [r19]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // st colTotals = r19
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // st nOfCases = r21
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

L8_:;
  // rowTotals = ld rowTotals
  Rsh_Fir_reg_rowTotals = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

L9_:;
  // r20 = dyn base4(<sym rowTotals>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;

D6_:;
  // deopt 24 [rowTotals]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_rowTotals;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // rowTotals1 = force? rowTotals
  Rsh_Fir_reg_rowTotals1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rowTotals);
  // checkMissing(rowTotals1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_rowTotals1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r22 = dyn sum(rowTotals1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_rowTotals1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

L12_:;
  // p4 = prom<V +>{
  //   rowTotals2 = ld rowTotals;
  //   rowTotals3 = force? rowTotals2;
  //   checkMissing(rowTotals3);
  //   return rowTotals3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   colTotals = ld colTotals;
  //   colTotals1 = force? colTotals;
  //   checkMissing(colTotals1);
  //   return colTotals1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r25 = dyn outer(p4, p5)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D7_:;
  // deopt 27 [r22]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 33 [r25]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L13_:;
  // nOfCases = ld nOfCases
  Rsh_Fir_reg_nOfCases = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 33 [r25, nOfCases]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_nOfCases;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // nOfCases1 = force? nOfCases
  Rsh_Fir_reg_nOfCases1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nOfCases);
  // checkMissing(nOfCases1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_nOfCases1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r26 = `/`(r25, nOfCases1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_nOfCases1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args25);
  // st expected = r26
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // r27 = clos inner2501545716
  Rsh_Fir_reg_r27_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st maxSqResid = r27
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p8 = prom<V +>{
  //   r2dtable = ldf r2dtable;
  //   p6 = prom<V +>{
  //     rowTotals4 = ld rowTotals;
  //     rowTotals5 = force? rowTotals4;
  //     checkMissing(rowTotals5);
  //     return rowTotals5;
  //   };
  //   p7 = prom<V +>{
  //     colTotals2 = ld colTotals;
  //     colTotals3 = force? colTotals2;
  //     checkMissing(colTotals3);
  //     return colTotals3;
  //   };
  //   r30 = dyn r2dtable(1000.0, p6, p7);
  //   return r30;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   maxSqResid = ld maxSqResid;
  //   maxSqResid1 = force? maxSqResid;
  //   checkMissing(maxSqResid1);
  //   return maxSqResid1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r33 = dyn sapply(p8, p9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L16() else D12()
  // L16()
  goto L16_;

D12_:;
  // deopt 44 [r33]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // st simMaxSqResid = r33
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym5 = ldf sum
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf sum in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard5 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L1_:;
  // r40 = `/`(r35, 1000.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args32);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;

L17_:;
  // simMaxSqResid = ld simMaxSqResid
  Rsh_Fir_reg_simMaxSqResid = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

L18_:;
  // r34 = dyn base5(<lang `>=`(simMaxSqResid, maxSqResid(TeaTasting))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(r34)
  // L1(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L1_;

D13_:;
  // deopt 48 [simMaxSqResid]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_simMaxSqResid;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // simMaxSqResid1 = force? simMaxSqResid
  Rsh_Fir_reg_simMaxSqResid1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simMaxSqResid);
  // checkMissing(simMaxSqResid1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_simMaxSqResid1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // maxSqResid2 = ldf maxSqResid
  Rsh_Fir_reg_maxSqResid2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 50 [simMaxSqResid1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_simMaxSqResid1_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // p10 = prom<V +>{
  //   TeaTasting4 = ld TeaTasting;
  //   TeaTasting5 = force? TeaTasting4;
  //   checkMissing(TeaTasting5);
  //   return TeaTasting5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r37 = dyn maxSqResid2(p10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_maxSqResid2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 52 [simMaxSqResid1, r37]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_simMaxSqResid1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L21_:;
  // r38 = `>=`(simMaxSqResid1, r37)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_simMaxSqResid1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args37);
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r39 = dyn sum1(r38)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

D16_:;
  // deopt 55 [r39]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L1(r39)
  // L1(r39)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r39_;
  goto L1_;
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
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c(3.0, 1.0, 1.0, 3.0)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(3.0, 1.0, 1.0, 3.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L3_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r5 = dyn base1[Guess, Truth](<lang c("Milk", "Tea")>, <lang c("Milk", "Tea")>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

L1_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r9 = dyn c1("Milk", "Tea")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L6_:;
  // r7 = dyn base2("Milk", "Tea")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r13 = dyn list(r8, r11)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L0_;

L7_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r12 = dyn c2("Milk", "Tea")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L2_;

L8_:;
  // r10 = dyn base3("Milk", "Tea")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_TeaTasting;
  SEXP Rsh_Fir_reg_TeaTasting1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // TeaTasting = ld TeaTasting
  Rsh_Fir_reg_TeaTasting = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // TeaTasting1 = force? TeaTasting
  Rsh_Fir_reg_TeaTasting1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TeaTasting);
  // checkMissing(TeaTasting1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_TeaTasting1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return TeaTasting1
  return Rsh_Fir_reg_TeaTasting1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_TeaTasting2_;
  SEXP Rsh_Fir_reg_TeaTasting3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // TeaTasting2 = ld TeaTasting
  Rsh_Fir_reg_TeaTasting2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // TeaTasting3 = force? TeaTasting2
  Rsh_Fir_reg_TeaTasting3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TeaTasting2_);
  // checkMissing(TeaTasting3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_TeaTasting3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return TeaTasting3
  return Rsh_Fir_reg_TeaTasting3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rowTotals2_;
  SEXP Rsh_Fir_reg_rowTotals3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rowTotals2 = ld rowTotals
  Rsh_Fir_reg_rowTotals2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // rowTotals3 = force? rowTotals2
  Rsh_Fir_reg_rowTotals3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rowTotals2_);
  // checkMissing(rowTotals3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_rowTotals3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return rowTotals3
  return Rsh_Fir_reg_rowTotals3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_colTotals;
  SEXP Rsh_Fir_reg_colTotals1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // colTotals = ld colTotals
  Rsh_Fir_reg_colTotals = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // colTotals1 = force? colTotals
  Rsh_Fir_reg_colTotals1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_colTotals);
  // checkMissing(colTotals1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_colTotals1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return colTotals1
  return Rsh_Fir_reg_colTotals1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r2dtable;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r2dtable = ldf r2dtable
  Rsh_Fir_reg_r2dtable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p6 = prom<V +>{
  //   rowTotals4 = ld rowTotals;
  //   rowTotals5 = force? rowTotals4;
  //   checkMissing(rowTotals5);
  //   return rowTotals5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   colTotals2 = ld colTotals;
  //   colTotals3 = force? colTotals2;
  //   checkMissing(colTotals3);
  //   return colTotals3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r30 = dyn r2dtable(1000.0, p6, p7)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r2dtable, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rowTotals4_;
  SEXP Rsh_Fir_reg_rowTotals5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rowTotals4 = ld rowTotals
  Rsh_Fir_reg_rowTotals4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // rowTotals5 = force? rowTotals4
  Rsh_Fir_reg_rowTotals5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rowTotals4_);
  // checkMissing(rowTotals5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_rowTotals5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return rowTotals5
  return Rsh_Fir_reg_rowTotals5_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_colTotals2_;
  SEXP Rsh_Fir_reg_colTotals3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // colTotals2 = ld colTotals
  Rsh_Fir_reg_colTotals2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // colTotals3 = force? colTotals2
  Rsh_Fir_reg_colTotals3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_colTotals2_);
  // checkMissing(colTotals3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_colTotals3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return colTotals3
  return Rsh_Fir_reg_colTotals3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_maxSqResid;
  SEXP Rsh_Fir_reg_maxSqResid1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // maxSqResid = ld maxSqResid
  Rsh_Fir_reg_maxSqResid = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // maxSqResid1 = force? maxSqResid
  Rsh_Fir_reg_maxSqResid1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxSqResid);
  // checkMissing(maxSqResid1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_maxSqResid1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return maxSqResid1
  return Rsh_Fir_reg_maxSqResid1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_TeaTasting4_;
  SEXP Rsh_Fir_reg_TeaTasting5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // TeaTasting4 = ld TeaTasting
  Rsh_Fir_reg_TeaTasting4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // TeaTasting5 = force? TeaTasting4
  Rsh_Fir_reg_TeaTasting5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TeaTasting4_);
  // checkMissing(TeaTasting5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_TeaTasting5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return TeaTasting5
  return Rsh_Fir_reg_TeaTasting5_;
}
SEXP Rsh_Fir_user_function_inner2884979931_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2884979931 dynamic dispatch ([n, r, c])

  return Rsh_Fir_user_version_inner2884979931_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2884979931_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2884979931 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2884979931/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_as_integer1_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_1;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_as_integer2_;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_anyNA1_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sum1;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_sum1_1;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_C_r2dtable;
  SEXP Rsh_Fir_reg_C_r2dtable1_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r70_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_r1 = PARAMS[1];
  Rsh_Fir_reg_c1 = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st r = r
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // st c = c
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_c1, RHO);
  (void)(Rsh_Fir_reg_c1);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L0_:;
  // r7 = `==`(r2, 0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args40);
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c1 then L2(c1) else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L2(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L2_;
  } else {
  // L35()
    goto L35_;
  }

L28_:;
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L29_:;
  // r1 = dyn base(<lang `<-`(n, as.integer(n))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L0_;

L1_:;
  // st n = r4
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r6 = dyn length(r4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

L2_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c7 then L3(c7) else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L3(c7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c7_;
    goto L3_;
  } else {
  // L38()
    goto L38_;
  }

L30_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L31_:;
  // r3 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L1_;

L35_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D0_:;
  // deopt 4 [n1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [c1, n3]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L3_:;
  // c16 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c16 then L44() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L44()
    goto L44_;
  } else {
  // L5()
    goto L5_;
  }

L32_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r5 = dyn as_integer(n2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

L34_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L36_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r8 = `<`(n4, 0.0)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args51);
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args53);
  // goto L2(c5)
  // L2(c5)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c5_;
  goto L2_;

L38_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L4_:;
  // c13 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // c14 = `||`(c12, c13)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args56);
  // goto L3(c14)
  // L3(c14)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c14_;
  goto L3_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L33_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_1;
  goto L1_;

L39_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L41() else D4()
  // L41()
  goto L41_;

L40_:;
  // r9 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L4(c7, r9)
  // L4(c7, r9)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L4_;

L44_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

D4_:;
  // deopt 20 [c7, n5]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r22 = `<=`(r15, 1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args59);
  // c17 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c17 then L9(c17) else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L9(c17)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c17_;
    goto L9_;
  } else {
  // L55()
    goto L55_;
  }

L41_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r11 = dyn is_na(n6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L42() else D5()
  // L42()
  goto L42_;

L45_:;
  // r12 = dyn stop("invalid argument 'n'")
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

L48_:;
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard4 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L49_:;
  // r14 = dyn base3(<lang `<-`(r, as.integer(r))>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_;
  goto L7_;

D5_:;
  // deopt 23 [c7, r11]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L8_:;
  // st r = r17
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r21 = dyn length1(r17)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L9_:;
  // c26 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c26 then L11(c26) else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L11(c26)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c26_;
    goto L11_;
  } else {
  // L61()
    goto L61_;
  }

L42_:;
  // goto L4(c7, r11)
  // L4(c7, r11)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L4_;

L46_:;
  // goto L6()
  // L6()
  goto L6_;

L50_:;
  // r18 = ld r
  Rsh_Fir_reg_r18_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L51_:;
  // r16 = dyn base4(<sym r>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r16_;
  goto L8_;

L55_:;
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

D8_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L10_:;
  // c23 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // c24 = `||`(c22, c23)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args71);
  // goto L9(c24)
  // L9(c24)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c24_;
  goto L9_;

L11_:;
  // c35 = `as.logical`(c27)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c35 then L67() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L67()
    goto L67_;
  } else {
  // L13()
    goto L13_;
  }

L52_:;
  // r19 = force? r18
  Rsh_Fir_reg_r19_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r18_);
  // checkMissing(r19)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r19_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r20 = dyn as_integer1(r19)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

L54_:;
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r21_1;
  goto L7_;

L56_:;
  // r25 = ld r
  Rsh_Fir_reg_r25_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L58() else D11()
  // L58()
  goto L58_;

L57_:;
  // r23 = dyn base5(<lang `<`(r, 0.0)>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L10(c17, r23)
  // L10(c17, r23)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

L61_:;
  // sym6 = ldf anyNA
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base6 = ldf anyNA in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard6 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

D9_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 46 [c17, r25]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r25_1;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L12_:;
  // c32 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args77);
  // c33 = `||`(c31, c32)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args78);
  // goto L11(c33)
  // L11(c33)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c33_;
  goto L11_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard7 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L53_:;
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r20_1;
  goto L8_;

L58_:;
  // r26 = force? r25
  Rsh_Fir_reg_r26_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r25_1);
  // checkMissing(r26)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r26_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r27 = `<`(r26, 0.0)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args81);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r28 = dyn any(r27)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L59() else D12()
  // L59()
  goto L59_;

L62_:;
  // r31 = ld r
  Rsh_Fir_reg_r31_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

L63_:;
  // r29 = dyn base6(<sym r>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L12(c26, r29)
  // L12(c26, r29)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_;
  goto L12_;

L67_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

D12_:;
  // deopt 51 [c17, r28]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 55 [c26, r31]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r42 = `<=`(r37, 1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r37_1;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args84);
  // c38 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // if c38 then L17(c38) else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L17(c38)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c38_;
    goto L17_;
  } else {
  // L78()
    goto L78_;
  }

L59_:;
  // goto L10(c17, r28)
  // L10(c17, r28)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r28_;
  goto L10_;

L64_:;
  // r32 = force? r31
  Rsh_Fir_reg_r32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r31_);
  // checkMissing(r32)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r33 = dyn anyNA(r32)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

L68_:;
  // r34 = dyn stop1("invalid argument 'r'")
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

L71_:;
  // sym8 = ldf `as.integer`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf `as.integer` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard8 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L72_:;
  // r36 = dyn base7(<lang `<-`(c, as.integer(c))>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L15(r36)
  // L15(r36)
  Rsh_Fir_reg_r37_1 = Rsh_Fir_reg_r36_;
  goto L15_;

D14_:;
  // deopt 58 [c26, r33]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 63 [r34]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L16_:;
  // st c = r39
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r39_1, RHO);
  (void)(Rsh_Fir_reg_r39_1);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r41 = dyn length2(r39)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

L17_:;
  // c49 = `as.logical`(c39)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args92);
  // if c49 then L19(c49) else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L19(c49)
    Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c49_;
    goto L19_;
  } else {
  // L84()
    goto L84_;
  }

L65_:;
  // goto L12(c26, r33)
  // L12(c26, r33)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r33_1;
  goto L12_;

L69_:;
  // goto L14()
  // L14()
  goto L14_;

L73_:;
  // c36 = ld c
  Rsh_Fir_reg_c36_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L75() else D17()
  // L75()
  goto L75_;

L74_:;
  // r38 = dyn base8(<sym c>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_1 = Rsh_Fir_reg_r38_1;
  goto L16_;

L78_:;
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard9 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

D17_:;
  // deopt 70 [c36]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 76 [r41]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L18_:;
  // c46 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // c47 = `||`(c43, c46)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args96);
  // goto L17(c47)
  // L17(c47)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c47_;
  goto L17_;

L19_:;
  // c60 = `as.logical`(c50)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c60 then L90() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L90()
    goto L90_;
  } else {
  // L21()
    goto L21_;
  }

L75_:;
  // c37 = force? c36
  Rsh_Fir_reg_c37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c36_);
  // checkMissing(c37)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_c37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r40 = dyn as_integer2(c37)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L76() else D18()
  // L76()
  goto L76_;

L77_:;
  // goto L15(r41)
  // L15(r41)
  Rsh_Fir_reg_r37_1 = Rsh_Fir_reg_r41_;
  goto L15_;

L79_:;
  // c44 = ld c
  Rsh_Fir_reg_c44_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D20()
  // L81()
  goto L81_;

L80_:;
  // r43 = dyn base9(<lang `<`(c, 0.0)>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L18(c38, r43)
  // L18(c38, r43)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L18_;

L84_:;
  // sym10 = ldf anyNA
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base10 = ldf anyNA in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard10 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

D18_:;
  // deopt 73 [r40]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r40_1;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 81 [c38, c44]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L20_:;
  // c57 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args102);
  // c58 = `||`(c54, c57)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_c54_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args103);
  // goto L19(c58)
  // L19(c58)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c58_;
  goto L19_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym11 = ldf sum
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base11 = ldf sum in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard11 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L76_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r39_1 = Rsh_Fir_reg_r40_1;
  goto L16_;

L81_:;
  // c45 = force? c44
  Rsh_Fir_reg_c45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c44_);
  // checkMissing(c45)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_c45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r45 = `<`(c45, 0.0)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args106);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r46 = dyn any1(r45)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L82() else D21()
  // L82()
  goto L82_;

L85_:;
  // c55 = ld c
  Rsh_Fir_reg_c55_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

L86_:;
  // r47 = dyn base10(<sym c>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L20(c49, r47)
  // L20(c49, r47)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L20_;

L90_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L91() else D24()
  // L91()
  goto L91_;

D21_:;
  // deopt 86 [c38, r46]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 90 [c49, c55]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_c55_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard12 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L82_:;
  // goto L18(c38, r46)
  // L18(c38, r46)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r46_;
  goto L18_;

L87_:;
  // c56 = force? c55
  Rsh_Fir_reg_c56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c55_);
  // checkMissing(c56)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_c56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r49 = dyn anyNA1(c56)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

L91_:;
  // r50 = dyn stop2("invalid argument 'c'")
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L92() else D25()
  // L92()
  goto L92_;

L94_:;
  // r54 = ld r
  Rsh_Fir_reg_r54_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

L95_:;
  // r52 = dyn base11(<sym r>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L23(r52)
  // L23(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L23_;

D23_:;
  // deopt 93 [c49, r49]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 98 [r50]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 103 [r54]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L24_:;
  // r63 = `!=`(r60, r61)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args114);
  // c63 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args115);
  // if c63 then L102() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L102()
    goto L102_;
  } else {
  // L25()
    goto L25_;
  }

L88_:;
  // goto L20(c49, r49)
  // L20(c49, r49)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L20_;

L92_:;
  // goto L22()
  // L22()
  goto L22_;

L96_:;
  // r55 = force? r54
  Rsh_Fir_reg_r55_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r54_);
  // checkMissing(r55)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r55_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r56 = dyn sum(r55)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

L98_:;
  // c61 = ld c
  Rsh_Fir_reg_c61_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L99_:;
  // r59 = dyn base12(<sym c>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L24(r53, r59)
  // L24(r53, r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r59_;
  goto L24_;

D27_:;
  // deopt 106 [r56]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 108 [r53, c61]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_c61_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym13 = ldf `.Call`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base13 = ldf `.Call` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard13 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L97_:;
  // goto L23(r56)
  // L23(r56)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r56_;
  goto L23_;

L100_:;
  // c62 = force? c61
  Rsh_Fir_reg_c62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c61_);
  // checkMissing(c62)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_c62_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r62 = dyn sum1(c62)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_1, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

L102_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L103() else D30()
  // L103()
  goto L103_;

D29_:;
  // deopt 111 [r53, r62]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r67
  return Rsh_Fir_reg_r67_;

L101_:;
  // goto L24(r53, r62)
  // L24(r53, r62)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L24_;

L103_:;
  // r64 = dyn stop3("arguments 'r' and 'c' must have the same sums")
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L104() else D31()
  // L104()
  goto L104_;

L106_:;
  // C_r2dtable = ld C_r2dtable
  Rsh_Fir_reg_C_r2dtable = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L108() else D32()
  // L108()
  goto L108_;

L107_:;
  // r66 = dyn base13(<sym C_r2dtable>, <sym n>, <sym r>, <sym c>)
  SEXP Rsh_Fir_array_args123[4];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args123[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args123[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names49[4];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_array_arg_names49[3] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 4, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L27(r66)
  // L27(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L27_;

D31_:;
  // deopt 116 [r64]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 120 [C_r2dtable]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_C_r2dtable;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L26()
  // L26()
  goto L26_;

L108_:;
  // C_r2dtable1 = force? C_r2dtable
  Rsh_Fir_reg_C_r2dtable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_r2dtable);
  // checkMissing(C_r2dtable1)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_C_r2dtable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L109() else D33()
  // L109()
  goto L109_;

D33_:;
  // deopt 121 [C_r2dtable1, n7]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_C_r2dtable1_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L109_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // r68 = ld r
  Rsh_Fir_reg_r68_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L110() else D34()
  // L110()
  goto L110_;

D34_:;
  // deopt 122 [C_r2dtable1, n8, r68]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_C_r2dtable1_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L110_:;
  // r69 = force? r68
  Rsh_Fir_reg_r69_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r68_);
  // checkMissing(r69)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r69_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c64 = ld c
  Rsh_Fir_reg_c64_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L111() else D35()
  // L111()
  goto L111_;

D35_:;
  // deopt 123 [C_r2dtable1, n8, r69, c64]
  SEXP Rsh_Fir_array_deopt_stack43[4];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_C_r2dtable1_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_c64_;
  Rsh_Fir_deopt(123, 4, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L111_:;
  // c65 = force? c64
  Rsh_Fir_reg_c65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c64_);
  // checkMissing(c65)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_c65_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // vargs = dots[n8, r69, c65]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r70 = `.Call`(C_r2dtable1, vargs, <missing>)
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_C_r2dtable1_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args128[2] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args128);
  // goto L27(r70)
  // L27(r70)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r70_;
  goto L27_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_expected;
  SEXP Rsh_Fir_reg_expected1_;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_r3_2;
  SEXP Rsh_Fir_reg_expected2_;
  SEXP Rsh_Fir_reg_expected3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r5_2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf max
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base = ldf max in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
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
  return Rsh_Fir_reg_r1_2;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `/`(`^`(`(`(`-`(x, expected)), 2.0), expected)>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // expected = ld expected
  Rsh_Fir_reg_expected = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [x2, expected]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_expected;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L4_:;
  // expected1 = force? expected
  Rsh_Fir_reg_expected1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expected);
  // checkMissing(expected1)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_expected1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r2 = `-`(x2, expected1)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_expected1_;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args133);
  // r3 = `^`(r2, 2.0)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args134);
  // expected2 = ld expected
  Rsh_Fir_reg_expected2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 [r3, expected2]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_expected2_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L5_:;
  // expected3 = force? expected2
  Rsh_Fir_reg_expected3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expected2_);
  // checkMissing(expected3)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_expected3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // r4 = `/`(r3, expected3)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_expected3_;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args136);
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r5 = dyn max(r4)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r5_2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
