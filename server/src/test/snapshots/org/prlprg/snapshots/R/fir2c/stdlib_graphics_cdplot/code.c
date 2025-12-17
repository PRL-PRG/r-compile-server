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
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_cdplot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_cdplot1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_cdplot2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_spineplot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_cdplot3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_cdplot4_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_lines;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r48_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st cdplot = r
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
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c1 = ldf c in base;
  //   r8 = dyn c1("no", "yes");
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1("no", "yes");
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn factor[, levels, labels](p, p1, p2)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 10 [r10]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st fail = r10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // st temperature = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // cdplot = ldf cdplot
  Rsh_Fir_reg_cdplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

L3_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r13 = dyn c2(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0)
  SEXP Rsh_Fir_array_args8[23];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[12] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[13] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[14] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args8[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args8[16] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args8[17] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args8[18] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args8[19] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args8[20] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args8[21] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args8[22] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names5[23];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_array_arg_names5[9] = R_MissingArg;
  Rsh_Fir_array_arg_names5[10] = R_MissingArg;
  Rsh_Fir_array_arg_names5[11] = R_MissingArg;
  Rsh_Fir_array_arg_names5[12] = R_MissingArg;
  Rsh_Fir_array_arg_names5[13] = R_MissingArg;
  Rsh_Fir_array_arg_names5[14] = R_MissingArg;
  Rsh_Fir_array_arg_names5[15] = R_MissingArg;
  Rsh_Fir_array_arg_names5[16] = R_MissingArg;
  Rsh_Fir_array_arg_names5[17] = R_MissingArg;
  Rsh_Fir_array_arg_names5[18] = R_MissingArg;
  Rsh_Fir_array_arg_names5[19] = R_MissingArg;
  Rsh_Fir_array_arg_names5[20] = R_MissingArg;
  Rsh_Fir_array_arg_names5[21] = R_MissingArg;
  Rsh_Fir_array_arg_names5[22] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 23, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L4_:;
  // r11 = dyn base2(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0)
  SEXP Rsh_Fir_array_args9[23];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args9[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args9[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args9[8] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args9[9] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args9[10] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args9[11] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args9[12] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args9[13] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args9[14] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args9[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args9[16] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args9[17] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args9[18] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args9[19] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args9[20] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args9[21] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args9[22] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names6[23];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_array_arg_names6[9] = R_MissingArg;
  Rsh_Fir_array_arg_names6[10] = R_MissingArg;
  Rsh_Fir_array_arg_names6[11] = R_MissingArg;
  Rsh_Fir_array_arg_names6[12] = R_MissingArg;
  Rsh_Fir_array_arg_names6[13] = R_MissingArg;
  Rsh_Fir_array_arg_names6[14] = R_MissingArg;
  Rsh_Fir_array_arg_names6[15] = R_MissingArg;
  Rsh_Fir_array_arg_names6[16] = R_MissingArg;
  Rsh_Fir_array_arg_names6[17] = R_MissingArg;
  Rsh_Fir_array_arg_names6[18] = R_MissingArg;
  Rsh_Fir_array_arg_names6[19] = R_MissingArg;
  Rsh_Fir_array_arg_names6[20] = R_MissingArg;
  Rsh_Fir_array_arg_names6[21] = R_MissingArg;
  Rsh_Fir_array_arg_names6[22] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 23, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;

D2_:;
  // deopt 38 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L6_:;
  // p3 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r14 = dyn __(<sym fail>, <sym temperature>);
  //   return r14;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r16 = dyn cdplot(p3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cdplot, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 43 [r16]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // cdplot1 = ldf cdplot
  Rsh_Fir_reg_cdplot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r17 = dyn __1(<sym fail>, <sym temperature>);
  //   return r17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn cdplot1[, bw](p4, 2.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cdplot1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 49 [r19]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // cdplot2 = ldf cdplot
  Rsh_Fir_reg_cdplot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r20 = dyn __2(<sym fail>, <sym temperature>);
  //   return r20;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn cdplot2[, bw](p5, "SJ")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cdplot2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 55 [r22]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // spineplot = ldf spineplot
  Rsh_Fir_reg_spineplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p6 = prom<V +>{
  //   __3 = ldf `~` in base;
  //   r23 = dyn __3(<sym fail>, <sym temperature>);
  //   return r23;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn spineplot[, breaks](p6, 3.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 61 [r25]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // cdplot3 = ldf cdplot
  Rsh_Fir_reg_cdplot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p7 = prom<V +>{
  //   __4 = ldf `~` in base;
  //   r26 = dyn __4(<sym fail>, <sym temperature>);
  //   return r26;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   return <int 2, 1>;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r29 = dyn cdplot3[, ylevels](p7, p8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cdplot3_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 67 [r29]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // cdplot4 = ldf cdplot
  Rsh_Fir_reg_cdplot4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p9 = prom<V +>{
  //   __5 = ldf `~` in base;
  //   r30 = dyn __5(<sym fail>, <sym temperature>);
  //   return r30;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r32 = dyn cdplot4[, plot](p9, FALSE)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cdplot4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 73 [r32]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // st cdens = r32
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p10 = prom<V +>{
  //   __6 = ldf `~` in base;
  //   r33 = dyn __6(<lang I(`-`(as.numeric(fail), 1.0))>, <lang jitter(temperature, factor=2.0)>);
  //   return r33;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r35 = dyn plot[, xlab, ylab](p10, "Temperature", "Conditional failure probability")
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 82 [r35]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // lines = ldf lines
  Rsh_Fir_reg_lines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p11 = prom<V +>{
  //   r36 = `:`(53.0, 81.0);
  //   return r36;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   cdens = ld cdens;
  //   cdens1 = force? cdens;
  //   checkMissing(cdens1);
  //   c3 = `is.object`(cdens1);
  //   if c3 then L1() else L2(1.0, cdens1);
  // L0(r41, dx1):
  //   checkFun.0(dx1);
  //   dx2 = dx1 as cls;
  //   p12 = prom<V +>{
  //     r43 = `:`(53.0, 81.0);
  //     return r43;
  //   };
  //   r45 = dyn dx2(p12);
  //   r46 = `-`(r41, r45);
  //   return r46;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", cdens1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(1.0, dr);
  // L2(r39, cdens3):
  //   __7 = ldf `[[` in base;
  //   r42 = dyn __7(cdens3, 1.0);
  //   goto L0(r39, r42);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(1.0, dx);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r48 = dyn lines[, , col](p11, p13, 2.0)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 89 [r48]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r48
  return Rsh_Fir_reg_r48_;
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
  // r3 = dyn c(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args1[23];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[11] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[15] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[22] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[23];
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
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 23, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args2[23];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[11] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[15] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[22] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[23];
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
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 23, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 5);
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn c1("no", "yes")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1("no", "yes")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r14 = dyn __(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r17 = dyn __1(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r20 = dyn __2(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __3 = ldf `~` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r23 = dyn __3(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __4 = ldf `~` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r26 = dyn __4(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 2, 1>
  return Rsh_const(CCP, 34);
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __5 = ldf `~` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r30 = dyn __5(<sym fail>, <sym temperature>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __6 = ldf `~` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn __6(<lang I(`-`(as.numeric(fail), 1.0))>, <lang jitter(temperature, factor=2.0)>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r36 = `:`(53.0, 81.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args24);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cdens;
  SEXP Rsh_Fir_reg_cdens1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_cdens3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cdens = ld cdens
  Rsh_Fir_reg_cdens = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cdens1 = force? cdens
  Rsh_Fir_reg_cdens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdens);
  // checkMissing(cdens1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_cdens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(cdens1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_cdens1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c3 then L1() else L2(1.0, cdens1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(1.0, cdens1)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_cdens3_ = Rsh_Fir_reg_cdens1_;
    goto L2_;
  }

L0_:;
  // checkFun.0(dx1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx1_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args27));
  // dx2 = dx1 as cls
  Rsh_Fir_reg_dx2_ = Rsh_Fir_cast(Rsh_Fir_reg_dx1_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p12 = prom<V +>{
  //   r43 = `:`(53.0, 81.0);
  //   return r43;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r45 = dyn dx2(p12)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names21, CCP, RHO);
  // r46 = `-`(r41, r45)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args30);
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", cdens1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_cdens1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(1.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(1.0, dr)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_cdens3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r42 = dyn __7(cdens3, 1.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_cdens3_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r39, r42)
  // L0(r39, r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r42_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L0(1.0, dx)
  // L0(1.0, dx)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r43 = `:`(53.0, 81.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args28);
  // return r43
  return Rsh_Fir_reg_r43_;
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
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r2 = dyn UseMethod("cdplot")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("cdplot")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
