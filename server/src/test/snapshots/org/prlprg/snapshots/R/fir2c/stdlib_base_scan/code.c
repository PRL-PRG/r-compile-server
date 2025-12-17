#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1650997039_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1650997039_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1650997039_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1650997039_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_scan;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_scan1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_scan2_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_scan3_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_scan4_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_scan5_;
  SEXP Rsh_Fir_reg_r16_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1650997039
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1650997039_, RHO, CCP);
  // st scan = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn cat[, , , file, sep]("TITLE extra line", "2 3 5 7", "11 13 17", "ex.data", "\n")
  SEXP Rsh_Fir_array_args[5];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args[4] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 5, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // scan = ldf scan
  Rsh_Fir_reg_scan = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn scan[, skip, quiet]("ex.data", 1.0, TRUE)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 20 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st pp = r2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // scan1 = ldf scan
  Rsh_Fir_reg_scan1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn scan1[, skip]("ex.data", 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 27 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // scan2 = ldf scan
  Rsh_Fir_reg_scan2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn scan2[, skip, nlines]("ex.data", 1.0, 1.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan2_, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 35 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // scan3 = ldf scan
  Rsh_Fir_reg_scan3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   list = ldf list in base;
  //   r7 = dyn list("", "", "");
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base("", "", "");
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r9 = dyn scan3[, what]("ex.data", p)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan3_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 41 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // scan4 = ldf scan
  Rsh_Fir_reg_scan4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   list1 = ldf list in base;
  //   r12 = dyn list1("", "", "");
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base1("", "", "");
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r14 = dyn scan4[, what, flush]("ex.data", p1, TRUE)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan4_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 49 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r15 = dyn unlink("ex.data")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 53 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // scan5 = ldf scan
  Rsh_Fir_reg_scan5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r16 = dyn scan5[text]("1 2 3")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan5_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 58 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
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
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r7 = dyn list("", "", "")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base("", "", "")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r12 = dyn list1("", "", "")
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base1("", "", "")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1650997039_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1650997039 dynamic dispatch ([file, what, nmax, n, sep, quote, dec, skip, nlines, `na.strings`, flush, fill, `strip.white`, quiet, `blank.lines.skip`, `multi.line`, `comment.char`, allowEscapes, fileEncoding, encoding, text, skipNul])

  return Rsh_Fir_user_version_inner1650997039_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1650997039_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1650997039 version 0 (*, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 22) Rsh_error("FIŘ arity mismatch for inner1650997039/0: expected 22, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_what;
  SEXP Rsh_Fir_reg_nmax;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_sep;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_dec;
  SEXP Rsh_Fir_reg_skip;
  SEXP Rsh_Fir_reg_nlines;
  SEXP Rsh_Fir_reg_na_strings;
  SEXP Rsh_Fir_reg_flush;
  SEXP Rsh_Fir_reg_fill;
  SEXP Rsh_Fir_reg_strip_white;
  SEXP Rsh_Fir_reg_quiet;
  SEXP Rsh_Fir_reg_blank_lines_skip;
  SEXP Rsh_Fir_reg_multi_line;
  SEXP Rsh_Fir_reg_comment_char;
  SEXP Rsh_Fir_reg_allowEscapes;
  SEXP Rsh_Fir_reg_fileEncoding;
  SEXP Rsh_Fir_reg_encoding;
  SEXP Rsh_Fir_reg_text;
  SEXP Rsh_Fir_reg_skipNul;
  SEXP Rsh_Fir_reg_file_isMissing;
  SEXP Rsh_Fir_reg_file_orDefault;
  SEXP Rsh_Fir_reg_what_isMissing;
  SEXP Rsh_Fir_reg_what_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_nmax_isMissing;
  SEXP Rsh_Fir_reg_nmax_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_n_isMissing;
  SEXP Rsh_Fir_reg_n_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_sep_isMissing;
  SEXP Rsh_Fir_reg_sep_orDefault;
  SEXP Rsh_Fir_reg_quote_isMissing;
  SEXP Rsh_Fir_reg_quote_orDefault;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_dec_isMissing;
  SEXP Rsh_Fir_reg_dec_orDefault;
  SEXP Rsh_Fir_reg_skip_isMissing;
  SEXP Rsh_Fir_reg_skip_orDefault;
  SEXP Rsh_Fir_reg_nlines_isMissing;
  SEXP Rsh_Fir_reg_nlines_orDefault;
  SEXP Rsh_Fir_reg_na_strings_isMissing;
  SEXP Rsh_Fir_reg_na_strings_orDefault;
  SEXP Rsh_Fir_reg_flush_isMissing;
  SEXP Rsh_Fir_reg_flush_orDefault;
  SEXP Rsh_Fir_reg_fill_isMissing;
  SEXP Rsh_Fir_reg_fill_orDefault;
  SEXP Rsh_Fir_reg_strip_white_isMissing;
  SEXP Rsh_Fir_reg_strip_white_orDefault;
  SEXP Rsh_Fir_reg_quiet_isMissing;
  SEXP Rsh_Fir_reg_quiet_orDefault;
  SEXP Rsh_Fir_reg_blank_lines_skip_isMissing;
  SEXP Rsh_Fir_reg_blank_lines_skip_orDefault;
  SEXP Rsh_Fir_reg_multi_line_isMissing;
  SEXP Rsh_Fir_reg_multi_line_orDefault;
  SEXP Rsh_Fir_reg_comment_char_isMissing;
  SEXP Rsh_Fir_reg_comment_char_orDefault;
  SEXP Rsh_Fir_reg_allowEscapes_isMissing;
  SEXP Rsh_Fir_reg_allowEscapes_orDefault;
  SEXP Rsh_Fir_reg_fileEncoding_isMissing;
  SEXP Rsh_Fir_reg_fileEncoding_orDefault;
  SEXP Rsh_Fir_reg_encoding_isMissing;
  SEXP Rsh_Fir_reg_encoding_orDefault;
  SEXP Rsh_Fir_reg_skipNul_isMissing;
  SEXP Rsh_Fir_reg_skipNul_orDefault;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_na_strings1_;
  SEXP Rsh_Fir_reg_na_strings2_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_pmax;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_missing3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_textConnection;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_stdin;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_fileEncoding1_;
  SEXP Rsh_Fir_reg_fileEncoding2_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_on_exit1_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_file11_;
  SEXP Rsh_Fir_reg_file12_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_file13_;
  SEXP Rsh_Fir_reg_file14_;
  SEXP Rsh_Fir_reg_what3_;
  SEXP Rsh_Fir_reg_what4_;
  SEXP Rsh_Fir_reg_nmax1_;
  SEXP Rsh_Fir_reg_nmax2_;
  SEXP Rsh_Fir_reg_sep3_;
  SEXP Rsh_Fir_reg_sep4_;
  SEXP Rsh_Fir_reg_dec1_;
  SEXP Rsh_Fir_reg_dec2_;
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_quote2_;
  SEXP Rsh_Fir_reg_skip1_;
  SEXP Rsh_Fir_reg_skip2_;
  SEXP Rsh_Fir_reg_nlines1_;
  SEXP Rsh_Fir_reg_nlines2_;
  SEXP Rsh_Fir_reg_na_strings3_;
  SEXP Rsh_Fir_reg_na_strings4_;
  SEXP Rsh_Fir_reg_flush1_;
  SEXP Rsh_Fir_reg_flush2_;
  SEXP Rsh_Fir_reg_fill1_;
  SEXP Rsh_Fir_reg_fill2_;
  SEXP Rsh_Fir_reg_strip_white1_;
  SEXP Rsh_Fir_reg_strip_white2_;
  SEXP Rsh_Fir_reg_quiet1_;
  SEXP Rsh_Fir_reg_quiet2_;
  SEXP Rsh_Fir_reg_blank_lines_skip1_;
  SEXP Rsh_Fir_reg_blank_lines_skip2_;
  SEXP Rsh_Fir_reg_multi_line1_;
  SEXP Rsh_Fir_reg_multi_line2_;
  SEXP Rsh_Fir_reg_comment_char1_;
  SEXP Rsh_Fir_reg_comment_char2_;
  SEXP Rsh_Fir_reg_allowEscapes1_;
  SEXP Rsh_Fir_reg_allowEscapes2_;
  SEXP Rsh_Fir_reg_encoding1_;
  SEXP Rsh_Fir_reg_encoding2_;
  SEXP Rsh_Fir_reg_skipNul1_;
  SEXP Rsh_Fir_reg_skipNul2_;
  SEXP Rsh_Fir_reg_scan1;
  SEXP Rsh_Fir_reg_r65_;

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_what = PARAMS[1];
  Rsh_Fir_reg_nmax = PARAMS[2];
  Rsh_Fir_reg_n = PARAMS[3];
  Rsh_Fir_reg_sep = PARAMS[4];
  Rsh_Fir_reg_quote = PARAMS[5];
  Rsh_Fir_reg_dec = PARAMS[6];
  Rsh_Fir_reg_skip = PARAMS[7];
  Rsh_Fir_reg_nlines = PARAMS[8];
  Rsh_Fir_reg_na_strings = PARAMS[9];
  Rsh_Fir_reg_flush = PARAMS[10];
  Rsh_Fir_reg_fill = PARAMS[11];
  Rsh_Fir_reg_strip_white = PARAMS[12];
  Rsh_Fir_reg_quiet = PARAMS[13];
  Rsh_Fir_reg_blank_lines_skip = PARAMS[14];
  Rsh_Fir_reg_multi_line = PARAMS[15];
  Rsh_Fir_reg_comment_char = PARAMS[16];
  Rsh_Fir_reg_allowEscapes = PARAMS[17];
  Rsh_Fir_reg_fileEncoding = PARAMS[18];
  Rsh_Fir_reg_encoding = PARAMS[19];
  Rsh_Fir_reg_text = PARAMS[20];
  Rsh_Fir_reg_skipNul = PARAMS[21];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if file_isMissing then L0("") else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0("")
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 16);
    goto L0_;
  } else {
  // L0(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L0_;
  }

L0_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // what_isMissing = missing.0(what)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_what;
  Rsh_Fir_reg_what_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if what_isMissing then L1() else L2(what)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_what_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(what)
    Rsh_Fir_reg_what_orDefault = Rsh_Fir_reg_what;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   double = ldf double;
  //   r = dyn double();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_what_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st what = what_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_what_orDefault, RHO);
  (void)(Rsh_Fir_reg_what_orDefault);
  // nmax_isMissing = missing.0(nmax)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_nmax;
  Rsh_Fir_reg_nmax_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if nmax_isMissing then L3() else L4(nmax)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nmax_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(nmax)
    Rsh_Fir_reg_nmax_orDefault = Rsh_Fir_reg_nmax;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_1, 0, NULL, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_nmax_orDefault = Rsh_Fir_reg_p1_1;
  goto L4_;

L4_:;
  // st nmax = nmax_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_nmax_orDefault, RHO);
  (void)(Rsh_Fir_reg_nmax_orDefault);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if n_isMissing then L5() else L6(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_2, 0, NULL, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_p2_;
  goto L6_;

L6_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if sep_isMissing then L7("") else L7(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L7("")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 16);
    goto L7_;
  } else {
  // L7(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L7_;
  }

L7_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if quote_isMissing then L8() else L9(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L9_;
  }

L8_:;
  // p3 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r5):
  //   c = `as.logical`(r5);
  //   if c then L4() else L1();
  // L2():
  //   sep1 = ld sep;
  //   sep2 = force? sep1;
  //   checkMissing(sep2);
  //   identical = ldf identical in base;
  //   r6 = dyn identical(sep2, "\n", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r6);
  // L3():
  //   r4 = dyn base(<sym sep>, "\n");
  //   goto L0(r4);
  // L1():
  //   return "'\"";
  // L4():
  //   return "";
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_3, 0, NULL, CCP, RHO);
  // goto L9(p3)
  // L9(p3)
  Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_p3_;
  goto L9_;

