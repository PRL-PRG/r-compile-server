#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1878976873_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1878976873_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1878976873_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1878976873_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_modifyList;  // modifyList
  SEXP Rsh_Fir_reg_foo;  // foo
  SEXP Rsh_Fir_reg_foo1_;  // foo1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_list3_;  // list3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_str;  // str
  SEXP Rsh_Fir_reg_foo2_;  // foo2
  SEXP Rsh_Fir_reg_foo3_;  // foo3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_str1_;  // str1
  SEXP Rsh_Fir_reg_bar;  // bar
  SEXP Rsh_Fir_reg_bar1_;  // bar1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1878976873
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1878976873_, RHO, CCP);
  // st modifyList = r
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
  // st foo = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // modifyList = ldf modifyList
  Rsh_Fir_reg_modifyList = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn list1(1.0, r4)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L2_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r1 = dyn base[a, b](1.0, <lang list(c="a", d=FALSE)>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

L4_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r5 = dyn list("a", FALSE)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r3 = dyn base1[c, d]("a", FALSE)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D0_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D1_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L0_;

D2_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   foo = ld foo;
  //   foo1 = force? foo;
  //   checkMissing(foo1);
  //   return foo1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r9):
  //   return r9;
  // L2():
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r8 = dyn base2[e, b](2.0, <lang list(d=TRUE)>);
  //   goto L0(r8);
  // L1(r11):
  //   list3 = ldf list in base;
  //   r13 = dyn list3(2.0, r11);
  //   goto L0(r13);
  // L4():
  //   list2 = ldf list in base;
  //   r12 = dyn list2(TRUE);
  //   goto L1(r12);
  // L5():
  //   r10 = dyn base3[d](TRUE);
  //   goto L1(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r15 = dyn modifyList(p, p1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_modifyList, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 23 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st bar = r15
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // str = ldf str
  Rsh_Fir_reg_str = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   foo2 = ld foo;
  //   foo3 = force? foo2;
  //   checkMissing(foo3);
  //   return foo3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r17 = dyn str(p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 28 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // str1 = ldf str
  Rsh_Fir_reg_str1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   bar = ld bar;
  //   bar1 = force? bar;
  //   checkMissing(bar1);
  //   return bar1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // r19 = dyn str1(p3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 32 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // foo = ld foo
  Rsh_Fir_reg_foo = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // foo1 = force? foo
  Rsh_Fir_reg_foo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo);
  // checkMissing(foo1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_foo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return foo1
  return Rsh_Fir_reg_foo1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // list3 = ldf list in base
  Rsh_Fir_reg_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r13 = dyn list3(2.0, r11)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list3_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r8 = dyn base2[e, b](2.0, <lang list(d=TRUE)>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;

L4_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r12 = dyn list2(TRUE)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L1_;

L5_:;
  // r10 = dyn base3[d](TRUE)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // foo2 = ld foo
  Rsh_Fir_reg_foo2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // foo3 = force? foo2
  Rsh_Fir_reg_foo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foo2_);
  // checkMissing(foo3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_foo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return foo3
  return Rsh_Fir_reg_foo3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // bar = ld bar
  Rsh_Fir_reg_bar = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // bar1 = force? bar
  Rsh_Fir_reg_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar);
  // checkMissing(bar1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return bar1
  return Rsh_Fir_reg_bar1_;
}
SEXP Rsh_Fir_user_function_inner1878976873_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1878976873 dynamic dispatch ([x, val, `keep.null`])

  return Rsh_Fir_user_version_inner1878976873_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1878976873_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1878976873 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1878976873/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_keep_null;  // keep_null
  SEXP Rsh_Fir_reg_keep_null_isMissing;  // keep_null_isMissing
  SEXP Rsh_Fir_reg_keep_null_orDefault;  // keep_null_orDefault
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_is_list1_;  // is_list1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_val3_;  // val3
  SEXP Rsh_Fir_reg_val4_;  // val4
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_vnames;  // vnames
  SEXP Rsh_Fir_reg_vnames1_;  // vnames1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_vnames3_;  // vnames3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_vnames6_;  // vnames6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_vnames7_;  // vnames7
  SEXP Rsh_Fir_reg_vnames8_;  // vnames8
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r17_1;  // r17
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_keep_null1_;  // keep_null1
  SEXP Rsh_Fir_reg_keep_null2_;  // keep_null2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_vnames9_;  // vnames9
  SEXP Rsh_Fir_reg_vnames10_;  // vnames10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_xnames;  // xnames
  SEXP Rsh_Fir_reg_xnames1_;  // xnames1
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_v3_;  // v3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_is_list2_;  // is_list2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_val5_;  // val5
  SEXP Rsh_Fir_reg_val6_;  // val6
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_val8_;  // val8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_v4_;  // v4
  SEXP Rsh_Fir_reg_v5_;  // v5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_is_list3_;  // is_list3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_modifyList1;  // modifyList
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_v6_;  // v6
  SEXP Rsh_Fir_reg_v7_;  // v7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_val9_;  // val9
  SEXP Rsh_Fir_reg_val10_;  // val10
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_val12_;  // val12
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_v8_;  // v8
  SEXP Rsh_Fir_reg_v9_;  // v9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_keep_null3_;  // keep_null3
  SEXP Rsh_Fir_reg_keep_null4_;  // keep_null4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_list1;  // list
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_val13_;  // val13
  SEXP Rsh_Fir_reg_val14_;  // val14
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_val16_;  // val16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_v10_;  // v10
  SEXP Rsh_Fir_reg_v11_;  // v11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_v12_;  // v12
  SEXP Rsh_Fir_reg_v13_;  // v13
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_vnames11_;  // vnames11
  SEXP Rsh_Fir_reg_vnames12_;  // vnames12
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_v14_;  // v14
  SEXP Rsh_Fir_reg_v15_;  // v15
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_xnames2_;  // xnames2
  SEXP Rsh_Fir_reg_xnames3_;  // xnames3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_i45_;  // i45
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_v16_;  // v16
  SEXP Rsh_Fir_reg_v17_;  // v17
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_is_list4_;  // is_list4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_val17_;  // val17
  SEXP Rsh_Fir_reg_val18_;  // val18
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_val20_;  // val20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i62_;  // i62
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_v18_;  // v18
  SEXP Rsh_Fir_reg_v19_;  // v19
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_is_list5_;  // is_list5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_modifyList1_;  // modifyList1
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_v20_;  // v20
  SEXP Rsh_Fir_reg_v21_;  // v21
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_val21_;  // val21
  SEXP Rsh_Fir_reg_val22_;  // val22
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_val24_;  // val24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_v22_;  // v22
  SEXP Rsh_Fir_reg_v23_;  // v23
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_keep_null5_;  // keep_null5
  SEXP Rsh_Fir_reg_keep_null6_;  // keep_null6
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_val25_;  // val25
  SEXP Rsh_Fir_reg_val26_;  // val26
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_i68_;  // i68
  SEXP Rsh_Fir_reg_val28_;  // val28
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_v24_;  // v24
  SEXP Rsh_Fir_reg_v25_;  // v25
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_i71_;  // i71
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_v26_;  // v26
  SEXP Rsh_Fir_reg_v27_;  // v27
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_x24_;  // x24

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_val = PARAMS[1];
  Rsh_Fir_reg_keep_null = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st val = val
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_val, RHO);
  (void)(Rsh_Fir_reg_val);
  // keep_null_isMissing = missing.0(keep_null)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_keep_null;
  Rsh_Fir_reg_keep_null_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if keep_null_isMissing then L0(FALSE) else L0(keep_null)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_keep_null_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_keep_null_orDefault = Rsh_const(CCP, 8);
    goto L0_;
  } else {
  // L0(keep_null)
    Rsh_Fir_reg_keep_null_orDefault = Rsh_Fir_reg_keep_null;
    goto L0_;
  }

