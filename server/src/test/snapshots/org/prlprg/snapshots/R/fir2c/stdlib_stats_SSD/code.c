#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_SSD;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_estVar;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st SSD = r
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
  //   r3 = dyn c(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0);
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
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r5 = dyn base1[subj, cond](<lang `:`(1.0, 10.0)>, <lang c("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP")>);
  //   goto L0(r5);
  // L1(r8):
  //   list = ldf list in base;
  //   r10 = dyn list(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r8);
  //   goto L0(r10);
  // L4():
  //   c1 = ldf c in base;
  //   r9 = dyn c1("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP");
  //   goto L1(r9);
  // L5():
  //   r7 = dyn base2("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP");
  //   goto L1(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r12 = dyn matrix[, ncol, byrow, dimnames](p, 6.0, TRUE, p1)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 [r12]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st reacttime = r12
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // lm = ldf lm
  Rsh_Fir_reg_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r13 = dyn __(<sym reacttime>, 1.0);
  //   return r13;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn lm(p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
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
  // st mlmfit = r15
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // SSD = ldf SSD
  Rsh_Fir_reg_SSD = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   mlmfit = ld mlmfit;
  //   mlmfit1 = force? mlmfit;
  //   checkMissing(mlmfit1);
  //   return mlmfit1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn SSD(p3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_SSD, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // estVar = ldf estVar
  Rsh_Fir_reg_estVar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p4 = prom<V +>{
  //   mlmfit2 = ld mlmfit;
  //   mlmfit3 = force? mlmfit2;
  //   checkMissing(mlmfit3);
  //   return mlmfit3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn estVar(p4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_estVar, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 26 [r19]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;
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
  // r3 = dyn c(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0)
  SEXP Rsh_Fir_array_args1[60];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[9] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[11] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[12] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[14] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[15] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[16] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[17] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[19] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[20] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[22] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[23] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[24] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[25] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[26] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[27] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[28] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[29] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[30] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[31] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[32] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[33] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[34] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[35] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[36] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[37] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[38] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[39] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[40] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[41] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[42] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[43] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[44] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[45] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[46] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[47] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[48] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[49] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[50] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[51] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[52] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[53] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[54] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[55] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[56] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[57] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[58] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[59] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[60];
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
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 60, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0)
  SEXP Rsh_Fir_array_args2[60];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[11] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[12] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[14] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[15] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[16] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[17] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[19] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[20] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[22] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[23] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[24] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[25] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[26] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[27] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[28] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[29] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[30] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[31] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[32] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[33] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[34] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[35] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[36] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[37] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[38] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[39] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[40] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[41] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[42] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[43] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[44] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[45] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[46] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[47] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[48] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[49] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[50] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[51] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[52] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[53] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[54] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[55] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[56] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[57] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[58] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[59] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[60];
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
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 60, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
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
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r5 = dyn base1[subj, cond](<lang `:`(1.0, 10.0)>, <lang c("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP")>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn list(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r8)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_;
  goto L0_;

L4_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r9 = dyn c1("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP")
  SEXP Rsh_Fir_array_args7[6];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args7[5] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names4[6];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 6, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L5_:;
  // r7 = dyn base2("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP")
  SEXP Rsh_Fir_array_args8[6];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names5[6];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 6, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r13 = dyn __(<sym reacttime>, 1.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mlmfit;
  SEXP Rsh_Fir_reg_mlmfit1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mlmfit = ld mlmfit
  Rsh_Fir_reg_mlmfit = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // mlmfit1 = force? mlmfit
  Rsh_Fir_reg_mlmfit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mlmfit);
  // checkMissing(mlmfit1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_mlmfit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return mlmfit1
  return Rsh_Fir_reg_mlmfit1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mlmfit2_;
  SEXP Rsh_Fir_reg_mlmfit3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mlmfit2 = ld mlmfit
  Rsh_Fir_reg_mlmfit2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // mlmfit3 = force? mlmfit2
  Rsh_Fir_reg_mlmfit3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mlmfit2_);
  // checkMissing(mlmfit3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_mlmfit3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return mlmfit3
  return Rsh_Fir_reg_mlmfit3_;
}
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r2 = dyn UseMethod("SSD")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("SSD")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