L9_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // dec_isMissing = missing.0(dec)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dec;
  Rsh_Fir_reg_dec_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if dec_isMissing then L10(".") else L10(dec)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dec_isMissing)) {
  // L10(".")
    Rsh_Fir_reg_dec_orDefault = Rsh_const(CCP, 30);
    goto L10_;
  } else {
  // L10(dec)
    Rsh_Fir_reg_dec_orDefault = Rsh_Fir_reg_dec;
    goto L10_;
  }

L10_:;
  // st dec = dec_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_dec_orDefault, RHO);
  (void)(Rsh_Fir_reg_dec_orDefault);
  // skip_isMissing = missing.0(skip)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_skip;
  Rsh_Fir_reg_skip_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args26);
  // if skip_isMissing then L11(0) else L11(skip)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_skip_isMissing)) {
  // L11(0)
    Rsh_Fir_reg_skip_orDefault = Rsh_const(CCP, 32);
    goto L11_;
  } else {
  // L11(skip)
    Rsh_Fir_reg_skip_orDefault = Rsh_Fir_reg_skip;
    goto L11_;
  }

L11_:;
  // st skip = skip_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_skip_orDefault, RHO);
  (void)(Rsh_Fir_reg_skip_orDefault);
  // nlines_isMissing = missing.0(nlines)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_nlines;
  Rsh_Fir_reg_nlines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args27);
  // if nlines_isMissing then L12(0) else L12(nlines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nlines_isMissing)) {
  // L12(0)
    Rsh_Fir_reg_nlines_orDefault = Rsh_const(CCP, 32);
    goto L12_;
  } else {
  // L12(nlines)
    Rsh_Fir_reg_nlines_orDefault = Rsh_Fir_reg_nlines;
    goto L12_;
  }

