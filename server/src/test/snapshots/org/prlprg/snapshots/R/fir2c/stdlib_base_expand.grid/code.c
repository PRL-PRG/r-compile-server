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
SEXP Rsh_Fir_user_function_inner932677971_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner932677971_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner932677971_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner932677971_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_expand_grid;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_seq2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_seq3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_expand_grid1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_expand_grid2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_object_size;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_object_size1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r34_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner932677971
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner932677971_, RHO, CCP);
  // st `expand.grid` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
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
  // expand_grid = ldf `expand.grid`
  Rsh_Fir_reg_expand_grid = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym utils>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   utils = ld utils;
  //   utils1 = force? utils;
  //   checkMissing(utils1);
  //   return utils1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   seq = ldf seq;
  //   r5 = dyn seq(60.0, 80.0, 5.0);
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   seq1 = ldf seq;
  //   r7 = dyn seq1(100.0, 300.0, 50.0);
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   c = ldf c in base;
  //   r11 = dyn c("Male", "Female");
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1("Male", "Female");
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn expand_grid[height, weight, sex](p1, p2, p3)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expand_grid, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 16 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // seq2 = ldf seq
  Rsh_Fir_reg_seq2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r14 = dyn seq2[, , `length.out`](0.0, 10.0, 100.0)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq2_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 23 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // st x = r14
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // seq3 = ldf seq
  Rsh_Fir_reg_seq3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r16 = dyn seq3[, , `length.out`](p4, 1.0, 20.0)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq3_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 31 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st y = r16
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // expand_grid1 = ldf `expand.grid`
  Rsh_Fir_reg_expand_grid1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p5 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r19 = dyn expand_grid1[x, y](p5, p6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expand_grid1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // st d1 = r19
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // expand_grid2 = ldf `expand.grid`
  Rsh_Fir_reg_expand_grid2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p7 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r22 = dyn expand_grid2[x, y, `KEEP.OUT.ATTRS`](p7, p8, FALSE)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expand_grid2_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 49 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // st d2 = r22
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // object_size = ldf `object.size`
  Rsh_Fir_reg_object_size = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p9 = prom<V +>{
  //   d1 = ld d1;
  //   d2 = force? d1;
  //   checkMissing(d2);
  //   return d2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r24 = dyn object_size(p9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_object_size, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 54 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // object_size1 = ldf `object.size`
  Rsh_Fir_reg_object_size1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 55 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // p10 = prom<V +>{
  //   d3 = ld d2;
  //   d4 = force? d3;
  //   checkMissing(d4);
  //   return d4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r26 = dyn object_size1(p10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_object_size1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 57 [r24, r26]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // `-`(r24, r26)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r26_;
  (void)(Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args22));
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p13 = prom<V +>{
  //   object_size2 = ldf `object.size`;
  //   p11 = prom<V +>{
  //     d5 = ld d1;
  //     d6 = force? d5;
  //     checkMissing(d6);
  //     return d6;
  //   };
  //   r29 = dyn object_size2(p11);
  //   object_size3 = ldf `object.size`;
  //   p12 = prom<V +>{
  //     d7 = ld d2;
  //     d8 = force? d7;
  //     checkMissing(d8);
  //     return d8;
  //   };
  //   r31 = dyn object_size3(p12);
  //   r32 = `>`(r29, r31);
  //   return r32;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r34 = dyn stopifnot(p13)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 62 [r34]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_utils;
  SEXP Rsh_Fir_reg_utils1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // utils = ld utils
  Rsh_Fir_reg_utils = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // utils1 = force? utils
  Rsh_Fir_reg_utils1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_utils);
  // checkMissing(utils1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_utils1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return utils1
  return Rsh_Fir_reg_utils1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r5 = dyn seq(60.0, 80.0, 5.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_seq1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // seq1 = ldf seq
  Rsh_Fir_reg_seq1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r7 = dyn seq1(100.0, 300.0, 50.0)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq1_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r11 = dyn c("Male", "Female")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1("Male", "Female")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -1.0
  return Rsh_const(CCP, 20);
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_d2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d1 = ld d1
  Rsh_Fir_reg_d1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // d2 = force? d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1_);
  // checkMissing(d2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return d2
  return Rsh_Fir_reg_d2_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_d4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d3 = ld d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // d4 = force? d3
  Rsh_Fir_reg_d4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d3_);
  // checkMissing(d4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_d4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return d4
  return Rsh_Fir_reg_d4_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object_size2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_object_size3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // object_size2 = ldf `object.size`
  Rsh_Fir_reg_object_size2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p11 = prom<V +>{
  //   d5 = ld d1;
  //   d6 = force? d5;
  //   checkMissing(d6);
  //   return d6;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r29 = dyn object_size2(p11)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_object_size2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names13, CCP, RHO);
  // object_size3 = ldf `object.size`
  Rsh_Fir_reg_object_size3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p12 = prom<V +>{
  //   d7 = ld d2;
  //   d8 = force? d7;
  //   checkMissing(d8);
  //   return d8;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r31 = dyn object_size3(p12)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_object_size3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names14, CCP, RHO);
  // r32 = `>`(r29, r31)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args27);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_d6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d5 = ld d1
  Rsh_Fir_reg_d5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // d6 = force? d5
  Rsh_Fir_reg_d6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d5_);
  // checkMissing(d6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_d6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return d6
  return Rsh_Fir_reg_d6_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_d8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d7 = ld d2
  Rsh_Fir_reg_d7_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // d8 = force? d7
  Rsh_Fir_reg_d8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d7_);
  // checkMissing(d8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_d8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return d8
  return Rsh_Fir_reg_d8_;
}
SEXP Rsh_Fir_user_function_inner932677971_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner932677971 dynamic dispatch ([`...`, `KEEP.OUT.ATTRS`, stringsAsFactors])

  return Rsh_Fir_user_version_inner932677971_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner932677971_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner932677971 version 0 (dots, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner932677971/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS;
  SEXP Rsh_Fir_reg_stringsAsFactors;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS_isMissing;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS_orDefault;
  SEXP Rsh_Fir_reg_stringsAsFactors_isMissing;
  SEXP Rsh_Fir_reg_stringsAsFactors_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_nargs1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_nargs2_;
  SEXP Rsh_Fir_reg_nargs3_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_args3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_nargs4_;
  SEXP Rsh_Fir_reg_nargs5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_as_data_frame1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_nargs6_;
  SEXP Rsh_Fir_reg_nargs7_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_nargs8_;
  SEXP Rsh_Fir_reg_nargs9_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_args4_;
  SEXP Rsh_Fir_reg_args5_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_nmc;
  SEXP Rsh_Fir_reg_nmc1_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_nm2_;
  SEXP Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_nm4_;
  SEXP Rsh_Fir_reg_nm5_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_nm7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_ng0_;
  SEXP Rsh_Fir_reg_ng1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_ng2_;
  SEXP Rsh_Fir_reg_ng3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_nmc3_;
  SEXP Rsh_Fir_reg_nmc4_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_lengths;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS1_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS2_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_nargs10_;
  SEXP Rsh_Fir_reg_nargs11_;
  SEXP Rsh_Fir_reg_vector1_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_nmc5_;
  SEXP Rsh_Fir_reg_nmc6_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_1;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_orep;
  SEXP Rsh_Fir_reg_orep1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_iArgs2_;
  SEXP Rsh_Fir_reg_iArgs3_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_args8_;
  SEXP Rsh_Fir_reg_args9_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_args11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_iArgs4_;
  SEXP Rsh_Fir_reg_iArgs5_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_args12_;
  SEXP Rsh_Fir_reg_args13_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_reg_args15_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS3_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS4_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_i38_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_i46_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_orep2_;
  SEXP Rsh_Fir_reg_orep3_;
  SEXP Rsh_Fir_reg_nx;
  SEXP Rsh_Fir_reg_nx1_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_stringsAsFactors1_;
  SEXP Rsh_Fir_reg_stringsAsFactors2_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_i48_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_i51_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_i55_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_i59_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_i62_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_i65_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_i68_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_nx2_;
  SEXP Rsh_Fir_reg_nx3_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_rep_fac;
  SEXP Rsh_Fir_reg_rep_fac1_;
  SEXP Rsh_Fir_reg_nx4_;
  SEXP Rsh_Fir_reg_nx5_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_orep4_;
  SEXP Rsh_Fir_reg_orep5_;
  SEXP Rsh_Fir_reg_rep_int2_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_i73_;
  SEXP Rsh_Fir_reg_x35_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_i75_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_i76_;
  SEXP Rsh_Fir_reg_i77_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_rep_fac2_;
  SEXP Rsh_Fir_reg_rep_fac3_;
  SEXP Rsh_Fir_reg_nx6_;
  SEXP Rsh_Fir_reg_nx7_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS5_;
  SEXP Rsh_Fir_reg_KEEP_OUT_ATTRS6_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_d2_1;
  SEXP Rsh_Fir_reg_d3_1;
  SEXP Rsh_Fir_reg_dn;
  SEXP Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_reg_list3_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg__set_row_names;
  SEXP Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_reg_p12_1;
  SEXP Rsh_Fir_reg_r124_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_KEEP_OUT_ATTRS = PARAMS[1];
  Rsh_Fir_reg_stringsAsFactors = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // KEEP_OUT_ATTRS_isMissing = missing.0(KEEP_OUT_ATTRS)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS;
  Rsh_Fir_reg_KEEP_OUT_ATTRS_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args29);
  // if KEEP_OUT_ATTRS_isMissing then L0(TRUE) else L0(KEEP_OUT_ATTRS)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_KEEP_OUT_ATTRS_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_KEEP_OUT_ATTRS_orDefault = Rsh_const(CCP, 31);
    goto L0_;
  } else {
  // L0(KEEP_OUT_ATTRS)
    Rsh_Fir_reg_KEEP_OUT_ATTRS_orDefault = Rsh_Fir_reg_KEEP_OUT_ATTRS;
    goto L0_;
  }

