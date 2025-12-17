#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner776347575_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner776347575_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner776347575_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner776347575_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_lengths;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_list2DF;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_list2DF1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_list2DF2_;
  SEXP Rsh_Fir_reg_r16_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner776347575
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner776347575_, RHO, CCP);
  // st list2DF = r
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
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L2_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(<lang character()>, "A", <lang c("B", "C")>)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn character()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L10_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r9 = dyn lengths(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L11_:;
  // st n = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // list2DF = ldf list2DF
  Rsh_Fir_reg_list2DF = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r7 = dyn list(r3, "A", r5)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L6_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn c("B", "C")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r4 = dyn base1("B", "C")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

L12_:;
  // p1 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   list1 = ldf list in base;
  //   r12 = dyn list1(x3, n1);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2[x, n](<sym x>, <sym n>);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r14 = dyn list2DF(p1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2DF, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D2_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L9_:;
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r7_;
  goto L0_;

L13_:;
  // list2DF1 = ldf list2DF
  Rsh_Fir_reg_list2DF1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r15 = dyn list2DF1()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2DF1_, 0, NULL, NULL, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 29 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // list2DF2 = ldf list2DF
  Rsh_Fir_reg_list2DF2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r16 = dyn list2DF2[nrow](3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2DF2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 34 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r12 = dyn list1(x3, n1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2[x, n](<sym x>, <sym n>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner776347575_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner776347575 dynamic dispatch ([x, nrow])

  return Rsh_Fir_user_version_inner776347575_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner776347575_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner776347575 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner776347575/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_x_isMissing;
  SEXP Rsh_Fir_reg_x_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_nrow_isMissing;
  SEXP Rsh_Fir_reg_nrow_orDefault;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_nrow5_;
  SEXP Rsh_Fir_reg_nrow6_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_character1;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg__set_row_names;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_nrow = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x1;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if x_isMissing then L0() else L1(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x1;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list in base;
  //   r2 = dyn list();
  //   goto L0(r2);
  // L2():
  //   r = dyn base();
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // nrow_isMissing = missing.0(nrow)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_nrow;
  Rsh_Fir_reg_nrow_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if nrow_isMissing then L2(0) else L2(nrow)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nrow_isMissing)) {
  // L2(0)
    Rsh_Fir_reg_nrow_orDefault = Rsh_const(CCP, 14);
    goto L2_;
  } else {
  // L2(nrow)
    Rsh_Fir_reg_nrow_orDefault = Rsh_Fir_reg_nrow;
    goto L2_;
  }

L2_:;
  // st nrow = nrow_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_nrow_orDefault, RHO);
  (void)(Rsh_Fir_reg_nrow_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p1 = prom<V +>{
  //   sym1 = ldf `is.list`;
  //   base1 = ldf `is.list` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   is_list = ldf `is.list` in base;
  //   r6 = dyn is_list(x2);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym x>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym2 = ldf `is.null`;
  //   base2 = ldf `is.null` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r9):
  //   c1 = `as.logical`(r9);
  //   if c1 then L1(c1) else L4();
  // L2():
  //   nrow1 = ld nrow;
  //   nrow2 = force? nrow1;
  //   checkMissing(nrow2);
  //   c = `==`(nrow2, NULL);
  //   goto L0(c);
  // L3():
  //   r8 = dyn base2(<sym nrow>);
  //   goto L0(r8);
  // L1(c2):
  //   return c2;
  // L4():
  //   nrow3 = ld nrow;
  //   nrow4 = force? nrow3;
  //   checkMissing(nrow4);
  //   r10 = `>=`(nrow4, 0);
  //   c4 = `as.logical`(r10);
  //   c5 = `||`(c1, c4);
  //   goto L1(c5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_2, 0, NULL, CCP, RHO);
  // r12 = dyn stopifnot(p1, p2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 4 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L3_:;
  // st n = r14
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // c7 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c7 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L17_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_;
  goto L3_;

D2_:;
  // deopt 7 [x3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard5 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L8_:;
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard6 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L19_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn length(x4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L21_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard4 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

D3_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L5_:;
  // r23 = `>`(r17, 1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args40);
  // c8 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c8 then L27() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L27()
    goto L27_;
  } else {
  // L6()
    goto L6_;
  }

L9_:;
  // c10 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c10 then L35() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L35()
    goto L35_;
  } else {
  // L10()
    goto L10_;
  }

L11_:;
  // c12 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c12 then L43() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L43()
    goto L43_;
  } else {
  // L13()
    goto L13_;
  }

L20_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r15_1;
  goto L3_;

L22_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L23_:;
  // r16 = dyn base4(<lang `<-`(nrow, unique(lengths(x)))>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_1;
  goto L5_;

L32_:;
  // nrow5 = ld nrow
  Rsh_Fir_reg_nrow5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

L33_:;
  // r27 = dyn base5(<sym nrow>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L9_;

L37_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard7 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L38_:;
  // r29 = dyn base6(<lang names(x)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L11_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 30 [nrow5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_nrow5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r25_ = Rsh_const(CCP, 18);
  goto L7_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L10_:;
  // goto L8()
  // L8()
  goto L8_;

L12_:;
  // c11 = `==`(r32, NULL)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args48);
  // goto L11(c11)
  // L11(c11)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c11_;
  goto L11_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

L24_:;
  // p4 = prom<V +>{
  //   lengths = ldf lengths;
  //   p3 = prom<V +>{
  //     x5 = ld x;
  //     x6 = force? x5;
  //     checkMissing(x6);
  //     return x6;
  //   };
  //   r19 = dyn lengths(p3);
  //   return r19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_3, 0, NULL, CCP, RHO);
  // r21 = dyn unique(p4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

L27_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

L34_:;
  // nrow6 = force? nrow5
  Rsh_Fir_reg_nrow6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow5_);
  // checkMissing(nrow6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_nrow6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c9 = `==`(nrow6, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nrow6_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // goto L9(c9)
  // L9(c9)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c9_;
  goto L9_;

L35_:;
  // st nrow = 0
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 14), RHO);
  (void)(Rsh_const(CCP, 14));
  // goto L8()
  // L8()
  goto L8_;