L12_:;
  // st nlines = nlines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_nlines_orDefault, RHO);
  (void)(Rsh_Fir_reg_nlines_orDefault);
  // na_strings_isMissing = missing.0(na_strings)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_na_strings;
  Rsh_Fir_reg_na_strings_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if na_strings_isMissing then L13("NA") else L13(na_strings)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_strings_isMissing)) {
  // L13("NA")
    Rsh_Fir_reg_na_strings_orDefault = Rsh_const(CCP, 33);
    goto L13_;
  } else {
  // L13(na_strings)
    Rsh_Fir_reg_na_strings_orDefault = Rsh_Fir_reg_na_strings;
    goto L13_;
  }

L13_:;
  // st `na.strings` = na_strings_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_na_strings_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_strings_orDefault);
  // flush_isMissing = missing.0(flush)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_flush;
  Rsh_Fir_reg_flush_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args29);
  // if flush_isMissing then L14(FALSE) else L14(flush)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_flush_isMissing)) {
  // L14(FALSE)
    Rsh_Fir_reg_flush_orDefault = Rsh_const(CCP, 27);
    goto L14_;
  } else {
  // L14(flush)
    Rsh_Fir_reg_flush_orDefault = Rsh_Fir_reg_flush;
    goto L14_;
  }

L14_:;
  // st flush = flush_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_flush_orDefault, RHO);
  (void)(Rsh_Fir_reg_flush_orDefault);
  // fill_isMissing = missing.0(fill)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_fill;
  Rsh_Fir_reg_fill_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args30);
  // if fill_isMissing then L15(FALSE) else L15(fill)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fill_isMissing)) {
  // L15(FALSE)
    Rsh_Fir_reg_fill_orDefault = Rsh_const(CCP, 27);
    goto L15_;
  } else {
  // L15(fill)
    Rsh_Fir_reg_fill_orDefault = Rsh_Fir_reg_fill;
    goto L15_;
  }

L15_:;
  // st fill = fill_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_fill_orDefault, RHO);
  (void)(Rsh_Fir_reg_fill_orDefault);
  // strip_white_isMissing = missing.0(strip_white)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_strip_white;
  Rsh_Fir_reg_strip_white_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args31);
  // if strip_white_isMissing then L16(FALSE) else L16(strip_white)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_strip_white_isMissing)) {
  // L16(FALSE)
    Rsh_Fir_reg_strip_white_orDefault = Rsh_const(CCP, 27);
    goto L16_;
  } else {
  // L16(strip_white)
    Rsh_Fir_reg_strip_white_orDefault = Rsh_Fir_reg_strip_white;
    goto L16_;
  }

