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
SEXP Rsh_Fir_user_function_inner2813596033_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2813596033_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_friedman_test;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_aggregate;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_wb;
  SEXP Rsh_Fir_reg_wb1_;
  SEXP Rsh_Fir_reg_friedman_test1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_friedman_test2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r36_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2813596033
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2813596033_, RHO, CCP);
  // st `friedman.test` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
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
  //   r3 = dyn c(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r6):
  //   return r6;
  // L2():
  //   r7 = `:`(1.0, 22.0);
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r5 = dyn base1(<lang `:`(1.0, 22.0)>, <lang c("Round Out", "Narrow Angle", "Wide Angle")>);
  //   goto L0(r5);
  // L1(r9):
  //   list = ldf list in base;
  //   r11 = dyn list(r7, r9);
  //   goto L0(r11);
  // L4():
  //   c1 = ldf c in base;
  //   r10 = dyn c1("Round Out", "Narrow Angle", "Wide Angle");
  //   goto L1(r10);
  // L5():
  //   r8 = dyn base2("Round Out", "Narrow Angle", "Wide Angle");
  //   goto L1(r8);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r13 = dyn matrix[, nrow, byrow, dimnames](p, 22.0, TRUE, p1)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args10[3] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 [r13]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st RoundingTimes = r13
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // friedman_test = ldf `friedman.test`
  Rsh_Fir_reg_friedman_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   RoundingTimes = ld RoundingTimes;
  //   RoundingTimes1 = force? RoundingTimes;
  //   checkMissing(RoundingTimes1);
  //   return RoundingTimes1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn friedman_test(p2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_friedman_test, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 17 [r15]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // aggregate = ldf aggregate
  Rsh_Fir_reg_aggregate = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   warpbreaks = ld warpbreaks;
  //   warpbreaks1 = force? warpbreaks;
  //   checkMissing(warpbreaks1);
  //   c2 = `is.object`(warpbreaks1);
  //   if c2 then L1() else L2(warpbreaks1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", warpbreaks1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(warpbreaks3):
  //   r16 = `$`(warpbreaks3, <sym breaks>);
  //   goto L0(r16);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   warpbreaks4 = ld warpbreaks;
  //   warpbreaks5 = force? warpbreaks4;
  //   checkMissing(warpbreaks5);
  //   c3 = `is.object`(warpbreaks5);
  //   if c3 then L4() else L5(warpbreaks5);
  // L2():
  //   r18 = dyn base3[w, t](<lang `$`(warpbreaks, wool)>, <lang `$`(warpbreaks, tension)>);
  //   goto L0(r18);
  // L3(dx3):
  //   warpbreaks8 = ld warpbreaks;
  //   warpbreaks9 = force? warpbreaks8;
  //   checkMissing(warpbreaks9);
  //   c4 = `is.object`(warpbreaks9);
  //   if c4 then L8() else L9(warpbreaks9);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("$", warpbreaks5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(warpbreaks7):
  //   r20 = `$`(warpbreaks7, <sym wool>);
  //   goto L3(r20);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L3(dx2);
  // L7(dx5):
  //   list1 = ldf list in base;
  //   r22 = dyn list1(dx3, dx5);
  //   goto L0(r22);
  // L8():
  //   dr4 = tryDispatchBuiltin.1("$", warpbreaks9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L10() else L9(dr4);
  // L9(warpbreaks11):
  //   r21 = `$`(warpbreaks11, <sym tension>);
  //   goto L7(r21);
  // L10():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L7(dx4);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   mean = ld mean;
  //   mean1 = force? mean;
  //   checkMissing(mean1);
  //   return mean1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r25 = dyn aggregate[, by, FUN](p3, p4, p5)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aggregate, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 25 [r25]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st wb = r25
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // wb = ld wb
  Rsh_Fir_reg_wb = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 27 [wb]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_wb;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // wb1 = force? wb
  Rsh_Fir_reg_wb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wb);
  // checkMissing(wb1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_wb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // friedman_test1 = ldf `friedman.test`
  Rsh_Fir_reg_friedman_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p6 = prom<V +>{
  //   wb2 = ld wb;
  //   wb3 = force? wb2;
  //   checkMissing(wb3);
  //   c5 = `is.object`(wb3);
  //   if c5 then L1() else L2(wb3);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", wb3);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(wb5):
  //   r26 = `$`(wb5, <sym x>);
  //   goto L0(r26);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   wb6 = ld wb;
  //   wb7 = force? wb6;
  //   checkMissing(wb7);
  //   c6 = `is.object`(wb7);
  //   if c6 then L1() else L2(wb7);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", wb7);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(wb9):
  //   r28 = `$`(wb9, <sym w>);
  //   goto L0(r28);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   wb10 = ld wb;
  //   wb11 = force? wb10;
  //   checkMissing(wb11);
  //   c7 = `is.object`(wb11);
  //   if c7 then L1() else L2(wb11);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", wb11);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(wb13):
  //   r30 = `$`(wb13, <sym t>);
  //   goto L0(r30);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r32 = dyn friedman_test1(p6, p7, p8)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_friedman_test1_, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 34 [r32]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // friedman_test2 = ldf `friedman.test`
  Rsh_Fir_reg_friedman_test2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p9 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r33 = dyn __(<sym x>, <lang `|`(w, t)>);
  //   return r33;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   wb14 = ld wb;
  //   wb15 = force? wb14;
  //   checkMissing(wb15);
  //   return wb15;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r36 = dyn friedman_test2[, data](p9, p10)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_friedman_test2_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 40 [r36]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r36
  return Rsh_Fir_reg_r36_;
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
  // r3 = dyn c(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25)
  SEXP Rsh_Fir_array_args1[66];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[9] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[12] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[13] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[14] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[15] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[16] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[17] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[20] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args1[21] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[23] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args1[24] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args1[25] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args1[26] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args1[27] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[28] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args1[29] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[30] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args1[31] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[32] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args1[33] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args1[34] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[35] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[36] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[37] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args1[38] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[39] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args1[40] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args1[41] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args1[42] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[43] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[44] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[45] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[46] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[47] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[48] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[49] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[50] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args1[51] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[52] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[53] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[54] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[55] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[56] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args1[57] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args1[58] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[59] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[60] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[61] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args1[62] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[63] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args1[64] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args1[65] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names[66];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_array_arg_names[10] = R_MissingArg;
  Rsh_Fir_array_arg_names[11] = R_MissingArg;
  Rsh_Fir_array_arg_names[12] = R_MissingArg;
  Rsh_Fir_array_arg_names[13] = R_MissingArg;
  Rsh_Fir_array_arg_names[14] = R_MissingArg;
  Rsh_Fir_array_arg_names[15] = R_MissingArg;
  Rsh_Fir_array_arg_names[16] = R_MissingArg;
  Rsh_Fir_array_arg_names[17] = R_MissingArg;
  Rsh_Fir_array_arg_names[18] = R_MissingArg;
  Rsh_Fir_array_arg_names[19] = R_MissingArg;
  Rsh_Fir_array_arg_names[20] = R_MissingArg;
  Rsh_Fir_array_arg_names[21] = R_MissingArg;
  Rsh_Fir_array_arg_names[22] = R_MissingArg;
  Rsh_Fir_array_arg_names[23] = R_MissingArg;
  Rsh_Fir_array_arg_names[24] = R_MissingArg;
  Rsh_Fir_array_arg_names[25] = R_MissingArg;
  Rsh_Fir_array_arg_names[26] = R_MissingArg;
  Rsh_Fir_array_arg_names[27] = R_MissingArg;
  Rsh_Fir_array_arg_names[28] = R_MissingArg;
  Rsh_Fir_array_arg_names[29] = R_MissingArg;
  Rsh_Fir_array_arg_names[30] = R_MissingArg;
  Rsh_Fir_array_arg_names[31] = R_MissingArg;
  Rsh_Fir_array_arg_names[32] = R_MissingArg;
  Rsh_Fir_array_arg_names[33] = R_MissingArg;
  Rsh_Fir_array_arg_names[34] = R_MissingArg;
  Rsh_Fir_array_arg_names[35] = R_MissingArg;
  Rsh_Fir_array_arg_names[36] = R_MissingArg;
  Rsh_Fir_array_arg_names[37] = R_MissingArg;
  Rsh_Fir_array_arg_names[38] = R_MissingArg;
  Rsh_Fir_array_arg_names[39] = R_MissingArg;
  Rsh_Fir_array_arg_names[40] = R_MissingArg;
  Rsh_Fir_array_arg_names[41] = R_MissingArg;
  Rsh_Fir_array_arg_names[42] = R_MissingArg;
  Rsh_Fir_array_arg_names[43] = R_MissingArg;
  Rsh_Fir_array_arg_names[44] = R_MissingArg;
  Rsh_Fir_array_arg_names[45] = R_MissingArg;
  Rsh_Fir_array_arg_names[46] = R_MissingArg;
  Rsh_Fir_array_arg_names[47] = R_MissingArg;
  Rsh_Fir_array_arg_names[48] = R_MissingArg;
  Rsh_Fir_array_arg_names[49] = R_MissingArg;
  Rsh_Fir_array_arg_names[50] = R_MissingArg;
  Rsh_Fir_array_arg_names[51] = R_MissingArg;
  Rsh_Fir_array_arg_names[52] = R_MissingArg;
  Rsh_Fir_array_arg_names[53] = R_MissingArg;
  Rsh_Fir_array_arg_names[54] = R_MissingArg;
  Rsh_Fir_array_arg_names[55] = R_MissingArg;
  Rsh_Fir_array_arg_names[56] = R_MissingArg;
  Rsh_Fir_array_arg_names[57] = R_MissingArg;
  Rsh_Fir_array_arg_names[58] = R_MissingArg;
  Rsh_Fir_array_arg_names[59] = R_MissingArg;
  Rsh_Fir_array_arg_names[60] = R_MissingArg;
  Rsh_Fir_array_arg_names[61] = R_MissingArg;
  Rsh_Fir_array_arg_names[62] = R_MissingArg;
  Rsh_Fir_array_arg_names[63] = R_MissingArg;
  Rsh_Fir_array_arg_names[64] = R_MissingArg;
  Rsh_Fir_array_arg_names[65] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 66, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25)
  SEXP Rsh_Fir_array_args2[66];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[12] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[13] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[14] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[15] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[16] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[17] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[20] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args2[21] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[23] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args2[24] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args2[25] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args2[26] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args2[27] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[28] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args2[29] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[30] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args2[31] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[32] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args2[33] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args2[34] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[35] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[36] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[37] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args2[38] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[39] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args2[40] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args2[41] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args2[42] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[43] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[44] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[45] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[46] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[47] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[48] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[49] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[50] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args2[51] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[52] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[53] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[54] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[55] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[56] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args2[57] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args2[58] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[59] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[60] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[61] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args2[62] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[63] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args2[64] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args2[65] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names1[66];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_array_arg_names1[10] = R_MissingArg;
  Rsh_Fir_array_arg_names1[11] = R_MissingArg;
  Rsh_Fir_array_arg_names1[12] = R_MissingArg;
  Rsh_Fir_array_arg_names1[13] = R_MissingArg;
  Rsh_Fir_array_arg_names1[14] = R_MissingArg;
  Rsh_Fir_array_arg_names1[15] = R_MissingArg;
  Rsh_Fir_array_arg_names1[16] = R_MissingArg;
  Rsh_Fir_array_arg_names1[17] = R_MissingArg;
  Rsh_Fir_array_arg_names1[18] = R_MissingArg;
  Rsh_Fir_array_arg_names1[19] = R_MissingArg;
  Rsh_Fir_array_arg_names1[20] = R_MissingArg;
  Rsh_Fir_array_arg_names1[21] = R_MissingArg;
  Rsh_Fir_array_arg_names1[22] = R_MissingArg;
  Rsh_Fir_array_arg_names1[23] = R_MissingArg;
  Rsh_Fir_array_arg_names1[24] = R_MissingArg;
  Rsh_Fir_array_arg_names1[25] = R_MissingArg;
  Rsh_Fir_array_arg_names1[26] = R_MissingArg;
  Rsh_Fir_array_arg_names1[27] = R_MissingArg;
  Rsh_Fir_array_arg_names1[28] = R_MissingArg;
  Rsh_Fir_array_arg_names1[29] = R_MissingArg;
  Rsh_Fir_array_arg_names1[30] = R_MissingArg;
  Rsh_Fir_array_arg_names1[31] = R_MissingArg;
  Rsh_Fir_array_arg_names1[32] = R_MissingArg;
  Rsh_Fir_array_arg_names1[33] = R_MissingArg;
  Rsh_Fir_array_arg_names1[34] = R_MissingArg;
  Rsh_Fir_array_arg_names1[35] = R_MissingArg;
  Rsh_Fir_array_arg_names1[36] = R_MissingArg;
  Rsh_Fir_array_arg_names1[37] = R_MissingArg;
  Rsh_Fir_array_arg_names1[38] = R_MissingArg;
  Rsh_Fir_array_arg_names1[39] = R_MissingArg;
  Rsh_Fir_array_arg_names1[40] = R_MissingArg;
  Rsh_Fir_array_arg_names1[41] = R_MissingArg;
  Rsh_Fir_array_arg_names1[42] = R_MissingArg;
  Rsh_Fir_array_arg_names1[43] = R_MissingArg;
  Rsh_Fir_array_arg_names1[44] = R_MissingArg;
  Rsh_Fir_array_arg_names1[45] = R_MissingArg;
  Rsh_Fir_array_arg_names1[46] = R_MissingArg;
  Rsh_Fir_array_arg_names1[47] = R_MissingArg;
  Rsh_Fir_array_arg_names1[48] = R_MissingArg;
  Rsh_Fir_array_arg_names1[49] = R_MissingArg;
  Rsh_Fir_array_arg_names1[50] = R_MissingArg;
  Rsh_Fir_array_arg_names1[51] = R_MissingArg;
  Rsh_Fir_array_arg_names1[52] = R_MissingArg;
  Rsh_Fir_array_arg_names1[53] = R_MissingArg;
  Rsh_Fir_array_arg_names1[54] = R_MissingArg;
  Rsh_Fir_array_arg_names1[55] = R_MissingArg;
  Rsh_Fir_array_arg_names1[56] = R_MissingArg;
  Rsh_Fir_array_arg_names1[57] = R_MissingArg;
  Rsh_Fir_array_arg_names1[58] = R_MissingArg;
  Rsh_Fir_array_arg_names1[59] = R_MissingArg;
  Rsh_Fir_array_arg_names1[60] = R_MissingArg;
  Rsh_Fir_array_arg_names1[61] = R_MissingArg;
  Rsh_Fir_array_arg_names1[62] = R_MissingArg;
  Rsh_Fir_array_arg_names1[63] = R_MissingArg;
  Rsh_Fir_array_arg_names1[64] = R_MissingArg;
  Rsh_Fir_array_arg_names1[65] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 66, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L2_:;
  // r7 = `:`(1.0, 22.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args4);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r5 = dyn base1(<lang `:`(1.0, 22.0)>, <lang c("Round Out", "Narrow Angle", "Wide Angle")>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r11 = dyn list(r7, r9)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r11_;
  goto L0_;

