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
SEXP Rsh_Fir_user_function_inner955676027_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner955676027_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_make_unique;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_make_unique1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_make_unique3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_make_unique4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_trace;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_data_frame1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_untrace;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r53_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner955676027
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner955676027_, RHO, CCP);
  // st `make.unique` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
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
  //   r3 = dyn c("a", "a", "a");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("a", "a", "a");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn make_unique(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // make_unique1 = ldf `make.unique`
  Rsh_Fir_reg_make_unique1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   make_unique2 = ldf `make.unique`;
  //   p1 = prom<V +>{
  //     sym2 = ldf c;
  //     base2 = ldf c in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r9):
  //     return r9;
  //   L1():
  //     c1 = ldf c in base;
  //     r10 = dyn c1("a", "a");
  //     goto L0(r10);
  //   L2():
  //     r8 = dyn base2("a", "a");
  //     goto L0(r8);
  //   };
  //   r12 = dyn make_unique2(p1);
  //   c2 = ldf c in base;
  //   r13 = dyn c2(r12, "a");
  //   goto L0(r13);
  // L2():
  //   r6 = dyn base1(<lang make.unique(c("a", "a"))>, "a");
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r15 = dyn make_unique1(p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // make_unique3 = ldf `make.unique`
  Rsh_Fir_reg_make_unique3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c3 = ldf c in base;
  //   r18 = dyn c3("a", "a", "a.2", "a");
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3("a", "a", "a.2", "a");
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r20 = dyn make_unique3(p3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique3_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 14 [r20]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // make_unique4 = ldf `make.unique`
  Rsh_Fir_reg_make_unique4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p5 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   make_unique5 = ldf `make.unique`;
  //   p4 = prom<V +>{
  //     sym5 = ldf c;
  //     base5 = ldf c in base;
  //     guard5 = `==`.4(sym5, base5);
  //     if guard5 then L1() else L2();
  //   L0(r24):
  //     return r24;
  //   L1():
  //     c4 = ldf c in base;
  //     r25 = dyn c4("a", "a");
  //     goto L0(r25);
  //   L2():
  //     r23 = dyn base5("a", "a");
  //     goto L0(r23);
  //   };
  //   r27 = dyn make_unique5(p4);
  //   c5 = ldf c in base;
  //   r28 = dyn c5(r27, "a.2", "a");
  //   goto L0(r28);
  // L2():
  //   r21 = dyn base4(<lang make.unique(c("a", "a"))>, "a.2", "a");
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r30 = dyn make_unique4(p5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique4_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 18 [r30]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // trace = ldf trace
  Rsh_Fir_reg_trace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   make_unique6 = ld `make.unique`;
  //   make_unique7 = force? make_unique6;
  //   checkMissing(make_unique7);
  //   return make_unique7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r32 = dyn trace(p6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_trace, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 22 [r32]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r33 = dyn data_frame[x, x, x](1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 31 [r33]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // st d1 = r33
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // data_frame1 = ldf `data.frame`
  Rsh_Fir_reg_data_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p7 = prom<V +>{
  //   data_frame2 = ldf `data.frame`;
  //   r34 = dyn data_frame2[x, x](1.0, 2.0);
  //   return r34;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r36 = dyn data_frame1[, x](p7, 3.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 38 [r36]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // st d2 = r36
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   sym6 = ldf identical;
  //   base6 = ldf identical in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r38):
  //   return r38;
  // L1():
  //   d1 = ld d1;
  //   d2 = force? d1;
  //   checkMissing(d2);
  //   d3 = ld d2;
  //   d4 = force? d3;
  //   checkMissing(d4);
  //   identical = ldf identical in base;
  //   r39 = dyn identical(d2, d4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base6(<sym d1>, <sym d2>);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   colnames = ldf colnames;
  //   p9 = prom<V +>{
  //     d5 = ld d1;
  //     d6 = force? d5;
  //     checkMissing(d6);
  //     return d6;
  //   };
  //   r42 = dyn colnames(p9);
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r46, r47):
  //   r49 = `==`(r46, r47);
  //   return r49;
  // L1():
  //   c6 = ldf c in base;
  //   r48 = dyn c6("x", "x.1", "x.2");
  //   goto L0(r42, r48);
  // L2():
  //   r45 = dyn base7("x", "x.1", "x.2");
  //   goto L0(r42, r45);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r51 = dyn stopifnot(p8, p10)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 44 [r51]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // untrace = ldf untrace
  Rsh_Fir_reg_untrace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p11 = prom<V +>{
  //   make_unique8 = ld `make.unique`;
  //   make_unique9 = force? make_unique8;
  //   checkMissing(make_unique9);
  //   return make_unique9;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r53 = dyn untrace(p11)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_untrace, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 48 [r53]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r53
  return Rsh_Fir_reg_r53_;
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
  // r3 = dyn c("a", "a", "a")
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("a", "a", "a")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_make_unique2_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // make_unique2 = ldf `make.unique`
  Rsh_Fir_reg_make_unique2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   c1 = ldf c in base;
  //   r10 = dyn c1("a", "a");
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base2("a", "a");
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r12 = dyn make_unique2(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique2_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r13 = dyn c2(r12, "a")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<lang make.unique(c("a", "a"))>, "a")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r10 = dyn c1("a", "a")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base2("a", "a")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r18 = dyn c3("a", "a", "a.2", "a")
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3("a", "a", "a.2", "a")
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_make_unique5_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // make_unique5 = ldf `make.unique`
  Rsh_Fir_reg_make_unique5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   c4 = ldf c in base;
  //   r25 = dyn c4("a", "a");
  //   goto L0(r25);
  // L2():
  //   r23 = dyn base5("a", "a");
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r27 = dyn make_unique5(p4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique5_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names14, CCP, RHO);
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r28 = dyn c5(r27, "a.2", "a")
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r21 = dyn base4(<lang make.unique(c("a", "a"))>, "a.2", "a")
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r25 = dyn c4("a", "a")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r23 = dyn base5("a", "a")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_unique6_;
  SEXP Rsh_Fir_reg_make_unique7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // make_unique6 = ld `make.unique`
  Rsh_Fir_reg_make_unique6_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // make_unique7 = force? make_unique6
  Rsh_Fir_reg_make_unique7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_unique6_);
  // checkMissing(make_unique7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_make_unique7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return make_unique7
  return Rsh_Fir_reg_make_unique7_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_frame2_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // data_frame2 = ldf `data.frame`
  Rsh_Fir_reg_data_frame2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r34 = dyn data_frame2[x, x](1.0, 2.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // d1 = ld d1
  Rsh_Fir_reg_d1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d2 = force? d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1_);
  // checkMissing(d2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // d3 = ld d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // d4 = force? d3
  Rsh_Fir_reg_d4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d3_);
  // checkMissing(d4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_d4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r39 = dyn identical(d2, d4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args32[9];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args32[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[8] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base6(<sym d1>, <sym d2>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_colnames;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p9 = prom<V +>{
  //   d5 = ld d1;
  //   d6 = force? d5;
  //   checkMissing(d6);
  //   return d6;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r42 = dyn colnames(p9)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names24, CCP, RHO);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r49 = `==`(r46, r47)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // return r49
  return Rsh_Fir_reg_r49_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r48 = dyn c6("x", "x.1", "x.2")
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r42, r48)
  // L0(r42, r48)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r45 = dyn base7("x", "x.1", "x.2")
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r42, r45)
  // L0(r42, r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_d6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d5 = ld d1
  Rsh_Fir_reg_d5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d6 = force? d5
  Rsh_Fir_reg_d6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d5_);
  // checkMissing(d6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_d6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return d6
  return Rsh_Fir_reg_d6_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_unique8_;
  SEXP Rsh_Fir_reg_make_unique9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // make_unique8 = ld `make.unique`
  Rsh_Fir_reg_make_unique8_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // make_unique9 = force? make_unique8
  Rsh_Fir_reg_make_unique9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_unique8_);
  // checkMissing(make_unique9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_make_unique9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return make_unique9
  return Rsh_Fir_reg_make_unique9_;
}
SEXP Rsh_Fir_user_function_inner955676027_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner955676027 dynamic dispatch ([names, sep])

  return Rsh_Fir_user_version_inner955676027_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner955676027_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner955676027 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner955676027/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_sep;
  SEXP Rsh_Fir_reg_sep_isMissing;
  SEXP Rsh_Fir_reg_sep_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_sep1_;
  SEXP Rsh_Fir_reg_sep2_;
  SEXP Rsh_Fir_reg_make_unique1;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_names = PARAMS[0];
  Rsh_Fir_reg_sep = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args43);
  // if sep_isMissing then L0(".") else L0(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L0(".")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 23);
    goto L0_;
  } else {
  // L0(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L0_;
  }

L0_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L2_:;
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<lang make.unique(names, sep)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [names1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L4_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [sep1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_sep1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L5_:;
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // make_unique = ldf `make.unique` in base
  Rsh_Fir_reg_make_unique1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn make_unique(names2, sep2)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_sep2_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique1, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