L16_:;
  // st `strip.white` = strip_white_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_strip_white_orDefault, RHO);
  (void)(Rsh_Fir_reg_strip_white_orDefault);
  // quiet_isMissing = missing.0(quiet)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_quiet;
  Rsh_Fir_reg_quiet_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args32);
  // if quiet_isMissing then L17(FALSE) else L17(quiet)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quiet_isMissing)) {
  // L17(FALSE)
    Rsh_Fir_reg_quiet_orDefault = Rsh_const(CCP, 27);
    goto L17_;
  } else {
  // L17(quiet)
    Rsh_Fir_reg_quiet_orDefault = Rsh_Fir_reg_quiet;
    goto L17_;
  }

L17_:;
  // st quiet = quiet_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_quiet_orDefault, RHO);
  (void)(Rsh_Fir_reg_quiet_orDefault);
  // blank_lines_skip_isMissing = missing.0(blank_lines_skip)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_blank_lines_skip;
  Rsh_Fir_reg_blank_lines_skip_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args33);
  // if blank_lines_skip_isMissing then L18(TRUE) else L18(blank_lines_skip)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blank_lines_skip_isMissing)) {
  // L18(TRUE)
    Rsh_Fir_reg_blank_lines_skip_orDefault = Rsh_const(CCP, 10);
    goto L18_;
  } else {
  // L18(blank_lines_skip)
    Rsh_Fir_reg_blank_lines_skip_orDefault = Rsh_Fir_reg_blank_lines_skip;
    goto L18_;
  }

L18_:;
  // st `blank.lines.skip` = blank_lines_skip_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_blank_lines_skip_orDefault, RHO);
  (void)(Rsh_Fir_reg_blank_lines_skip_orDefault);
  // multi_line_isMissing = missing.0(multi_line)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_multi_line;
  Rsh_Fir_reg_multi_line_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if multi_line_isMissing then L19(TRUE) else L19(multi_line)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_multi_line_isMissing)) {
  // L19(TRUE)
    Rsh_Fir_reg_multi_line_orDefault = Rsh_const(CCP, 10);
    goto L19_;
  } else {
  // L19(multi_line)
    Rsh_Fir_reg_multi_line_orDefault = Rsh_Fir_reg_multi_line;
    goto L19_;
  }

L19_:;
  // st `multi.line` = multi_line_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_multi_line_orDefault, RHO);
  (void)(Rsh_Fir_reg_multi_line_orDefault);
  // comment_char_isMissing = missing.0(comment_char)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_comment_char;
  Rsh_Fir_reg_comment_char_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if comment_char_isMissing then L20("") else L20(comment_char)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_comment_char_isMissing)) {
  // L20("")
    Rsh_Fir_reg_comment_char_orDefault = Rsh_const(CCP, 16);
    goto L20_;
  } else {
  // L20(comment_char)
    Rsh_Fir_reg_comment_char_orDefault = Rsh_Fir_reg_comment_char;
    goto L20_;
  }

L20_:;
  // st `comment.char` = comment_char_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_comment_char_orDefault, RHO);
  (void)(Rsh_Fir_reg_comment_char_orDefault);
  // allowEscapes_isMissing = missing.0(allowEscapes)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_allowEscapes;
  Rsh_Fir_reg_allowEscapes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if allowEscapes_isMissing then L21(FALSE) else L21(allowEscapes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_allowEscapes_isMissing)) {
  // L21(FALSE)
    Rsh_Fir_reg_allowEscapes_orDefault = Rsh_const(CCP, 27);
    goto L21_;
  } else {
  // L21(allowEscapes)
    Rsh_Fir_reg_allowEscapes_orDefault = Rsh_Fir_reg_allowEscapes;
    goto L21_;
  }

L21_:;
  // st allowEscapes = allowEscapes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_allowEscapes_orDefault, RHO);
  (void)(Rsh_Fir_reg_allowEscapes_orDefault);
  // fileEncoding_isMissing = missing.0(fileEncoding)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_fileEncoding;
  Rsh_Fir_reg_fileEncoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if fileEncoding_isMissing then L22("") else L22(fileEncoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fileEncoding_isMissing)) {
  // L22("")
    Rsh_Fir_reg_fileEncoding_orDefault = Rsh_const(CCP, 16);
    goto L22_;
  } else {
  // L22(fileEncoding)
    Rsh_Fir_reg_fileEncoding_orDefault = Rsh_Fir_reg_fileEncoding;
    goto L22_;
  }

L22_:;
  // st fileEncoding = fileEncoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_fileEncoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_fileEncoding_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if encoding_isMissing then L23("unknown") else L23(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L23("unknown")
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 42);
    goto L23_;
  } else {
  // L23(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L23_;
  }

L23_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // skipNul_isMissing = missing.0(skipNul)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_skipNul;
  Rsh_Fir_reg_skipNul_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if skipNul_isMissing then L24(FALSE) else L24(skipNul)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_skipNul_isMissing)) {
  // L24(FALSE)
    Rsh_Fir_reg_skipNul_orDefault = Rsh_const(CCP, 27);
    goto L24_;
  } else {
  // L24(skipNul)
    Rsh_Fir_reg_skipNul_orDefault = Rsh_Fir_reg_skipNul;
    goto L24_;
  }

L24_:;
  // st skipNul = skipNul_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_skipNul_orDefault, RHO);
  (void)(Rsh_Fir_reg_skipNul_orDefault);
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard1 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L25_:;
  // st `na.strings` = r9
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L50_:;
  // na_strings1 = ld `na.strings`
  Rsh_Fir_reg_na_strings1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r8 = dyn base1(<sym na.strings>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L25(r8)
  // L25(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L25_;

D0_:;
  // deopt 2 [na_strings1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_na_strings1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args43);
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c1 then L56() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L56()
    goto L56_;
  } else {
  // L27()
    goto L27_;
  }