L0_:;
  // st `keep.null` = keep_null_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_keep_null_orDefault, RHO);
  (void)(Rsh_Fir_reg_keep_null_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L1_:;
  // st xnames = r10
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L2_:;
  // st vnames = r13
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r13_1, RHO);
  (void)(Rsh_Fir_reg_r13_1);
  // vnames = ld vnames
  Rsh_Fir_reg_vnames = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

L3_:;
  // st vnames = dx1
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // keep_null1 = ld `keep.null`
  Rsh_Fir_reg_keep_null1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L4_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r18 = dyn __(vnames6, r16)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_vnames6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L3_;

L5_:;
  // vnames11 = ld vnames
  Rsh_Fir_reg_vnames11_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L91() else D25()
  // L91()
  goto L91_;

L6_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if c2 then L51() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L51()
    goto L51_;
  } else {
  // L17()
    goto L17_;
  }

L7_:;
  // c17 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c17 then L64() else L10(i6, c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L64()
    goto L64_;
  } else {
  // L10(i6, c17)
    Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c17_;
    goto L10_;
  }

L8_:;
  // c14 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c15 = `&&`(c8, c14)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L7(i9, c15)
  // L7(i9, c15)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c15_;
  goto L7_;

L9_:;
  // is_list2 = ldf `is.list` in base
  Rsh_Fir_reg_is_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r25 = dyn is_list2(dx3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L10_:;
  // c31 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c31 then L74() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L74()
    goto L74_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // c28 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c29 = `&&`(c22, c28)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L10(i19, c29)
  // L10(i19, c29)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c29_;
  goto L10_;

L12_:;
  // is_list3 = ldf `is.list` in base
  Rsh_Fir_reg_is_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r29 = dyn is_list3(dx5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L72() else D18()
  // L72()
  goto L72_;

L13_:;
  // val13 = ld val
  Rsh_Fir_reg_val13_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

L14_:;
  // goto L15(i29, r31)
  // L15(i29, r31)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r31_;
  goto L15_;

L15_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c35 = `is.object`(l1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c35 then L86() else L87(i30, r39, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i30, r39, l1)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L87_;
  }

L16_:;
  // st x = dx12
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // goto L6(i37)
  // L6(i37)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i37_;
  goto L6_;

L17_:;
  // x5 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x5_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st v = x5
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_x5_, RHO);
  (void)(Rsh_Fir_reg_x5_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

L18_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L128() else D39()
  // L128()
  goto L128_;

L19_:;
  // i41 = `+`.1(i40, 1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i41_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // c36 = `<`.1(l4, i41)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if c36 then L92() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L92()
    goto L92_;
  } else {
  // L29()
    goto L29_;
  }

L20_:;
  // c51 = `as.logical`(c39)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c51 then L105() else L23(i45, c51)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L105()
    goto L105_;
  } else {
  // L23(i45, c51)
    Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i45_;
    Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c51_;
    goto L23_;
  }