L0_:;
  // st `KEEP.OUT.ATTRS` = KEEP_OUT_ATTRS_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_KEEP_OUT_ATTRS_orDefault, RHO);
  (void)(Rsh_Fir_reg_KEEP_OUT_ATTRS_orDefault);
  // stringsAsFactors_isMissing = missing.0(stringsAsFactors)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_stringsAsFactors;
  Rsh_Fir_reg_stringsAsFactors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args30);
  // if stringsAsFactors_isMissing then L1(TRUE) else L1(stringsAsFactors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stringsAsFactors_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_const(CCP, 31);
    goto L1_;
  } else {
  // L1(stringsAsFactors)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_Fir_reg_stringsAsFactors;
    goto L1_;
  }

L1_:;
  // st stringsAsFactors = stringsAsFactors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_stringsAsFactors_orDefault, RHO);
  (void)(Rsh_Fir_reg_stringsAsFactors_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L2_:;
  // st nargs = r1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // nargs = ld nargs
  Rsh_Fir_reg_nargs = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L63() else D3()
  // L63()
  goto L63_;

L56_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L57_:;
  // r = dyn base(<lang `<-`(args, list(...))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D3_:;
  // deopt 11 [nargs]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_nargs;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L3_:;
  // st args = r3
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r5 = dyn length(r3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L62() else D2()
  // L62()
  goto L62_;

L58_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L60() else D0()
  // L60()
  goto L60_;

L59_:;
  // r2 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

L63_:;
  // nargs1 = force? nargs
  Rsh_Fir_reg_nargs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs);
  // checkMissing(nargs1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_nargs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r6 = `!`(nargs1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_nargs1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c then L64() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L64()
    goto L64_;
  } else {
  // L4()
    goto L4_;
  }

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L4_:;
  // nargs2 = ld nargs
  Rsh_Fir_reg_nargs2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L69() else D6()
  // L69()
  goto L69_;

L60_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // r4 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L61() else D1()
  // L61()
  goto L61_;

L62_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_1;
  goto L2_;

L64_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L65() else D4()
  // L65()
  goto L65_;

D1_:;
  // deopt 6 [r4]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 21 [nargs2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_nargs2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L65_:;
  // p = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   list1 = ldf list in base;
  //   r9 = dyn list1();
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base2();
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_, 0, NULL, CCP, RHO);
  // r11 = dyn as_data_frame(p)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L66() else D5()
  // L66()
  goto L66_;

L69_:;
  // nargs3 = force? nargs2
  Rsh_Fir_reg_nargs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs2_);
  // checkMissing(nargs3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nargs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r14 = `==`(nargs3, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_nargs3_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args43);
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c1 then L70() else L6(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L70()
    goto L70_;
  } else {
  // L6(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L6_;
  }

D5_:;
  // deopt 17 [r11]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L6_:;
  // c15 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c15 then L79() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L79()
    goto L79_;
  } else {
  // L9()
    goto L9_;
  }

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_1;

L70_:;
  // sym3 = ldf `is.list`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf `is.list` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L7_:;
  // c12 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // c13 = `&&`(c6, c12)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args48);
  // goto L6(c13)
  // L6(c13)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c13_;
  goto L6_;

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // nargs4 = ld nargs
  Rsh_Fir_reg_nargs4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L85() else D11()
  // L85()
  goto L85_;

L71_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L73() else D7()
  // L73()
  goto L73_;

L72_:;
  // r15 = dyn base3(<lang `<-`(a1, `[[`(args, 1))>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(c1, r15)
  // L7(c1, r15)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_;
  goto L7_;

L79_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

D7_:;
  // deopt 27 [c1, args]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 46 [nargs4]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_nargs4_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L10_:;
  // st nargs = r20
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L11()
  // L11()
  goto L11_;

L73_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(args1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_args1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args52);
  // if c7 then L74() else L75(c1, args1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L74()
    goto L74_;
  } else {
  // L75(c1, args1)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_args3_ = Rsh_Fir_reg_args1_;
    goto L75_;
  }

L80_:;
  // a1 = ld a1
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L82() else D9()
  // L82()
  goto L82_;

L81_:;
  // r19 = dyn base4(<lang `<-`(args, a1)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_1;
  goto L10_;

L85_:;
  // nargs5 = force? nargs4
  Rsh_Fir_reg_nargs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs4_);
  // checkMissing(nargs5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nargs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r23 = `==`(nargs5, 0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_nargs5_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55);
  // c16 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c16 then L86() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L86()
    goto L86_;
  } else {
  // L12()
    goto L12_;
  }

D9_:;
  // deopt 38 [a1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L8_:;
  // st a1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r18 = dyn is_list(dx1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L77() else D8()
  // L77()
  goto L77_;

L12_:;
  // sym6 = ldf vector
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base6 = ldf vector in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard6 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L74_:;
  // dr = tryDispatchBuiltin.1("[[", args1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_args1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc then L76() else L75(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L76()
    goto L76_;
  } else {
  // L75(c1, dr)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_args3_ = Rsh_Fir_reg_dr;
    goto L75_;
  }

L75_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r17 = dyn __(args3, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_args3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L8(c9, r17)
  // L8(c9, r17)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L8_;

L82_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // st args = a2
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_a2_, RHO);
  (void)(Rsh_Fir_reg_a2_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r21 = dyn length1(a2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L83() else D10()
  // L83()
  goto L83_;

L86_:;
  // as_data_frame1 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L87() else D12()
  // L87()
  goto L87_;

D8_:;
  // deopt 34 [c11, r18]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // st cargs = r32
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r32_1, RHO);
  (void)(Rsh_Fir_reg_r32_1);
  // sym7 = ldf seq_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base7 = ldf seq_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard7 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L76_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L8(c1, dx)
  // L8(c1, dx)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L77_:;
  // goto L7(c11, r18)
  // L7(c11, r18)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r18_;
  goto L7_;

L83_:;
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L10_;

L87_:;
  // p1 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   list2 = ldf list in base;
  //   r26 = dyn list2();
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base5();
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_1, 0, NULL, CCP, RHO);
  // r28 = dyn as_data_frame1(p1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame1_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L88() else D13()
  // L88()
  goto L88_;

