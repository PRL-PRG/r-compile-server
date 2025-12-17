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
SEXP Rsh_Fir_user_function_inner3924448841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3924448841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_mtcars;
  SEXP Rsh_Fir_reg_mtcars1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_mtcars3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_mtcars4_;
  SEXP Rsh_Fir_reg_mtcars5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_mtcars7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_with;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sort_by1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sort_by2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_subset;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_subset1_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r45_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3924448841
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3924448841_, RHO, CCP);
  // st sort_by = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // mtcars = ld mtcars
  Rsh_Fir_reg_mtcars = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 3 [mtcars]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_mtcars;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // mtcars1 = force? mtcars
  Rsh_Fir_reg_mtcars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars);
  // checkMissing(mtcars1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mtcars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(mtcars1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_mtcars1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L3() else L4(mtcars1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4(mtcars1)
    Rsh_Fir_reg_mtcars3_ = Rsh_Fir_reg_mtcars1_;
    goto L4_;
  }

L2_:;
  // mtcars4 = ld mtcars
  Rsh_Fir_reg_mtcars4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L3_:;
  // dr = tryDispatchBuiltin.1("$", mtcars1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_mtcars1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_mtcars3_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // r1 = `$`(mtcars3, <sym am>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_mtcars3_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args4);
  // goto L2()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [mtcars4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_mtcars4_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2()
  // L2()
  goto L2_;

L6_:;
  // mtcars5 = force? mtcars4
  Rsh_Fir_reg_mtcars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars4_);
  // checkMissing(mtcars5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_mtcars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(mtcars5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_mtcars5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args7);
  // if c1 then L8() else L9(mtcars5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L9(mtcars5)
    Rsh_Fir_reg_mtcars7_ = Rsh_Fir_reg_mtcars5_;
    goto L9_;
  }

L7_:;
  // sym = ldf with
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf with in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L8_:;
  // dr2 = tryDispatchBuiltin.1("$", mtcars5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_mtcars5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc1 then L10() else L9(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr2)
    Rsh_Fir_reg_mtcars7_ = Rsh_Fir_reg_dr2_;
    goto L9_;
  }

L9_:;
  // r2 = `$`(mtcars7, <sym mpg>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mtcars7_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args11);
  // goto L7()
  // L7()
  goto L7_;

L0_:;
  // sort_by1 = ldf sort_by
  Rsh_Fir_reg_sort_by1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L10_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L7()
  // L7()
  goto L7_;

