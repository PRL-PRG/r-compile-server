#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4102710431_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4102710431_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4102710431_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4102710431_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4102710431_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_asOneSidedFormula;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_asOneSidedFormula4_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_asOneSidedFormula5_;
  SEXP Rsh_Fir_reg_r28_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4102710431
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4102710431_, RHO, CCP);
  // st asOneSidedFormula = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // asOneSidedFormula = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn asOneSidedFormula("age")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st form = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p3 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L3() else L4();
  // L0():
  //   sym1 = ldf identical;
  //   base1 = ldf identical in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L3():
  //   form = ld form;
  //   form1 = force? form;
  //   checkMissing(form1);
  //   asOneSidedFormula1 = ldf asOneSidedFormula;
  //   p = prom<V +>{
  //     form2 = ld form;
  //     form3 = force? form2;
  //     checkMissing(form3);
  //     return form3;
  //   };
  //   r5 = dyn asOneSidedFormula1(p);
  //   identical = ldf identical in base;
  //   r6 = dyn identical(form1, r5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L4():
  //   r2 = dyn base(<sym form>, <lang asOneSidedFormula(form)>);
  //   goto L0();
  // L1():
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L7() else L8();
  // L5():
  //   form4 = ld form;
  //   form5 = force? form4;
  //   checkMissing(form5);
  //   asOneSidedFormula2 = ldf asOneSidedFormula;
  //   p1 = prom<V +>{
  //     as_name = ldf `as.name`;
  //     r9 = dyn as_name("age");
  //     return r9;
  //   };
  //   r11 = dyn asOneSidedFormula2(p1);
  //   identical1 = ldf identical in base;
  //   r12 = dyn identical1(form5, r11, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L1();
  // L6():
  //   r7 = dyn base1(<sym form>, <lang asOneSidedFormula(as.name("age"))>);
  //   goto L1();
  // L2(r14):
  //   return r14;
  // L7():
  //   form6 = ld form;
  //   form7 = force? form6;
  //   checkMissing(form7);
  //   asOneSidedFormula3 = ldf asOneSidedFormula;
  //   p2 = prom<V +>{
  //     sym3 = ldf expression;
  //     base3 = ldf expression in base;
  //     guard3 = `==`.4(sym3, base3);
  //     if guard3 then L1() else L2();
  //   L0(r16):
  //     return r16;
  //   L1():
  //     expression = ldf expression in base;
  //     r17 = dyn expression(<sym age>);
  //     goto L0(r17);
  //   L2():
  //     r15 = dyn base3(<sym age>);
  //     goto L0(r15);
  //   };
  //   r19 = dyn asOneSidedFormula3(p2);
  //   identical2 = ldf identical in base;
  //   r20 = dyn identical2(form7, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L2(r20);
  // L8():
  //   r13 = dyn base2(<sym form>, <lang asOneSidedFormula(expression(age))>);
  //   goto L2(r13);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r22 = dyn stopifnot[exprs](p3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r22]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // asOneSidedFormula4 = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p4 = prom<V +>{
  //   sym4 = ldf quote;
  //   base4 = ldf quote in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   quote = ldf quote in base;
  //   r25 = dyn quote(<lang log(age)>);
  //   goto L0(r25);
  // L2():
  //   r23 = dyn base4(<lang log(age)>);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r27 = dyn asOneSidedFormula4(p4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula4_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 16 [r27]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // asOneSidedFormula5 = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r28 = dyn asOneSidedFormula5(1.0)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula5_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 20 [r28]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_form;
  SEXP Rsh_Fir_reg_form1_;
  SEXP Rsh_Fir_reg_asOneSidedFormula1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_form4_;
  SEXP Rsh_Fir_reg_form5_;
  SEXP Rsh_Fir_reg_asOneSidedFormula2_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_form6_;
  SEXP Rsh_Fir_reg_form7_;
  SEXP Rsh_Fir_reg_asOneSidedFormula3_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // form = ld form
  Rsh_Fir_reg_form = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // form1 = force? form
  Rsh_Fir_reg_form1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form);
  // checkMissing(form1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_form1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // asOneSidedFormula1 = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p = prom<V +>{
  //   form2 = ld form;
  //   form3 = force? form2;
  //   checkMissing(form3);
  //   return form3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn asOneSidedFormula1(p)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn identical(form1, r5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args6[9];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_form1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[9];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L4_:;
  // r2 = dyn base(<sym form>, <lang asOneSidedFormula(form)>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // form4 = ld form
  Rsh_Fir_reg_form4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // form5 = force? form4
  Rsh_Fir_reg_form5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form4_);
  // checkMissing(form5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_form5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // asOneSidedFormula2 = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p1 = prom<V +>{
  //   as_name = ldf `as.name`;
  //   r9 = dyn as_name("age");
  //   return r9;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn asOneSidedFormula2(p1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r12 = dyn identical1(form5, r11, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args12[9];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_form5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[5] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args12[7] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[8] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[9];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L6_:;
  // r7 = dyn base1(<sym form>, <lang asOneSidedFormula(as.name("age"))>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L2_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L7_:;
  // form6 = ld form
  Rsh_Fir_reg_form6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // form7 = force? form6
  Rsh_Fir_reg_form7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form6_);
  // checkMissing(form7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_form7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // asOneSidedFormula3 = ldf asOneSidedFormula
  Rsh_Fir_reg_asOneSidedFormula3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p2 = prom<V +>{
  //   sym3 = ldf expression;
  //   base3 = ldf expression in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   expression = ldf expression in base;
  //   r17 = dyn expression(<sym age>);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base3(<sym age>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r19 = dyn asOneSidedFormula3(p2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asOneSidedFormula3_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r20 = dyn identical2(form7, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args19[9];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_form7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[5] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args19[7] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[8] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r20)
  // L2(r20)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r20_;
  goto L2_;

L8_:;
  // r13 = dyn base2(<sym form>, <lang asOneSidedFormula(expression(age))>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_form2_;
  SEXP Rsh_Fir_reg_form3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // form2 = ld form
  Rsh_Fir_reg_form2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // form3 = force? form2
  Rsh_Fir_reg_form3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form2_);
  // checkMissing(form3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_form3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return form3
  return Rsh_Fir_reg_form3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_name;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // r9 = dyn as_name("age")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf expression
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf expression in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
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
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r17 = dyn expression(<sym age>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base3(<sym age>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf quote
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf quote in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r25 = dyn quote(<lang log(age)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r23 = dyn base4(<lang log(age)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4102710431 dynamic dispatch ([object])

  return Rsh_Fir_user_version_inner4102710431_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4102710431 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4102710431/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_mode;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_object3_;
  SEXP Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_quote1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_object7_;
  SEXP Rsh_Fir_reg_object8_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg__GlobalEnv;
  SEXP Rsh_Fir_reg__GlobalEnv1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_environment__;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_object11_;
  SEXP Rsh_Fir_reg_object12_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_object13_;
  SEXP Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_object17_;
  SEXP Rsh_Fir_reg_object18_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_call;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg__GlobalEnv3_;
  SEXP Rsh_Fir_reg__GlobalEnv4_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_environment__1_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_ff;
  SEXP Rsh_Fir_reg_ff1_;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_, 0, NULL, CCP, RHO);
  // r1 = dyn mode(p)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // r2 = `==`(r1, "call")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args29);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c then L16() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L0_:;
  // c14 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c14 then L24() else L3(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L24()
    goto L24_;
  } else {
  // L3(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L3_;
  }

L16_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 6 [c, object3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L3_:;
  // c23 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c23 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L17_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c3 then L18() else L19(c, object4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L18()
    goto L18_;
  } else {
  // L19(c, object4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_object4_;
    goto L19_;
  }

L24_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // sym = ldf quote
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L4_:;
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c20 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // c21 = `&&`(c19, c20)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args39);
  // goto L3(c21)
  // L3(c21)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c21_;
  goto L3_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L18_:;
  // dr = tryDispatchBuiltin.1("[[", object4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(c, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(c, dr)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r3 = dyn __(object6, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(c5, r3)
  // L1(c5, r3)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L1_;

L25_:;
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L26_:;
  // r8 = dyn base1(<sym object>, "formula")
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L4(c14, r8)
  // L4(c14, r8)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L4_;

L30_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D3_:;
  // deopt 17 [c14, object7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r7 = `==`(dx4, r5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args45);
  // c11 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args47);
  // goto L0(c12)
  // L0(c12)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c12_;
  goto L0_;

L7_:;
  // c24 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c24 then L41() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L41()
    goto L41_;
  } else {
  // L8()
    goto L8_;
  }

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L1(c, dx)
  // L1(c, dx)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L21_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r6 = dyn quote(<sym `~`>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote1, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L2(c7, dx1, r6)
  // L2(c7, dx1, r6)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L2_;

L22_:;
  // r4 = dyn base(<sym `~`>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L2(c7, dx1, r4)
  // L2(c7, dx1, r4)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L2_;

L27_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r10 = dyn inherits(object8, "formula", FALSE)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

L31_:;
  // p1 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   return object10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_1, 0, NULL, CCP, RHO);
  // r13 = dyn eval(p1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L37_:;
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

L38_:;
  // r15 = dyn base2(<sym object>, "formula")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_1;
  goto L7_;

D4_:;
  // deopt 22 [c14, r10]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 [object11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_object11_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L8_:;
  // sym4 = ldf call
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base4 = ldf call in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L28_:;
  // goto L4(c14, r10)
  // L4(c14, r10)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L4_;

L32_:;
  // st object = r13
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r13_1, RHO);
  (void)(Rsh_Fir_reg_r13_1);
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L39_:;
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r17 = dyn inherits1(object12, "formula", FALSE)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