L52_:;
  // na_strings2 = force? na_strings1
  Rsh_Fir_reg_na_strings2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_strings1_);
  // checkMissing(na_strings2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_na_strings2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r10 = dyn as_character(na_strings2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_na_strings2_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L53() else D1()
  // L53()
  goto L53_;

L54_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r13 = dyn missing(<sym n>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L26(r13)
  // L26(r13)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r13_;
  goto L26_;

L55_:;
  // r11 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L26(r11)
  // L26(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_1;
  goto L26_;

D1_:;
  // deopt 5 [r10]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard5 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L53_:;
  // goto L25(r10)
  // L25(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_1;
  goto L25_;

L56_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L28_:;
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c2 then L59() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L59()
    goto L59_;
  } else {
  // L29()
    goto L29_;
  }

L32_:;
  // c3 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c3 then L69() else L33(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L69()
    goto L69_;
  } else {
  // L33(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L33_;
  }

L57_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r17 = dyn missing1(<sym nmax>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L28(r17)
  // L28(r17)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r17_;
  goto L28_;

L58_:;
  // r15 = dyn base3(<sym nmax>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L28(r15)
  // L28(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_1;
  goto L28_;

L67_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r29 = dyn missing2(<sym file>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L32(r29)
  // L32(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L32_;

L68_:;
  // r27 = dyn base5(<sym file>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L32(r27)
  // L32(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L32_;

L29_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L64() else D5()
  // L64()
  goto L64_;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L33_:;
  // c12 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args57);
  // if c12 then L73() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L73()
    goto L73_;
  } else {
  // L35()
    goto L35_;
  }

L59_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L60() else D2()
  // L60()
  goto L60_;

L69_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard6 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

D2_:;
  // deopt 14 [n1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r33 = `!`(r31)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args59);
  // c9 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // c10 = `&&`(c8, c9)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args61);
  // goto L33(c10)
  // L33(c10)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c10_;
  goto L33_;

L35_:;
  // goto L37()
  // L37()
  goto L37_;

L37_:;
  // sym8 = ldf `is.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base8 = ldf `is.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard8 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L60_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // pmax = ldf pmax
  Rsh_Fir_reg_pmax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L61() else D3()
  // L61()
  goto L61_;

L64_:;
  // r25 = dyn stop("either specify 'nmax' or 'n', but not both.")
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

L70_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r32 = dyn missing3(<sym text>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L34(c3, r32)
  // L34(c3, r32)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L34_;

L71_:;
  // r30 = dyn base6(<sym text>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L34(c3, r30)
  // L34(c3, r30)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L34_;

L73_:;
  // textConnection = ldf textConnection
  Rsh_Fir_reg_textConnection = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L74() else D7()
  // L74()
  goto L74_;

D3_:;
  // deopt 16 [n2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [r25]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // c14 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c14 then L82() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L82()
    goto L82_;
  } else {
  // L39()
    goto L39_;
  }

L61_:;
  // p4 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   what1 = ld what;
  //   what2 = force? what1;
  //   checkMissing(what2);
  //   length = ldf length in base;
  //   r20 = dyn length(what2);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base4(<sym what>);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_4, 0, NULL, CCP, RHO);
  // r22 = dyn pmax(p4, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmax, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L62() else D4()
  // L62()
  goto L62_;

L65_:;
  // goto L30(r25)
  // L30(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L30_;

L74_:;
  // p5 = prom<V +>{
  //   text1 = ld text;
  //   text2 = force? text1;
  //   checkMissing(text2);
  //   return text2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_5, 0, NULL, CCP, RHO);
  // r35 = dyn textConnection[, encoding](p5, "UTF-8")
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_textConnection, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L75() else D8()
  // L75()
  goto L75_;

L79_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L81() else D9()
  // L81()
  goto L81_;

L80_:;
  // r40 = dyn base8(<sym file>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L38(r40)
  // L38(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L38_;

D4_:;
  // deopt 19 [n2, r22]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 41 [r35]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 52 [file1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // sym11 = ldf inherits
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base11 = ldf inherits in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard11 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L62_:;
  // r23 = `/`(n2, r22)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args77);
  // st nmax = r23
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L30(r23)
  // L30(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L30_;

L75_:;
  // st file = r35
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // st encoding = "UTF-8"
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_const(CCP, 54), RHO);
  (void)(Rsh_const(CCP, 54));
  // sym7 = ldf `on.exit`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base7 = ldf `on.exit` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L81_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c13 = `is.character`(file2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args80);
  // goto L38(c13)
  // L38(c13)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c13_;
  goto L38_;

L82_:;
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L83() else D10()
  // L83()
  goto L83_;

D10_:;
  // deopt 55 [file3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_file3_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L37()
  // L37()
  goto L37_;

L46_:;
  // r60 = `!`(r58)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args81);
  // c17 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c17 then L105() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L105()
    goto L105_;
  } else {
  // L47()
    goto L47_;
  }

L76_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r38 = dyn on_exit(<lang close(file)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L36(r38)
  // L36(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L36_;

L77_:;
  // r36 = dyn base7(<lang close(file)>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L36(r36)
  // L36(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L36_;

L83_:;
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r42 = `==`(file4, "")
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_file4_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args86);
  // c15 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args87);
  // if c15 then L84() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L84()
    goto L84_;
  } else {
  // L40()
    goto L40_;
  }

L101_:;
  // file11 = ld file
  Rsh_Fir_reg_file11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L103() else D19()
  // L103()
  goto L103_;

L102_:;
  // r57 = dyn base11(<sym file>, "connection")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L46(r57)
  // L46(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L46_;

