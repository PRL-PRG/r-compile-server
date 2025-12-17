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
SEXP Rsh_Fir_user_function_inner780506716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner780506716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner780506716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner780506716_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_textConnection;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_readLines;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_pushBack;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_pushBackLength;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_readLines1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_pushBackLength1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_readLines2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_readLines3_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_close;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r22_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner780506716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner780506716_, RHO, CCP);
  // st pushBack = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // textConnection = ldf textConnection
  Rsh_Fir_reg_textConnection = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   LETTERS = ld LETTERS;
  //   LETTERS1 = force? LETTERS;
  //   checkMissing(LETTERS1);
  //   return LETTERS1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn textConnection(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_textConnection, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st zz = r2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   zz = ld zz;
  //   zz1 = force? zz;
  //   checkMissing(zz1);
  //   return zz1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn readLines(p1, 2.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // pushBack = ldf pushBack
  Rsh_Fir_reg_pushBack = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c("aa", "bb");
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base("aa", "bb");
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   zz2 = ld zz;
  //   zz3 = force? zz2;
  //   checkMissing(zz3);
  //   return zz3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r10 = dyn pushBack(p2, p3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pushBack, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // pushBackLength = ldf pushBackLength
  Rsh_Fir_reg_pushBackLength = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p4 = prom<V +>{
  //   zz4 = ld zz;
  //   zz5 = force? zz4;
  //   checkMissing(zz5);
  //   return zz5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r12 = dyn pushBackLength(p4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pushBackLength, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // readLines1 = ldf readLines
  Rsh_Fir_reg_readLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p5 = prom<V +>{
  //   zz6 = ld zz;
  //   zz7 = force? zz6;
  //   checkMissing(zz7);
  //   return zz7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r14 = dyn readLines1(p5, 1.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // pushBackLength1 = ldf pushBackLength
  Rsh_Fir_reg_pushBackLength1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p6 = prom<V +>{
  //   zz8 = ld zz;
  //   zz9 = force? zz8;
  //   checkMissing(zz9);
  //   return zz9;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r16 = dyn pushBackLength1(p6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pushBackLength1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // readLines2 = ldf readLines
  Rsh_Fir_reg_readLines2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p7 = prom<V +>{
  //   zz10 = ld zz;
  //   zz11 = force? zz10;
  //   checkMissing(zz11);
  //   return zz11;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r18 = dyn readLines2(p7, 1.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // readLines3 = ldf readLines
  Rsh_Fir_reg_readLines3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   zz12 = ld zz;
  //   zz13 = force? zz12;
  //   checkMissing(zz13);
  //   return zz13;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r20 = dyn readLines3(p8, 1.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines3_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // close = ldf close
  Rsh_Fir_reg_close = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p9 = prom<V +>{
  //   zz14 = ld zz;
  //   zz15 = force? zz14;
  //   checkMissing(zz15);
  //   return zz15;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r22 = dyn close(p9)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return LETTERS1
  return Rsh_Fir_reg_LETTERS1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz;
  SEXP Rsh_Fir_reg_zz1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz = ld zz
  Rsh_Fir_reg_zz = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz1 = force? zz
  Rsh_Fir_reg_zz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz);
  // checkMissing(zz1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_zz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return zz1
  return Rsh_Fir_reg_zz1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn c("aa", "bb")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base("aa", "bb")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz2_;
  SEXP Rsh_Fir_reg_zz3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz2 = ld zz
  Rsh_Fir_reg_zz2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz3 = force? zz2
  Rsh_Fir_reg_zz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz2_);
  // checkMissing(zz3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_zz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return zz3
  return Rsh_Fir_reg_zz3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz4_;
  SEXP Rsh_Fir_reg_zz5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz4 = ld zz
  Rsh_Fir_reg_zz4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz5 = force? zz4
  Rsh_Fir_reg_zz5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz4_);
  // checkMissing(zz5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_zz5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return zz5
  return Rsh_Fir_reg_zz5_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz6_;
  SEXP Rsh_Fir_reg_zz7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz6 = ld zz
  Rsh_Fir_reg_zz6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz7 = force? zz6
  Rsh_Fir_reg_zz7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz6_);
  // checkMissing(zz7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_zz7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return zz7
  return Rsh_Fir_reg_zz7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz8_;
  SEXP Rsh_Fir_reg_zz9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz8 = ld zz
  Rsh_Fir_reg_zz8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz9 = force? zz8
  Rsh_Fir_reg_zz9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz8_);
  // checkMissing(zz9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_zz9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return zz9
  return Rsh_Fir_reg_zz9_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz10_;
  SEXP Rsh_Fir_reg_zz11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz10 = ld zz
  Rsh_Fir_reg_zz10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz11 = force? zz10
  Rsh_Fir_reg_zz11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz10_);
  // checkMissing(zz11)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_zz11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return zz11
  return Rsh_Fir_reg_zz11_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz12_;
  SEXP Rsh_Fir_reg_zz13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz12 = ld zz
  Rsh_Fir_reg_zz12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz13 = force? zz12
  Rsh_Fir_reg_zz13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz12_);
  // checkMissing(zz13)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_zz13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return zz13
  return Rsh_Fir_reg_zz13_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz14_;
  SEXP Rsh_Fir_reg_zz15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz14 = ld zz
  Rsh_Fir_reg_zz14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zz15 = force? zz14
  Rsh_Fir_reg_zz15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz14_);
  // checkMissing(zz15)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_zz15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return zz15
  return Rsh_Fir_reg_zz15_;
}
SEXP Rsh_Fir_user_function_inner780506716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner780506716 dynamic dispatch ([data, connection, newLine, encoding])

  return Rsh_Fir_user_version_inner780506716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner780506716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner780506716 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner780506716/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_connection;
  SEXP Rsh_Fir_reg_newLine;
  SEXP Rsh_Fir_reg_encoding;
  SEXP Rsh_Fir_reg_newLine_isMissing;
  SEXP Rsh_Fir_reg_newLine_orDefault;
  SEXP Rsh_Fir_reg_encoding_isMissing;
  SEXP Rsh_Fir_reg_encoding_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_encoding1_;
  SEXP Rsh_Fir_reg_encoding2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_encoding3_;
  SEXP Rsh_Fir_reg_encoding4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_encoding6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_encoding7_;
  SEXP Rsh_Fir_reg_encoding8_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_encoding11_;
  SEXP Rsh_Fir_reg_encoding12_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_reg_connection1_;
  SEXP Rsh_Fir_reg_connection2_;
  SEXP Rsh_Fir_reg_newLine1_;
  SEXP Rsh_Fir_reg_newLine2_;
  SEXP Rsh_Fir_reg_type;
  SEXP Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_reg_pushBack1;
  SEXP Rsh_Fir_reg_r23_;

  // Bind parameters
  Rsh_Fir_reg_data = PARAMS[0];
  Rsh_Fir_reg_connection = PARAMS[1];
  Rsh_Fir_reg_newLine = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st connection = connection
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_connection, RHO);
  (void)(Rsh_Fir_reg_connection);
  // newLine_isMissing = missing.0(newLine)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_newLine;
  Rsh_Fir_reg_newLine_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args21);
  // if newLine_isMissing then L0(TRUE) else L0(newLine)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_newLine_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_newLine_orDefault = Rsh_const(CCP, 14);
    goto L0_;
  } else {
  // L0(newLine)
    Rsh_Fir_reg_newLine_orDefault = Rsh_Fir_reg_newLine;
    goto L0_;
  }