L39_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L40_:;
  // r31 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

L43_:;
  // character = ldf character
  Rsh_Fir_reg_character1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

D5_:;
  // deopt 17 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 [x7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 ["data.frame", l1, "data.frame"]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 27);
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L25_:;
  // st nrow = r21
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r22 = dyn length1(r21)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L28_:;
  // r24 = dyn stop("all variables should have the same length")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

L41_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r33 = dyn names(x8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

L44_:;
  // p5 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_5, 0, NULL, CCP, RHO);
  // r35 = dyn character(p5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

L49_:;
  // r38 = dyn class__(l1, NULL, "data.frame")
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D6_:;
  // deopt 20 [r22]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 26 [r24]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 44 [r33]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 49 [r35]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 62 ["data.frame", r38]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L5(r22)
  // L5(r22)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r22_;
  goto L5_;

L29_:;
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L7_;

L42_:;
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L12_;

L45_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

L50_:;
  // st x = r38
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L51() else D18()
  // L51()
  goto L51_;

D14_:;
  // deopt 51 [r35, l, r35]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(51, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // r36 = dyn names__(l, NULL, r35)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L47() else D15()
  // L47()
  goto L47_;

L51_:;
  // p6 = prom<V +>{
  //   nrow7 = ld nrow;
  //   nrow8 = force? nrow7;
  //   checkMissing(nrow8);
  //   return nrow8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_6, 0, NULL, CCP, RHO);
  // r40 = dyn _set_row_names(p6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

D15_:;
  // deopt 53 [r35, r36]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 67 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L47_:;
  // st x = r36
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L14()
  // L14()
  goto L14_;

L52_:;
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L53() else D20()
  // L53()
  goto L53_;

D20_:;
  // deopt 69 [r40, l2, r40]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L53_:;
  // r41 = dyn attr__(l2, NULL, "row.names", r40)
  SEXP Rsh_Fir_array_args65[4];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args65[3] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L54() else D21()
  // L54()
  goto L54_;

D21_:;
  // deopt 72 [r40, r41]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L54_:;
  // st x = r41
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

D22_:;
  // deopt 74 [x9]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L55_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner776347575_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner776347575_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_1;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn is_list(x2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner776347575_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_nrow1_;
  SEXP Rsh_Fir_reg_nrow2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_nrow3_;
  SEXP Rsh_Fir_reg_nrow4_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c1 then L1(c1) else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L1_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // nrow1 = ld nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nrow2 = force? nrow1
  Rsh_Fir_reg_nrow2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow1_);
  // checkMissing(nrow2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_nrow2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c = `==`(nrow2, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_nrow2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args25);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_c1;
  goto L0_;

L3_:;
  // r8 = dyn base2(<sym nrow>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L0_;

L1_:;
  // return c2
  return Rsh_Fir_reg_c2_;

L4_:;
  // nrow3 = ld nrow
  Rsh_Fir_reg_nrow3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nrow4 = force? nrow3
  Rsh_Fir_reg_nrow4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow3_);
  // checkMissing(nrow4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_nrow4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r10 = `>=`(nrow4, 0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_nrow4_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args28);
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args30);
  // goto L1(c5)
  // L1(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner776347575_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lengths1;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // lengths = ldf lengths
  Rsh_Fir_reg_lengths1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p3 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner776347575_4, 0, NULL, CCP, RHO);
  // r19 = dyn lengths(p3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths1, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner776347575_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner776347575_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_n1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // n = ld n
  Rsh_Fir_reg_n1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_n1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_1;
}
SEXP Rsh_Fir_user_promise_inner776347575_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrow7_;
  SEXP Rsh_Fir_reg_nrow8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner776347575/0: expected 0, got %d", NCAPTURES);

  // nrow7 = ld nrow
  Rsh_Fir_reg_nrow7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nrow8 = force? nrow7
  Rsh_Fir_reg_nrow8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow7_);
  // checkMissing(nrow8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_nrow8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return nrow8
  return Rsh_Fir_reg_nrow8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