D19_:;
  // deopt 89 [file11]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_file11_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L40_:;
  // sym9 = ldf nzchar
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base9 = ldf nzchar in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard9 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L41_:;
  // goto L45()
  // L45()
  goto L45_;

L47_:;
  // goto L48()
  // L48()
  goto L48_;

L48_:;
  // sym12 = ldf `.Internal`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base12 = ldf `.Internal` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard12 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L84_:;
  // stdin = ldf stdin
  Rsh_Fir_reg_stdin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L85() else D11()
  // L85()
  goto L85_;

L103_:;
  // file12 = force? file11
  Rsh_Fir_reg_file12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file11_);
  // checkMissing(file12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_file12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r59 = dyn inherits(file12, "connection", FALSE)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_file12_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L104() else D20()
  // L104()
  goto L104_;

L105_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L106() else D21()
  // L106()
  goto L106_;

D11_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 94 [r59]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // c16 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args93);
  // if c16 then L92() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L92()
    goto L92_;
  } else {
  // L43()
    goto L43_;
  }

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r64
  return Rsh_Fir_reg_r64_;

L85_:;
  // r43 = dyn stdin()
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdin, 0, NULL, NULL, CCP, RHO);
  // check L86() else D12()
  // L86()
  goto L86_;

L88_:;
  // fileEncoding1 = ld fileEncoding
  Rsh_Fir_reg_fileEncoding1_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L90() else D13()
  // L90()
  goto L90_;

L89_:;
  // r45 = dyn base9(<sym fileEncoding>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L42(r45)
  // L42(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L42_;

L104_:;
  // goto L46(r59)
  // L46(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L46_;

L106_:;
  // r61 = dyn stop1("'file' must be a character string or connection")
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L107() else D22()
  // L107()
  goto L107_;

L109_:;
  // file13 = ld file
  Rsh_Fir_reg_file13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L111() else D23()
  // L111()
  goto L111_;

L110_:;
  // r63 = dyn base12(<lang scan(file, what, nmax, sep, dec, quote, skip, nlines, na.strings, flush, fill, strip.white, quiet, blank.lines.skip, multi.line, comment.char, allowEscapes, encoding, skipNul)>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L49(r63)
  // L49(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L49_;

D12_:;
  // deopt 61 [r43]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 65 [fileEncoding1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_fileEncoding1_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 99 [r61]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 104 [file13]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_file13_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L43_:;
  // file8 = ldf file
  Rsh_Fir_reg_file8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L96() else D17()
  // L96()
  goto L96_;

L44_:;
  // st file = r51
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym10 = ldf `on.exit`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base10 = ldf `on.exit` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard10 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L86_:;
  // st file = r43
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // goto L41(r43)
  // L41(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L41_;

L90_:;
  // fileEncoding2 = force? fileEncoding1
  Rsh_Fir_reg_fileEncoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fileEncoding1_);
  // checkMissing(fileEncoding2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_fileEncoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r47 = dyn nzchar(fileEncoding2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_fileEncoding2_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L91() else D14()
  // L91()
  goto L91_;

L92_:;
  // file5 = ldf file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L93() else D15()
  // L93()
  goto L93_;

L107_:;
  // goto L48()
  // L48()
  goto L48_;

L111_:;
  // file14 = force? file13
  Rsh_Fir_reg_file14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file13_);
  // checkMissing(file14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_file14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // what3 = ld what
  Rsh_Fir_reg_what3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L112() else D24()
  // L112()
  goto L112_;

D14_:;
  // deopt 68 [r47]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 106 [what3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_what3_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L42(r47)
  // L42(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L42_;

L93_:;
  // p6 = prom<V +>{
  //   file6 = ld file;
  //   file7 = force? file6;
  //   checkMissing(file7);
  //   return file7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   fileEncoding3 = ld fileEncoding;
  //   fileEncoding4 = force? fileEncoding3;
  //   checkMissing(fileEncoding4);
  //   return fileEncoding4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_7, 0, NULL, CCP, RHO);
  // r50 = dyn file5[, , encoding](p6, "r", p7)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file5_, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L94() else D16()
  // L94()
  goto L94_;

L96_:;
  // p8 = prom<V +>{
  //   file9 = ld file;
  //   file10 = force? file9;
  //   checkMissing(file10);
  //   return file10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1650997039_8, 0, NULL, CCP, RHO);
  // r53 = dyn file8(p8, "r")
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file8_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

L98_:;
  // on_exit1 = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r55 = dyn on_exit1(<lang close(file)>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L41(r55)
  // L41(r55)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r55_;
  goto L41_;

L99_:;
  // r54 = dyn base10(<lang close(file)>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L41(r54)
  // L41(r54)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r54_;
  goto L41_;

L112_:;
  // what4 = force? what3
  Rsh_Fir_reg_what4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what3_);
  // checkMissing(what4)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_what4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // nmax1 = ld nmax
  Rsh_Fir_reg_nmax1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

D16_:;
  // deopt 75 [r50]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 80 [r53]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 108 [nmax1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_nmax1_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L44(r50)
  // L44(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L44_;

L97_:;
  // goto L44(r53)
  // L44(r53)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r53_;
  goto L44_;

L113_:;
  // nmax2 = force? nmax1
  Rsh_Fir_reg_nmax2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmax1_);
  // checkMissing(nmax2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_nmax2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // sep3 = ld sep
  Rsh_Fir_reg_sep3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L114() else D26()
  // L114()
  goto L114_;