L91_:;
  // nargs6 = ld nargs
  Rsh_Fir_reg_nargs6_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L93() else D14()
  // L93()
  goto L93_;

L92_:;
  // r31 = dyn base6("list", <sym nargs>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L14(r31)
  // L14(r31)
  Rsh_Fir_reg_r32_1 = Rsh_Fir_reg_r31_1;
  goto L14_;

D13_:;
  // deopt 53 [r28]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 60 [nargs6]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nargs6_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L15_:;
  // st iArgs = r35
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L98() else D17()
  // L98()
  goto L98_;

L88_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;

L93_:;
  // nargs7 = force? nargs6
  Rsh_Fir_reg_nargs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs6_);
  // checkMissing(nargs7)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_nargs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r33 = dyn vector("list", nargs7)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_nargs7_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L94() else D15()
  // L94()
  goto L94_;

L95_:;
  // nargs8 = ld nargs
  Rsh_Fir_reg_nargs8_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L97() else D16()
  // L97()
  goto L97_;

L96_:;
  // r34 = dyn base7(<sym nargs>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_1;
  goto L15_;

D15_:;
  // deopt 63 [r33]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 66 [nargs8]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nargs8_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L14(r33)
  // L14(r33)
  Rsh_Fir_reg_r32_1 = Rsh_Fir_reg_r33_;
  goto L14_;

L97_:;
  // nargs9 = force? nargs8
  Rsh_Fir_reg_nargs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs8_);
  // checkMissing(nargs9)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_nargs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r36 = seq_len(nargs9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_nargs9_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args73);
  // goto L15(r36)
  // L15(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L15_;

L98_:;
  // p2 = prom<V +>{
  //   iArgs = ld iArgs;
  //   iArgs1 = force? iArgs;
  //   checkMissing(iArgs1);
  //   return iArgs1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_2, 0, NULL, CCP, RHO);
  // r38 = dyn paste0("Var", p2)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L99() else D18()
  // L99()
  goto L99_;

D18_:;
  // deopt 74 [r38]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // st nmc = r38
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard8 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L16_:;
  // st nm = r40
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard9 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L100_:;
  // args4 = ld args
  Rsh_Fir_reg_args4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L102() else D19()
  // L102()
  goto L102_;

L101_:;
  // r39 = dyn base8(<sym args>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L16(r39)
  // L16(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L16_;

D19_:;
  // deopt 78 [args4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_args4_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L17_:;
  // c18 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c18 then L107() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L107()
    goto L107_;
  } else {
  // L18()
    goto L18_;
  }

L102_:;
  // args5 = force? args4
  Rsh_Fir_reg_args5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args4_);
  // checkMissing(args5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_args5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r41 = dyn names(args5)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_args5_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L103() else D20()
  // L103()
  goto L103_;

L104_:;
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L106() else D21()
  // L106()
  goto L106_;

L105_:;
  // r42 = dyn base9(<sym nm>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L17(r42)
  // L17(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L17_;

D20_:;
  // deopt 81 [r41]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 84 [nm]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_nm;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L18_:;
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard10 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L19_:;
  // nmc3 = ld nmc
  Rsh_Fir_reg_nmc3_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L128() else D29()
  // L128()
  goto L128_;

L103_:;
  // goto L16(r41)
  // L16(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L16_;

L106_:;
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c17 = `==`(nm1, NULL)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args85);
  // goto L17(c17)
  // L17(c17)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_c17_;
  goto L17_;

L107_:;
  // nmc = ld nmc
  Rsh_Fir_reg_nmc = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L108() else D22()
  // L108()
  goto L108_;

D22_:;
  // deopt 87 [nmc]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_nmc;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 113 [nmc3]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_nmc3_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L20_:;
  // c19 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // if c19 then L117() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L117()
    goto L117_;
  } else {
  // L22()
    goto L22_;
  }

L108_:;
  // nmc1 = force? nmc
  Rsh_Fir_reg_nmc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmc);
  // checkMissing(nmc1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_nmc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // st nm = nmc1
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_nmc1_, RHO);
  (void)(Rsh_Fir_reg_nmc1_);
  // goto L19()
  // L19()
  goto L19_;

L110_:;
  // sym11 = ldf nzchar
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base11 = ldf nzchar in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard11 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L111_:;
  // r44 = dyn base10(<lang `<-`(ng0, nzchar(nm))>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L20_;

L128_:;
  // nmc4 = force? nmc3
  Rsh_Fir_reg_nmc4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmc3_);
  // checkMissing(nmc4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_nmc4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // l3 = ld cargs
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L129() else D30()
  // L129()
  goto L129_;

D30_:;
  // deopt 116 [nmc4, l3, nmc4]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_nmc4_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_nmc4_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L21_:;
  // st ng0 = r47
  Rsh_Fir_store(Rsh_const(CCP, 63), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r49 = dyn any(r47)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L116() else D25()
  // L116()
  goto L116_;

L22_:;
  // goto L19()
  // L19()
  goto L19_;

L112_:;
  // nm2 = ld nm
  Rsh_Fir_reg_nm2_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L114() else D23()
  // L114()
  goto L114_;

L113_:;
  // r46 = dyn base11(<sym nm>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L21(r46)
  // L21(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L21_;

L117_:;
  // nm4 = ld nm
  Rsh_Fir_reg_nm4_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L118() else D26()
  // L118()
  goto L118_;

L129_:;
  // r52 = dyn names__(l3, NULL, nmc4)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_nmc4_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L130() else D31()
  // L130()
  goto L130_;

D23_:;
  // deopt 94 [nm2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_nm2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 100 [r49]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 101 [nm4]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 118 [nmc4, r52]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_nmc4_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L114_:;
  // nm3 = force? nm2
  Rsh_Fir_reg_nm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm2_);
  // checkMissing(nm3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_nm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r48 = dyn nzchar(nm3)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L115() else D24()
  // L115()
  goto L115_;

L116_:;
  // goto L20(r49)
  // L20(r49)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r49_;
  goto L20_;

L118_:;
  // nm5 = force? nm4
  Rsh_Fir_reg_nm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm4_);
  // checkMissing(nm5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_nm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(nm5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args97);
  // if c20 then L119() else L120(nm5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L119()
    goto L119_;
  } else {
  // L120(nm5)
    Rsh_Fir_reg_nm7_ = Rsh_Fir_reg_nm5_;
    goto L120_;
  }

L130_:;
  // st cargs = r52
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // st `rep.fac` = 1
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_const(CCP, 39), RHO);
  (void)(Rsh_const(CCP, 39));
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L131() else D32()
  // L131()
  goto L131_;

D24_:;
  // deopt 97 [r48]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // l = ld nmc
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // c21 = `is.object`(l)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args98);
  // if c21 then L123() else L124(dx3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L123()
    goto L123_;
  } else {
  // L124(dx3, l)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L124_;
  }

L115_:;
  // goto L21(r48)
  // L21(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L21_;

L119_:;
  // dr2 = tryDispatchBuiltin.1("[", nm5)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc1 then L121() else L120(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L121()
    goto L121_;
  } else {
  // L120(dr2)
    Rsh_Fir_reg_nm7_ = Rsh_Fir_reg_dr2_;
    goto L120_;
  }

L120_:;
  // ng0 = ld ng0
  Rsh_Fir_reg_ng0_ = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // check L122() else D27()
  // L122()
  goto L122_;

L131_:;
  // p3 = prom<V +>{
  //   args6 = ld args;
  //   args7 = force? args6;
  //   checkMissing(args7);
  //   return args7;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_3, 0, NULL, CCP, RHO);
  // r54 = dyn lengths(p3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L132() else D33()
  // L132()
  goto L132_;