L4_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r10 = dyn c1("Round Out", "Narrow Angle", "Wide Angle")
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L1_;

L5_:;
  // r8 = dyn base2("Round Out", "Narrow Angle", "Wide Angle")
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_RoundingTimes;
  SEXP Rsh_Fir_reg_RoundingTimes1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // RoundingTimes = ld RoundingTimes
  Rsh_Fir_reg_RoundingTimes = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // RoundingTimes1 = force? RoundingTimes
  Rsh_Fir_reg_RoundingTimes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RoundingTimes);
  // checkMissing(RoundingTimes1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_RoundingTimes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return RoundingTimes1
  return Rsh_Fir_reg_RoundingTimes1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warpbreaks;
  SEXP Rsh_Fir_reg_warpbreaks1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_warpbreaks3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warpbreaks = ld warpbreaks
  Rsh_Fir_reg_warpbreaks = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // warpbreaks1 = force? warpbreaks
  Rsh_Fir_reg_warpbreaks1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks);
  // checkMissing(warpbreaks1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_warpbreaks1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(warpbreaks1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_warpbreaks1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args14);
  // if c2 then L1() else L2(warpbreaks1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(warpbreaks1)
    Rsh_Fir_reg_warpbreaks3_ = Rsh_Fir_reg_warpbreaks1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", warpbreaks1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_warpbreaks1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_warpbreaks3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r16 = `$`(warpbreaks3, <sym breaks>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_warpbreaks3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args17);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_warpbreaks4_;
  SEXP Rsh_Fir_reg_warpbreaks5_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_warpbreaks7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_warpbreaks8_;
  SEXP Rsh_Fir_reg_warpbreaks9_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_warpbreaks11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
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
  // warpbreaks4 = ld warpbreaks
  Rsh_Fir_reg_warpbreaks4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // warpbreaks5 = force? warpbreaks4
  Rsh_Fir_reg_warpbreaks5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks4_);
  // checkMissing(warpbreaks5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_warpbreaks5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(warpbreaks5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_warpbreaks5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args21);
  // if c3 then L4() else L5(warpbreaks5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L4()
    goto L4_;
  } else {
  // L5(warpbreaks5)
    Rsh_Fir_reg_warpbreaks7_ = Rsh_Fir_reg_warpbreaks5_;
    goto L5_;
  }

