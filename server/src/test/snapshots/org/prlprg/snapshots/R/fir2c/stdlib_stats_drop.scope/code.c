#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1685356905_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1685356905_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1685356905_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1685356905_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1685356905_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1685356905_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1685356905
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1685356905_, RHO, CCP);
  // st `drop.scope` = r
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
SEXP Rsh_Fir_user_function_inner1685356905_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1685356905 dynamic dispatch ([terms1, terms2])

  return Rsh_Fir_user_version_inner1685356905_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1685356905_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1685356905 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1685356905/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_terms1_;  // terms1
  SEXP Rsh_Fir_reg_terms2_;  // terms2
  SEXP Rsh_Fir_reg_terms3_;  // terms3
  SEXP Rsh_Fir_reg_terms4_;  // terms4
  SEXP Rsh_Fir_reg_terms5_;  // terms5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_terms6_;  // terms6
  SEXP Rsh_Fir_reg_terms7_;  // terms7
  SEXP Rsh_Fir_reg_terms8_;  // terms8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_factor_scope;  // factor_scope
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_terms9_;  // terms9
  SEXP Rsh_Fir_reg_terms10_;  // terms10
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r22_;  // r22

  // Bind parameters
  Rsh_Fir_reg_terms1_ = PARAMS[0];
  Rsh_Fir_reg_terms2_ = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st terms1 = terms1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_terms1_, RHO);
  (void)(Rsh_Fir_reg_terms1_);
  // st terms2 = terms2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_terms2_, RHO);
  (void)(Rsh_Fir_reg_terms2_);
  // terms3 = ldf terms
  Rsh_Fir_reg_terms3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L7() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L7()
    goto L7_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // st f2 = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // factor_scope = ldf `factor.scope`
  Rsh_Fir_reg_factor_scope = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   terms4 = ld terms1;
  //   terms5 = force? terms4;
  //   checkMissing(terms5);
  //   return terms5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1685356905_, CCP, RHO);
  // r1 = dyn terms3(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms3_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st terms1 = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn missing(<sym terms2>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L6_:;
  // r2 = dyn base(<sym terms2>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

L7_:;
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r5 = dyn numeric()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

L11_:;
  // terms6 = ldf terms
  Rsh_Fir_reg_terms6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L12_:;
  // r7 = dyn base1(<lang terms(terms2)>, "factors")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p1 = prom<V +>{
  //   terms7 = ld terms2;
  //   terms8 = force? terms7;
  //   checkMissing(terms8);
  //   return terms8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1685356905_1, CCP, RHO);
  // r9 = dyn terms6(p1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms6_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 16 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn attr(r9, "factors")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_;
  goto L2_;

D7_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   sym2 = ldf attr;
  //   base2 = ldf attr in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   terms9 = ld terms1;
  //   terms10 = force? terms9;
  //   checkMissing(terms10);
  //   attr1 = ldf attr in base;
  //   r13 = dyn attr1(terms10, "factors");
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base2(<sym terms1>, "factors");
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1685356905_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   f2 = ld f2;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   list = ldf list in base;
  //   r17 = dyn list(f3);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base3[drop](<sym f2>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1685356905_3, CCP, RHO);
  // r19 = dyn factor_scope(p2, p3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor_scope, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

D8_:;
  // deopt 25 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // c1 = `is.object`(r19)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(r19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(r19)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    goto L20_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L19_:;
  // dr = tryDispatchBuiltin.1("$", r19)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // r22 = `$`(r21, <sym drop>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L18(r22)
  // L18(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L18_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;
}
SEXP Rsh_Fir_user_promise_inner1685356905_(SEXP CCP, SEXP RHO) {
  // terms4 = ld terms1
  Rsh_Fir_reg_terms4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // terms5 = force? terms4
  Rsh_Fir_reg_terms5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_terms4_);
  // checkMissing(terms5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_terms5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return terms5
  return Rsh_Fir_reg_terms5_;
}
SEXP Rsh_Fir_user_promise_inner1685356905_1(SEXP CCP, SEXP RHO) {
  // terms7 = ld terms2
  Rsh_Fir_reg_terms7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // terms8 = force? terms7
  Rsh_Fir_reg_terms8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_terms7_);
  // checkMissing(terms8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_terms8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return terms8
  return Rsh_Fir_reg_terms8_;
}
SEXP Rsh_Fir_user_promise_inner1685356905_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // terms9 = ld terms1
  Rsh_Fir_reg_terms9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // terms10 = force? terms9
  Rsh_Fir_reg_terms10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_terms9_);
  // checkMissing(terms10)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_terms10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r13 = dyn attr1(terms10, "factors")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_terms10_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base2(<sym terms1>, "factors")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1685356905_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // f2 = ld f2
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn list(f3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base3[drop](<sym f2>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