D27_:;
  // deopt 103 [nm7, ng0]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_ng0_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 126 [r54]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L24_:;
  // st nmc = dx9
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L19()
  // L19()
  goto L19_;

L121_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L122_:;
  // ng1 = force? ng0
  Rsh_Fir_reg_ng1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ng0_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r50 = dyn __1(nm7, ng1)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_ng1_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L23(r50)
  // L23(r50)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r50_;
  goto L23_;

L123_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, dx3)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args105);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc2 then L125() else L124(dx3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L125()
    goto L125_;
  } else {
  // L124(dx3, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L124_;
  }

L124_:;
  // ng2 = ld ng0
  Rsh_Fir_reg_ng2_ = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // check L126() else D28()
  // L126()
  goto L126_;

L132_:;
  // st d = r54
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // KEEP_OUT_ATTRS1 = ld `KEEP.OUT.ATTRS`
  Rsh_Fir_reg_KEEP_OUT_ATTRS1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L133() else D34()
  // L133()
  goto L133_;

D28_:;
  // deopt 107 [dx5, l2, dx3, ng2]
  SEXP Rsh_Fir_array_deopt_stack38[4];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_ng2_;
  Rsh_Fir_deopt(107, 4, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 128 [KEEP_OUT_ATTRS1]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS1_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L125_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L24(dx3, dx7)
  // L24(dx3, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L24_;

L126_:;
  // ng3 = force? ng2
  Rsh_Fir_reg_ng3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ng2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r51 = dyn ___(l2, dx3, ng3)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args108[2] = Rsh_Fir_reg_ng3_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L24(dx5, r51)
  // L24(dx5, r51)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r51_;
  goto L24_;

L133_:;
  // KEEP_OUT_ATTRS2 = force? KEEP_OUT_ATTRS1
  Rsh_Fir_reg_KEEP_OUT_ATTRS2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KEEP_OUT_ATTRS1_);
  // checkMissing(KEEP_OUT_ATTRS2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c22 = `as.logical`(KEEP_OUT_ATTRS2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args110);
  // if c22 then L134() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L134()
    goto L134_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // sym13 = ldf prod
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base13 = ldf prod in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard13 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L134_:;
  // sym12 = ldf vector
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base12 = ldf vector in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard12 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L26_:;
  // st dn = r56
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // nmc5 = ld nmc
  Rsh_Fir_reg_nmc5_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L139() else D37()
  // L139()
  goto L139_;

L28_:;
  // st orep = r60
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // orep = ld orep
  Rsh_Fir_reg_orep = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L147() else D42()
  // L147()
  goto L147_;

L135_:;
  // nargs10 = ld nargs
  Rsh_Fir_reg_nargs10_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L137() else D35()
  // L137()
  goto L137_;

L136_:;
  // r55 = dyn base12("list", <sym nargs>)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L26(r55)
  // L26(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L26_;

L143_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L145() else D40()
  // L145()
  goto L145_;

L144_:;
  // r59 = dyn base13(<sym d>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L28(r59)
  // L28(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L28_;

D35_:;
  // deopt 133 [nargs10]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_nargs10_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 138 [nmc5]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_nmc5_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 149 [d]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 154 [orep]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_orep;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L137_:;
  // nargs11 = force? nargs10
  Rsh_Fir_reg_nargs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs10_);
  // checkMissing(nargs11)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_nargs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // vector1 = ldf vector in base
  Rsh_Fir_reg_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r57 = dyn vector1("list", nargs11)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_nargs11_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector1_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L138() else D36()
  // L138()
  goto L138_;

L139_:;
  // nmc6 = force? nmc5
  Rsh_Fir_reg_nmc6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmc5_);
  // checkMissing(nmc6)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_nmc6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // l4 = ld dn
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L140() else D38()
  // L140()
  goto L140_;

L145_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_d1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r61 = dyn prod(d1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_d1_1;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L146() else D41()
  // L146()
  goto L146_;

L147_:;
  // orep1 = force? orep
  Rsh_Fir_reg_orep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_orep);
  // checkMissing(orep1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_orep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r62 = `==`(orep1, 0)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_orep1_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args121);
  // c23 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args122);
  // if c23 then L148() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L148()
    goto L148_;
  } else {
  // L29()
    goto L29_;
  }

D36_:;
  // deopt 136 [r57]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 141 [nmc6, l4, nmc6]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_nmc6_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_nmc6_;
  Rsh_Fir_deopt(141, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 152 [r61]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L29_:;
  // iArgs4 = ld iArgs
  Rsh_Fir_reg_iArgs4_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L164() else D47()
  // L164()
  goto L164_;

L35_:;
  // KEEP_OUT_ATTRS5 = ld `KEEP.OUT.ATTRS`
  Rsh_Fir_reg_KEEP_OUT_ATTRS5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L222() else D74()
  // L222()
  goto L222_;

L138_:;
  // goto L26(r57)
  // L26(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L26_;

L140_:;
  // r58 = dyn names__1(l4, NULL, nmc6)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_nmc6_;
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L141() else D39()
  // L141()
  goto L141_;

L146_:;
  // goto L28(r61)
  // L28(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L28_;

L148_:;
  // iArgs2 = ld iArgs
  Rsh_Fir_reg_iArgs2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L149() else D43()
  // L149()
  goto L149_;

D39_:;
  // deopt 143 [nmc6, r58]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_nmc6_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 158 [iArgs2]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_iArgs2_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 176 [iArgs4]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_iArgs4_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 268 [KEEP_OUT_ATTRS5]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS5_;
  Rsh_Fir_deopt(268, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L141_:;
  // st dn = r58
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // goto L27()
  // L27()
  goto L27_;

L149_:;
  // iArgs3 = force? iArgs2
  Rsh_Fir_reg_iArgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iArgs2_);
  // checkMissing(iArgs3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_iArgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // s = toForSeq(iArgs3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_iArgs3_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // l5 = length(s)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l5_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args126);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 44);
  // goto L30(i)
  // L30(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L30_;

L164_:;
  // iArgs5 = force? iArgs4
  Rsh_Fir_reg_iArgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iArgs4_);
  // checkMissing(iArgs5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_iArgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(iArgs5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_iArgs5_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // l9 = length(s1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args129);
  // i22 = 0
  Rsh_Fir_reg_i22_ = Rsh_const(CCP, 44);
  // goto L36(i22)
  // L36(i22)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i22_;
  goto L36_;

L222_:;
  // KEEP_OUT_ATTRS6 = force? KEEP_OUT_ATTRS5
  Rsh_Fir_reg_KEEP_OUT_ATTRS6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KEEP_OUT_ATTRS5_);
  // checkMissing(KEEP_OUT_ATTRS6)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c47 = `as.logical`(KEEP_OUT_ATTRS6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS6_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c47 then L223() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L223()
    goto L223_;
  } else {
  // L53()
    goto L53_;
  }

L30_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // c24 = `<`.1(l5, i2)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if c24 then L150() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L150()
    goto L150_;
  } else {
  // L34()
    goto L34_;
  }

L36_:;
  // i24 = `+`.1(i23, 1)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_i24_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // c28 = `<`.1(l9, i24)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // if c28 then L165() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L165()
    goto L165_;
  } else {
  // L52()
    goto L52_;
  }

L53_:;
  // goto L55()
  // L55()
  goto L55_;

L55_:;
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // check L232() else D80()
  // L232()
  goto L232_;

L223_:;
  // sym21 = ldf list
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base21 = ldf list in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args136);
  // if guard21 then L224() else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L224()
    goto L224_;
  } else {
  // L225()
    goto L225_;
  }