L21_:;
  // c48 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // c49 = `&&`(c42, c48)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L20(i48, c49)
  // L20(i48, c49)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c49_;
  goto L20_;

L22_:;
  // is_list4 = ldf `is.list` in base
  Rsh_Fir_reg_is_list4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r52 = dyn is_list4(dx14)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L103() else D30()
  // L103()
  goto L103_;

L23_:;
  // c65 = `as.logical`(c53)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c65 then L115() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L115()
    goto L115_;
  } else {
  // L26()
    goto L26_;
  }

L24_:;
  // c62 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c63 = `&&`(c56, c62)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c62_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L23(i58, c63)
  // L23(i58, c63)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c63_;
  goto L23_;

L25_:;
  // is_list5 = ldf `is.list` in base
  Rsh_Fir_reg_is_list5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r56 = dyn is_list5(dx16)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L113() else D33()
  // L113()
  goto L113_;

L26_:;
  // val25 = ld val
  Rsh_Fir_reg_val25_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L119() else D36()
  // L119()
  goto L119_;

L27_:;
  // l5 = ld x
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c69 = `is.object`(l5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c69 then L124() else L125(i66, r63, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L124()
    goto L124_;
  } else {
  // L125(i66, r63, l5)
    Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i66_;
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L125_;
  }

L28_:;
  // st x = dx23
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L19(i73)
  // L19(i73)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i73_;
  goto L19_;

L29_:;
  // x14 = `[[`(s1, i41, NULL, TRUE)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x14_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // st v = x14
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_x14_, RHO);
  (void)(Rsh_Fir_reg_x14_);
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p = prom<V +>{
  //   sym = ldf `is.list`;
  //   base = ldf `is.list` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   is_list = ldf `is.list` in base;
  //   r2 = dyn is_list(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf `is.list`;
  //   base1 = ldf `is.list` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   val1 = ld val;
  //   val2 = force? val1;
  //   checkMissing(val2);
  //   is_list1 = ldf `is.list` in base;
  //   r6 = dyn is_list1(val2);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym val>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_1, CCP, RHO);
  // r8 = dyn stopifnot(p, p1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 4 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

L33_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L1_;

D2_:;
  // deopt 7 [x3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r11 = dyn names(x4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

D3_:;
  // deopt 10 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L1_;

L36_:;
  // val3 = ld val
  Rsh_Fir_reg_val3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

L37_:;
  // r12 = dyn base3(<sym val>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L2_;

D4_:;
  // deopt 14 [val3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_val3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // val4 = force? val3
  Rsh_Fir_reg_val4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val3_);
  // checkMissing(val4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_val4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn names1(val4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_val4_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 17 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r14_;
  goto L2_;

D6_:;
  // deopt 19 [vnames]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_vnames;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // vnames1 = force? vnames
  Rsh_Fir_reg_vnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnames);
  // checkMissing(vnames1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_vnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c = `is.object`(vnames1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_vnames1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c then L41() else L42(vnames1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L41()
    goto L41_;
  } else {
  // L42(vnames1)
    Rsh_Fir_reg_vnames3_ = Rsh_Fir_reg_vnames1_;
    goto L42_;
  }

L41_:;
  // dr = tryDispatchBuiltin.1("[", vnames1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_vnames1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc then L43() else L42(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr)
    Rsh_Fir_reg_vnames3_ = Rsh_Fir_reg_dr;
    goto L42_;
  }

L42_:;
  // sym4 = ldf nzchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf nzchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard4 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L43_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L44_:;
  // vnames7 = ld vnames
  Rsh_Fir_reg_vnames7_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