L41_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

D7_:;
  // deopt 30 [_GlobalEnv]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg__GlobalEnv;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 46 [r17]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // r21 = `!=`(r19, 2)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args61);
  // c25 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c25 then L46() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L46()
    goto L46_;
  } else {
  // L10()
    goto L10_;
  }

L13_:;
  // st ff = r32
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // l1 = ld ff
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L55() else D17()
  // L55()
  goto L55_;

L33_:;
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // l = ld object
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // environment__ = ldf `environment<-`
  Rsh_Fir_reg_environment__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L40_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r17_1;
  goto L7_;

L42_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

L43_:;
  // r18 = dyn base3(<sym object>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_;
  goto L9_;

L53_:;
  // call = ldf call in base
  Rsh_Fir_reg_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r33 = dyn call("~", <lang switch(mode(object), name=, numeric=, call=object, character=as.name(object), expression=`[[`(object, 1), stop(gettextf("'%s' cannot be of mode '%s'", deparse1(substitute(object)), mode(object)), domain=NA_LGL))>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_call, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L13_;

L54_:;
  // r31 = dyn base4("~", <lang switch(mode(object), name=, numeric=, call=object, character=as.name(object), expression=`[[`(object, 1), stop(gettextf("'%s' cannot be of mode '%s'", deparse1(substitute(object)), mode(object)), domain=NA_LGL))>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L13(r31)
  // L13(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L13_;

D8_:;
  // deopt 33 [_GlobalEnv1, l, _GlobalEnv1]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg__GlobalEnv1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg__GlobalEnv1_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 49 [object13]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 75 ["formula", l1, "formula"]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 24);
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L34_:;
  // r14 = dyn environment__(l, NULL, _GlobalEnv1)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg__GlobalEnv1_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment__, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L44_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r20 = dyn length(object14)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

L46_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

L55_:;
  // r34 = dyn class__(l1, NULL, "formula")
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D9_:;
  // deopt 35 [_GlobalEnv1, r14]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg__GlobalEnv1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 52 [r20]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 63 [object17]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 77 ["formula", r34]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L35_:;
  // st object = r14
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // goto L6()
  // L6()
  goto L6_;

L45_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_1;
  goto L9_;

L47_:;
  // p4 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p3 = prom<V +>{
  //     deparse1 = ldf deparse1;
  //     p2 = prom<V +>{
  //       object15 = ld object;
  //       object16 = force? object15;
  //       checkMissing(object16);
  //       return object16;
  //     };
  //     r23 = dyn deparse1(p2);
  //     return r23;
  //   };
  //   r25 = dyn gettextf("formula '%s' must be of the form '~expr'", p3);
  //   return r25;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_2, 0, NULL, CCP, RHO);
  // r27 = dyn stop[, domain](p4, NA_LGL)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

L50_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object18
  return Rsh_Fir_reg_object18_;

L56_:;
  // st ff = r34
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // _GlobalEnv3 = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D15_:;
  // deopt 60 [r27]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 79 [_GlobalEnv3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg__GlobalEnv3_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L11()
  // L11()
  goto L11_;

L57_:;
  // _GlobalEnv4 = force? _GlobalEnv3
  Rsh_Fir_reg__GlobalEnv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv3_);
  // checkMissing(_GlobalEnv4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg__GlobalEnv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // l2 = ld ff
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // environment__1 = ldf `environment<-`
  Rsh_Fir_reg_environment__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L58() else D20()
  // L58()
  goto L58_;