D80_:;
  // deopt 289 []
  Rsh_Fir_deopt(289, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args137[4];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args137[2] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args137[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_x1 = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args137);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // args8 = ld args
  Rsh_Fir_reg_args8_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L151() else D44()
  // L151()
  goto L151_;

L52_:;
  // x1 = `[[`(s1, i24, NULL, TRUE)
  SEXP Rsh_Fir_array_args138[4];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_args138[2] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args138[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_x1_1 = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args138);
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_x1_1, RHO);
  (void)(Rsh_Fir_reg_x1_1);
  // args12 = ld args
  Rsh_Fir_reg_args12_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L166() else D48()
  // L166()
  goto L166_;

L54_:;
  // l16 = ld cargs
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // check L229() else D78()
  // L229()
  goto L229_;

L150_:;
  // goto L35()
  // L35()
  goto L35_;

L165_:;
  // goto L35()
  // L35()
  goto L35_;

L224_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_1 = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L226() else D75()
  // L226()
  goto L226_;

L225_:;
  // r109 = dyn base21[dim, dimnames](<sym d>, <sym dn>)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 78);
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L54(r109)
  // L54(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L54_;

L232_:;
  // p10 = prom<V +>{
  //   sym22 = ldf `as.integer`;
  //   base22 = ldf `as.integer` in base;
  //   guard22 = `==`.4(sym22, base22);
  //   if guard22 then L2() else L3();
  // L0(r115):
  //   return r115;
  // L2():
  //   sym23 = ldf prod;
  //   base23 = ldf prod in base;
  //   guard23 = `==`.4(sym23, base23);
  //   if guard23 then L4() else L5();
  // L3():
  //   r114 = dyn base22(<lang prod(d)>);
  //   goto L0(r114);
  // L1(r117):
  //   as_integer = ldf `as.integer` in base;
  //   r119 = dyn as_integer(r117);
  //   goto L0(r119);
  // L4():
  //   d4 = ld d;
  //   d5 = force? d4;
  //   checkMissing(d5);
  //   prod1 = ldf prod in base;
  //   r118 = dyn prod1(d5);
  //   goto L1(r118);
  // L5():
  //   r116 = dyn base23(<sym d>);
  //   goto L1(r116);
  // }
  Rsh_Fir_reg_p10_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_4, 0, NULL, CCP, RHO);
  // r121 = dyn _set_row_names(p10)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L233() else D81()
  // L233()
  goto L233_;

D44_:;
  // deopt 160 [i2, args8]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_args8_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 178 [i24, args12]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_args12_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D75_:;
  // deopt 272 [d2]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_d2_1;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D78_:;
  // deopt 281 [r110, l16, r110]
  SEXP Rsh_Fir_array_deopt_stack54[3];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack54[2] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(281, 3, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D81_:;
  // deopt 291 [r121]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(291, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L151_:;
  // args9 = force? args8
  Rsh_Fir_reg_args9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args8_);
  // checkMissing(args9)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_args9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(args9)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args149);
  // if c25 then L152() else L153(i2, args9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L152()
    goto L152_;
  } else {
  // L153(i2, args9)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_args9_;
    goto L153_;
  }

L166_:;
  // args13 = force? args12
  Rsh_Fir_reg_args13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args12_);
  // checkMissing(args13)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_args13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(args13)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args151);
  // if c29 then L167() else L168(i24, args13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L167()
    goto L167_;
  } else {
  // L168(i24, args13)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_args13_;
    goto L168_;
  }

L226_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_1);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_d3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L227() else D76()
  // L227()
  goto L227_;

L229_:;
  // r112 = dyn attr__(l16, NULL, "out.attrs", r110)
  SEXP Rsh_Fir_array_args153[4];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args153[2] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args153[3] = Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_array_arg_names53[4];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_array_arg_names53[3] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L230() else D79()
  // L230()
  goto L230_;

L233_:;
  // st rn = r121
  Rsh_Fir_store(Rsh_const(CCP, 82), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // check L234() else D82()
  // L234()
  goto L234_;

D76_:;
  // deopt 275 [dn]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(275, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D79_:;
  // deopt 284 [r110, r112]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(284, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D82_:;
  // deopt 294 []
  Rsh_Fir_deopt(294, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // c26 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args154);
  // if c26 then L156() else L157(i8, dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L156()
    goto L156_;
  } else {
  // L157(i8, dx11)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L157_;
  }

L37_:;
  // st x = dx23
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // KEEP_OUT_ATTRS3 = ld `KEEP.OUT.ATTRS`
  Rsh_Fir_reg_KEEP_OUT_ATTRS3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L171() else D50()
  // L171()
  goto L171_;

L152_:;
  // dr6 = tryDispatchBuiltin.1("[[", args9)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc3 then L154() else L153(i2, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L154()
    goto L154_;
  } else {
  // L153(i2, dr6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_dr6_;
    goto L153_;
  }

L153_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L155() else D45()
  // L155()
  goto L155_;

L167_:;
  // dr12 = tryDispatchBuiltin.1("[[", args13)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args157);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if dc6 then L169() else L168(i24, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L169()
    goto L169_;
  } else {
  // L168(i24, dr12)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_dr12_;
    goto L168_;
  }

L168_:;
  // i31 = ld i
  Rsh_Fir_reg_i31_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L170() else D49()
  // L170()
  goto L170_;

L227_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // list3 = ldf list in base
  Rsh_Fir_reg_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r111 = dyn list3(d3, dn1)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_d3_1;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list3_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L228() else D77()
  // L228()
  goto L228_;

L230_:;
  // st cargs = r112
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L55()
  // L55()
  goto L55_;

L234_:;
  // p11 = prom<V +>{
  //   cargs = ld cargs;
  //   cargs1 = force? cargs;
  //   checkMissing(cargs1);
  //   return cargs1;
  // }
  Rsh_Fir_reg_p11_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_5, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   rn = ld rn;
  //   rn1 = force? rn;
  //   checkMissing(rn1);
  //   return rn1;
  // }
  Rsh_Fir_reg_p12_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_6, 0, NULL, CCP, RHO);
  // r124 = dyn structure[, class, `row.names`](p11, "data.frame", p12)
  SEXP Rsh_Fir_array_args163[3];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_p11_1;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args163[2] = Rsh_Fir_reg_p12_1;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = Rsh_const(CCP, 85);
  Rsh_Fir_array_arg_names55[2] = Rsh_const(CCP, 86);
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 3, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L235() else D83()
  // L235()
  goto L235_;

D45_:;
  // deopt 162 [i6, args11, i9]
  SEXP Rsh_Fir_array_deopt_stack58[3];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_args11_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(162, 3, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 180 [i28, args15, i31]
  SEXP Rsh_Fir_array_deopt_stack59[3];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_args15_;
  Rsh_Fir_array_deopt_stack59[2] = Rsh_Fir_reg_i31_;
  Rsh_Fir_deopt(180, 3, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 184 [i30, KEEP_OUT_ATTRS3]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_KEEP_OUT_ATTRS3_;
  Rsh_Fir_deopt(184, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 279 [r111]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(279, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D83_:;
  // deopt 300 [r124]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(300, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L32_:;
  // l6 = ld cargs
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // c27 = `is.object`(l6)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args164);
  // if c27 then L159() else L160(i14, dx15, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L159()
    goto L159_;
  } else {
  // L160(i14, dx15, l6)
    Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L160_;
  }

L154_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L31(i2, dx10)
  // L31(i2, dx10)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L31_;

L155_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r63 = dyn __2(args11, i10)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_args11_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L31(i6, r63)
  // L31(i6, r63)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r63_;
  goto L31_;

L156_:;
  // dr8 = tryDispatchBuiltin.1("[", dx11)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc4 then L158() else L157(i8, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L158()
    goto L158_;
  } else {
  // L157(i8, dr8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr8_;
    goto L157_;
  }

L157_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r64 = dyn __3(dx13, FALSE)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L32(i12, r64)
  // L32(i12, r64)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r64_;
  goto L32_;

L169_:;
  // dx22 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L37(i24, dx22)
  // L37(i24, dx22)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L37_;

L170_:;
  // i32 = force? i31
  Rsh_Fir_reg_i32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i31_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r66 = dyn __4(args15, i32)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_args15_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L37(i28, r66)
  // L37(i28, r66)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r66_;
  goto L37_;

L171_:;
  // KEEP_OUT_ATTRS4 = force? KEEP_OUT_ATTRS3
  Rsh_Fir_reg_KEEP_OUT_ATTRS4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KEEP_OUT_ATTRS3_);
  // checkMissing(KEEP_OUT_ATTRS4)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(KEEP_OUT_ATTRS4)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_KEEP_OUT_ATTRS4_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args173);
  // if c30 then L172() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L172()
    goto L172_;
  } else {
  // L38()
    goto L38_;
  }