L45_:;
  // r15 = dyn base4(<sym vnames>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L4(vnames3, r15)
  // L4(vnames3, r15)
  Rsh_Fir_reg_vnames6_ = Rsh_Fir_reg_vnames3_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L4_;

D7_:;
  // deopt 23 [vnames3, vnames7]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_vnames3_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_vnames7_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L46_:;
  // vnames8 = force? vnames7
  Rsh_Fir_reg_vnames8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnames7_);
  // checkMissing(vnames8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_vnames8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r17 = dyn nzchar(vnames8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_vnames8_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

D8_:;
  // deopt 26 [vnames3, r17]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_vnames3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L4(vnames3, r17)
  // L4(vnames3, r17)
  Rsh_Fir_reg_vnames6_ = Rsh_Fir_reg_vnames3_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_1;
  goto L4_;

D9_:;
  // deopt 29 [keep_null1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_keep_null1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L48_:;
  // keep_null2 = force? keep_null1
  Rsh_Fir_reg_keep_null2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_null1_);
  // checkMissing(keep_null2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_keep_null2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(keep_null2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_keep_null2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c1 then L49() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L49()
    goto L49_;
  } else {
  // L5()
    goto L5_;
  }

L49_:;
  // vnames9 = ld vnames
  Rsh_Fir_reg_vnames9_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

D10_:;
  // deopt 31 [vnames9]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_vnames9_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // vnames10 = force? vnames9
  Rsh_Fir_reg_vnames10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnames9_);
  // checkMissing(vnames10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_vnames10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // s = toForSeq(vnames10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_vnames10_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 32);
  // goto L6(i)
  // L6(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L6_;

L51_:;
  // goto L18()
  // L18()
  goto L18_;

D11_:;
  // deopt 34 [i2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L52_:;
  // p2 = prom<V +>{
  //   v = ld v;
  //   v1 = force? v;
  //   checkMissing(v1);
  //   return v1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_2, CCP, RHO);
  // p3 = prom<V +>{
  //   xnames = ld xnames;
  //   xnames1 = force? xnames;
  //   checkMissing(xnames1);
  //   return xnames1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_3, CCP, RHO);
  // r21 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

D12_:;
  // deopt 37 [i2, r21]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L53_:;
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c3 then L54() else L7(i2, c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L7(i2, c3)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L7_;
  }

L54_:;
  // sym5 = ldf `is.list`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf `is.list` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L56_:;
  // r22 = dyn base5(<lang `[[`(x, v)>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L8(i2, c3, r22)
  // L8(i2, c3, r22)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D13_:;
  // deopt 40 [i2, c3, x6]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L57_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x7)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c9 then L58() else L59(i2, c3, x7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L58()
    goto L58_;
  } else {
  // L59(i2, c3, x7)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    goto L59_;
  }

L58_:;
  // dr2 = tryDispatchBuiltin.1("[[", x7)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc1 then L60() else L59(i2, c3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L60()
    goto L60_;
  } else {
  // L59(i2, c3, dr2)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_dr2_;
    goto L59_;
  }

L59_:;
  // v2 = ld v
  Rsh_Fir_reg_v2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L60_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L9(i2, c3, dx2)
  // L9(i2, c3, dx2)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D14_:;
  // deopt 42 [i11, c11, x9, v2]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_deopt(42, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L61_:;
  // v3 = force? v2
  Rsh_Fir_reg_v3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v2_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r24 = dyn __1(x9, v3)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_v3_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L9(i11, c11, r24)
  // L9(i11, c11, r24)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L9_;

D15_:;
  // deopt 46 [i13, c13, r25]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L8(i13, c13, r25)
  // L8(i13, c13, r25)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L8_;

L64_:;
  // sym6 = ldf `is.list`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base6 = ldf `is.list` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard6 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // val5 = ld val
  Rsh_Fir_reg_val5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

L66_:;
  // r26 = dyn base6(<lang `[[`(val, v)>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L11(i6, c17, r26)
  // L11(i6, c17, r26)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L11_;

D16_:;
  // deopt 50 [i6, c17, val5]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_val5_;
  Rsh_Fir_deopt(50, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L67_:;
  // val6 = force? val5
  Rsh_Fir_reg_val6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val5_);
  // checkMissing(val6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_val6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(val6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_val6_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if c23 then L68() else L69(i6, c17, val6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i6, c17, val6)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c17_;
    Rsh_Fir_reg_val8_ = Rsh_Fir_reg_val6_;
    goto L69_;
  }

L68_:;
  // dr4 = tryDispatchBuiltin.1("[[", val6)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_val6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc2 then L70() else L69(i6, c17, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i6, c17, dr4)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c17_;
    Rsh_Fir_reg_val8_ = Rsh_Fir_reg_dr4_;
    goto L69_;
  }

L69_:;
  // v4 = ld v
  Rsh_Fir_reg_v4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