L11_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base(<sym mtcars>, <lang sort_by(mpg, am)>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   mtcars8 = ld mtcars;
  //   mtcars9 = force? mtcars8;
  //   checkMissing(mtcars9);
  //   return mtcars9;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sort_by = ldf sort_by;
  //   p1 = prom<V +>{
  //     mpg = ld mpg;
  //     mpg1 = force? mpg;
  //     checkMissing(mpg1);
  //     return mpg1;
  //   };
  //   p2 = prom<V +>{
  //     am = ld am;
  //     am1 = force? am;
  //     checkMissing(am1);
  //     return am1;
  //   };
  //   r8 = dyn sort_by(p1, p2);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn with(p, p3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L15_:;
  // p4 = prom<V +>{
  //   mtcars10 = ld mtcars;
  //   mtcars11 = force? mtcars10;
  //   checkMissing(mtcars11);
  //   return mtcars11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   runif = ldf runif;
  //   p6 = prom<V +>{
  //     nrow = ldf nrow;
  //     p5 = prom<V +>{
  //       mtcars12 = ld mtcars;
  //       mtcars13 = force? mtcars12;
  //       checkMissing(mtcars13);
  //       return mtcars13;
  //     };
  //     r13 = dyn nrow(p5);
  //     return r13;
  //   };
  //   r15 = dyn runif(p6);
  //   return r15;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r17 = dyn sort_by1(p4, p7)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_by1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D3_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 19 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0()
  // L0()
  goto L0_;

L16_:;
  // sort_by2 = ldf sort_by
  Rsh_Fir_reg_sort_by2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p8 = prom<V +>{
  //   mtcars14 = ld mtcars;
  //   mtcars15 = force? mtcars14;
  //   checkMissing(mtcars15);
  //   return mtcars15;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   mtcars16 = ld mtcars;
  //   mtcars17 = force? mtcars16;
  //   checkMissing(mtcars17);
  //   c2 = `is.object`(mtcars17);
  //   if c2 then L4() else L5(mtcars17);
  // L2():
  //   r19 = dyn base1(<lang `$`(mtcars, am)>, <lang `$`(mtcars, mpg)>);
  //   goto L0(r19);
  // L3(dx5):
  //   mtcars20 = ld mtcars;
  //   mtcars21 = force? mtcars20;
  //   checkMissing(mtcars21);
  //   c3 = `is.object`(mtcars21);
  //   if c3 then L8() else L9(mtcars21);
  // L4():
  //   dr4 = tryDispatchBuiltin.1("$", mtcars17);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L6() else L5(dr4);
  // L5(mtcars19):
  //   r21 = `$`(mtcars19, <sym am>);
  //   goto L3(r21);
  // L6():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L3(dx4);
  // L7(dx7):
  //   list = ldf list in base;
  //   r23 = dyn list(dx5, dx7);
  //   goto L0(r23);
  // L8():
  //   dr6 = tryDispatchBuiltin.1("$", mtcars21);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L10() else L9(dr6);
  // L9(mtcars23):
  //   r22 = `$`(mtcars23, <sym mpg>);
  //   goto L7(r22);
  // L10():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L7(dx6);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r25 = dyn sort_by2(p8, p9)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_by2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 24 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // subset = ldf subset
  Rsh_Fir_reg_subset = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p12 = prom<V +>{
  //   sort_by3 = ldf sort_by;
  //   p10 = prom<V +>{
  //     mtcars24 = ld mtcars;
  //     mtcars25 = force? mtcars24;
  //     checkMissing(mtcars25);
  //     return mtcars25;
  //   };
  //   p11 = prom<V +>{
  //     __ = ldf `~` in base;
  //     r27 = dyn __(<lang `+`(am, mpg)>);
  //     return r27;
  //   };
  //   r29 = dyn sort_by3(p10, p11);
  //   return r29;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   am2 = ld am;
  //   am3 = force? am2;
  //   checkMissing(am3);
  //   mpg2 = ld mpg;
  //   mpg3 = force? mpg2;
  //   checkMissing(mpg3);
  //   c4 = ldf c in base;
  //   r33 = dyn c4(am3, mpg3);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base2(<sym am>, <sym mpg>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r35 = dyn subset[, select](p12, p13)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 30 [r35]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // subset1 = ldf subset
  Rsh_Fir_reg_subset1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p16 = prom<V +>{
  //   sort_by_data_frame = ldf `sort_by.data.frame`;
  //   p14 = prom<V +>{
  //     mtcars26 = ld mtcars;
  //     mtcars27 = force? mtcars26;
  //     checkMissing(mtcars27);
  //     return mtcars27;
  //   };
  //   p15 = prom<V +>{
  //     __1 = ldf `~` in base;
  //     r37 = dyn __1(<lang list(am, `-`(mpg))>);
  //     return r37;
  //   };
  //   r39 = dyn sort_by_data_frame(p14, p15);
  //   return r39;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r42):
  //   return r42;
  // L1():
  //   am4 = ld am;
  //   am5 = force? am4;
  //   checkMissing(am5);
  //   mpg4 = ld mpg;
  //   mpg5 = force? mpg4;
  //   checkMissing(mpg5);
  //   c5 = ldf c in base;
  //   r43 = dyn c5(am5, mpg5);
  //   goto L0(r43);
  // L2():
  //   r41 = dyn base3(<sym am>, <sym mpg>);
  //   goto L0(r41);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r45 = dyn subset1[, select](p16, p17)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 36 [r45]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars8_;
  SEXP Rsh_Fir_reg_mtcars9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars8 = ld mtcars
  Rsh_Fir_reg_mtcars8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars9 = force? mtcars8
  Rsh_Fir_reg_mtcars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars8_);
  // checkMissing(mtcars9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_mtcars9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return mtcars9
  return Rsh_Fir_reg_mtcars9_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sort_by;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sort_by = ldf sort_by
  Rsh_Fir_reg_sort_by = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p1 = prom<V +>{
  //   mpg = ld mpg;
  //   mpg1 = force? mpg;
  //   checkMissing(mpg1);
  //   return mpg1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   am = ld am;
  //   am1 = force? am;
  //   checkMissing(am1);
  //   return am1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn sort_by(p1, p2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_by, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mpg;
  SEXP Rsh_Fir_reg_mpg1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mpg = ld mpg
  Rsh_Fir_reg_mpg = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mpg1 = force? mpg
  Rsh_Fir_reg_mpg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mpg);
  // checkMissing(mpg1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_mpg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return mpg1
  return Rsh_Fir_reg_mpg1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_am;
  SEXP Rsh_Fir_reg_am1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // am = ld am
  Rsh_Fir_reg_am = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // am1 = force? am
  Rsh_Fir_reg_am1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_am);
  // checkMissing(am1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_am1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return am1
  return Rsh_Fir_reg_am1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars10_;
  SEXP Rsh_Fir_reg_mtcars11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars10 = ld mtcars
  Rsh_Fir_reg_mtcars10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars11 = force? mtcars10
  Rsh_Fir_reg_mtcars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars10_);
  // checkMissing(mtcars11)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_mtcars11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return mtcars11
  return Rsh_Fir_reg_mtcars11_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_runif;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // runif = ldf runif
  Rsh_Fir_reg_runif = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p6 = prom<V +>{
  //   nrow = ldf nrow;
  //   p5 = prom<V +>{
  //     mtcars12 = ld mtcars;
  //     mtcars13 = force? mtcars12;
  //     checkMissing(mtcars13);
  //     return mtcars13;
  //   };
  //   r13 = dyn nrow(p5);
  //   return r13;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r15 = dyn runif(p6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_runif, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p5 = prom<V +>{
  //   mtcars12 = ld mtcars;
  //   mtcars13 = force? mtcars12;
  //   checkMissing(mtcars13);
  //   return mtcars13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r13 = dyn nrow(p5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars12_;
  SEXP Rsh_Fir_reg_mtcars13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars12 = ld mtcars
  Rsh_Fir_reg_mtcars12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars13 = force? mtcars12
  Rsh_Fir_reg_mtcars13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars12_);
  // checkMissing(mtcars13)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_mtcars13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return mtcars13
  return Rsh_Fir_reg_mtcars13_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars14_;
  SEXP Rsh_Fir_reg_mtcars15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars14 = ld mtcars
  Rsh_Fir_reg_mtcars14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars15 = force? mtcars14
  Rsh_Fir_reg_mtcars15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars14_);
  // checkMissing(mtcars15)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_mtcars15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return mtcars15
  return Rsh_Fir_reg_mtcars15_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_mtcars16_;
  SEXP Rsh_Fir_reg_mtcars17_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_mtcars19_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_mtcars20_;
  SEXP Rsh_Fir_reg_mtcars21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_mtcars23_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // mtcars16 = ld mtcars
  Rsh_Fir_reg_mtcars16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars17 = force? mtcars16
  Rsh_Fir_reg_mtcars17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars16_);
  // checkMissing(mtcars17)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_mtcars17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(mtcars17)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_mtcars17_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c2 then L4() else L5(mtcars17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L5(mtcars17)
    Rsh_Fir_reg_mtcars19_ = Rsh_Fir_reg_mtcars17_;
    goto L5_;
  }