L228_:;
  // goto L54(r111)
  // L54(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L54_;

L235_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r124
  return Rsh_Fir_reg_r124_;

L33_:;
  // st cargs = dx21
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L30(i18)
  // L30(i18)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i18_;
  goto L30_;

L38_:;
  // goto L40(i30)
  // L40(i30)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i30_;
  goto L40_;

L40_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args174);
  // if guard15 then L180() else L181()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L180()
    goto L180_;
  } else {
  // L181()
    goto L181_;
  }

L158_:;
  // dx14 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L32(i8, dx14)
  // L32(i8, dx14)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L32_;

L159_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l6, dx15)
  SEXP Rsh_Fir_array_args176[3];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args176[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args176);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if dc5 then L161() else L160(i14, dx15, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L161()
    goto L161_;
  } else {
  // L160(i14, dx15, dr10)
    Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr10_;
    goto L160_;
  }

L160_:;
  // i19 = ld i
  Rsh_Fir_reg_i19_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L162() else D46()
  // L162()
  goto L162_;

L172_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L173() else D51()
  // L173()
  goto L173_;

D46_:;
  // deopt 169 [i16, dx17, l8, dx15, i19]
  SEXP Rsh_Fir_array_deopt_stack63[5];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack63[4] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(169, 5, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 187 [i30]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L41_:;
  // st nx = r83
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // orep2 = ld orep
  Rsh_Fir_reg_orep2_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L184() else D56()
  // L184()
  goto L184_;

L161_:;
  // dx19 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L33(i14, dx19)
  // L33(i14, dx19)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L33_;

L162_:;
  // i20 = force? i19
  Rsh_Fir_reg_i20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i19_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r65 = dyn ____(l8, dx15, i20)
  SEXP Rsh_Fir_array_args179[3];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args179[2] = Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L33(i16, r65)
  // L33(i16, r65)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r65_;
  goto L33_;

L173_:;
  // p4 = prom<V +>{
  //   nmc8 = ld nmc;
  //   nmc9 = force? nmc8;
  //   checkMissing(nmc9);
  //   c31 = `is.object`(nmc9);
  //   if c31 then L1() else L2(nmc9);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", nmc9);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(nmc11):
  //   i35 = ld i;
  //   i36 = force? i35;
  //   __5 = ldf `[` in base;
  //   r67 = dyn __5(nmc11, i36);
  //   goto L0(r67);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_7, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym14 = ldf `is.numeric`;
  //   base14 = ldf `is.numeric` in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L2() else L3();
  // L0(r70):
  //   c32 = `as.logical`(r70);
  //   if c32 then L4() else L1();
  // L2():
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   is_numeric = ldf `is.numeric` in base;
  //   r71 = dyn is_numeric(x3);
  //   goto L0(r71);
  // L3():
  //   r69 = dyn base14(<sym x>);
  //   goto L0(r69);
  // L1():
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // L4():
  //   format = ldf format;
  //   p5 = prom<V +>{
  //     x4 = ld x;
  //     x5 = force? x4;
  //     checkMissing(x5);
  //     return x5;
  //   };
  //   r73 = dyn format(p5);
  //   return r73;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_8, 0, NULL, CCP, RHO);
  // r75 = dyn paste1(p4, "=", p6)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L174() else D52()
  // L174()
  goto L174_;

L180_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L182() else D54()
  // L182()
  goto L182_;

L181_:;
  // r82 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L41(i43, r82)
  // L41(i43, r82)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L41_;

D52_:;
  // deopt 191 [i30, r75]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 201 [i43, x8]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 206 [i46, orep2]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_orep2_;
  Rsh_Fir_deopt(206, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L174_:;
  // l10 = ld dn
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // c33 = `is.object`(l10)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args196);
  // if c33 then L175() else L176(i30, r75, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L175()
    goto L175_;
  } else {
  // L176(i30, r75, l10)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r75_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L176_;
  }

L182_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r84 = dyn length2(x9)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L183() else D55()
  // L183()
  goto L183_;

L184_:;
  // orep3 = force? orep2
  Rsh_Fir_reg_orep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_orep2_);
  // checkMissing(orep3)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_orep3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // nx = ld nx
  Rsh_Fir_reg_nx = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L185() else D57()
  // L185()
  goto L185_;

D55_:;
  // deopt 204 [i43, r84]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(204, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 207 [i46, orep3, nx]
  SEXP Rsh_Fir_array_deopt_stack69[3];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_orep3_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_nx;
  Rsh_Fir_deopt(207, 3, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L39_:;
  // st dn = dx27
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // goto L40(i40)
  // L40(i40)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i40_;
  goto L40_;

L175_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l10, r75)
  SEXP Rsh_Fir_array_args200[3];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args200);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc8 then L177() else L176(i30, r75, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L177()
    goto L177_;
  } else {
  // L176(i30, r75, dr16)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r75_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr16_;
    goto L176_;
  }

L176_:;
  // i41 = ld i
  Rsh_Fir_reg_i41_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L178() else D53()
  // L178()
  goto L178_;

L183_:;
  // goto L41(i43, r84)
  // L41(i43, r84)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L41_;

L185_:;
  // nx1 = force? nx
  Rsh_Fir_reg_nx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx);
  // checkMissing(nx1)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_nx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // r85 = `/`(orep3, nx1)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_orep3_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_nx1_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args203);
  // st orep = r85
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // stringsAsFactors1 = ld stringsAsFactors
  Rsh_Fir_reg_stringsAsFactors1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L186() else D58()
  // L186()
  goto L186_;

D53_:;
  // deopt 193 [i38, r77, l12, r75, i41]
  SEXP Rsh_Fir_array_deopt_stack70[5];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack70[3] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_deopt_stack70[4] = Rsh_Fir_reg_i41_;
  Rsh_Fir_deopt(193, 5, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 211 [i46, stringsAsFactors1]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_stringsAsFactors1_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L177_:;
  // dx26 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // goto L39(i30, r75, dx26)
  // L39(i30, r75, dx26)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L39_;

L178_:;
  // i42 = force? i41
  Rsh_Fir_reg_i42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i41_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r80 = dyn ____1(l12, r75, i42)
  SEXP Rsh_Fir_array_args205[3];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args205[2] = Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_array_arg_names67[3];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L39(i38, r77, r80)
  // L39(i38, r77, r80)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r80_;
  goto L39_;

L186_:;
  // stringsAsFactors2 = force? stringsAsFactors1
  Rsh_Fir_reg_stringsAsFactors2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stringsAsFactors1_);
  // checkMissing(stringsAsFactors2)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_stringsAsFactors2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(stringsAsFactors2)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_stringsAsFactors2_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args207);
  // if c34 then L187() else L42(i46, c34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L187()
    goto L187_;
  } else {
  // L42(i46, c34)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c34_;
    goto L42_;
  }

L42_:;
  // c44 = `as.logical`(c36)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args208);
  // if c44 then L192() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L192()
    goto L192_;
  } else {
  // L44()
    goto L44_;
  }

L187_:;
  // sym16 = ldf `is.character`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // base16 = ldf `is.character` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 93), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args209);
  // if guard16 then L188() else L189()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L188()
    goto L188_;
  } else {
  // L189()
    goto L189_;
  }

