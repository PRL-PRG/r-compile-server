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
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner146374923_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner146374923_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner146374923_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner146374923_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner146374923_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_rapply;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_rapply1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_rapply2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_rapply3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_rapply4_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_rapply5_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_rapply6_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_expression1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_list3_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_rapply7_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_rapply8_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_rapply9_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_rapply10_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_reg_r71_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner146374923
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner146374923_, RHO, CCP);
  // st rapply = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // st X = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // rapply = ldf rapply
  Rsh_Fir_reg_rapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L6_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r1 = dyn base[, d](<lang list(a=pi, b=list(c=1))>, "a test")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D3_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r9 = dyn list2(r4, "a test")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L8_:;
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // r3 = dyn base1[a, b](<sym pi>, <lang list(c=1)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L15_:;
  // p = prom<V +>{
  //   X = ld X;
  //   X1 = force? X;
  //   checkMissing(X1);
  //   return X1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   r11 = clos inner2501545716;
  //   return r11;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r13 = dyn rapply[, , how](p, p1, "replace")
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D2_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn list1(3.141592653589793, r6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L10_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r7 = dyn list(1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r5 = dyn base2[c](1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

L14_:;
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r9_;
  goto L0_;

L16_:;
  // st `X.` = r13
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D0_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L13_:;
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r8_;
  goto L1_;

L17_:;
  // p2 = prom<V +>{
  //   sym3 = ldf identical;
  //   base3 = ldf identical in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   X2 = ld X;
  //   X3 = force? X2;
  //   checkMissing(X3);
  //   X_ = ld `X.`;
  //   X_1 = force? X_;
  //   checkMissing(X_1);
  //   identical = ldf identical in base;
  //   r16 = dyn identical(X3, X_1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base3(<sym X>, <sym X.>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r18 = dyn stopifnot(p2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 34 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // rapply1 = ldf rapply
  Rsh_Fir_reg_rapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p3 = prom<V +>{
  //   X4 = ld X;
  //   X5 = force? X4;
  //   checkMissing(X5);
  //   return X5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sqrt = ld sqrt;
  //   sqrt1 = force? sqrt;
  //   checkMissing(sqrt1);
  //   return sqrt1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r21 = dyn rapply1[, , classes, how](p3, p4, "numeric", "replace")
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names10[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply1_, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 43 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // rapply2 = ldf rapply
  Rsh_Fir_reg_rapply2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p5 = prom<V +>{
  //   X6 = ld X;
  //   X7 = force? X6;
  //   checkMissing(X7);
  //   return X7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   deparse = ld deparse;
  //   deparse1 = force? deparse;
  //   checkMissing(deparse1);
  //   return deparse1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r24 = dyn rapply2[, , control](p5, p6, "all")
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply2_, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // rapply3 = ldf rapply
  Rsh_Fir_reg_rapply3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p7 = prom<V +>{
  //   X8 = ld X;
  //   X9 = force? X8;
  //   checkMissing(X9);
  //   return X9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   nchar = ld nchar;
  //   nchar1 = force? nchar;
  //   checkMissing(nchar1);
  //   return nchar1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r27 = dyn rapply3[, , classes, deflt, how](p7, p8, "character", NA_INT, "list")
  SEXP Rsh_Fir_array_args25[5];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args25[4] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply3_, 5, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

D12_:;
  // deopt 61 [r27]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // rapply4 = ldf rapply
  Rsh_Fir_reg_rapply4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p9 = prom<V +>{
  //   X10 = ld X;
  //   X11 = force? X10;
  //   checkMissing(X11);
  //   return X11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   nchar2 = ld nchar;
  //   nchar3 = force? nchar2;
  //   checkMissing(nchar3);
  //   return nchar3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r30 = dyn rapply4[, , classes, deflt, how](p9, p10, "character", NA_INT, "unlist")
  SEXP Rsh_Fir_array_args28[5];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args28[4] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names13[5];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names13[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply4_, 5, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 72 [r30]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // rapply5 = ldf rapply
  Rsh_Fir_reg_rapply5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

D15_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p11 = prom<V +>{
  //   X12 = ld X;
  //   X13 = force? X12;
  //   checkMissing(X13);
  //   return X13;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   nchar4 = ld nchar;
  //   nchar5 = force? nchar4;
  //   checkMissing(nchar5);
  //   return nchar5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r33 = dyn rapply5[, , classes, how](p11, p12, "character", "unlist")
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply5_, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

D16_:;
  // deopt 81 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L28_:;
  // rapply6 = ldf rapply
  Rsh_Fir_reg_rapply6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L29() else D17()
  // L29()
  goto L29_;

D17_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p13 = prom<V +>{
  //   X14 = ld X;
  //   X15 = force? X14;
  //   checkMissing(X15);
  //   return X15;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   log = ld log;
  //   log1 = force? log;
  //   checkMissing(log1);
  //   return log1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r36 = dyn rapply6[, , classes, how, base](p13, p14, "numeric", "replace", 2.0)
  SEXP Rsh_Fir_array_args34[5];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[5];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names15[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names15[4] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply6_, 5, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L30() else D18()
  // L30()
  goto L30_;

D18_:;
  // deopt 92 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // sym4 = ldf expression
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base4 = ldf expression in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard4 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L3_:;
  // st E = r38
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard5 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L31_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r39 = dyn expression(<lang list(a=pi, b=expression(c=`*`(C1, C2)))>, "a test")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r39)
  // L3(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L3_;

L32_:;
  // r37 = dyn base4[, d](<lang list(a=pi, b=expression(c=`*`(C1, C2)))>, "a test")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(r37)
  // L3(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L3_;

L4_:;
  // st LE = r41
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // rapply7 = ldf rapply
  Rsh_Fir_reg_rapply7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L38() else D20()
  // L38()
  goto L38_;

L33_:;
  // sym6 = ldf expression
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf expression in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard6 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r40 = dyn base5[, d](<lang expression(a=pi, b=expression(c=`*`(C1, C2)))>, "a test")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r40)
  // L4(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L4_;

D20_:;
  // deopt 108 []
  Rsh_Fir_deopt(108, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // list3 = ldf list in base
  Rsh_Fir_reg_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r45 = dyn list3(r43, "a test")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list3_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L37() else D19()
  // L37()
  goto L37_;

L35_:;
  // expression1 = ldf expression in base
  Rsh_Fir_reg_expression1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r44 = dyn expression1(<sym pi>, <lang expression(c=`*`(C1, C2))>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression1_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L5(r44)
  // L5(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L5_;

L36_:;
  // r42 = dyn base6[a, b](<sym pi>, <lang expression(c=`*`(C1, C2))>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L5(r42)
  // L5(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L5_;

L38_:;
  // p15 = prom<V +>{
  //   E = ld E;
  //   E1 = force? E;
  //   checkMissing(E1);
  //   return E1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   nchar6 = ld nchar;
  //   nchar7 = force? nchar6;
  //   checkMissing(nchar7);
  //   return nchar7;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r48 = dyn rapply7[, , how](p15, p16, "replace")
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply7_, 3, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L39() else D21()
  // L39()
  goto L39_;

D19_:;
  // deopt 105 [r45]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 113 [r48]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L4(r45)
  // L4(r45)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r45_;
  goto L4_;

L39_:;
  // rapply8 = ldf rapply
  Rsh_Fir_reg_rapply8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L40() else D22()
  // L40()
  goto L40_;

D22_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p17 = prom<V +>{
  //   E2 = ld E;
  //   E3 = force? E2;
  //   checkMissing(E3);
  //   return E3;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   nchar8 = ld nchar;
  //   nchar9 = force? nchar8;
  //   checkMissing(nchar9);
  //   return nchar9;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r51 = dyn rapply8[, , classes, deflt, how](p17, p18, "character", NA_INT, "unlist")
  SEXP Rsh_Fir_array_args49[5];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names23[5];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names23[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names23[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply8_, 5, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L41() else D23()
  // L41()
  goto L41_;

D23_:;
  // deopt 124 [r51]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L41_:;
  // rapply9 = ldf rapply
  Rsh_Fir_reg_rapply9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L42() else D24()
  // L42()
  goto L42_;

D24_:;
  // deopt 126 []
  Rsh_Fir_deopt(126, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p19 = prom<V +>{
  //   LE = ld LE;
  //   LE1 = force? LE;
  //   checkMissing(LE1);
  //   return LE1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   as_character = ld `as.character`;
  //   as_character1 = force? as_character;
  //   checkMissing(as_character1);
  //   return as_character1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r54 = dyn rapply9(p19, p20)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply9_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L43() else D25()
  // L43()
  goto L43_;

D25_:;
  // deopt 129 [r54]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // rapply10 = ldf rapply
  Rsh_Fir_reg_rapply10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L44() else D26()
  // L44()
  goto L44_;

D26_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p21 = prom<V +>{
  //   LE2 = ld LE;
  //   LE3 = force? LE2;
  //   checkMissing(LE3);
  //   return LE3;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // p22 = prom<V +>{
  //   nchar10 = ld nchar;
  //   nchar11 = force? nchar10;
  //   checkMissing(nchar11);
  //   return nchar11;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r57 = dyn rapply10(p21, p22)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply10_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L45() else D27()
  // L45()
  goto L45_;

D27_:;
  // deopt 134 [r57]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L45_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L46() else D28()
  // L46()
  goto L46_;

D28_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p27 = prom<V +>{
  //   sym7 = ldf identical;
  //   base7 = ldf identical in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0():
  //   sym8 = ldf identical;
  //   base8 = ldf identical in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L2():
  //   E4 = ld E;
  //   E5 = force? E4;
  //   checkMissing(E5);
  //   rapply11 = ldf rapply;
  //   p23 = prom<V +>{
  //     E6 = ld E;
  //     E7 = force? E6;
  //     checkMissing(E7);
  //     return E7;
  //   };
  //   p24 = prom<V +>{
  //     identity = ld identity;
  //     identity1 = force? identity;
  //     checkMissing(identity1);
  //     return identity1;
  //   };
  //   r62 = dyn rapply11[, , how](p23, p24, "replace");
  //   identical1 = ldf identical in base;
  //   r63 = dyn identical1(E5, r62, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L3():
  //   r58 = dyn base7(<sym E>, <lang rapply(E, identity, how="replace")>);
  //   goto L0();
  // L1(r65):
  //   return r65;
  // L4():
  //   LE4 = ld LE;
  //   LE5 = force? LE4;
  //   checkMissing(LE5);
  //   rapply12 = ldf rapply;
  //   p25 = prom<V +>{
  //     LE6 = ld LE;
  //     LE7 = force? LE6;
  //     checkMissing(LE7);
  //     return LE7;
  //   };
  //   p26 = prom<V +>{
  //     identity2 = ld identity;
  //     identity3 = force? identity2;
  //     checkMissing(identity3);
  //     return identity3;
  //   };
  //   r68 = dyn rapply12[, , how](p25, p26, "replace");
  //   identical2 = ldf identical in base;
  //   r69 = dyn identical2(LE5, r68, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L1(r69);
  // L5():
  //   r64 = dyn base8(<sym LE>, <lang rapply(LE, identity, how="replace")>);
  //   goto L1(r64);
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r71 = dyn stopifnot1[exprs](p27)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L47() else D29()
  // L47()
  goto L47_;

D29_:;
  // deopt 139 [r71]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r71
  return Rsh_Fir_reg_r71_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_X1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return X1
  return Rsh_Fir_reg_X1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r11 = clos inner2501545716
  Rsh_Fir_reg_r11_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_reg_X_;
  SEXP Rsh_Fir_reg_X_1_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
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
  // X2 = ld X
  Rsh_Fir_reg_X2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X3 = force? X2
  Rsh_Fir_reg_X3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X2_);
  // checkMissing(X3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_X3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // X_ = ld `X.`
  Rsh_Fir_reg_X_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // X_1 = force? X_
  Rsh_Fir_reg_X_1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X_);
  // checkMissing(X_1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_X_1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r16 = dyn identical(X3, X_1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args14[9];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_X_1_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[9];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_array_arg_names7[7] = R_MissingArg;
  Rsh_Fir_array_arg_names7[8] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base3(<sym X>, <sym X.>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X4_;
  SEXP Rsh_Fir_reg_X5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X4 = ld X
  Rsh_Fir_reg_X4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X5 = force? X4
  Rsh_Fir_reg_X5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X4_);
  // checkMissing(X5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_X5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return X5
  return Rsh_Fir_reg_X5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sqrt;
  SEXP Rsh_Fir_reg_sqrt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sqrt = ld sqrt
  Rsh_Fir_reg_sqrt = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // sqrt1 = force? sqrt
  Rsh_Fir_reg_sqrt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sqrt);
  // checkMissing(sqrt1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sqrt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return sqrt1
  return Rsh_Fir_reg_sqrt1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_reg_X7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X6 = ld X
  Rsh_Fir_reg_X6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X7 = force? X6
  Rsh_Fir_reg_X7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X6_);
  // checkMissing(X7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_X7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return X7
  return Rsh_Fir_reg_X7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_deparse1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // deparse = ld deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // deparse1 = force? deparse
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparse);
  // checkMissing(deparse1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_deparse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return deparse1
  return Rsh_Fir_reg_deparse1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X8_;
  SEXP Rsh_Fir_reg_X9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X8 = ld X
  Rsh_Fir_reg_X8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X9 = force? X8
  Rsh_Fir_reg_X9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X8_);
  // checkMissing(X9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_X9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return X9
  return Rsh_Fir_reg_X9_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_nchar1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar = ld nchar
  Rsh_Fir_reg_nchar = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar1 = force? nchar
  Rsh_Fir_reg_nchar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar);
  // checkMissing(nchar1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_nchar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return nchar1
  return Rsh_Fir_reg_nchar1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X10_;
  SEXP Rsh_Fir_reg_X11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X10 = ld X
  Rsh_Fir_reg_X10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X11 = force? X10
  Rsh_Fir_reg_X11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X10_);
  // checkMissing(X11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_X11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return X11
  return Rsh_Fir_reg_X11_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar2_;
  SEXP Rsh_Fir_reg_nchar3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar2 = ld nchar
  Rsh_Fir_reg_nchar2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar3 = force? nchar2
  Rsh_Fir_reg_nchar3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar2_);
  // checkMissing(nchar3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_nchar3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return nchar3
  return Rsh_Fir_reg_nchar3_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X12_;
  SEXP Rsh_Fir_reg_X13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X12 = ld X
  Rsh_Fir_reg_X12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X13 = force? X12
  Rsh_Fir_reg_X13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X12_);
  // checkMissing(X13)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_X13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return X13
  return Rsh_Fir_reg_X13_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar4_;
  SEXP Rsh_Fir_reg_nchar5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar4 = ld nchar
  Rsh_Fir_reg_nchar4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar5 = force? nchar4
  Rsh_Fir_reg_nchar5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar4_);
  // checkMissing(nchar5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nchar5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return nchar5
  return Rsh_Fir_reg_nchar5_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X14_;
  SEXP Rsh_Fir_reg_X15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X14 = ld X
  Rsh_Fir_reg_X14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // X15 = force? X14
  Rsh_Fir_reg_X15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X14_);
  // checkMissing(X15)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_X15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return X15
  return Rsh_Fir_reg_X15_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_log;
  SEXP Rsh_Fir_reg_log1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // log = ld log
  Rsh_Fir_reg_log = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // log1 = force? log
  Rsh_Fir_reg_log1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log);
  // checkMissing(log1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_log1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return log1
  return Rsh_Fir_reg_log1_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_E;
  SEXP Rsh_Fir_reg_E1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // E = ld E
  Rsh_Fir_reg_E = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // E1 = force? E
  Rsh_Fir_reg_E1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_E);
  // checkMissing(E1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_E1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return E1
  return Rsh_Fir_reg_E1_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar6_;
  SEXP Rsh_Fir_reg_nchar7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar6 = ld nchar
  Rsh_Fir_reg_nchar6_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar7 = force? nchar6
  Rsh_Fir_reg_nchar7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar6_);
  // checkMissing(nchar7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_nchar7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return nchar7
  return Rsh_Fir_reg_nchar7_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_E2_;
  SEXP Rsh_Fir_reg_E3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // E2 = ld E
  Rsh_Fir_reg_E2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // E3 = force? E2
  Rsh_Fir_reg_E3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_E2_);
  // checkMissing(E3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_E3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return E3
  return Rsh_Fir_reg_E3_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar8_;
  SEXP Rsh_Fir_reg_nchar9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar8 = ld nchar
  Rsh_Fir_reg_nchar8_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar9 = force? nchar8
  Rsh_Fir_reg_nchar9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar8_);
  // checkMissing(nchar9)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_nchar9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return nchar9
  return Rsh_Fir_reg_nchar9_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LE;
  SEXP Rsh_Fir_reg_LE1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LE = ld LE
  Rsh_Fir_reg_LE = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // LE1 = force? LE
  Rsh_Fir_reg_LE1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LE);
  // checkMissing(LE1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_LE1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return LE1
  return Rsh_Fir_reg_LE1_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_as_character1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_character = ld `as.character`
  Rsh_Fir_reg_as_character = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // as_character1 = force? as_character
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_character);
  // checkMissing(as_character1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_as_character1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return as_character1
  return Rsh_Fir_reg_as_character1_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LE2_;
  SEXP Rsh_Fir_reg_LE3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LE2 = ld LE
  Rsh_Fir_reg_LE2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // LE3 = force? LE2
  Rsh_Fir_reg_LE3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LE2_);
  // checkMissing(LE3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_LE3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return LE3
  return Rsh_Fir_reg_LE3_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nchar10_;
  SEXP Rsh_Fir_reg_nchar11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nchar10 = ld nchar
  Rsh_Fir_reg_nchar10_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nchar11 = force? nchar10
  Rsh_Fir_reg_nchar11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchar10_);
  // checkMissing(nchar11)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nchar11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return nchar11
  return Rsh_Fir_reg_nchar11_;
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_E4_;
  SEXP Rsh_Fir_reg_E5_;
  SEXP Rsh_Fir_reg_rapply11_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_LE4_;
  SEXP Rsh_Fir_reg_LE5_;
  SEXP Rsh_Fir_reg_rapply12_;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r69_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // E4 = ld E
  Rsh_Fir_reg_E4_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // E5 = force? E4
  Rsh_Fir_reg_E5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_E4_);
  // checkMissing(E5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_E5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // rapply11 = ldf rapply
  Rsh_Fir_reg_rapply11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p23 = prom<V +>{
  //   E6 = ld E;
  //   E7 = force? E6;
  //   checkMissing(E7);
  //   return E7;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main24, 0, NULL, CCP, RHO);
  // p24 = prom<V +>{
  //   identity = ld identity;
  //   identity1 = force? identity;
  //   checkMissing(identity1);
  //   return identity1;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main25, 0, NULL, CCP, RHO);
  // r62 = dyn rapply11[, , how](p23, p24, "replace")
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply11_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r63 = dyn identical1(E5, r62, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args62[9];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_E5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args62[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[9];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_array_arg_names27[5] = R_MissingArg;
  Rsh_Fir_array_arg_names27[6] = R_MissingArg;
  Rsh_Fir_array_arg_names27[7] = R_MissingArg;
  Rsh_Fir_array_arg_names27[8] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L3_:;
  // r58 = dyn base7(<sym E>, <lang rapply(E, identity, how="replace")>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // return r65
  return Rsh_Fir_reg_r65_;

L4_:;
  // LE4 = ld LE
  Rsh_Fir_reg_LE4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // LE5 = force? LE4
  Rsh_Fir_reg_LE5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LE4_);
  // checkMissing(LE5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_LE5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // rapply12 = ldf rapply
  Rsh_Fir_reg_rapply12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p25 = prom<V +>{
  //   LE6 = ld LE;
  //   LE7 = force? LE6;
  //   checkMissing(LE7);
  //   return LE7;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main26, 0, NULL, CCP, RHO);
  // p26 = prom<V +>{
  //   identity2 = ld identity;
  //   identity3 = force? identity2;
  //   checkMissing(identity3);
  //   return identity3;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main27, 0, NULL, CCP, RHO);
  // r68 = dyn rapply12[, , how](p25, p26, "replace")
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply12_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names29, CCP, RHO);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r69 = dyn identical2(LE5, r68, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args68[9];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_LE5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args68[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args68[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args68[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args68[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args68[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args68[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names30[9];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_array_arg_names30[4] = R_MissingArg;
  Rsh_Fir_array_arg_names30[5] = R_MissingArg;
  Rsh_Fir_array_arg_names30[6] = R_MissingArg;
  Rsh_Fir_array_arg_names30[7] = R_MissingArg;
  Rsh_Fir_array_arg_names30[8] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r69)
  // L1(r69)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r69_;
  goto L1_;

L5_:;
  // r64 = dyn base8(<sym LE>, <lang rapply(LE, identity, how="replace")>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r64)
  // L1(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_E6_;
  SEXP Rsh_Fir_reg_E7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // E6 = ld E
  Rsh_Fir_reg_E6_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // E7 = force? E6
  Rsh_Fir_reg_E7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_E6_);
  // checkMissing(E7)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_E7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return E7
  return Rsh_Fir_reg_E7_;
}
SEXP Rsh_Fir_user_promise_main25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_identity;
  SEXP Rsh_Fir_reg_identity1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // identity = ld identity
  Rsh_Fir_reg_identity = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // identity1 = force? identity
  Rsh_Fir_reg_identity1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_identity);
  // checkMissing(identity1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_identity1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return identity1
  return Rsh_Fir_reg_identity1_;
}
SEXP Rsh_Fir_user_promise_main26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LE6_;
  SEXP Rsh_Fir_reg_LE7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LE6 = ld LE
  Rsh_Fir_reg_LE6_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // LE7 = force? LE6
  Rsh_Fir_reg_LE7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LE6_);
  // checkMissing(LE7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_LE7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return LE7
  return Rsh_Fir_reg_LE7_;
}
SEXP Rsh_Fir_user_promise_main27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_identity2_;
  SEXP Rsh_Fir_reg_identity3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // identity2 = ld identity
  Rsh_Fir_reg_identity2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // identity3 = force? identity2
  Rsh_Fir_reg_identity3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_identity2_);
  // checkMissing(identity3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_identity3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return identity3
  return Rsh_Fir_reg_identity3_;
}
SEXP Rsh_Fir_user_function_inner146374923_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner146374923 dynamic dispatch ([object, f, classes, deflt, how, `...`])

  return Rsh_Fir_user_version_inner146374923_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner146374923_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner146374923 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner146374923/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_classes;
  SEXP Rsh_Fir_reg_deflt;
  SEXP Rsh_Fir_reg_how;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_classes_isMissing;
  SEXP Rsh_Fir_reg_classes_orDefault;
  SEXP Rsh_Fir_reg_deflt_isMissing;
  SEXP Rsh_Fir_reg_deflt_orDefault;
  SEXP Rsh_Fir_reg_how_isMissing;
  SEXP Rsh_Fir_reg_how_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_classes1_;
  SEXP Rsh_Fir_reg_classes2_;
  SEXP Rsh_Fir_reg_deflt1_;
  SEXP Rsh_Fir_reg_deflt2_;
  SEXP Rsh_Fir_reg_how3_;
  SEXP Rsh_Fir_reg_how4_;
  SEXP Rsh_Fir_reg_rapply1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_how5_;
  SEXP Rsh_Fir_reg_how6_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_res2_;
  SEXP Rsh_Fir_reg_res3_;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_f = PARAMS[1];
  Rsh_Fir_reg_classes = PARAMS[2];
  Rsh_Fir_reg_deflt = PARAMS[3];
  Rsh_Fir_reg_how = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // classes_isMissing = missing.0(classes)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_reg_classes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args71);
  // if classes_isMissing then L0("ANY") else L0(classes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classes_isMissing)) {
  // L0("ANY")
    Rsh_Fir_reg_classes_orDefault = Rsh_const(CCP, 48);
    goto L0_;
  } else {
  // L0(classes)
    Rsh_Fir_reg_classes_orDefault = Rsh_Fir_reg_classes;
    goto L0_;
  }

