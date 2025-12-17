#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner786244969_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner786244969_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner786244969_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner786244969_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner786244969_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner786244969_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner786244969
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner786244969_, RHO, CCP);
  // st `.mergeImportMethods` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner786244969_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner786244969 dynamic dispatch ([impenv, expenv, metaname])

  return Rsh_Fir_user_version_inner786244969_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner786244969_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner786244969 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner786244969/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_impenv;
  SEXP Rsh_Fir_reg_expenv;
  SEXP Rsh_Fir_reg_metaname;
  SEXP Rsh_Fir_reg_impenv1_;
  SEXP Rsh_Fir_reg_impenv2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_impenv4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_metaname1_;
  SEXP Rsh_Fir_reg_metaname2_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_impMethods;
  SEXP Rsh_Fir_reg_impMethods1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_metaname7_;
  SEXP Rsh_Fir_reg_metaname8_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_impMethods4_;
  SEXP Rsh_Fir_reg_impMethods5_;

  // Bind parameters
  Rsh_Fir_reg_impenv = PARAMS[0];
  Rsh_Fir_reg_expenv = PARAMS[1];
  Rsh_Fir_reg_metaname = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st impenv = impenv
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_impenv, RHO);
  (void)(Rsh_Fir_reg_impenv);
  // st expenv = expenv
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_expenv, RHO);
  (void)(Rsh_Fir_reg_expenv);
  // st metaname = metaname
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_metaname, RHO);
  (void)(Rsh_Fir_reg_metaname);
  // impenv1 = ld impenv
  Rsh_Fir_reg_impenv1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L0_:;
  // st impMethods = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args1);
  // c2 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c2 then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // st impenv = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // impMethods4 = ld impMethods
  Rsh_Fir_reg_impMethods4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D0_:;
  // deopt 0 [impenv1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_impenv1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // impenv2 = force? impenv1
  Rsh_Fir_reg_impenv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_impenv1_);
  // checkMissing(impenv2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_impenv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(impenv2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_impenv2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args4);
  // if c then L6() else L7(impenv2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(impenv2)
    Rsh_Fir_reg_impenv4_ = Rsh_Fir_reg_impenv2_;
    goto L7_;
  }

L6_:;
  // dr = tryDispatchBuiltin.1("[[", impenv2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_impenv2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_impenv4_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // metaname1 = ld metaname
  Rsh_Fir_reg_metaname1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D1_:;
  // deopt 2 [impenv4, metaname1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_impenv4_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_metaname1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // metaname2 = force? metaname1
  Rsh_Fir_reg_metaname2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname1_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r = dyn __(impenv4, metaname2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_impenv4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_metaname2_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L10_:;
  // impMethods = ld impMethods
  Rsh_Fir_reg_impMethods = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r1 = dyn base(<sym impMethods>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

D2_:;
  // deopt 7 [impMethods]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_impMethods;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // impMethods1 = force? impMethods
  Rsh_Fir_reg_impMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_impMethods);
  // checkMissing(impMethods1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_impMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c1 = `==`(impMethods1, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_impMethods1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // goto L1(c1)
  // L1(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L1_;

L13_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r4 = dyn ___("methods", ".mergeMethodsTable2")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 15 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // checkFun.0(r4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r4_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args13));
  // r5 = r4 as cls
  Rsh_Fir_reg_r5_ = Rsh_Fir_cast(Rsh_Fir_reg_r4_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   impMethods2 = ld impMethods;
  //   impMethods3 = force? impMethods2;
  //   checkMissing(impMethods3);
  //   return impMethods3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner786244969_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   expenv1 = ld expenv;
  //   expenv2 = force? expenv1;
  //   checkMissing(expenv2);
  //   c3 = `is.object`(expenv2);
  //   if c3 then L1() else L2(expenv2);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[[", expenv2);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(expenv4):
  //   metaname3 = ld metaname;
  //   metaname4 = force? metaname3;
  //   __1 = ldf `[[` in base;
  //   r7 = dyn __1(expenv4, metaname4);
  //   goto L0(r7);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner786244969_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   expenv5 = ld expenv;
  //   expenv6 = force? expenv5;
  //   checkMissing(expenv6);
  //   return expenv6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner786244969_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   metaname5 = ld metaname;
  //   metaname6 = force? metaname5;
  //   checkMissing(metaname6);
  //   return metaname6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner786244969_3, 0, NULL, CCP, RHO);
  // r11 = dyn r5[, newtable, , ](p, p1, p2, p3)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args23[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r5_, 4, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // l = ld impenv
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c4 then L17() else L18(r11, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L17()
    goto L17_;
  } else {
  // L18(r11, l)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L18_;
  }

L17_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l, r11)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args25);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc2 then L19() else L18(r11, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L19()
    goto L19_;
  } else {
  // L18(r11, dr4)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L18_;
  }

