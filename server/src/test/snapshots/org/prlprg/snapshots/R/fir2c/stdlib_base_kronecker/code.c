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
SEXP Rsh_Fir_user_function_inner1626172927_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1626172927_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1626172927_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_kronecker;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_kronecker1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_matrix1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_kronecker2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_kronecker3_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r32_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1626172927
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1626172927_, RHO, CCP);
  // st kronecker = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn matrix[, ncol](p, 2.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st M = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // kronecker = ldf kronecker
  Rsh_Fir_reg_kronecker = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   M = ld M;
  //   M1 = force? M;
  //   checkMissing(M1);
  //   return M1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn kronecker(4.0, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_kronecker, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // kronecker1 = ldf kronecker
  Rsh_Fir_reg_kronecker1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   diag = ldf diag;
  //   r5 = dyn diag(1.0, 3.0);
  //   return r5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   M2 = ld M;
  //   M3 = force? M2;
  //   checkMissing(M3);
  //   return M3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn kronecker1(p2, p3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_kronecker1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p4 = prom<V +>{
  //   r9 = `:`(1.0, 12.0);
  //   return r9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L3() else L4();
  // L0(r12):
  //   return r12;
  // L3():
  //   LETTERS = ld LETTERS;
  //   LETTERS1 = force? LETTERS;
  //   checkMissing(LETTERS1);
  //   c = `is.object`(LETTERS1);
  //   if c then L5() else L6(LETTERS1);
  // L4():
  //   r11 = dyn base(<lang `[`(LETTERS, `:`(1.0, 3.0))>, <lang `[`(LETTERS, `:`(4.0, 7.0))>);
  //   goto L0(r11);
  // L1(dx1):
  //   LETTERS4 = ld LETTERS;
  //   LETTERS5 = force? LETTERS4;
  //   checkMissing(LETTERS5);
  //   c1 = `is.object`(LETTERS5);
  //   if c1 then L8() else L9(LETTERS5);
  // L5():
  //   dr = tryDispatchBuiltin.1("[", LETTERS1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L7() else L6(dr);
  // L6(LETTERS3):
  //   __ = ldf `[` in base;
  //   r13 = dyn __(LETTERS3, <int 1, 2, 3>);
  //   goto L1(r13);
  // L2(dx3):
  //   list = ldf list in base;
  //   r15 = dyn list(dx1, dx3);
  //   goto L0(r15);
  // L7():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L8():
  //   dr2 = tryDispatchBuiltin.1("[", LETTERS5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L10() else L9(dr2);
  // L9(LETTERS7):
  //   __1 = ldf `[` in base;
  //   r14 = dyn __1(LETTERS7, <int 4, 5, 6, 7>);
  //   goto L2(r14);
  // L10():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L2(dx2);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r17 = dyn matrix1[, , , dimnames](p4, 3.0, 4.0, p5)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args22[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 4, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 27 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // st fred = r17
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // st bill = r19
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // kronecker2 = ldf kronecker
  Rsh_Fir_reg_kronecker2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