L2_:;
  // r19 = dyn base1(<lang `$`(mtcars, am)>, <lang `$`(mtcars, mpg)>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // mtcars20 = ld mtcars
  Rsh_Fir_reg_mtcars20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars21 = force? mtcars20
  Rsh_Fir_reg_mtcars21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars20_);
  // checkMissing(mtcars21)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_mtcars21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(mtcars21)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_mtcars21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args30);
  // if c3 then L8() else L9(mtcars21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L8()
    goto L8_;
  } else {
  // L9(mtcars21)
    Rsh_Fir_reg_mtcars23_ = Rsh_Fir_reg_mtcars21_;
    goto L9_;
  }

L4_:;
  // dr4 = tryDispatchBuiltin.1("$", mtcars17)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_mtcars17_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc2 then L6() else L5(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr4)
    Rsh_Fir_reg_mtcars19_ = Rsh_Fir_reg_dr4_;
    goto L5_;
  }

L5_:;
  // r21 = `$`(mtcars19, <sym am>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_mtcars19_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args33);
  // goto L3(r21)
  // L3(r21)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r21_;
  goto L3_;

L6_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

L7_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r23 = dyn list(dx5, dx7)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r23_;
  goto L0_;

L8_:;
  // dr6 = tryDispatchBuiltin.1("$", mtcars21)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_mtcars21_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc3 then L10() else L9(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr6)
    Rsh_Fir_reg_mtcars23_ = Rsh_Fir_reg_dr6_;
    goto L9_;
  }