L70_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L12(i6, c17, dx4)
  // L12(i6, c17, dx4)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;

D17_:;
  // deopt 52 [i21, c25, val8, v4]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_val8_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_v4_;
  Rsh_Fir_deopt(52, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // v5 = force? v4
  Rsh_Fir_reg_v5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v4_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r28 = dyn __2(val8, v5)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_val8_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_v5_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L12(i21, c25, r28)
  // L12(i21, c25, r28)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L12_;

D18_:;
  // deopt 56 [i23, c27, r29]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L11(i23, c27, r29)
  // L11(i23, c27, r29)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r29_;
  goto L11_;

L74_:;
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard7 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // modifyList = ldf modifyList
  Rsh_Fir_reg_modifyList1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

L76_:;
  // r30 = dyn base7(<lang modifyList(`[[`(x, v), `[[`(val, v), keep.null=keep.null)>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L14(i16, r30)
  // L14(i16, r30)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

D19_:;
  // deopt 61 [i16]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L77_:;
  // p4 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   c32 = `is.object`(x11);
  //   if c32 then L1() else L2(x11);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", x11);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(x13):
  //   v6 = ld v;
  //   v7 = force? v6;
  //   __3 = ldf `[[` in base;
  //   r32 = dyn __3(x13, v7);
  //   goto L0(r32);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_4, CCP, RHO);
  // p5 = prom<V +>{
  //   val9 = ld val;
  //   val10 = force? val9;
  //   checkMissing(val10);
  //   c33 = `is.object`(val10);
  //   if c33 then L1() else L2(val10);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", val10);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(val12):
  //   v8 = ld v;
  //   v9 = force? v8;
  //   __4 = ldf `[[` in base;
  //   r34 = dyn __4(val12, v9);
  //   goto L0(r34);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_5, CCP, RHO);
  // p6 = prom<V +>{
  //   keep_null3 = ld `keep.null`;
  //   keep_null4 = force? keep_null3;
  //   checkMissing(keep_null4);
  //   return keep_null4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_6, CCP, RHO);
  // r37 = dyn modifyList[, , `keep.null`](p4, p5, p6)
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args110[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_modifyList1, 3, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L78() else D20()
  // L78()
  goto L78_;

D20_:;
  // deopt 66 [i16, r37]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L78_:;
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r38 = dyn list(r37)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L79() else D21()
  // L79()
  goto L79_;

D21_:;
  // deopt 68 [i16, r38]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L14(i16, r38)
  // L14(i16, r38)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r38_;
  goto L14_;

D22_:;
  // deopt 69 [i16, val13]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_val13_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L81_:;
  // val14 = force? val13
  Rsh_Fir_reg_val14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val13_);
  // checkMissing(val14)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_val14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(val14)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_val14_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if c34 then L82() else L83(i16, val14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L82()
    goto L82_;
  } else {
  // L83(i16, val14)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_val16_ = Rsh_Fir_reg_val14_;
    goto L83_;
  }

L82_:;
  // dr10 = tryDispatchBuiltin.1("[", val14)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_val14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args114);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if dc5 then L84() else L83(i16, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L84()
    goto L84_;
  } else {
  // L83(i16, dr10)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_val16_ = Rsh_Fir_reg_dr10_;
    goto L83_;
  }

L83_:;
  // v10 = ld v
  Rsh_Fir_reg_v10_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

L84_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L15(i16, dx10)
  // L15(i16, dx10)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_dx10_;
  goto L15_;

D23_:;
  // deopt 71 [i32, val16, v10]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_val16_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_v10_;
  Rsh_Fir_deopt(71, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L85_:;
  // v11 = force? v10
  Rsh_Fir_reg_v11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v10_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r40 = dyn __5(val16, v11)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_val16_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_v11_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L15(i32, r40)
  // L15(i32, r40)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L15_;

L86_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l1, r39)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args118);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc6 then L88() else L87(i30, r39, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L88()
    goto L88_;
  } else {
  // L87(i30, r39, dr12)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr12_;
    goto L87_;
  }

L87_:;
  // v12 = ld v
  Rsh_Fir_reg_v12_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L89() else D24()
  // L89()
  goto L89_;

L88_:;
  // dx11 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L16(i30, dx11)
  // L16(i30, dx11)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L16_;

D24_:;
  // deopt 75 [i35, r42, l3, r39, v12]
  SEXP Rsh_Fir_array_deopt_stack28[5];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack28[4] = Rsh_Fir_reg_v12_;
  Rsh_Fir_deopt(75, 5, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L89_:;
  // v13 = force? v12
  Rsh_Fir_reg_v13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v12_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r45 = dyn ___(l3, r39, v13)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_v13_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L16(i35, r45)
  // L16(i35, r45)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r45_;
  goto L16_;

D25_:;
  // deopt 82 [vnames11]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_vnames11_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // vnames12 = force? vnames11
  Rsh_Fir_reg_vnames12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnames11_);
  // checkMissing(vnames12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_vnames12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(vnames12)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_vnames12_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // l4 = length(s1)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // i39 = 0
  Rsh_Fir_reg_i39_ = Rsh_const(CCP, 32);
  // goto L19(i39)
  // L19(i39)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i39_;
  goto L19_;