L43_:;
  // c41 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args210);
  // c42 = `&&`(c39, c41)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args211);
  // goto L42(i51, c42)
  // L42(i51, c42)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c42_;
  goto L42_;

L44_:;
  // goto L45(i48)
  // L45(i48)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i48_;
  goto L45_;

L45_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L196() else D62()
  // L196()
  goto L196_;

L188_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L190() else D59()
  // L190()
  goto L190_;

L189_:;
  // r86 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L43(i46, c34, r86)
  // L43(i46, c34, r86)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L43_;

L192_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 94), RHO);
  // check L193() else D60()
  // L193()
  goto L193_;

D59_:;
  // deopt 214 [i46, c34, x10]
  SEXP Rsh_Fir_array_deopt_stack72[3];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack72[2] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(214, 3, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 219 [i48]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 227 [i55, x16]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L190_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // c40 = `is.character`(x11)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args214);
  // goto L43(i46, c34, c40)
  // L43(i46, c34, c40)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_c40_;
  goto L43_;

L193_:;
  // p7 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_10, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   unique = ldf unique;
  //   p8 = prom<V +>{
  //     x14 = ld x;
  //     x15 = force? x14;
  //     checkMissing(x15);
  //     return x15;
  //   };
  //   r90 = dyn unique(p8);
  //   return r90;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_11, 0, NULL, CCP, RHO);
  // r92 = dyn factor[, levels](p7, p9)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = Rsh_const(CCP, 96);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L194() else D61()
  // L194()
  goto L194_;

L196_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(x17)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args220);
  // if c45 then L197() else L198(i55, x17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L197()
    goto L197_;
  } else {
  // L198(i55, x17)
    Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_x19_ = Rsh_Fir_reg_x17_;
    goto L198_;
  }

D61_:;
  // deopt 223 [i48, r92]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L46_:;
  // st x = dx29
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // x32 = ld x
  Rsh_Fir_reg_x32_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L215() else D70()
  // L215()
  goto L215_;

L194_:;
  // st x = r92
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // goto L45(i48)
  // L45(i48)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i48_;
  goto L45_;

L197_:;
  // dr18 = tryDispatchBuiltin.1("[", x17)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args221);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // if dc9 then L199() else L198(i55, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L199()
    goto L199_;
  } else {
  // L198(i55, dr18)
    Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_x19_ = Rsh_Fir_reg_dr18_;
    goto L198_;
  }

L198_:;
  // sym17 = ldf `rep.int`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base17 = ldf `rep.int` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args223);
  // if guard17 then L200() else L201()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L200()
    goto L200_;
  } else {
  // L201()
    goto L201_;
  }

D70_:;
  // deopt 253 [i59, x32]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i59_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_x32_;
  Rsh_Fir_deopt(253, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L47_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r106 = dyn __6(x22, r95)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L46(i62, r106)
  // L46(i62, r106)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r106_;
  goto L46_;

L199_:;
  // dx28 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L46(i55, dx28)
  // L46(i55, dx28)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L46_;

L200_:;
  // sym18 = ldf `rep.int`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base18 = ldf `rep.int` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args226[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args226);
  // if guard18 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L201_:;
  // r94 = dyn base17(<lang rep.int(seq_len(nx), rep.int(rep.fac, nx))>, <sym orep>)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args227[1] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L47(i57, x19, r94)
  // L47(i57, x19, r94)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L47_;

L215_:;
  // x33 = force? x32
  Rsh_Fir_reg_x33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x32_);
  // checkMissing(x33)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_x33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // l13 = ld cargs
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // c46 = `is.object`(l13)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args229);
  // if c46 then L216() else L217(i59, x33, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L216()
    goto L216_;
  } else {
  // L217(i59, x33, l13)
    Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i59_;
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_x33_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L217_;
  }

L48_:;
  // orep4 = ld orep
  Rsh_Fir_reg_orep4_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L213() else D68()
  // L213()
  goto L213_;

L51_:;
  // st cargs = dx31
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // rep_fac2 = ld `rep.fac`
  Rsh_Fir_reg_rep_fac2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L220() else D72()
  // L220()
  goto L220_;

L202_:;
  // sym19 = ldf seq_len
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base19 = ldf seq_len in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args230);
  // if guard19 then L204() else L205()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L204()
    goto L204_;
  } else {
  // L205()
    goto L205_;
  }

L203_:;
  // r96 = dyn base18(<lang seq_len(nx)>, <lang rep.int(rep.fac, nx)>)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 100);
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L48(i57, x19, r96)
  // L48(i57, x19, r96)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r96_;
  goto L48_;

L216_:;
  // dr20 = tryDispatchBuiltin.0("[[<-", l13, x33)
  SEXP Rsh_Fir_array_args232[3];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args232[2] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args232);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if dc10 then L218() else L217(i59, x33, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L218()
    goto L218_;
  } else {
  // L217(i59, x33, dr20)
    Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i59_;
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_x33_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr20_;
    goto L217_;
  }

L217_:;
  // i76 = ld i
  Rsh_Fir_reg_i76_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L219() else D71()
  // L219()
  goto L219_;

D68_:;
  // deopt 247 [i65, x25, orep4]
  SEXP Rsh_Fir_array_deopt_stack77[3];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_i65_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_orep4_;
  Rsh_Fir_deopt(247, 3, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 256 [i73, x35, l15, x33, i76]
  SEXP Rsh_Fir_array_deopt_stack78[5];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i73_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_x35_;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack78[3] = Rsh_Fir_reg_x33_;
  Rsh_Fir_array_deopt_stack78[4] = Rsh_Fir_reg_i76_;
  Rsh_Fir_deopt(256, 5, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 260 [i75, rep_fac2]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_rep_fac2_;
  Rsh_Fir_deopt(260, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L49_:;
  // sym20 = ldf `rep.int`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base20 = ldf `rep.int` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args234);
  // if guard20 then L207() else L208()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L207()
    goto L207_;
  } else {
  // L208()
    goto L208_;
  }

L204_:;
  // nx2 = ld nx
  Rsh_Fir_reg_nx2_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L206() else D63()
  // L206()
  goto L206_;

L205_:;
  // r98 = dyn base19(<sym nx>)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L49(i57, x19, r98)
  // L49(i57, x19, r98)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L49_;

L213_:;
  // orep5 = force? orep4
  Rsh_Fir_reg_orep5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_orep4_);
  // checkMissing(orep5)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_orep5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r105 = dyn rep_int2(r97, orep5)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_orep5_;
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L214() else D69()
  // L214()
  goto L214_;

L218_:;
  // dx30 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L51(i59, dx30)
  // L51(i59, dx30)
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i59_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L51_;

L219_:;
  // i77 = force? i76
  Rsh_Fir_reg_i77_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i76_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r107 = dyn ____2(l15, x33, i77)
  SEXP Rsh_Fir_array_args239[3];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_x33_;
  Rsh_Fir_array_args239[2] = Rsh_Fir_reg_i77_;
  SEXP Rsh_Fir_array_arg_names76[3];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L51(i73, r107)
  // L51(i73, r107)
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i73_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r107_;
  goto L51_;

L220_:;
  // rep_fac3 = force? rep_fac2
  Rsh_Fir_reg_rep_fac3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rep_fac2_);
  // checkMissing(rep_fac3)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_rep_fac3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // nx6 = ld nx
  Rsh_Fir_reg_nx6_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L221() else D73()
  // L221()
  goto L221_;