L0_:;
  // st classes = classes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_classes_orDefault, RHO);
  (void)(Rsh_Fir_reg_classes_orDefault);
  // deflt_isMissing = missing.0(deflt)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_deflt;
  Rsh_Fir_reg_deflt_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args72);
  // if deflt_isMissing then L1(NULL) else L1(deflt)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deflt_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_deflt_orDefault = Rsh_const(CCP, 49);
    goto L1_;
  } else {
  // L1(deflt)
    Rsh_Fir_reg_deflt_orDefault = Rsh_Fir_reg_deflt;
    goto L1_;
  }

L1_:;
  // st deflt = deflt_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_deflt_orDefault, RHO);
  (void)(Rsh_Fir_reg_deflt_orDefault);
  // how_isMissing = missing.0(how)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_how;
  Rsh_Fir_reg_how_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args73);
  // if how_isMissing then L2() else L3(how)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_how_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(how)
    Rsh_Fir_reg_how_orDefault = Rsh_Fir_reg_how;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("unlist", "replace", "list");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("unlist", "replace", "list");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner146374923_, 0, NULL, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_how_orDefault = Rsh_Fir_reg_p1;
  goto L3_;

L3_:;
  // st how = how_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_how_orDefault, RHO);
  (void)(Rsh_Fir_reg_how_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   how1 = ld how;
  //   how2 = force? how1;
  //   checkMissing(how2);
  //   return how2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner146374923_1, 0, NULL, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L7_:;
  // st how = r5
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // st res = r7
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // how5 = ld how
  Rsh_Fir_reg_how5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

L8_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base1(<lang rapply(object, f, classes, deflt, how)>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L4_;

D2_:;
  // deopt 7 [object1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 20 [how5]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_how5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L10_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L16_:;
  // how6 = force? how5
  Rsh_Fir_reg_how6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_how5_);
  // checkMissing(how6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_how6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r9 = `==`(how6, "unlist")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_how6_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args83);
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args84);
  // if c1 then L17() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L5()
    goto L5_;
  }

