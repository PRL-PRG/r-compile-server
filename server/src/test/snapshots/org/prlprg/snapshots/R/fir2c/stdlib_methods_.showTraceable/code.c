#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4102710431_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4102710431_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4102710431_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4102710431_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4102710431
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4102710431_, RHO, CCP);
  // st `.showTraceable` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4102710431 dynamic dispatch ([object])

  return Rsh_Fir_user_version_inner4102710431_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4102710431 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4102710431/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_emptyenv;  // emptyenv
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_callGeneric;  // callGeneric
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_cat2_;  // cat2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_callGeneric1_;  // callGeneric1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_cat3_;  // cat3
  SEXP Rsh_Fir_reg_r24_;  // r24

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L9() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r6 = dyn identical(r2, r4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args2[9];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L2_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

L3_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn __(<sym object>, <sym source>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // sym1 = ldf emptyenv
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf emptyenv in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r = dyn base(<lang `@`(object, source)>, <lang emptyenv()>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L5_:;
  // emptyenv = ldf emptyenv in base
  Rsh_Fir_reg_emptyenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r5 = dyn emptyenv()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_emptyenv, 0, NULL, NULL, CCP, RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r3 = dyn base1()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D0_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D1_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L9_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   sym2 = ldf class;
  //   base2 = ldf class in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   class = ldf class in base;
  //   r9 = dyn class(object2);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base2(<sym object>);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_, CCP, RHO);
  // r11 = dyn cat[, , , sep]("Object with tracing code, class \"", p, "\"\nOriginal definition: \n", "")
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 4, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // callGeneric = ldf callGeneric
  Rsh_Fir_reg_callGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   __1 = ldf `@` in base;
  //   r12 = dyn __1(<sym object>, <sym original>);
  //   return r12;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_1, CCP, RHO);
  // r14 = dyn callGeneric(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_callGeneric, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r15 = dyn cat1("\n## (to see the tracing code, look at body(object))\n")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   sym3 = ldf class;
  //   base3 = ldf class in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   class1 = ldf class in base;
  //   r18 = dyn class1(object4);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3(<sym object>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_2, CCP, RHO);
  // r20 = dyn cat2[, , , sep]("Object of class \"", p2, "\", from source\n", "")
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D9_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // callGeneric1 = ldf callGeneric
  Rsh_Fir_reg_callGeneric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

D10_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p3 = prom<V +>{
  //   __2 = ldf `@` in base;
  //   r21 = dyn __2(<sym object>, <sym .Data>);
  //   return r21;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_3, CCP, RHO);
  // r23 = dyn callGeneric1(p3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_callGeneric1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D11_:;
  // deopt 44 [r23]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // cat3 = ldf cat
  Rsh_Fir_reg_cat3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r24 = dyn cat3("\n## (to see original from package, look at object@original)\n")
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

D13_:;
  // deopt 48 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_(SEXP CCP, SEXP RHO) {
  // sym2 = ldf class
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf class in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
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
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r9 = dyn class(object2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base2(<sym object>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_1(SEXP CCP, SEXP RHO) {
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r12 = dyn __1(<sym object>, <sym original>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_2(SEXP CCP, SEXP RHO) {
  // sym3 = ldf class
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf class in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
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
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r18 = dyn class1(object4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3(<sym object>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_3(SEXP CCP, SEXP RHO) {
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r21 = dyn __2(<sym object>, <sym .Data>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