L9_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r20 = dyn c2(100.0, 1000.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

L10_:;
  // r18 = dyn base1[happy, sad](100.0, 1000.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;

D8_:;
  // deopt 36 [r20]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L12_:;
  // p6 = prom<V +>{
  //   fred = ld fred;
  //   fred1 = force? fred;
  //   checkMissing(fred1);
  //   return fred1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   bill = ld bill;
  //   bill1 = force? bill;
  //   checkMissing(bill1);
  //   return bill1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r23 = dyn kronecker2[, , `make.dimnames`](p6, p7, TRUE)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_kronecker2_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 44 [r23]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   bill2 = ld bill;
  //   bill3 = force? bill2;
  //   checkMissing(bill3);
  //   return bill3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   c3 = ldf c in base;
  //   r27 = dyn c3(3.0, 4.0);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base2[cat, dog](3.0, 4.0);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r29 = dyn outer(p8, p9)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 49 [r29]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // st bill = r29
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // kronecker3 = ldf kronecker
  Rsh_Fir_reg_kronecker3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p10 = prom<V +>{
  //   fred2 = ld fred;
  //   fred3 = force? fred2;
  //   checkMissing(fred3);
  //   return fred3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   bill4 = ld bill;
  //   bill5 = force? bill4;
  //   checkMissing(bill5);
  //   return bill5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r32 = dyn kronecker3[, , `make.dimnames`](p10, p11, TRUE)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_kronecker3_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 57 [r32]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_M;
  SEXP Rsh_Fir_reg_M1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // M = ld M
  Rsh_Fir_reg_M = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // M1 = force? M
  Rsh_Fir_reg_M1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_M);
  // checkMissing(M1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_M1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return M1
  return Rsh_Fir_reg_M1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_diag;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r5 = dyn diag(1.0, 3.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_M2_;
  SEXP Rsh_Fir_reg_M3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // M2 = ld M
  Rsh_Fir_reg_M2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // M3 = force? M2
  Rsh_Fir_reg_M3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_M2_);
  // checkMissing(M3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_M3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return M3
  return Rsh_Fir_reg_M3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r9 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args6);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_LETTERS3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_LETTERS4_;
  SEXP Rsh_Fir_reg_LETTERS5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_LETTERS7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L3_:;
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.object`(LETTERS1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args9);
  // if c then L5() else L6(LETTERS1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(LETTERS1)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_LETTERS1_;
    goto L6_;
  }

L4_:;
  // r11 = dyn base(<lang `[`(LETTERS, `:`(1.0, 3.0))>, <lang `[`(LETTERS, `:`(4.0, 7.0))>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;

L1_:;
  // LETTERS4 = ld LETTERS
  Rsh_Fir_reg_LETTERS4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // LETTERS5 = force? LETTERS4
  Rsh_Fir_reg_LETTERS5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS4_);
  // checkMissing(LETTERS5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_LETTERS5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(LETTERS5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_LETTERS5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L8() else L9(LETTERS5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L9(LETTERS5)
    Rsh_Fir_reg_LETTERS7_ = Rsh_Fir_reg_LETTERS5_;
    goto L9_;
  }

L5_:;
  // dr = tryDispatchBuiltin.1("[", LETTERS1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn __(LETTERS3, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_LETTERS3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r15 = dyn list(dx1, dx3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_;
  goto L0_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L8_:;
  // dr2 = tryDispatchBuiltin.1("[", LETTERS5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_LETTERS5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc1 then L10() else L9(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr2)
    Rsh_Fir_reg_LETTERS7_ = Rsh_Fir_reg_dr2_;
    goto L9_;
  }

L9_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r14 = dyn __1(LETTERS7, <int 4, 5, 6, 7>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_LETTERS7_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L2_;

L10_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fred;
  SEXP Rsh_Fir_reg_fred1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fred = ld fred
  Rsh_Fir_reg_fred = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // fred1 = force? fred
  Rsh_Fir_reg_fred1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fred);
  // checkMissing(fred1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_fred1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return fred1
  return Rsh_Fir_reg_fred1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bill;
  SEXP Rsh_Fir_reg_bill1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bill = ld bill
  Rsh_Fir_reg_bill = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // bill1 = force? bill
  Rsh_Fir_reg_bill1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bill);
  // checkMissing(bill1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_bill1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return bill1
  return Rsh_Fir_reg_bill1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bill2_;
  SEXP Rsh_Fir_reg_bill3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bill2 = ld bill
  Rsh_Fir_reg_bill2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // bill3 = force? bill2
  Rsh_Fir_reg_bill3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bill2_);
  // checkMissing(bill3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_bill3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return bill3
  return Rsh_Fir_reg_bill3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r27 = dyn c3(3.0, 4.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base2[cat, dog](3.0, 4.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fred2_;
  SEXP Rsh_Fir_reg_fred3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fred2 = ld fred
  Rsh_Fir_reg_fred2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // fred3 = force? fred2
  Rsh_Fir_reg_fred3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fred2_);
  // checkMissing(fred3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_fred3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return fred3
  return Rsh_Fir_reg_fred3_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bill4_;
  SEXP Rsh_Fir_reg_bill5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bill4 = ld bill
  Rsh_Fir_reg_bill4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // bill5 = force? bill4
  Rsh_Fir_reg_bill5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bill4_);
  // checkMissing(bill5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_bill5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return bill5
  return Rsh_Fir_reg_bill5_;
}
SEXP Rsh_Fir_user_function_inner1626172927_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1626172927 dynamic dispatch ([X, Y, FUN, `make.dimnames`, `...`])

  return Rsh_Fir_user_version_inner1626172927_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1626172927_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1626172927 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1626172927/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_Y;
  SEXP Rsh_Fir_reg_FUN;
  SEXP Rsh_Fir_reg_make_dimnames;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_FUN_isMissing;
  SEXP Rsh_Fir_reg_FUN_orDefault;
  SEXP Rsh_Fir_reg_make_dimnames_isMissing;
  SEXP Rsh_Fir_reg_make_dimnames_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg__isMethodsDispatchOn;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_X1_;
  SEXP Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_reg_isS4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_Y1_;
  SEXP Rsh_Fir_reg_Y2_;
  SEXP Rsh_Fir_reg_isS5_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg__kronecker;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r22_;

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_Y = PARAMS[1];
  Rsh_Fir_reg_FUN = PARAMS[2];
  Rsh_Fir_reg_make_dimnames = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // st Y = Y
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_Y, RHO);
  (void)(Rsh_Fir_reg_Y);
  // FUN_isMissing = missing.0(FUN)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_FUN;
  Rsh_Fir_reg_FUN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if FUN_isMissing then L0("*") else L0(FUN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_FUN_isMissing)) {
  // L0("*")
    Rsh_Fir_reg_FUN_orDefault = Rsh_const(CCP, 34);
    goto L0_;
  } else {
  // L0(FUN)
    Rsh_Fir_reg_FUN_orDefault = Rsh_Fir_reg_FUN;
    goto L0_;
  }

L0_:;
  // st FUN = FUN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_FUN_orDefault, RHO);
  (void)(Rsh_Fir_reg_FUN_orDefault);
  // make_dimnames_isMissing = missing.0(make_dimnames)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_make_dimnames;
  Rsh_Fir_reg_make_dimnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if make_dimnames_isMissing then L1(FALSE) else L1(make_dimnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_make_dimnames_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_make_dimnames_orDefault = Rsh_const(CCP, 36);
    goto L1_;
  } else {
  // L1(make_dimnames)
    Rsh_Fir_reg_make_dimnames_orDefault = Rsh_Fir_reg_make_dimnames;
    goto L1_;
  }

L1_:;
  // st `make.dimnames` = make_dimnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_make_dimnames_orDefault, RHO);
  (void)(Rsh_Fir_reg_make_dimnames_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.isMethodsDispatchOn`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c then L12() else L3(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L12()
    goto L12_;
  } else {
  // L3(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L3_;
  }

L9_:;
  // _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg__isMethodsDispatchOn = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r2 = dyn _isMethodsDispatchOn()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__isMethodsDispatchOn, 0, NULL, NULL, CCP, RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 0, NULL, NULL, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L3_:;
  // c24 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c24 then L24() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L24()
    goto L24_;
  } else {
  // L7()
    goto L7_;
  }

L11_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L2_;

L12_:;
  // sym1 = ldf isS4
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base1 = ldf isS4 in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L4_:;
  // c6 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c6 then L5(c5, c6) else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L5(c5, c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L5_;
  } else {
  // L17()
    goto L17_;
  }