L0_:;
  // st newLine = newLine_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_newLine_orDefault, RHO);
  (void)(Rsh_Fir_reg_newLine_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args22);
  // if encoding_isMissing then L1() else L2(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("", "bytes", "UTF-8");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("", "bytes", "UTF-8");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner780506716_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L3_:;
  // r7 = `>`(r5, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args27);
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c1 then L17() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L4()
    goto L4_;
  }

L13_:;
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r4 = dyn base1(<sym encoding>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L3_;

D0_:;
  // deopt 2 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L15_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r6 = dyn length(encoding2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_encoding2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L17_:;
  // encoding3 = ld encoding
  Rsh_Fir_reg_encoding3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 [encoding3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_encoding3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L7_:;
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c3 then L27() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L27()
    goto L27_;
  } else {
  // L8()
    goto L8_;
  }

L16_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L3_;

L18_:;
  // encoding4 = force? encoding3
  Rsh_Fir_reg_encoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding3_);
  // checkMissing(encoding4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_encoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(encoding4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_encoding4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args35);
  // if c2 then L19() else L20(encoding4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L19()
    goto L19_;
  } else {
  // L20(encoding4)
    Rsh_Fir_reg_encoding6_ = Rsh_Fir_reg_encoding4_;
    goto L20_;
  }