D26_:;
  // deopt 110 [sep3]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_sep3_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L114_:;
  // sep4 = force? sep3
  Rsh_Fir_reg_sep4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep3_);
  // checkMissing(sep4)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sep4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // dec1 = ld dec
  Rsh_Fir_reg_dec1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L115() else D27()
  // L115()
  goto L115_;

D27_:;
  // deopt 112 [dec1]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_dec1_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L115_:;
  // dec2 = force? dec1
  Rsh_Fir_reg_dec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dec1_);
  // checkMissing(dec2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L116() else D28()
  // L116()
  goto L116_;

D28_:;
  // deopt 114 [quote1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_quote1_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L116_:;
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // skip1 = ld skip
  Rsh_Fir_reg_skip1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L117() else D29()
  // L117()
  goto L117_;

D29_:;
  // deopt 116 [skip1]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_skip1_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L117_:;
  // skip2 = force? skip1
  Rsh_Fir_reg_skip2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skip1_);
  // checkMissing(skip2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_skip2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // nlines1 = ld nlines
  Rsh_Fir_reg_nlines1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L118() else D30()
  // L118()
  goto L118_;

D30_:;
  // deopt 118 [nlines1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_nlines1_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L118_:;
  // nlines2 = force? nlines1
  Rsh_Fir_reg_nlines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlines1_);
  // checkMissing(nlines2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_nlines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // na_strings3 = ld `na.strings`
  Rsh_Fir_reg_na_strings3_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L119() else D31()
  // L119()
  goto L119_;

D31_:;
  // deopt 120 [na_strings3]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_na_strings3_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L119_:;
  // na_strings4 = force? na_strings3
  Rsh_Fir_reg_na_strings4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_strings3_);
  // checkMissing(na_strings4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_na_strings4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // flush1 = ld flush
  Rsh_Fir_reg_flush1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L120() else D32()
  // L120()
  goto L120_;

D32_:;
  // deopt 122 [flush1]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_flush1_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L120_:;
  // flush2 = force? flush1
  Rsh_Fir_reg_flush2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flush1_);
  // checkMissing(flush2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_flush2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // fill1 = ld fill
  Rsh_Fir_reg_fill1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L121() else D33()
  // L121()
  goto L121_;

D33_:;
  // deopt 124 [fill1]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_fill1_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L121_:;
  // fill2 = force? fill1
  Rsh_Fir_reg_fill2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fill1_);
  // checkMissing(fill2)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_fill2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // strip_white1 = ld `strip.white`
  Rsh_Fir_reg_strip_white1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L122() else D34()
  // L122()
  goto L122_;

D34_:;
  // deopt 126 [strip_white1]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_strip_white1_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L122_:;
  // strip_white2 = force? strip_white1
  Rsh_Fir_reg_strip_white2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strip_white1_);
  // checkMissing(strip_white2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_strip_white2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // quiet1 = ld quiet
  Rsh_Fir_reg_quiet1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L123() else D35()
  // L123()
  goto L123_;

D35_:;
  // deopt 128 [quiet1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_quiet1_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L123_:;
  // quiet2 = force? quiet1
  Rsh_Fir_reg_quiet2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quiet1_);
  // checkMissing(quiet2)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_quiet2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // blank_lines_skip1 = ld `blank.lines.skip`
  Rsh_Fir_reg_blank_lines_skip1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L124() else D36()
  // L124()
  goto L124_;

D36_:;
  // deopt 130 [blank_lines_skip1]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_blank_lines_skip1_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L124_:;
  // blank_lines_skip2 = force? blank_lines_skip1
  Rsh_Fir_reg_blank_lines_skip2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blank_lines_skip1_);
  // checkMissing(blank_lines_skip2)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_blank_lines_skip2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // multi_line1 = ld `multi.line`
  Rsh_Fir_reg_multi_line1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L125() else D37()
  // L125()
  goto L125_;

D37_:;
  // deopt 132 [multi_line1]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_multi_line1_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L125_:;
  // multi_line2 = force? multi_line1
  Rsh_Fir_reg_multi_line2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_multi_line1_);
  // checkMissing(multi_line2)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_multi_line2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // comment_char1 = ld `comment.char`
  Rsh_Fir_reg_comment_char1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L126() else D38()
  // L126()
  goto L126_;

D38_:;
  // deopt 134 [comment_char1]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_comment_char1_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L126_:;
  // comment_char2 = force? comment_char1
  Rsh_Fir_reg_comment_char2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comment_char1_);
  // checkMissing(comment_char2)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_comment_char2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // allowEscapes1 = ld allowEscapes
  Rsh_Fir_reg_allowEscapes1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L127() else D39()
  // L127()
  goto L127_;

D39_:;
  // deopt 136 [allowEscapes1]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_allowEscapes1_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L127_:;
  // allowEscapes2 = force? allowEscapes1
  Rsh_Fir_reg_allowEscapes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allowEscapes1_);
  // checkMissing(allowEscapes2)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_allowEscapes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L128() else D40()
  // L128()
  goto L128_;

D40_:;
  // deopt 138 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L128_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // skipNul1 = ld skipNul
  Rsh_Fir_reg_skipNul1_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L129() else D41()
  // L129()
  goto L129_;