L7_:;
  // _kronecker = ldf `.kronecker`
  Rsh_Fir_reg__kronecker = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

L13_:;
  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r3 = dyn base1(<sym X>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L4(c, r3)
  // L4(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L4_;

L24_:;
  // __ = ldf `::`
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

D1_:;
  // deopt 6 [c, X1]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_X1_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // c21 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // c22 = `&&`(c7, c21)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args46);
  // goto L3(c22)
  // L3(c22)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c22_;
  goto L3_;

L15_:;
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r5 = dyn isS4(X2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L17_:;
  // sym2 = ldf isS4
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base2 = ldf isS4 in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L25_:;
  // r9 = dyn __("methods", "kronecker")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L30_:;
  // p4 = prom<V +>{
  //   X5 = ld X;
  //   X6 = force? X5;
  //   checkMissing(X6);
  //   return X6;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   Y5 = ld Y;
  //   Y6 = force? Y5;
  //   checkMissing(Y6);
  //   return Y6;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_1, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   FUN3 = ld FUN;
  //   FUN4 = force? FUN3;
  //   checkMissing(FUN4);
  //   return FUN4;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_2, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   make_dimnames3 = ld `make.dimnames`;
  //   make_dimnames4 = force? make_dimnames3;
  //   checkMissing(make_dimnames4);
  //   return make_dimnames4;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_3, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // r22 = dyn _kronecker[, , FUN, `make.dimnames`, `...`](p4, p5, p6, p7, ddd2)
  SEXP Rsh_Fir_array_args55[5];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args55[3] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args55[4] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names19[5];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names19[4] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__kronecker, 5, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L31() else D9()
  // L31()
  goto L31_;

D2_:;
  // deopt 9 [c, r5]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L6_:;
  // c17 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // c18 = `||`(c16, c17)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args57);
  // goto L5(c15, c18)
  // L5(c15, c18)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c18_;
  goto L5_;

L16_:;
  // goto L4(c, r5)
  // L4(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L4_;

L18_:;
  // Y1 = ld Y
  Rsh_Fir_reg_Y1_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base2(<sym Y>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L6(c5, c6, r6)
  // L6(c5, c6, r6)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L6_;

L26_:;
  // checkFun.0(r9)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r9_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args59));
  // r10 = r9 as cls
  Rsh_Fir_reg_r10_ = Rsh_Fir_cast(Rsh_Fir_reg_r9_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   X3 = ld X;
  //   X4 = force? X3;
  //   checkMissing(X4);
  //   return X4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_4, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   Y3 = ld Y;
  //   Y4 = force? Y3;
  //   checkMissing(Y4);
  //   return Y4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_5, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_6, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   make_dimnames1 = ld `make.dimnames`;
  //   make_dimnames2 = force? make_dimnames1;
  //   checkMissing(make_dimnames2);
  //   return make_dimnames2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_7, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // r15 = dyn r10[, , FUN, `make.dimnames`, `...`](p, p1, p2, p3, ddd1)
  SEXP Rsh_Fir_array_args64[5];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args64[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args64[3] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args64[4] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names21[5];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names21[4] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r10_, 5, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

D3_:;
  // deopt 12 [c5, c6, Y1]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_Y1_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L20_:;
  // Y2 = force? Y1
  Rsh_Fir_reg_Y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y1_);
  // checkMissing(Y2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_Y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // isS5 = ldf isS4 in base
  Rsh_Fir_reg_isS5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r8 = dyn isS5(Y2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_Y2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS5_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_1;

D4_:;
  // deopt 15 [c5, c6, r8]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L6(c5, c6, r8)
  // L6(c5, c6, r8)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_1;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X5_;
  SEXP Rsh_Fir_reg_X6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return X6
  return Rsh_Fir_reg_X6_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y5_;
  SEXP Rsh_Fir_reg_Y6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // Y5 = ld Y
  Rsh_Fir_reg_Y5_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // Y6 = force? Y5
  Rsh_Fir_reg_Y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y5_);
  // checkMissing(Y6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_Y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return Y6
  return Rsh_Fir_reg_Y6_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN3_;
  SEXP Rsh_Fir_reg_FUN4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // FUN3 = ld FUN
  Rsh_Fir_reg_FUN3_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // FUN4 = force? FUN3
  Rsh_Fir_reg_FUN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN3_);
  // checkMissing(FUN4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_FUN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return FUN4
  return Rsh_Fir_reg_FUN4_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_dimnames3_;
  SEXP Rsh_Fir_reg_make_dimnames4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // make_dimnames3 = ld `make.dimnames`
  Rsh_Fir_reg_make_dimnames3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // make_dimnames4 = force? make_dimnames3
  Rsh_Fir_reg_make_dimnames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_dimnames3_);
  // checkMissing(make_dimnames4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_make_dimnames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return make_dimnames4
  return Rsh_Fir_reg_make_dimnames4_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_reg_X4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return X4
  return Rsh_Fir_reg_X4_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y3_;
  SEXP Rsh_Fir_reg_Y4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // Y3 = ld Y
  Rsh_Fir_reg_Y3_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // Y4 = force? Y3
  Rsh_Fir_reg_Y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y3_);
  // checkMissing(Y4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_Y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return Y4
  return Rsh_Fir_reg_Y4_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN1_;
  SEXP Rsh_Fir_reg_FUN2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_make_dimnames1_;
  SEXP Rsh_Fir_reg_make_dimnames2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // make_dimnames1 = ld `make.dimnames`
  Rsh_Fir_reg_make_dimnames1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // make_dimnames2 = force? make_dimnames1
  Rsh_Fir_reg_make_dimnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_dimnames1_);
  // checkMissing(make_dimnames2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_make_dimnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return make_dimnames2
  return Rsh_Fir_reg_make_dimnames2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