L18_:;
  // metaname7 = ld metaname
  Rsh_Fir_reg_metaname7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L19_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L3(r11, dx4)
  // L3(r11, dx4)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D6_:;
  // deopt 24 [r13, l2, r11, metaname7]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_metaname7_;
  Rsh_Fir_deopt(24, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // metaname8 = force? metaname7
  Rsh_Fir_reg_metaname8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname7_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r16 = dyn ____(l2, r11, metaname8)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_metaname8_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r13, r16)
  // L3(r13, r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L3_;

D7_:;
  // deopt 30 [impMethods4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_impMethods4_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // impMethods5 = force? impMethods4
  Rsh_Fir_reg_impMethods5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_impMethods4_);
  // checkMissing(impMethods5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_impMethods5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return impMethods5
  return Rsh_Fir_reg_impMethods5_;
}
SEXP Rsh_Fir_user_promise_inner786244969_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_impMethods2_;
  SEXP Rsh_Fir_reg_impMethods3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner786244969/0: expected 0, got %d", NCAPTURES);

  // impMethods2 = ld impMethods
  Rsh_Fir_reg_impMethods2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // impMethods3 = force? impMethods2
  Rsh_Fir_reg_impMethods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_impMethods2_);
  // checkMissing(impMethods3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_impMethods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return impMethods3
  return Rsh_Fir_reg_impMethods3_;
}
SEXP Rsh_Fir_user_promise_inner786244969_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_expenv1_;
  SEXP Rsh_Fir_reg_expenv2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_expenv4_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_metaname3_;
  SEXP Rsh_Fir_reg_metaname4_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner786244969/0: expected 0, got %d", NCAPTURES);

  // expenv1 = ld expenv
  Rsh_Fir_reg_expenv1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // expenv2 = force? expenv1
  Rsh_Fir_reg_expenv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expenv1_);
  // checkMissing(expenv2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_expenv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(expenv2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_expenv2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c3 then L1() else L2(expenv2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(expenv2)
    Rsh_Fir_reg_expenv4_ = Rsh_Fir_reg_expenv2_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[[", expenv2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_expenv2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_expenv4_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // metaname3 = ld metaname
  Rsh_Fir_reg_metaname3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // metaname4 = force? metaname3
  Rsh_Fir_reg_metaname4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname3_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn __1(expenv4, metaname4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_expenv4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_metaname4_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner786244969_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_expenv5_;
  SEXP Rsh_Fir_reg_expenv6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner786244969/0: expected 0, got %d", NCAPTURES);

  // expenv5 = ld expenv
  Rsh_Fir_reg_expenv5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // expenv6 = force? expenv5
  Rsh_Fir_reg_expenv6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expenv5_);
  // checkMissing(expenv6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_expenv6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return expenv6
  return Rsh_Fir_reg_expenv6_;
}
SEXP Rsh_Fir_user_promise_inner786244969_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_metaname5_;
  SEXP Rsh_Fir_reg_metaname6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner786244969/0: expected 0, got %d", NCAPTURES);

  // metaname5 = ld metaname
  Rsh_Fir_reg_metaname5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // metaname6 = force? metaname5
  Rsh_Fir_reg_metaname6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname5_);
  // checkMissing(metaname6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_metaname6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return metaname6
  return Rsh_Fir_reg_metaname6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