D3_:;
  // deopt 9 [f1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L5_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

L11_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L17_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D4_:;
  // deopt 11 [classes1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 30 [res2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_res2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L12_:;
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // deflt1 = ld deflt
  Rsh_Fir_reg_deflt1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L18_:;
  // p2 = prom<V +>{
  //   res = ld res;
  //   res1 = force? res;
  //   checkMissing(res1);
  //   return res1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner146374923_2, 0, NULL, CCP, RHO);
  // r11 = dyn unlist[, recursive](p2, TRUE)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

L21_:;
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res3
  return Rsh_Fir_reg_res3_;

D5_:;
  // deopt 13 [deflt1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_deflt1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 29 [r11]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L13_:;
  // deflt2 = force? deflt1
  Rsh_Fir_reg_deflt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deflt1_);
  // checkMissing(deflt2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_deflt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // how3 = ld how
  Rsh_Fir_reg_how3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_1;

D6_:;
  // deopt 15 [how3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_how3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L14_:;
  // how4 = force? how3
  Rsh_Fir_reg_how4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_how3_);
  // checkMissing(how4)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_how4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // rapply = ldf rapply in base
  Rsh_Fir_reg_rapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r8 = dyn rapply(object2, f2, classes2, deflt2, how4)
  SEXP Rsh_Fir_array_args92[5];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_array_args92[3] = Rsh_Fir_reg_deflt2_;
  Rsh_Fir_array_args92[4] = Rsh_Fir_reg_how4_;
  SEXP Rsh_Fir_array_arg_names38[5];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_array_arg_names38[3] = R_MissingArg;
  Rsh_Fir_array_arg_names38[4] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rapply1, 5, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner146374923_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner146374923/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r2 = dyn c("unlist", "replace", "list")
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("unlist", "replace", "list")
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner146374923_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_how1_;
  SEXP Rsh_Fir_reg_how2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner146374923/0: expected 0, got %d", NCAPTURES);

  // how1 = ld how
  Rsh_Fir_reg_how1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // how2 = force? how1
  Rsh_Fir_reg_how2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_how1_);
  // checkMissing(how2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_how2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return how2
  return Rsh_Fir_reg_how2_;
}
SEXP Rsh_Fir_user_promise_inner146374923_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_res;
  SEXP Rsh_Fir_reg_res1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner146374923/0: expected 0, got %d", NCAPTURES);

  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return res1
  return Rsh_Fir_reg_res1_;
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
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