L92_:;
  // goto L18()
  // L18()
  goto L18_;

D26_:;
  // deopt 85 [i41]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L93_:;
  // p7 = prom<V +>{
  //   v14 = ld v;
  //   v15 = force? v14;
  //   checkMissing(v15);
  //   return v15;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_7, CCP, RHO);
  // p8 = prom<V +>{
  //   xnames2 = ld xnames;
  //   xnames3 = force? xnames2;
  //   checkMissing(xnames3);
  //   return xnames3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_8, CCP, RHO);
  // r48 = dyn _in_1(p7, p8)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

D27_:;
  // deopt 88 [i41, r48]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L94_:;
  // c37 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c37 then L95() else L20(i41, c37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L95()
    goto L95_;
  } else {
  // L20(i41, c37)
    Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
    goto L20_;
  }

L95_:;
  // sym8 = ldf `is.list`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base8 = ldf `is.list` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard8 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L96_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

L97_:;
  // r49 = dyn base8(<lang `[[`(x, v)>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L21(i41, c37, r49)
  // L21(i41, c37, r49)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L21_;

D28_:;
  // deopt 91 [i41, c37, x15]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(91, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L98_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(x16)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c43 then L99() else L100(i41, c37, x16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L99()
    goto L99_;
  } else {
  // L100(i41, c37, x16)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c37_;
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    goto L100_;
  }

L99_:;
  // dr14 = tryDispatchBuiltin.1("[[", x16)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc7 then L101() else L100(i41, c37, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L101()
    goto L101_;
  } else {
  // L100(i41, c37, dr14)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c37_;
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_dr14_;
    goto L100_;
  }

L100_:;
  // v16 = ld v
  Rsh_Fir_reg_v16_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L102() else D29()
  // L102()
  goto L102_;

L101_:;
  // dx13 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L22(i41, c37, dx13)
  // L22(i41, c37, dx13)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L22_;

D29_:;
  // deopt 93 [i50, c45, x18, v16]
  SEXP Rsh_Fir_array_deopt_stack33[4];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_v16_;
  Rsh_Fir_deopt(93, 4, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L102_:;
  // v17 = force? v16
  Rsh_Fir_reg_v17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v16_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r51 = dyn __6(x18, v17)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_v17_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L22(i50, c45, r51)
  // L22(i50, c45, r51)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r51_;
  goto L22_;

D30_:;
  // deopt 97 [i52, c47, r52]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L21(i52, c47, r52)
  // L21(i52, c47, r52)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r52_;
  goto L21_;

L105_:;
  // sym9 = ldf `is.list`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf `is.list` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args137);
  // if guard9 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // val17 = ld val
  Rsh_Fir_reg_val17_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L108() else D31()
  // L108()
  goto L108_;

L107_:;
  // r53 = dyn base9(<lang `[[`(val, v)>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L24(i45, c51, r53)
  // L24(i45, c51, r53)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L24_;

D31_:;
  // deopt 101 [i45, c51, val17]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_val17_;
  Rsh_Fir_deopt(101, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L108_:;
  // val18 = force? val17
  Rsh_Fir_reg_val18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val17_);
  // checkMissing(val18)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_val18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c57 = `is.object`(val18)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_val18_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c57 then L109() else L110(i45, c51, val18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L109()
    goto L109_;
  } else {
  // L110(i45, c51, val18)
    Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i45_;
    Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c51_;
    Rsh_Fir_reg_val20_ = Rsh_Fir_reg_val18_;
    goto L110_;
  }

L109_:;
  // dr16 = tryDispatchBuiltin.1("[[", val18)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_val18_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc8 then L111() else L110(i45, c51, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L111()
    goto L111_;
  } else {
  // L110(i45, c51, dr16)
    Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i45_;
    Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c51_;
    Rsh_Fir_reg_val20_ = Rsh_Fir_reg_dr16_;
    goto L110_;
  }

L110_:;
  // v18 = ld v
  Rsh_Fir_reg_v18_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

L111_:;
  // dx15 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L25(i45, c51, dx15)
  // L25(i45, c51, dx15)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L25_;

D32_:;
  // deopt 103 [i60, c59, val20, v18]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i60_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_val20_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_v18_;
  Rsh_Fir_deopt(103, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L112_:;
  // v19 = force? v18
  Rsh_Fir_reg_v19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v18_);
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r55 = dyn __7(val20, v19)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_val20_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_v19_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L25(i60, c59, r55)
  // L25(i60, c59, r55)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r55_;
  goto L25_;