D63_:;
  // deopt 234 [i57, x19, nx2]
  SEXP Rsh_Fir_array_deopt_stack80[3];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i57_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_nx2_;
  Rsh_Fir_deopt(234, 3, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 250 [i65, x25, r105]
  SEXP Rsh_Fir_array_deopt_stack81[3];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_i65_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(250, 3, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 261 [i75, rep_fac3, nx6]
  SEXP Rsh_Fir_array_deopt_stack82[3];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_rep_fac3_;
  Rsh_Fir_array_deopt_stack82[2] = Rsh_Fir_reg_nx6_;
  Rsh_Fir_deopt(261, 3, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L50_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r104 = dyn rep_int1(r99, r102)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L212() else D67()
  // L212()
  goto L212_;

L206_:;
  // nx3 = force? nx2
  Rsh_Fir_reg_nx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx2_);
  // checkMissing(nx3)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_nx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r100 = seq_len(nx3)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_nx3_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args243);
  // goto L49(i57, x19, r100)
  // L49(i57, x19, r100)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L49_;

L207_:;
  // rep_fac = ld `rep.fac`
  Rsh_Fir_reg_rep_fac = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L209() else D64()
  // L209()
  goto L209_;

L208_:;
  // r101 = dyn base20(<sym rep.fac>, <sym nx>)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args244[1] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L50(i68, x28, r101)
  // L50(i68, x28, r101)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_x31_ = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r101_;
  goto L50_;

L214_:;
  // goto L47(i65, x25, r105)
  // L47(i65, x25, r105)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i65_;
  Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r105_;
  goto L47_;

L221_:;
  // nx7 = force? nx6
  Rsh_Fir_reg_nx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx6_);
  // checkMissing(nx7)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_nx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // r108 = `*`(rep_fac3, nx7)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_rep_fac3_;
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_nx7_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args246);
  // st `rep.fac` = r108
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r108_, RHO);
  (void)(Rsh_Fir_reg_r108_);
  // goto L36(i75)
  // L36(i75)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i75_;
  goto L36_;

D64_:;
  // deopt 239 [i68, x28, rep_fac]
  SEXP Rsh_Fir_array_deopt_stack83[3];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_rep_fac;
  Rsh_Fir_deopt(239, 3, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 246 [i71, x31, r104]
  SEXP Rsh_Fir_array_deopt_stack84[3];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_x31_;
  Rsh_Fir_array_deopt_stack84[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(246, 3, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L209_:;
  // rep_fac1 = force? rep_fac
  Rsh_Fir_reg_rep_fac1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rep_fac);
  // checkMissing(rep_fac1)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_rep_fac1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // nx4 = ld nx
  Rsh_Fir_reg_nx4_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L210() else D65()
  // L210()
  goto L210_;

L212_:;
  // goto L48(i71, x31, r104)
  // L48(i71, x31, r104)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r104_;
  goto L48_;

D65_:;
  // deopt 241 [i68, x28, nx4]
  SEXP Rsh_Fir_array_deopt_stack85[3];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_deopt_stack85[2] = Rsh_Fir_reg_nx4_;
  Rsh_Fir_deopt(241, 3, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L210_:;
  // nx5 = force? nx4
  Rsh_Fir_reg_nx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx4_);
  // checkMissing(nx5)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_nx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r103 = dyn rep_int(rep_fac1, nx5)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_rep_fac1_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_nx5_;
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L211() else D66()
  // L211()
  goto L211_;

D66_:;
  // deopt 244 [i68, x28, r103]
  SEXP Rsh_Fir_array_deopt_stack86[3];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_deopt_stack86[2] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(244, 3, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L211_:;
  // goto L50(i68, x28, r103)
  // L50(i68, x28, r103)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_x31_ = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r103_;
  goto L50_;
}
SEXP Rsh_Fir_user_promise_inner932677971_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r9_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r9 = dyn list1()
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L0_;

L2_:;
  // r7 = dyn base2()
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner932677971_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_r26_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r26 = dyn list2()
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_1;
  goto L0_;

L2_:;
  // r24 = dyn base5()
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner932677971_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iArgs;
  SEXP Rsh_Fir_reg_iArgs1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // iArgs = ld iArgs
  Rsh_Fir_reg_iArgs = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // iArgs1 = force? iArgs
  Rsh_Fir_reg_iArgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iArgs);
  // checkMissing(iArgs1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_iArgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return iArgs1
  return Rsh_Fir_reg_iArgs1_;
}
SEXP Rsh_Fir_user_promise_inner932677971_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args6_;
  SEXP Rsh_Fir_reg_args7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // args6 = ld args
  Rsh_Fir_reg_args6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // args7 = force? args6
  Rsh_Fir_reg_args7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args6_);
  // checkMissing(args7)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_args7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return args7
  return Rsh_Fir_reg_args7_;
}
SEXP Rsh_Fir_user_promise_inner932677971_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_d4_1;
  SEXP Rsh_Fir_reg_d5_1;
  SEXP Rsh_Fir_reg_prod1_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r119_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // sym22 = ldf `as.integer`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base22 = ldf `as.integer` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard22 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r115
  return Rsh_Fir_reg_r115_;

L2_:;
  // sym23 = ldf prod
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base23 = ldf prod in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard23 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r114 = dyn base22(<lang prod(d)>)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r114)
  // L0(r114)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L0_;

L1_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r119 = dyn as_integer(r117)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r119)
  // L0(r119)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r119_;
  goto L0_;

L4_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_1 = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // d5 = force? d4
  Rsh_Fir_reg_d5_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_1);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_d5_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // prod1 = ldf prod in base
  Rsh_Fir_reg_prod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r118 = dyn prod1(d5)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_d5_1;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L1(r118)
  // L1(r118)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r118_;
  goto L1_;

L5_:;
  // r116 = dyn base23(<sym d>)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L1(r116)
  // L1(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner932677971_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cargs;
  SEXP Rsh_Fir_reg_cargs1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // cargs = ld cargs
  Rsh_Fir_reg_cargs = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // cargs1 = force? cargs
  Rsh_Fir_reg_cargs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cargs);
  // checkMissing(cargs1)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_cargs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // return cargs1
  return Rsh_Fir_reg_cargs1_;
}
SEXP Rsh_Fir_user_promise_inner932677971_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rn;
  SEXP Rsh_Fir_reg_rn1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // rn = ld rn
  Rsh_Fir_reg_rn = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // rn1 = force? rn
  Rsh_Fir_reg_rn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rn);
  // checkMissing(rn1)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_rn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // return rn1
  return Rsh_Fir_reg_rn1_;
}
SEXP Rsh_Fir_user_promise_inner932677971_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nmc8_;
  SEXP Rsh_Fir_reg_nmc9_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_nmc11_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // nmc8 = ld nmc
  Rsh_Fir_reg_nmc8_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // nmc9 = force? nmc8
  Rsh_Fir_reg_nmc9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmc8_);
  // checkMissing(nmc9)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_nmc9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(nmc9)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_nmc9_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args181);
  // if c31 then L1() else L2(nmc9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(nmc9)
    Rsh_Fir_reg_nmc11_ = Rsh_Fir_reg_nmc9_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", nmc9)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_nmc9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args182);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_nmc11_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // i35 = ld i
  Rsh_Fir_reg_i35_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // i36 = force? i35
  Rsh_Fir_reg_i36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i35_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r67 = dyn __5(nmc11, i36)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_nmc11_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r67_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner932677971_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // sym14 = ldf `is.numeric`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 90), RHO);
  // base14 = ldf `is.numeric` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args186);
  // if guard14 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c32 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args187);
  // if c32 then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L2_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_1 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_1);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_x3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // r71 = dyn is_numeric(x3)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L0_;

L3_:;
  // r69 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L0_;

L1_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;

L4_:;
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // p5 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_9, 0, NULL, CCP, RHO);
  // r73 = dyn format(p5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names63, CCP, RHO);
  // return r73
  return Rsh_Fir_reg_r73_;
}
SEXP Rsh_Fir_user_promise_inner932677971_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_inner932677971_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_inner932677971_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r90_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // p8 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner932677971_12, 0, NULL, CCP, RHO);
  // r90 = dyn unique(p8)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names69, CCP, RHO);
  // return r90
  return Rsh_Fir_reg_r90_;
}
SEXP Rsh_Fir_user_promise_inner932677971_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner932677971/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