L9_:;
  // r22 = `$`(mtcars23, <sym mpg>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_mtcars23_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args38);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L7_;

L10_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L7(dx6)
  // L7(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sort_by3_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sort_by3 = ldf sort_by
  Rsh_Fir_reg_sort_by3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p10 = prom<V +>{
  //   mtcars24 = ld mtcars;
  //   mtcars25 = force? mtcars24;
  //   checkMissing(mtcars25);
  //   return mtcars25;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r27 = dyn __(<lang `+`(am, mpg)>);
  //   return r27;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r29 = dyn sort_by3(p10, p11)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_by3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars24_;
  SEXP Rsh_Fir_reg_mtcars25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars24 = ld mtcars
  Rsh_Fir_reg_mtcars24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars25 = force? mtcars24
  Rsh_Fir_reg_mtcars25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars24_);
  // checkMissing(mtcars25)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_mtcars25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return mtcars25
  return Rsh_Fir_reg_mtcars25_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r27 = dyn __(<lang `+`(am, mpg)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_am2_;
  SEXP Rsh_Fir_reg_am3_;
  SEXP Rsh_Fir_reg_mpg2_;
  SEXP Rsh_Fir_reg_mpg3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // am2 = ld am
  Rsh_Fir_reg_am2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // am3 = force? am2
  Rsh_Fir_reg_am3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_am2_);
  // checkMissing(am3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_am3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // mpg2 = ld mpg
  Rsh_Fir_reg_mpg2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mpg3 = force? mpg2
  Rsh_Fir_reg_mpg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mpg2_);
  // checkMissing(mpg3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_mpg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r33 = dyn c4(am3, mpg3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_am3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_mpg3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base2(<sym am>, <sym mpg>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sort_by_data_frame;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sort_by_data_frame = ldf `sort_by.data.frame`
  Rsh_Fir_reg_sort_by_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p14 = prom<V +>{
  //   mtcars26 = ld mtcars;
  //   mtcars27 = force? mtcars26;
  //   checkMissing(mtcars27);
  //   return mtcars27;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r37 = dyn __1(<lang list(am, `-`(mpg))>);
  //   return r37;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r39 = dyn sort_by_data_frame(p14, p15)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_by_data_frame, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mtcars26_;
  SEXP Rsh_Fir_reg_mtcars27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mtcars26 = ld mtcars
  Rsh_Fir_reg_mtcars26_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mtcars27 = force? mtcars26
  Rsh_Fir_reg_mtcars27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars26_);
  // checkMissing(mtcars27)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_mtcars27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return mtcars27
  return Rsh_Fir_reg_mtcars27_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r37 = dyn __1(<lang list(am, `-`(mpg))>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_am4_;
  SEXP Rsh_Fir_reg_am5_;
  SEXP Rsh_Fir_reg_mpg4_;
  SEXP Rsh_Fir_reg_mpg5_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r42
  return Rsh_Fir_reg_r42_;

L1_:;
  // am4 = ld am
  Rsh_Fir_reg_am4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // am5 = force? am4
  Rsh_Fir_reg_am5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_am4_);
  // checkMissing(am5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_am5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // mpg4 = ld mpg
  Rsh_Fir_reg_mpg4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mpg5 = force? mpg4
  Rsh_Fir_reg_mpg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mpg4_);
  // checkMissing(mpg5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_mpg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r43 = dyn c5(am5, mpg5)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_am5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_mpg5_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L0_;

L2_:;
  // r41 = dyn base3(<sym am>, <sym mpg>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3924448841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3924448841 dynamic dispatch ([x, y, `...`])

  return Rsh_Fir_user_version_inner3924448841_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3924448841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3924448841 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3924448841/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
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
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r2 = dyn UseMethod("sort_by")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("sort_by")
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