L2_:;
  // r18 = dyn base3[w, t](<lang `$`(warpbreaks, wool)>, <lang `$`(warpbreaks, tension)>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // warpbreaks8 = ld warpbreaks
  Rsh_Fir_reg_warpbreaks8_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // warpbreaks9 = force? warpbreaks8
  Rsh_Fir_reg_warpbreaks9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks8_);
  // checkMissing(warpbreaks9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_warpbreaks9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(warpbreaks9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_warpbreaks9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c4 then L8() else L9(warpbreaks9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L8()
    goto L8_;
  } else {
  // L9(warpbreaks9)
    Rsh_Fir_reg_warpbreaks11_ = Rsh_Fir_reg_warpbreaks9_;
    goto L9_;
  }

L4_:;
  // dr2 = tryDispatchBuiltin.1("$", warpbreaks5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_warpbreaks5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_warpbreaks7_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // r20 = `$`(warpbreaks7, <sym wool>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_warpbreaks7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args27);
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r20_;
  goto L3_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

L7_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r22 = dyn list1(dx3, dx5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L0_;

L8_:;
  // dr4 = tryDispatchBuiltin.1("$", warpbreaks9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_warpbreaks9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc2 then L10() else L9(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr4)
    Rsh_Fir_reg_warpbreaks11_ = Rsh_Fir_reg_dr4_;
    goto L9_;
  }