D41_:;
  // deopt 140 [skipNul1]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_skipNul1_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L129_:;
  // skipNul2 = force? skipNul1
  Rsh_Fir_reg_skipNul2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skipNul1_);
  // checkMissing(skipNul2)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_skipNul2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // scan = ldf scan in base
  Rsh_Fir_reg_scan1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r65 = dyn scan(file14, what4, nmax2, sep4, dec2, quote2, skip2, nlines2, na_strings4, flush2, fill2, strip_white2, quiet2, blank_lines_skip2, multi_line2, comment_char2, allowEscapes2, encoding2, skipNul2)
  SEXP Rsh_Fir_array_args126[19];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_file14_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_what4_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_nmax2_;
  Rsh_Fir_array_args126[3] = Rsh_Fir_reg_sep4_;
  Rsh_Fir_array_args126[4] = Rsh_Fir_reg_dec2_;
  Rsh_Fir_array_args126[5] = Rsh_Fir_reg_quote2_;
  Rsh_Fir_array_args126[6] = Rsh_Fir_reg_skip2_;
  Rsh_Fir_array_args126[7] = Rsh_Fir_reg_nlines2_;
  Rsh_Fir_array_args126[8] = Rsh_Fir_reg_na_strings4_;
  Rsh_Fir_array_args126[9] = Rsh_Fir_reg_flush2_;
  Rsh_Fir_array_args126[10] = Rsh_Fir_reg_fill2_;
  Rsh_Fir_array_args126[11] = Rsh_Fir_reg_strip_white2_;
  Rsh_Fir_array_args126[12] = Rsh_Fir_reg_quiet2_;
  Rsh_Fir_array_args126[13] = Rsh_Fir_reg_blank_lines_skip2_;
  Rsh_Fir_array_args126[14] = Rsh_Fir_reg_multi_line2_;
  Rsh_Fir_array_args126[15] = Rsh_Fir_reg_comment_char2_;
  Rsh_Fir_array_args126[16] = Rsh_Fir_reg_allowEscapes2_;
  Rsh_Fir_array_args126[17] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args126[18] = Rsh_Fir_reg_skipNul2_;
  SEXP Rsh_Fir_array_arg_names42[19];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_array_arg_names42[3] = R_MissingArg;
  Rsh_Fir_array_arg_names42[4] = R_MissingArg;
  Rsh_Fir_array_arg_names42[5] = R_MissingArg;
  Rsh_Fir_array_arg_names42[6] = R_MissingArg;
  Rsh_Fir_array_arg_names42[7] = R_MissingArg;
  Rsh_Fir_array_arg_names42[8] = R_MissingArg;
  Rsh_Fir_array_arg_names42[9] = R_MissingArg;
  Rsh_Fir_array_arg_names42[10] = R_MissingArg;
  Rsh_Fir_array_arg_names42[11] = R_MissingArg;
  Rsh_Fir_array_arg_names42[12] = R_MissingArg;
  Rsh_Fir_array_arg_names42[13] = R_MissingArg;
  Rsh_Fir_array_arg_names42[14] = R_MissingArg;
  Rsh_Fir_array_arg_names42[15] = R_MissingArg;
  Rsh_Fir_array_arg_names42[16] = R_MissingArg;
  Rsh_Fir_array_arg_names42[17] = R_MissingArg;
  Rsh_Fir_array_arg_names42[18] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scan1, 19, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L130() else D42()
  // L130()
  goto L130_;

D42_:;
  // deopt 143 [r65]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L49(r65)
  // L49(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L49_;
}
SEXP Rsh_Fir_user_promise_inner1650997039_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_double;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // r = dyn double()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1650997039_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 23);
}
SEXP Rsh_Fir_user_promise_inner1650997039_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 23);
}
SEXP Rsh_Fir_user_promise_inner1650997039_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sep1_;
  SEXP Rsh_Fir_reg_sep2_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L2_:;
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r6 = dyn identical(sep2, "\n", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args23[9];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sep2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[8] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[9];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L3_:;
  // r4 = dyn base(<sym sep>, "\n")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L1_:;
  // return "'\""
  return Rsh_const(CCP, 28);

L4_:;
  // return ""
  return Rsh_const(CCP, 16);
}
SEXP Rsh_Fir_user_promise_inner1650997039_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_what1_;
  SEXP Rsh_Fir_reg_what2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
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
  // what1 = ld what
  Rsh_Fir_reg_what1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // what2 = force? what1
  Rsh_Fir_reg_what2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1_);
  // checkMissing(what2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_what2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r20 = dyn length(what2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_what2_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base4(<sym what>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1650997039_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_text1_;
  SEXP Rsh_Fir_reg_text2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return text2
  return Rsh_Fir_reg_text2_;
}
SEXP Rsh_Fir_user_promise_inner1650997039_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file6_;
  SEXP Rsh_Fir_reg_file7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // file6 = ld file
  Rsh_Fir_reg_file6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // file7 = force? file6
  Rsh_Fir_reg_file7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file6_);
  // checkMissing(file7)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_file7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return file7
  return Rsh_Fir_reg_file7_;
}
SEXP Rsh_Fir_user_promise_inner1650997039_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fileEncoding3_;
  SEXP Rsh_Fir_reg_fileEncoding4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // fileEncoding3 = ld fileEncoding
  Rsh_Fir_reg_fileEncoding3_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // fileEncoding4 = force? fileEncoding3
  Rsh_Fir_reg_fileEncoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fileEncoding3_);
  // checkMissing(fileEncoding4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_fileEncoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return fileEncoding4
  return Rsh_Fir_reg_fileEncoding4_;
}
SEXP Rsh_Fir_user_promise_inner1650997039_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file9_;
  SEXP Rsh_Fir_reg_file10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1650997039/0: expected 0, got %d", NCAPTURES);

  // file9 = ld file
  Rsh_Fir_reg_file9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // file10 = force? file9
  Rsh_Fir_reg_file10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file9_);
  // checkMissing(file10)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_file10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return file10
  return Rsh_Fir_reg_file10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