L23_:;
  // encoding7 = ld encoding
  Rsh_Fir_reg_encoding7_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L24_:;
  // r9 = dyn base2(<sym encoding>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L7_;

D3_:;
  // deopt 18 [encoding7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_encoding7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L5_:;
  // st encoding = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6()
  // L6()
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[", encoding4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_encoding4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_encoding6_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r8 = dyn __(encoding6, 1.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_encoding6_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L5_;

L25_:;
  // encoding8 = force? encoding7
  Rsh_Fir_reg_encoding8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding7_);
  // checkMissing(encoding8)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_encoding8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r11 = dyn nzchar(encoding8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_encoding8_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L27_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

D4_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // st type = r16
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r16_1, RHO);
  (void)(Rsh_Fir_reg_r16_1);
  // sym5 = ldf `.Internal`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf `.Internal` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L26_:;
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L7_;

L28_:;
  // p1 = prom<V +>{
  //   encoding9 = ld encoding;
  //   encoding10 = force? encoding9;
  //   checkMissing(encoding10);
  //   return encoding10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner780506716_1, 0, NULL, CCP, RHO);
  // r13 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L31_:;
  // encoding11 = ld encoding
  Rsh_Fir_reg_encoding11_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L32_:;
  // r15 = dyn base3(<sym encoding>, <lang c("", "bytes", "UTF-8")>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_;
  goto L10_;

D6_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 31 [encoding11]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_encoding11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_1;

L29_:;
  // st encoding = r13
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L9()
  // L9()
  goto L9_;

L33_:;
  // encoding12 = force? encoding11
  Rsh_Fir_reg_encoding12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding11_);
  // checkMissing(encoding12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_encoding12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L38_:;
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

L39_:;
  // r21 = dyn base5(<lang pushBack(data, connection, newLine, type)>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_;
  goto L12_;

D10_:;
  // deopt 47 [data1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_data1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L11_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r20 = dyn match(encoding12, r18, NA_INT, NULL)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_encoding12_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

L34_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r19 = dyn c4("", "bytes", "UTF-8")
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

L35_:;
  // r17 = dyn base4("", "bytes", "UTF-8")
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(r17)
  // L11(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L11_;

L40_:;
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // connection1 = ld connection
  Rsh_Fir_reg_connection1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D8_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 43 [r20]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 49 [connection1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_connection1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L11_;

L37_:;
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r20_1;
  goto L10_;

L41_:;
  // connection2 = force? connection1
  Rsh_Fir_reg_connection2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection1_);
  // checkMissing(connection2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_connection2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // newLine1 = ld newLine
  Rsh_Fir_reg_newLine1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 51 [newLine1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_newLine1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L42_:;
  // newLine2 = force? newLine1
  Rsh_Fir_reg_newLine2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newLine1_);
  // checkMissing(newLine2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_newLine2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // type = ld type
  Rsh_Fir_reg_type = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

D13_:;
  // deopt 53 [type]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_type;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L43_:;
  // type1 = force? type
  Rsh_Fir_reg_type1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type);
  // checkMissing(type1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_type1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // pushBack = ldf pushBack in base
  Rsh_Fir_reg_pushBack1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r23 = dyn pushBack(data2, connection2, newLine2, type1)
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_data2_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_connection2_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_newLine2_;
  Rsh_Fir_array_args58[3] = Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pushBack1, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 56 [r23]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r23_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner780506716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner780506716/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn c("", "bytes", "UTF-8")
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("", "bytes", "UTF-8")
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner780506716_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_encoding9_;
  SEXP Rsh_Fir_reg_encoding10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner780506716/0: expected 0, got %d", NCAPTURES);

  // encoding9 = ld encoding
  Rsh_Fir_reg_encoding9_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // encoding10 = force? encoding9
  Rsh_Fir_reg_encoding10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding9_);
  // checkMissing(encoding10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_encoding10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return encoding10
  return Rsh_Fir_reg_encoding10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