L9_:;
  // r21 = `$`(warpbreaks11, <sym tension>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_warpbreaks11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args32);
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r21_;
  goto L7_;

L10_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_mean1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mean = ld mean
  Rsh_Fir_reg_mean = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // mean1 = force? mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean);
  // checkMissing(mean1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_mean1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return mean1
  return Rsh_Fir_reg_mean1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wb2_;
  SEXP Rsh_Fir_reg_wb3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_wb5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // wb2 = ld wb
  Rsh_Fir_reg_wb2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // wb3 = force? wb2
  Rsh_Fir_reg_wb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wb2_);
  // checkMissing(wb3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_wb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(wb3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_wb3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args38);
  // if c5 then L1() else L2(wb3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(wb3)
    Rsh_Fir_reg_wb5_ = Rsh_Fir_reg_wb3_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", wb3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_wb3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_wb5_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r26 = `$`(wb5, <sym x>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_wb5_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args41);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r26_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wb6_;
  SEXP Rsh_Fir_reg_wb7_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_wb9_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // wb6 = ld wb
  Rsh_Fir_reg_wb6_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // wb7 = force? wb6
  Rsh_Fir_reg_wb7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wb6_);
  // checkMissing(wb7)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_wb7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(wb7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_wb7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c6 then L1() else L2(wb7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(wb7)
    Rsh_Fir_reg_wb9_ = Rsh_Fir_reg_wb7_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", wb7)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_wb7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_wb9_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r28 = `$`(wb9, <sym w>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_wb9_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args47);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r28_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wb10_;
  SEXP Rsh_Fir_reg_wb11_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_wb13_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // wb10 = ld wb
  Rsh_Fir_reg_wb10_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // wb11 = force? wb10
  Rsh_Fir_reg_wb11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wb10_);
  // checkMissing(wb11)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_wb11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(wb11)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_wb11_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args50);
  // if c7 then L1() else L2(wb11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(wb11)
    Rsh_Fir_reg_wb13_ = Rsh_Fir_reg_wb11_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", wb11)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_wb11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_wb13_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r30 = `$`(wb13, <sym t>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_wb13_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args53);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r30_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r33 = dyn __(<sym x>, <lang `|`(w, t)>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wb14_;
  SEXP Rsh_Fir_reg_wb15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // wb14 = ld wb
  Rsh_Fir_reg_wb14_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // wb15 = force? wb14
  Rsh_Fir_reg_wb15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wb14_);
  // checkMissing(wb15)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_wb15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return wb15
  return Rsh_Fir_reg_wb15_;
}
SEXP Rsh_Fir_user_function_inner2813596033_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2813596033 dynamic dispatch ([y, `...`])

  return Rsh_Fir_user_version_inner2813596033_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2813596033_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2813596033 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2813596033/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_y = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r2 = dyn UseMethod("friedman.test")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("friedman.test")
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