D33_:;
  // deopt 107 [i62, c61, r56]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(107, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L24(i62, c61, r56)
  // L24(i62, c61, r56)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r56_;
  goto L24_;

L115_:;
  // modifyList1 = ldf modifyList
  Rsh_Fir_reg_modifyList1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L116() else D34()
  // L116()
  goto L116_;

D34_:;
  // deopt 110 [i55]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L116_:;
  // p9 = prom<V +>{
  //   x19 = ld x;
  //   x20 = force? x19;
  //   checkMissing(x20);
  //   c66 = `is.object`(x20);
  //   if c66 then L1() else L2(x20);
  // L0(dx18):
  //   return dx18;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[[", x20);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(x22):
  //   v20 = ld v;
  //   v21 = force? v20;
  //   __8 = ldf `[[` in base;
  //   r57 = dyn __8(x22, v21);
  //   goto L0(r57);
  // L3():
  //   dx17 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx17);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_9, CCP, RHO);
  // p10 = prom<V +>{
  //   val21 = ld val;
  //   val22 = force? val21;
  //   checkMissing(val22);
  //   c67 = `is.object`(val22);
  //   if c67 then L1() else L2(val22);
  // L0(dx20):
  //   return dx20;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[[", val22);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(val24):
  //   v22 = ld v;
  //   v23 = force? v22;
  //   __9 = ldf `[[` in base;
  //   r59 = dyn __9(val24, v23);
  //   goto L0(r59);
  // L3():
  //   dx19 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx19);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_10, CCP, RHO);
  // p11 = prom<V +>{
  //   keep_null5 = ld `keep.null`;
  //   keep_null6 = force? keep_null5;
  //   checkMissing(keep_null6);
  //   return keep_null6;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1878976873_11, CCP, RHO);
  // r62 = dyn modifyList1[, , `keep.null`](p9, p10, p11)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_modifyList1_, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L117() else D35()
  // L117()
  goto L117_;

D35_:;
  // deopt 115 [i55, r62]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L27(i55, r62)
  // L27(i55, r62)
  Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L27_;

D36_:;
  // deopt 116 [i55, val25]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_val25_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L119_:;
  // val26 = force? val25
  Rsh_Fir_reg_val26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val25_);
  // checkMissing(val26)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_val26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c68 = `is.object`(val26)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_val26_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c68 then L120() else L121(i55, val26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L120()
    goto L120_;
  } else {
  // L121(i55, val26)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_val28_ = Rsh_Fir_reg_val26_;
    goto L121_;
  }

L120_:;
  // dr22 = tryDispatchBuiltin.1("[[", val26)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_val26_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args161);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if dc11 then L122() else L121(i55, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L122()
    goto L122_;
  } else {
  // L121(i55, dr22)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_val28_ = Rsh_Fir_reg_dr22_;
    goto L121_;
  }

L121_:;
  // v24 = ld v
  Rsh_Fir_reg_v24_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L123() else D37()
  // L123()
  goto L123_;

L122_:;
  // dx21 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L27(i55, dx21)
  // L27(i55, dx21)
  Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_dx21_;
  goto L27_;

D37_:;
  // deopt 118 [i68, val28, v24]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_val28_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_v24_;
  Rsh_Fir_deopt(118, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L123_:;
  // v25 = force? v24
  Rsh_Fir_reg_v25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v24_);
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r64 = dyn __10(val28, v25)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_val28_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_v25_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L27(i68, r64)
  // L27(i68, r64)
  Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L27_;

L124_:;
  // dr24 = tryDispatchBuiltin.0("[[<-", l5, r63)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args165);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if dc12 then L126() else L125(i66, r63, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L126()
    goto L126_;
  } else {
  // L125(i66, r63, dr24)
    Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i66_;
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr24_;
    goto L125_;
  }

L125_:;
  // v26 = ld v
  Rsh_Fir_reg_v26_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L127() else D38()
  // L127()
  goto L127_;

L126_:;
  // dx22 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // goto L28(i66, dx22)
  // L28(i66, dx22)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L28_;