D20_:;
  // deopt 82 [_GlobalEnv4, l2, _GlobalEnv4]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg__GlobalEnv4_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg__GlobalEnv4_;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // r35 = dyn environment__1(l2, NULL, _GlobalEnv4)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg__GlobalEnv4_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment__1_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L59() else D21()
  // L59()
  goto L59_;

D21_:;
  // deopt 84 [_GlobalEnv4, r35]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg__GlobalEnv4_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L59_:;
  // st ff = r35
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // ff = ld ff
  Rsh_Fir_reg_ff = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L60() else D22()
  // L60()
  goto L60_;

D22_:;
  // deopt 86 [ff]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_ff;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L60_:;
  // ff1 = force? ff
  Rsh_Fir_reg_ff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ff);
  // checkMissing(ff1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ff1
  return Rsh_Fir_reg_ff1_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4102710431/0: expected 0, got %d", NCAPTURES);

  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object9_;
  SEXP Rsh_Fir_reg_object10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4102710431/0: expected 0, got %d", NCAPTURES);

  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_user_promise_inner4102710431_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r25_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4102710431/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p3 = prom<V +>{
  //   deparse1 = ldf deparse1;
  //   p2 = prom<V +>{
  //     object15 = ld object;
  //     object16 = force? object15;
  //     checkMissing(object16);
  //     return object16;
  //   };
  //   r23 = dyn deparse1(p2);
  //   return r23;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_3, 0, NULL, CCP, RHO);
  // r25 = dyn gettextf("formula '%s' must be of the form '~expr'", p3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_1;
}
SEXP Rsh_Fir_user_promise_inner4102710431_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r23_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4102710431/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p2 = prom<V +>{
  //   object15 = ld object;
  //   object16 = force? object15;
  //   checkMissing(object16);
  //   return object16;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4102710431_4, 0, NULL, CCP, RHO);
  // r23 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names33, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_1;
}
SEXP Rsh_Fir_user_promise_inner4102710431_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_object15_;
  SEXP Rsh_Fir_reg_object16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4102710431/0: expected 0, got %d", NCAPTURES);

  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return object16
  return Rsh_Fir_reg_object16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