D38_:;
  // deopt 122 [i71, r66, l7, r63, v26]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_v26_;
  Rsh_Fir_deopt(122, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L127_:;
  // v27 = force? v26
  Rsh_Fir_reg_v27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v26_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r69 = dyn ____(l7, r63, v27)
  SEXP Rsh_Fir_array_args168[3];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args168[2] = Rsh_Fir_reg_v27_;
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L28(i71, r69)
  // L28(i71, r69)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r69_;
  goto L28_;

D39_:;
  // deopt 129 [x23]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L128_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x24
  return Rsh_Fir_reg_x24_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_(SEXP CCP, SEXP RHO) {
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
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
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r2 = dyn is_list(x2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
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
  // val1 = ld val
  Rsh_Fir_reg_val1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // val2 = force? val1
  Rsh_Fir_reg_val2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val1_);
  // checkMissing(val2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_val2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // is_list1 = ldf `is.list` in base
  Rsh_Fir_reg_is_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r6 = dyn is_list1(val2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_val2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym val>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_2(SEXP CCP, SEXP RHO) {
  // v = ld v
  Rsh_Fir_reg_v = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v1 = force? v
  Rsh_Fir_reg_v1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v);
  // checkMissing(v1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_v1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return v1
  return Rsh_Fir_reg_v1_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_3(SEXP CCP, SEXP RHO) {
  // xnames = ld xnames
  Rsh_Fir_reg_xnames = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // xnames1 = force? xnames
  Rsh_Fir_reg_xnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xnames);
  // checkMissing(xnames1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_xnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return xnames1
  return Rsh_Fir_reg_xnames1_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_4(SEXP CCP, SEXP RHO) {
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(x11)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2(x11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x11)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x11_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", x11)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // v6 = ld v
  Rsh_Fir_reg_v6_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v7 = force? v6
  Rsh_Fir_reg_v7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v6_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r32 = dyn __3(x13, v7)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_v7_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r32_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_5(SEXP CCP, SEXP RHO) {
  // val9 = ld val
  Rsh_Fir_reg_val9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // val10 = force? val9
  Rsh_Fir_reg_val10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val9_);
  // checkMissing(val10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_val10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(val10)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_val10_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c33 then L1() else L2(val10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L1()
    goto L1_;
  } else {
  // L2(val10)
    Rsh_Fir_reg_val12_ = Rsh_Fir_reg_val10_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", val10)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_val10_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_val12_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // v8 = ld v
  Rsh_Fir_reg_v8_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v9 = force? v8
  Rsh_Fir_reg_v9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v8_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r34 = dyn __4(val12, v9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_val12_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_v9_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_6(SEXP CCP, SEXP RHO) {
  // keep_null3 = ld `keep.null`
  Rsh_Fir_reg_keep_null3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // keep_null4 = force? keep_null3
  Rsh_Fir_reg_keep_null4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_null3_);
  // checkMissing(keep_null4)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_keep_null4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return keep_null4
  return Rsh_Fir_reg_keep_null4_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_7(SEXP CCP, SEXP RHO) {
  // v14 = ld v
  Rsh_Fir_reg_v14_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v15 = force? v14
  Rsh_Fir_reg_v15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v14_);
  // checkMissing(v15)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_v15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return v15
  return Rsh_Fir_reg_v15_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_8(SEXP CCP, SEXP RHO) {
  // xnames2 = ld xnames
  Rsh_Fir_reg_xnames2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // xnames3 = force? xnames2
  Rsh_Fir_reg_xnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xnames2_);
  // checkMissing(xnames3)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_xnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return xnames3
  return Rsh_Fir_reg_xnames3_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_9(SEXP CCP, SEXP RHO) {
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c66 = `is.object`(x20)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c66 then L1() else L2(x20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x20)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x20_;
    goto L2_;
  }

L0_:;
  // return dx18
  return Rsh_Fir_reg_dx18_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[[", x20)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // v20 = ld v
  Rsh_Fir_reg_v20_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v21 = force? v20
  Rsh_Fir_reg_v21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v20_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r57 = dyn __8(x22, v21)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_v21_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r57_;
  goto L0_;

L3_:;
  // dx17 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L0(dx17)
  // L0(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_10(SEXP CCP, SEXP RHO) {
  // val21 = ld val
  Rsh_Fir_reg_val21_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // val22 = force? val21
  Rsh_Fir_reg_val22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val21_);
  // checkMissing(val22)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_val22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c67 = `is.object`(val22)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_val22_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c67 then L1() else L2(val22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L1()
    goto L1_;
  } else {
  // L2(val22)
    Rsh_Fir_reg_val24_ = Rsh_Fir_reg_val22_;
    goto L2_;
  }

L0_:;
  // return dx20
  return Rsh_Fir_reg_dx20_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[[", val22)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_val22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_val24_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // v22 = ld v
  Rsh_Fir_reg_v22_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // v23 = force? v22
  Rsh_Fir_reg_v23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v22_);
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r59 = dyn __9(val24, v23)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_val24_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_v23_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r59)
  // L0(r59)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r59_;
  goto L0_;

L3_:;
  // dx19 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L0(dx19)
  // L0(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1878976873_11(SEXP CCP, SEXP RHO) {
  // keep_null5 = ld `keep.null`
  Rsh_Fir_reg_keep_null5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // keep_null6 = force? keep_null5
  Rsh_Fir_reg_keep_null6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_null5_);
  // checkMissing(keep_null6)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_keep_null6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // return keep_null6
  return Rsh_Fir_reg_keep_null6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
