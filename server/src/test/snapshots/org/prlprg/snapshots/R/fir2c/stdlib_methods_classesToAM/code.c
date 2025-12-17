#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2132960016_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2132960016_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2132960016_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2132960016_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1014511133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1014511133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1014511133_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1014511133_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1014511133_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1014511133_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1014511133_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1014511133_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_classesToAM;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_am;
  SEXP Rsh_Fir_reg_am1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2132960016
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2132960016_, RHO, CCP);
  // st classesToAM = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // classesToAM = ldf classesToAM
  Rsh_Fir_reg_classesToAM = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p1 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L3() else L4();
  // L0(r2):
  //   return r2;
  // L3():
  //   sym1 = ldf class;
  //   base1 = ldf class in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L4():
  //   r1 = dyn base(<lang class(show)>, <lang class(getMethod(show))>);
  //   goto L0(r1);
  // L1(r4):
  //   sym2 = ldf class;
  //   base2 = ldf class in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L7() else L8();
  // L5():
  //   show = ld show;
  //   show1 = force? show;
  //   checkMissing(show1);
  //   class = ldf class in base;
  //   r5 = dyn class(show1);
  //   goto L1(r5);
  // L6():
  //   r3 = dyn base1(<sym show>);
  //   goto L1(r3);
  // L2(r7):
  //   list = ldf list in base;
  //   r11 = dyn list(r4, r7);
  //   goto L0(r11);
  // L7():
  //   getMethod = ldf getMethod;
  //   p = prom<V +>{
  //     show2 = ld show;
  //     show3 = force? show2;
  //     checkMissing(show3);
  //     return show3;
  //   };
  //   r9 = dyn getMethod(p);
  //   class1 = ldf class in base;
  //   r10 = dyn class1(r9);
  //   goto L2(r10);
  // L8():
  //   r6 = dyn base2(<lang getMethod(show)>);
  //   goto L2(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r13 = dyn classesToAM(p1, TRUE)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_classesToAM, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r13]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st am = r13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // am = ld am
  Rsh_Fir_reg_am = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 [am]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_am;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // am1 = force? am
  Rsh_Fir_reg_am1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_am);
  // checkMissing(am1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_am1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return am1
  return Rsh_Fir_reg_am1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
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
  SEXP Rsh_Fir_reg_show;
  SEXP Rsh_Fir_reg_show1_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_getMethod;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_class1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // return r2
  return Rsh_Fir_reg_r2_;

L3_:;
  // sym1 = ldf class
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf class in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r1 = dyn base(<lang class(show)>, <lang class(getMethod(show))>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

L1_:;
  // sym2 = ldf class
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf class in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // show = ld show
  Rsh_Fir_reg_show = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // show1 = force? show
  Rsh_Fir_reg_show1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_show);
  // checkMissing(show1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_show1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r5 = dyn class(show1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_show1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L6_:;
  // r3 = dyn base1(<sym show>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r11 = dyn list(r4, r7)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r11_;
  goto L0_;

L7_:;
  // getMethod = ldf getMethod
  Rsh_Fir_reg_getMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p = prom<V +>{
  //   show2 = ld show;
  //   show3 = force? show2;
  //   checkMissing(show3);
  //   return show3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn getMethod(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getMethod, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r10 = dyn class1(r9)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r10_;
  goto L2_;

L8_:;
  // r6 = dyn base2(<lang getMethod(show)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_show2_;
  SEXP Rsh_Fir_reg_show3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // show2 = ld show
  Rsh_Fir_reg_show2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // show3 = force? show2
  Rsh_Fir_reg_show3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_show2_);
  // checkMissing(show3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_show3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return show3
  return Rsh_Fir_reg_show3_;
}
SEXP Rsh_Fir_user_function_inner2132960016_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2132960016 dynamic dispatch ([classes, includeSubclasses, abbreviate])

  return Rsh_Fir_user_version_inner2132960016_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2132960016_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2132960016 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2132960016/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_classes;
  SEXP Rsh_Fir_reg_includeSubclasses;
  SEXP Rsh_Fir_reg_abbreviate;
  SEXP Rsh_Fir_reg_includeSubclasses_isMissing;
  SEXP Rsh_Fir_reg_includeSubclasses_orDefault;
  SEXP Rsh_Fir_reg_abbreviate_isMissing;
  SEXP Rsh_Fir_reg_abbreviate_orDefault;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_includeSubclasses1_;
  SEXP Rsh_Fir_reg_includeSubclasses2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_includeSubclasses3_;
  SEXP Rsh_Fir_reg_includeSubclasses4_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_classes1_;
  SEXP Rsh_Fir_reg_classes2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_is;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_includeSubclasses7_;
  SEXP Rsh_Fir_reg_includeSubclasses8_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_classes3_;
  SEXP Rsh_Fir_reg_classes4_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_classes5_;
  SEXP Rsh_Fir_reg_classes6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_classes7_;
  SEXP Rsh_Fir_reg_classes8_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_classes10_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_getClass;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg__mergeMatrices;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_abbreviate1_;
  SEXP Rsh_Fir_reg_abbreviate2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_abbr;
  SEXP Rsh_Fir_reg_abbr1_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_abbr2_;
  SEXP Rsh_Fir_reg_abbr3_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_abbr4_;
  SEXP Rsh_Fir_reg_abbr5_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_abbreviate3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_abbr6_;
  SEXP Rsh_Fir_reg_abbr7_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_abbreviate4_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dimnames3_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_dimnames__1_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_reg_value7_;

  // Bind parameters
  Rsh_Fir_reg_classes = PARAMS[0];
  Rsh_Fir_reg_includeSubclasses = PARAMS[1];
  Rsh_Fir_reg_abbreviate = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st classes = classes
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_classes, RHO);
  (void)(Rsh_Fir_reg_classes);
  // includeSubclasses_isMissing = missing.0(includeSubclasses)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_includeSubclasses;
  Rsh_Fir_reg_includeSubclasses_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if includeSubclasses_isMissing then L0(FALSE) else L0(includeSubclasses)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_includeSubclasses_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_includeSubclasses_orDefault = Rsh_const(CCP, 11);
    goto L0_;
  } else {
  // L0(includeSubclasses)
    Rsh_Fir_reg_includeSubclasses_orDefault = Rsh_Fir_reg_includeSubclasses;
    goto L0_;
  }

L0_:;
  // st includeSubclasses = includeSubclasses_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_includeSubclasses_orDefault, RHO);
  (void)(Rsh_Fir_reg_includeSubclasses_orDefault);
  // abbreviate_isMissing = missing.0(abbreviate)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_abbreviate;
  Rsh_Fir_reg_abbreviate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if abbreviate_isMissing then L1(2.0) else L1(abbreviate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_abbreviate_isMissing)) {
  // L1(2.0)
    Rsh_Fir_reg_abbreviate_orDefault = Rsh_const(CCP, 13);
    goto L1_;
  } else {
  // L1(abbreviate)
    Rsh_Fir_reg_abbreviate_orDefault = Rsh_Fir_reg_abbreviate;
    goto L1_;
  }

L1_:;
  // st abbreviate = abbreviate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_abbreviate_orDefault, RHO);
  (void)(Rsh_Fir_reg_abbreviate_orDefault);
  // r = clos inner1014511133
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1014511133_, RHO, CCP);
  // st `.mergeMatrices` = r
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L2_:;
  // r4 = `==`(r2, 1.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L29_:;
  // includeSubclasses1 = ld includeSubclasses
  Rsh_Fir_reg_includeSubclasses1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

L30_:;
  // r1 = dyn base(<sym includeSubclasses>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r1)
  // L2(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L2_;

D0_:;
  // deopt 5 [includeSubclasses1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_includeSubclasses1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

L31_:;
  // includeSubclasses2 = force? includeSubclasses1
  Rsh_Fir_reg_includeSubclasses2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_includeSubclasses1_);
  // checkMissing(includeSubclasses2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_includeSubclasses2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r3 = dyn length(includeSubclasses2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_includeSubclasses2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L33_:;
  // sym1 = ldf `rep.int`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf `rep.int` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // st includeSubclasses = r6
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // goto L6()
  // L6()
  goto L6_;

L32_:;
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

L34_:;
  // includeSubclasses3 = ld includeSubclasses
  Rsh_Fir_reg_includeSubclasses3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

L35_:;
  // r5 = dyn base1(<sym includeSubclasses>, <lang length(classes)>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_1;
  goto L4_;

L43_:;
  // p = prom<V +>{
  //   includeSubclasses5 = ld includeSubclasses;
  //   includeSubclasses6 = force? includeSubclasses5;
  //   checkMissing(includeSubclasses6);
  //   return includeSubclasses6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_, 0, NULL, CCP, RHO);
  // r13 = dyn is(p, "logical")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D2_:;
  // deopt 13 [includeSubclasses3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_includeSubclasses3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // includeSubclasses4 = force? includeSubclasses3
  Rsh_Fir_reg_includeSubclasses4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_includeSubclasses3_);
  // checkMissing(includeSubclasses4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_includeSubclasses4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L44_:;
  // r14 = `!`(r13)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args28);
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c1 then L7(c1) else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L7_;
  } else {
  // L45()
    goto L45_;
  }

L5_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r10 = dyn rep_int(includeSubclasses4, r8)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_includeSubclasses4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

L7_:;
  // c13 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c13 then L55() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L55()
    goto L55_;
  } else {
  // L10()
    goto L10_;
  }

L37_:;
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

L38_:;
  // r7 = dyn base2(<sym classes>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L5_;

L45_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard3 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

D3_:;
  // deopt 17 [classes1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 22 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L8_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard4 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L59() else D14()
  // L59()
  goto L59_;

L39_:;
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r9 = dyn length1(classes2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_classes2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L41_:;
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r10_1;
  goto L4_;

L46_:;
  // includeSubclasses7 = ld includeSubclasses
  Rsh_Fir_reg_includeSubclasses7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L47_:;
  // r15 = dyn base3(<sym includeSubclasses>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(c1, r15)
  // L8(c1, r15)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

L55_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

D4_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 34 [c1, includeSubclasses7]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_includeSubclasses7_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r24 = `!=`(r21, r22)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args38);
  // c10 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // c11 = `||`(c9, c10)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args40);
  // goto L7(c11)
  // L7(c11)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c11_;
  goto L7_;

L40_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L5_;

L48_:;
  // includeSubclasses8 = force? includeSubclasses7
  Rsh_Fir_reg_includeSubclasses8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_includeSubclasses7_);
  // checkMissing(includeSubclasses8)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_includeSubclasses8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r17 = dyn length2(includeSubclasses8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_includeSubclasses8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L50_:;
  // classes3 = ld classes
  Rsh_Fir_reg_classes3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // r20 = dyn base4(<sym classes>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9(c6, r16, r20)
  // L9(c6, r16, r20)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
  goto L9_;

L56_:;
  // r25 = dyn stop("argument 'includeSubclasses' must be a logical, either one value or a vector of the same length as argument 'classes'")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L59_:;
  // r27 = dyn matrix(0.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

D9_:;
  // deopt 37 [c1, r17]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [c6, r16, classes3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_classes3_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 48 [r25]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 56 [r27]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L8(c1, r17)
  // L8(c1, r17)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

L52_:;
  // classes4 = force? classes3
  Rsh_Fir_reg_classes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes3_);
  // checkMissing(classes4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_classes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r23 = dyn length3(classes4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_classes4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

L57_:;
  // goto L11()
  // L11()
  goto L11_;

L60_:;
  // st value = r27
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

D11_:;
  // deopt 42 [c6, r16, r23]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(42, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // s = toForSeq(r29)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args50);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 28);
  // goto L13(i)
  // L13(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L13_;

L53_:;
  // goto L9(c6, r16, r23)
  // L9(c6, r16, r23)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L9_;

L61_:;
  // classes5 = ld classes
  Rsh_Fir_reg_classes5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

L62_:;
  // r28 = dyn base5(<sym classes>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L12_;

D16_:;
  // deopt 59 [classes5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_classes5_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L13_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // c14 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if c14 then L64() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L64()
    goto L64_;
  } else {
  // L15()
    goto L15_;
  }

L63_:;
  // classes6 = force? classes5
  Rsh_Fir_reg_classes6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes5_);
  // checkMissing(classes6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_classes6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r30 = seq_along(classes6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_classes6_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args55);
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L12_;

L15_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args56);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // classes7 = ld classes
  Rsh_Fir_reg_classes7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

L64_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

D17_:;
  // deopt 62 [i2, classes7]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_classes7_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L16_:;
  // r47 = `-`(r42, 1.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args58);
  // st abbr = r47
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L65_:;
  // classes8 = force? classes7
  Rsh_Fir_reg_classes8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes7_);
  // checkMissing(classes8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_classes8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(classes8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_classes8_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args61);
  // if c15 then L66() else L67(i2, classes8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L66()
    goto L66_;
  } else {
  // L67(i2, classes8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_classes10_ = Rsh_Fir_reg_classes8_;
    goto L67_;
  }

L74_:;
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // r41 = dyn base6(<lang as.integer(abbreviate)>, <lang `:`(0.0, 3.0)>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L16(r41)
  // L16(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L16_;

L14_:;
  // st class = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

L17_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r46 = dyn match(r44, <int 0, 1, 2, 3>, NA_INT, NULL)
  SEXP Rsh_Fir_array_args64[4];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args64[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L80() else D25()
  // L80()
  goto L80_;

L18_:;
  // r51 = `!=`(r49, 1.0)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args65);
  // c17 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c17 then L19(c17) else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L19(c17)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c17_;
    goto L19_;
  } else {
  // L85()
    goto L85_;
  }

L66_:;
  // dr = tryDispatchBuiltin.1("[[", classes8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_classes8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc then L68() else L67(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L68()
    goto L68_;
  } else {
  // L67(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_classes10_ = Rsh_Fir_reg_dr;
    goto L67_;
  }

L67_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L69() else D18()
  // L69()
  goto L69_;

L76_:;
  // abbreviate1 = ld abbreviate
  Rsh_Fir_reg_abbreviate1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L78() else D23()
  // L78()
  goto L78_;

L77_:;
  // r43 = dyn base7(<sym abbreviate>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L17(r43)
  // L17(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L17_;

L81_:;
  // abbr = ld abbr
  Rsh_Fir_reg_abbr = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L83() else D26()
  // L83()
  goto L83_;

L82_:;
  // r48 = dyn base8(<sym abbr>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L18_;

D18_:;
  // deopt 64 [i6, classes10, i9]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_classes10_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 69 [i8]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 86 [abbreviate1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_abbreviate1_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 95 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 101 [abbr]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_abbr;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L19_:;
  // c26 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // if c26 then L91() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L91()
    goto L91_;
  } else {
  // L21()
    goto L21_;
  }

L68_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L14(i2, dx)
  // L14(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

L69_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r31 = dyn __(classes10, i10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_classes10_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L14(i6, r31)
  // L14(i6, r31)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r31_;
  goto L14_;

L70_:;
  // p1 = prom<V +>{
  //   class = ld class;
  //   class1 = force? class;
  //   checkMissing(class1);
  //   return class1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_1, 0, NULL, CCP, RHO);
  // r33 = dyn getClass(p1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L78_:;
  // abbreviate2 = force? abbreviate1
  Rsh_Fir_reg_abbreviate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbreviate1_);
  // checkMissing(abbreviate2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_abbreviate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r45 = dyn as_integer(abbreviate2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_abbreviate2_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L79() else D24()
  // L79()
  goto L79_;

L80_:;
  // goto L16(r46)
  // L16(r46)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r46_;
  goto L16_;

L83_:;
  // abbr1 = force? abbr
  Rsh_Fir_reg_abbr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbr);
  // checkMissing(abbr1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_abbr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r50 = dyn length4(abbr1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_abbr1_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L84() else D27()
  // L84()
  goto L84_;

L85_:;
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard9 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

D20_:;
  // deopt 71 [i8, r33]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 89 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 104 [r50]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L20_:;
  // c23 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // c24 = `||`(c22, c23)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args82);
  // goto L19(c24)
  // L19(c24)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c24_;
  goto L19_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // abbr4 = ld abbr
  Rsh_Fir_reg_abbr4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L95() else D32()
  // L95()
  goto L95_;

L71_:;
  // st classDef = r33
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // _mergeMatrices = ldf `.mergeMatrices`
  Rsh_Fir_reg__mergeMatrices = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

L79_:;
  // goto L17(r45)
  // L17(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L17_;

L84_:;
  // goto L18(r50)
  // L18(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L18_;

L86_:;
  // abbr2 = ld abbr
  Rsh_Fir_reg_abbr2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L88() else D28()
  // L88()
  goto L88_;

L87_:;
  // r52 = dyn base9(<sym abbr>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L20(c17, r52)
  // L20(c17, r52)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L20_;

L91_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

D21_:;
  // deopt 74 [i8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 109 [c17, abbr2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_abbr2_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 121 [abbr4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_abbr4_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L72_:;
  // p2 = prom<V +>{
  //   value = ld value;
  //   value1 = force? value;
  //   checkMissing(value1);
  //   return value1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_2, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   _oneClassToAM = ldf `.oneClassToAM`;
  //   p3 = prom<V +>{
  //     classDef = ld classDef;
  //     classDef1 = force? classDef;
  //     checkMissing(classDef1);
  //     return classDef1;
  //   };
  //   p4 = prom<V +>{
  //     includeSubclasses9 = ld includeSubclasses;
  //     includeSubclasses10 = force? includeSubclasses9;
  //     checkMissing(includeSubclasses10);
  //     c16 = `is.object`(includeSubclasses10);
  //     if c16 then L1() else L2(includeSubclasses10);
  //   L0(dx3):
  //     return dx3;
  //   L1():
  //     dr2 = tryDispatchBuiltin.1("[[", includeSubclasses10);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L3() else L2(dr2);
  //   L2(includeSubclasses12):
  //     i11 = ld i;
  //     i12 = force? i11;
  //     __1 = ldf `[[` in base;
  //     r36 = dyn __1(includeSubclasses12, i12);
  //     goto L0(r36);
  //   L3():
  //     dx2 = getTryDispatchBuiltinValue(dr2);
  //     goto L0(dx2);
  //   };
  //   r38 = dyn _oneClassToAM(p3, p4);
  //   return r38;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_3, 0, NULL, CCP, RHO);
  // r40 = dyn _mergeMatrices(p2, p5)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__mergeMatrices, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

L88_:;
  // abbr3 = force? abbr2
  Rsh_Fir_reg_abbr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbr2_);
  // checkMissing(abbr3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_abbr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r54 = dyn is_na(abbr3)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_abbr3_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L89() else D29()
  // L89()
  goto L89_;

L92_:;
  // r55 = dyn stop1("argument 'abbreviate' must be 0, 1, 2, or 3")
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

L95_:;
  // abbr5 = force? abbr4
  Rsh_Fir_reg_abbr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbr4_);
  // checkMissing(abbr5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_abbr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // __2 = ldf `%%` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r57 = dyn __2(abbr5, 2.0)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_abbr5_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L96() else D33()
  // L96()
  goto L96_;

D22_:;
  // deopt 77 [i8, r40]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 112 [c17, r54]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 117 [r55]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 125 [r57]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L73_:;
  // st value = r40
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L13(i8)
  // L13(i8)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i8_;
  goto L13_;

L89_:;
  // goto L20(c17, r54)
  // L20(c17, r54)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L20_;

L93_:;
  // goto L22()
  // L22()
  goto L22_;

L96_:;
  // c27 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // if c27 then L97() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L97()
    goto L97_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // abbr6 = ld abbr
  Rsh_Fir_reg_abbr6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L108() else D40()
  // L108()
  goto L108_;

L97_:;
  // abbreviate3 = ldf abbreviate
  Rsh_Fir_reg_abbreviate3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L98() else D34()
  // L98()
  goto L98_;

D34_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 145 [abbr6]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_abbr6_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L98_:;
  // p6 = prom<V +>{
  //   sym10 = ldf dimnames;
  //   base10 = ldf dimnames in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L2() else L3();
  // L0(r59):
  //   c28 = `is.object`(r59);
  //   if c28 then L4() else L5(r59);
  // L2():
  //   value2 = ld value;
  //   value3 = force? value2;
  //   checkMissing(value3);
  //   dimnames = ldf dimnames in base;
  //   r60 = dyn dimnames(value3);
  //   goto L0(r60);
  // L3():
  //   r58 = dyn base10(<sym value>);
  //   goto L0(r58);
  // L1(dx5):
  //   return dx5;
  // L4():
  //   dr4 = tryDispatchBuiltin.1("[[", r59);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L6() else L5(dr4);
  // L5(r62):
  //   __3 = ldf `[[` in base;
  //   r63 = dyn __3(r62, 1.0);
  //   goto L1(r63);
  // L6():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_6, 0, NULL, CCP, RHO);
  // r65 = dyn abbreviate3(p6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abbreviate3_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

L108_:;
  // abbr7 = force? abbr6
  Rsh_Fir_reg_abbr7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbr6_);
  // checkMissing(abbr7)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_abbr7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r76 = dyn ___(abbr7, 2.0)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_abbr7_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L109() else D41()
  // L109()
  goto L109_;

D35_:;
  // deopt 129 [r65]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 149 [r76]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L99_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames1 = ldf dimnames
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L100() else D36()
  // L100()
  goto L100_;

L109_:;
  // c30 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args112);
  // if c30 then L110() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L110()
    goto L110_;
  } else {
  // L26()
    goto L26_;
  }

D36_:;
  // deopt 131 [r65, l1, r65]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // value6 = ld value
  Rsh_Fir_reg_value6_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L121() else D48()
  // L121()
  goto L121_;

L100_:;
  // r66 = dyn dimnames1(r65, NULL)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L101() else D37()
  // L101()
  goto L101_;

L110_:;
  // abbreviate4 = ldf abbreviate
  Rsh_Fir_reg_abbreviate4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L111() else D42()
  // L111()
  goto L111_;

D37_:;
  // deopt 133 [r65, l1, r65, r66]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(133, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 168 [value6]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L101_:;
  // c29 = `is.object`(r66)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args114);
  // if c29 then L102() else L103(r65, l1, r66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L102()
    goto L102_;
  } else {
  // L103(r65, l1, r66)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r65_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r66_;
    goto L103_;
  }

L111_:;
  // p7 = prom<V +>{
  //   sym11 = ldf dimnames;
  //   base11 = ldf dimnames in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L2() else L3();
  // L0(r78):
  //   c31 = `is.object`(r78);
  //   if c31 then L4() else L5(r78);
  // L2():
  //   value4 = ld value;
  //   value5 = force? value4;
  //   checkMissing(value5);
  //   dimnames2 = ldf dimnames in base;
  //   r79 = dyn dimnames2(value5);
  //   goto L0(r79);
  // L3():
  //   r77 = dyn base11(<sym value>);
  //   goto L0(r77);
  // L1(dx9):
  //   return dx9;
  // L4():
  //   dr8 = tryDispatchBuiltin.1("[[", r78);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(r81):
  //   __4 = ldf `[[` in base;
  //   r82 = dyn __4(r81, 2.0);
  //   goto L1(r82);
  // L6():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_7, 0, NULL, CCP, RHO);
  // r84 = dyn abbreviate4(p7)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abbreviate4_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L112() else D43()
  // L112()
  goto L112_;

L121_:;
  // value7 = force? value6
  Rsh_Fir_reg_value7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value6_);
  // checkMissing(value7)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_value7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value7
  return Rsh_Fir_reg_value7_;

D43_:;
  // deopt 153 [r84]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L24_:;
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L105() else D38()
  // L105()
  goto L105_;

L102_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", r66, r65)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args126);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc3 then L104() else L103(r65, l1, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L104()
    goto L104_;
  } else {
  // L103(r65, l1, dr6)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r65_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_dr6_;
    goto L103_;
  }

L103_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r73 = dyn ____(r70, r65, 1.0)
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args128[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L24(r69, l3, r73)
  // L24(r69, l3, r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r73_;
  goto L24_;

L112_:;
  // l6 = ld value
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames3 = ldf dimnames
  Rsh_Fir_reg_dimnames3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L113() else D44()
  // L113()
  goto L113_;

D38_:;
  // deopt 138 [r72, l5, dx7]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_deopt(138, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 155 [r84, l6, r84]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(155, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L104_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L24(r65, l1, dx6)
  // L24(r65, l1, dx6)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L24_;

L105_:;
  // r74 = dyn dimnames__(l5, NULL, dx7)
  SEXP Rsh_Fir_array_args130[3];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args130[2] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L106() else D39()
  // L106()
  goto L106_;

L113_:;
  // r85 = dyn dimnames3(r84, NULL)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames3_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L114() else D45()
  // L114()
  goto L114_;

D39_:;
  // deopt 140 [r72, r74]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 157 [r84, l6, r84, r85]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(157, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L106_:;
  // st value = r74
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L25()
  // L25()
  goto L25_;

L114_:;
  // c32 = `is.object`(r85)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c32 then L115() else L116(r84, l6, r85)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L115()
    goto L115_;
  } else {
  // L116(r84, l6, r85)
    Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r85_;
    goto L116_;
  }

L27_:;
  // dimnames__1 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L118() else D46()
  // L118()
  goto L118_;

L115_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", r85, r84)
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_args133[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args133);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc5 then L117() else L116(r84, l6, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L117()
    goto L117_;
  } else {
  // L116(r84, l6, dr10)
    Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_dr10_;
    goto L116_;
  }

L116_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r92 = dyn ____1(r89, r84, 2.0)
  SEXP Rsh_Fir_array_args135[3];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args135[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L27(r88, l8, r92)
  // L27(r88, l8, r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r92_;
  goto L27_;

D46_:;
  // deopt 162 [r91, l10, dx11]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_deopt(162, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L117_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L27(r84, l6, dx10)
  // L27(r84, l6, dx10)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L27_;

L118_:;
  // r93 = dyn dimnames__1(l10, NULL, dx11)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__1_, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L119() else D47()
  // L119()
  goto L119_;

D47_:;
  // deopt 164 [r91, r93]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(164, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L119_:;
  // st value = r93
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r93_, RHO);
  (void)(Rsh_Fir_reg_r93_);
  // goto L28()
  // L28()
  goto L28_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_includeSubclasses5_;
  SEXP Rsh_Fir_reg_includeSubclasses6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // includeSubclasses5 = ld includeSubclasses
  Rsh_Fir_reg_includeSubclasses5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // includeSubclasses6 = force? includeSubclasses5
  Rsh_Fir_reg_includeSubclasses6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_includeSubclasses5_);
  // checkMissing(includeSubclasses6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_includeSubclasses6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return includeSubclasses6
  return Rsh_Fir_reg_includeSubclasses6_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_class1;
  SEXP Rsh_Fir_reg_class1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // class = ld class
  Rsh_Fir_reg_class1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class1 = force? class
  Rsh_Fir_reg_class1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_class1);
  // checkMissing(class1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_class1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return class1
  return Rsh_Fir_reg_class1_1;
}
SEXP Rsh_Fir_user_promise_inner2132960016_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__oneClassToAM;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // _oneClassToAM = ldf `.oneClassToAM`
  Rsh_Fir_reg__oneClassToAM = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p3 = prom<V +>{
  //   classDef = ld classDef;
  //   classDef1 = force? classDef;
  //   checkMissing(classDef1);
  //   return classDef1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   includeSubclasses9 = ld includeSubclasses;
  //   includeSubclasses10 = force? includeSubclasses9;
  //   checkMissing(includeSubclasses10);
  //   c16 = `is.object`(includeSubclasses10);
  //   if c16 then L1() else L2(includeSubclasses10);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[[", includeSubclasses10);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(includeSubclasses12):
  //   i11 = ld i;
  //   i12 = force? i11;
  //   __1 = ldf `[[` in base;
  //   r36 = dyn __1(includeSubclasses12, i12);
  //   goto L0(r36);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2132960016_5, 0, NULL, CCP, RHO);
  // r38 = dyn _oneClassToAM(p3, p4)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__oneClassToAM, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names32, CCP, RHO);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_classDef;
  SEXP Rsh_Fir_reg_classDef1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // classDef = ld classDef
  Rsh_Fir_reg_classDef = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // classDef1 = force? classDef
  Rsh_Fir_reg_classDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef);
  // checkMissing(classDef1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_classDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return classDef1
  return Rsh_Fir_reg_classDef1_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_includeSubclasses9_;
  SEXP Rsh_Fir_reg_includeSubclasses10_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_includeSubclasses12_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // includeSubclasses9 = ld includeSubclasses
  Rsh_Fir_reg_includeSubclasses9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // includeSubclasses10 = force? includeSubclasses9
  Rsh_Fir_reg_includeSubclasses10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_includeSubclasses9_);
  // checkMissing(includeSubclasses10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_includeSubclasses10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(includeSubclasses10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_includeSubclasses10_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args87);
  // if c16 then L1() else L2(includeSubclasses10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L1()
    goto L1_;
  } else {
  // L2(includeSubclasses10)
    Rsh_Fir_reg_includeSubclasses12_ = Rsh_Fir_reg_includeSubclasses10_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[[", includeSubclasses10)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_includeSubclasses10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_includeSubclasses12_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r36 = dyn __1(includeSubclasses12, i12)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_includeSubclasses12_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r63_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf dimnames
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base10 = ldf dimnames in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard10 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c28 = `is.object`(r59)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c28 then L4() else L5(r59)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r59)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r59_;
    goto L5_;
  }

L2_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r60 = dyn dimnames(value3)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // r58 = dyn base10(<sym value>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L0_;

L1_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L4_:;
  // dr4 = tryDispatchBuiltin.1("[[", r59)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc2 then L6() else L5(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr4)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_dr4_;
    goto L5_;
  }

L5_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r63 = dyn __3(r62, 1.0)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L1(r63)
  // L1(r63)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r63_;
  goto L1_;

L6_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2132960016_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_value5_;
  SEXP Rsh_Fir_reg_dimnames2_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r82_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2132960016/0: expected 0, got %d", NCAPTURES);

  // sym11 = ldf dimnames
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base11 = ldf dimnames in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard11 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c31 = `is.object`(r78)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args116);
  // if c31 then L4() else L5(r78)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r78)
    Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r78_;
    goto L5_;
  }

L2_:;
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // dimnames2 = ldf dimnames in base
  Rsh_Fir_reg_dimnames2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r79 = dyn dimnames2(value5)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_value5_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames2_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L0_;

L3_:;
  // r77 = dyn base11(<sym value>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L0_;

L1_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L4_:;
  // dr8 = tryDispatchBuiltin.1("[[", r78)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_r81_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r82 = dyn __4(r81, 2.0)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L1(r82)
  // L1(r82)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r82_;
  goto L1_;

L6_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L1(dx8)
  // L1(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L1_;
}
SEXP Rsh_Fir_user_function_inner1014511133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1014511133 dynamic dispatch ([m1, m2])

  return Rsh_Fir_user_version_inner1014511133_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1014511133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1014511133 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1014511133/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg_m6_;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_r6_2;
  SEXP Rsh_Fir_reg_m7_;
  SEXP Rsh_Fir_reg_m8_;
  SEXP Rsh_Fir_reg_dimnames1;
  SEXP Rsh_Fir_reg_r7_2;
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_2;
  SEXP Rsh_Fir_reg_m9_;
  SEXP Rsh_Fir_reg_m10_;
  SEXP Rsh_Fir_reg_dimnames1_1;
  SEXP Rsh_Fir_reg_r10_2;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_unique1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_matrix1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_m11_;
  SEXP Rsh_Fir_reg_m12_;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_m14_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr8_1;
  SEXP Rsh_Fir_reg_dc4_1;
  SEXP Rsh_Fir_reg_dx8_1;
  SEXP Rsh_Fir_reg_dx9_1;
  SEXP Rsh_Fir_reg_dn17_;
  SEXP Rsh_Fir_reg_dn18_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_m19_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_m20_;
  SEXP Rsh_Fir_reg_dn20_;
  SEXP Rsh_Fir_reg_dr10_1;
  SEXP Rsh_Fir_reg_dc5_1;
  SEXP Rsh_Fir_reg_dx10_1;
  SEXP Rsh_Fir_reg_m23_;
  SEXP Rsh_Fir_reg_l6_1;
  SEXP Rsh_Fir_reg_m24_;
  SEXP Rsh_Fir_reg_dx11_1;
  SEXP Rsh_Fir_reg___4_1;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_dn21_;
  SEXP Rsh_Fir_reg_dn22_;
  SEXP Rsh_Fir_reg_c9_1;
  SEXP Rsh_Fir_reg_m27_;
  SEXP Rsh_Fir_reg_l8_1;
  SEXP Rsh_Fir_reg_m28_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_dn24_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_m31_;
  SEXP Rsh_Fir_reg_l10_1;
  SEXP Rsh_Fir_reg_m32_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg____1;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_m33_;
  SEXP Rsh_Fir_reg_m34_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_c10_1;
  SEXP Rsh_Fir_reg_m36_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dn25_;
  SEXP Rsh_Fir_reg_dn26_;
  SEXP Rsh_Fir_reg_c11_1;
  SEXP Rsh_Fir_reg_m41_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_m42_;
  SEXP Rsh_Fir_reg_dn28_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_m45_;
  SEXP Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_reg_m46_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r41_1;
  SEXP Rsh_Fir_reg_dn29_;
  SEXP Rsh_Fir_reg_dn30_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_m49_;
  SEXP Rsh_Fir_reg_l19_;
  SEXP Rsh_Fir_reg_m50_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dn32_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_m53_;
  SEXP Rsh_Fir_reg_l21_;
  SEXP Rsh_Fir_reg_m54_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r42_1;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r43_1;
  SEXP Rsh_Fir_reg_value1;
  SEXP Rsh_Fir_reg_value1_1;

  // Bind parameters
  Rsh_Fir_reg_m1_ = PARAMS[0];
  Rsh_Fir_reg_m2_ = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m1 = m1
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_m1_, RHO);
  (void)(Rsh_Fir_reg_m1_);
  // st m2 = m2
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_m2_, RHO);
  (void)(Rsh_Fir_reg_m2_);
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   m3 = ld m1;
  //   m4 = force? m3;
  //   checkMissing(m4);
  //   return m4;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_, 0, NULL, CCP, RHO);
  // r1 = dyn nrow(p)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L11_:;
  // r2 = `==`(r1, 0.0)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args140);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args141);
  // if c then L12() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L12()
    goto L12_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // sym = ldf dimnames
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base = ldf dimnames in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L12_:;
  // m5 = ld m2
  Rsh_Fir_reg_m5_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [m5]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L2_:;
  // st dn1 = r6
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r6_2, RHO);
  (void)(Rsh_Fir_reg_r6_2);
  // sym1 = ldf dimnames
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base1 = ldf dimnames in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L13_:;
  // m6 = force? m5
  Rsh_Fir_reg_m6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m5_);
  // checkMissing(m6)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_m6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return m6
  return Rsh_Fir_reg_m6_;

L16_:;
  // m7 = ld m1
  Rsh_Fir_reg_m7_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // r5 = dyn base(<sym m1>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_2 = Rsh_Fir_reg_r5_2;
  goto L2_;

D3_:;
  // deopt 13 [m7]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_m7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L3_:;
  // st dn2 = r9
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r9_2, RHO);
  (void)(Rsh_Fir_reg_r9_2);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L18_:;
  // m8 = force? m7
  Rsh_Fir_reg_m8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m7_);
  // checkMissing(m8)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_m8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r7 = dyn dimnames(m8)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_m8_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L20_:;
  // m9 = ld m2
  Rsh_Fir_reg_m9_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r8 = dyn base1(<sym m2>)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_2 = Rsh_Fir_reg_r8_1;
  goto L3_;

D4_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r7_2;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 20 [m9]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_m9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_2 = Rsh_Fir_reg_r7_2;
  goto L2_;

L22_:;
  // m10 = force? m9
  Rsh_Fir_reg_m10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m9_);
  // checkMissing(m10)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_m10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r10 = dyn dimnames1(m10)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_m10_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_1, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L24_:;
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L3() else L4();
  // L0(r12):
  //   return r12;
  // L3():
  //   dn1 = ld dn1;
  //   dn2 = force? dn1;
  //   checkMissing(dn2);
  //   c1 = `is.object`(dn2);
  //   if c1 then L5() else L6(dn2);
  // L4():
  //   r11 = dyn base2(<lang `[[`(dn1, 1.0)>, <lang `[[`(dn2, 1.0)>);
  //   goto L0(r11);
  // L1(dx1):
  //   dn5 = ld dn2;
  //   dn6 = force? dn5;
  //   checkMissing(dn6);
  //   c2 = `is.object`(dn6);
  //   if c2 then L8() else L9(dn6);
  // L5():
  //   dr = tryDispatchBuiltin.1("[[", dn2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L7() else L6(dr);
  // L6(dn4):
  //   __ = ldf `[[` in base;
  //   r13 = dyn __(dn4, 1.0);
  //   goto L1(r13);
  // L2(dx3):
  //   c3 = ldf c in base;
  //   r15 = dyn c3(dx1, dx3);
  //   goto L0(r15);
  // L7():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L8():
  //   dr2 = tryDispatchBuiltin.1("[[", dn6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L10() else L9(dr2);
  // L9(dn8):
  //   __1 = ldf `[[` in base;
  //   r14 = dyn __1(dn8, 1.0);
  //   goto L2(r14);
  // L10():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L2(dx2);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_1, 0, NULL, CCP, RHO);
  // r17 = dyn unique(p1)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D6_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r10_2;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 28 [r17]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_2 = Rsh_Fir_reg_r10_2;
  goto L3_;

L25_:;
  // st rows = r17
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // unique1 = ldf unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p2 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L3() else L4();
  // L0(r19):
  //   return r19;
  // L3():
  //   dn9 = ld dn1;
  //   dn10 = force? dn9;
  //   checkMissing(dn10);
  //   c4 = `is.object`(dn10);
  //   if c4 then L5() else L6(dn10);
  // L4():
  //   r18 = dyn base3(<lang `[[`(dn1, 2.0)>, <lang `[[`(dn2, 2.0)>);
  //   goto L0(r18);
  // L1(dx5):
  //   dn13 = ld dn2;
  //   dn14 = force? dn13;
  //   checkMissing(dn14);
  //   c5 = `is.object`(dn14);
  //   if c5 then L8() else L9(dn14);
  // L5():
  //   dr4 = tryDispatchBuiltin.1("[[", dn10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L7() else L6(dr4);
  // L6(dn12):
  //   __2 = ldf `[[` in base;
  //   r20 = dyn __2(dn12, 2.0);
  //   goto L1(r20);
  // L2(dx7):
  //   c6 = ldf c in base;
  //   r22 = dyn c6(dx5, dx7);
  //   goto L0(r22);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // L8():
  //   dr6 = tryDispatchBuiltin.1("[[", dn14);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L10() else L9(dr6);
  // L9(dn16):
  //   __3 = ldf `[[` in base;
  //   r21 = dyn __3(dn16, 2.0);
  //   goto L2(r21);
  // L10():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L2(dx6);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_2, 0, NULL, CCP, RHO);
  // r24 = dyn unique1(p2)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique1_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L27() else D10()
  // L27()
  goto L27_;

D10_:;
  // deopt 33 [r24]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L27_:;
  // st columns = r24
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r24_1, RHO);
  (void)(Rsh_Fir_reg_r24_1);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L28() else D11()
  // L28()
  goto L28_;

D11_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p3 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   rows = ld rows;
  //   rows1 = force? rows;
  //   checkMissing(rows1);
  //   length = ldf length in base;
  //   r27 = dyn length(rows1);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base4(<sym rows>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym5 = ldf length;
  //   base5 = ldf length in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   columns = ld columns;
  //   columns1 = force? columns;
  //   checkMissing(columns1);
  //   length1 = ldf length in base;
  //   r31 = dyn length1(columns1);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base5(<sym columns>);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym6 = ldf list;
  //   base6 = ldf list in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r34):
  //   return r34;
  // L1():
  //   rows2 = ld rows;
  //   rows3 = force? rows2;
  //   checkMissing(rows3);
  //   columns2 = ld columns;
  //   columns3 = force? columns2;
  //   checkMissing(columns3);
  //   list = ldf list in base;
  //   r35 = dyn list(rows3, columns3);
  //   goto L0(r35);
  // L2():
  //   r33 = dyn base6(<sym rows>, <sym columns>);
  //   goto L0(r33);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1014511133_5, 0, NULL, CCP, RHO);
  // r37 = dyn matrix[, , , dimnames](0.0, p3, p4, p5)
  SEXP Rsh_Fir_array_args196[4];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args196[2] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args196[3] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names73[4];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_array_arg_names73[3] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1, 4, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L29() else D12()
  // L29()
  goto L29_;

D12_:;
  // deopt 42 [r37]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L29_:;
  // st value = r37
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // m11 = ld m1
  Rsh_Fir_reg_m11_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

D13_:;
  // deopt 44 [m11]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_m11_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L30_:;
  // m12 = force? m11
  Rsh_Fir_reg_m12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m11_);
  // checkMissing(m12)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_m12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // l = ld value
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args198);
  // if c7 then L31() else L32(m12, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L31()
    goto L31_;
  } else {
  // L32(m12, l)
    Rsh_Fir_reg_m14_ = Rsh_Fir_reg_m12_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l1;
    goto L32_;
  }

L4_:;
  // st value = dx9
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx9_1, RHO);
  (void)(Rsh_Fir_reg_dx9_1);
  // m33 = ld m2
  Rsh_Fir_reg_m33_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

L31_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l, m12)
  SEXP Rsh_Fir_array_args199[3];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args199[2] = Rsh_Fir_reg_m12_;
  Rsh_Fir_reg_dr8_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args199);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dc4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc4 then L33() else L32(m12, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_1)) {
  // L33()
    goto L33_;
  } else {
  // L32(m12, dr8)
    Rsh_Fir_reg_m14_ = Rsh_Fir_reg_m12_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr8_1;
    goto L32_;
  }

L32_:;
  // dn17 = ld dn1
  Rsh_Fir_reg_dn17_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

D14_:;
  // deopt 47 [m14, l2, m12, dn17]
  SEXP Rsh_Fir_array_deopt_stack55[4];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_m14_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_m12_;
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_dn17_;
  Rsh_Fir_deopt(47, 4, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 58 [m33]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_m33_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L33_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dx8_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L4(dx8)
  // L4(dx8)
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_dx8_1;
  goto L4_;

L34_:;
  // dn18 = force? dn17
  Rsh_Fir_reg_dn18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn17_);
  // checkMissing(dn18)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dn18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(dn18)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dn18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args203);
  // if c8 then L35() else L36(m14, l2, m12, dn18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L35()
    goto L35_;
  } else {
  // L36(m14, l2, m12, dn18)
    Rsh_Fir_reg_m19_ = Rsh_Fir_reg_m14_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_m20_ = Rsh_Fir_reg_m12_;
    Rsh_Fir_reg_dn20_ = Rsh_Fir_reg_dn18_;
    goto L36_;
  }

L42_:;
  // m34 = force? m33
  Rsh_Fir_reg_m34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m33_);
  // checkMissing(m34)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_m34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // l11 = ld value
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // c10 = `is.object`(l11)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c10_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args205);
  // if c10 then L43() else L44(m34, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_1)) {
  // L43()
    goto L43_;
  } else {
  // L44(m34, l11)
    Rsh_Fir_reg_m36_ = Rsh_Fir_reg_m34_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L44_;
  }

L5_:;
  // dn21 = ld dn1
  Rsh_Fir_reg_dn21_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

L7_:;
  // st value = dx19
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // value = ld value
  Rsh_Fir_reg_value1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

L35_:;
  // dr10 = tryDispatchBuiltin.1("[[", dn18)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_dn18_;
  Rsh_Fir_reg_dr10_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args206);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dc5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // if dc5 then L37() else L36(m14, l2, m12, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_1)) {
  // L37()
    goto L37_;
  } else {
  // L36(m14, l2, m12, dr10)
    Rsh_Fir_reg_m19_ = Rsh_Fir_reg_m14_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_m20_ = Rsh_Fir_reg_m12_;
    Rsh_Fir_reg_dn20_ = Rsh_Fir_reg_dr10_1;
    goto L36_;
  }

L36_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r38 = dyn __4(dn20, 1.0)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dn20_;
  Rsh_Fir_array_args208[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_1, 2, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L5(m19, l4, m20, r38)
  // L5(m19, l4, m20, r38)
  Rsh_Fir_reg_m23_ = Rsh_Fir_reg_m19_;
  Rsh_Fir_reg_l6_1 = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_m24_ = Rsh_Fir_reg_m20_;
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_r38_1;
  goto L5_;

L43_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l11, m34)
  SEXP Rsh_Fir_array_args209[3];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args209[2] = Rsh_Fir_reg_m34_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args209);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // if dc7 then L45() else L44(m34, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L45()
    goto L45_;
  } else {
  // L44(m34, dr14)
    Rsh_Fir_reg_m36_ = Rsh_Fir_reg_m34_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr14_;
    goto L44_;
  }

L44_:;
  // dn25 = ld dn2
  Rsh_Fir_reg_dn25_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D15_:;
  // deopt 51 [m23, l6, m24, dx11, dn21]
  SEXP Rsh_Fir_array_deopt_stack57[5];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_m23_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_l6_1;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_Fir_reg_m24_;
  Rsh_Fir_array_deopt_stack57[3] = Rsh_Fir_reg_dx11_1;
  Rsh_Fir_array_deopt_stack57[4] = Rsh_Fir_reg_dn21_;
  Rsh_Fir_deopt(51, 5, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 61 [m36, l13, m34, dn25]
  SEXP Rsh_Fir_array_deopt_stack58[4];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_m36_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_m34_;
  Rsh_Fir_array_deopt_stack58[3] = Rsh_Fir_reg_dn25_;
  Rsh_Fir_deopt(61, 4, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 72 [value]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_value1;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L37_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dx10_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // goto L5(m14, l2, m12, dx10)
  // L5(m14, l2, m12, dx10)
  Rsh_Fir_reg_m23_ = Rsh_Fir_reg_m14_;
  Rsh_Fir_reg_l6_1 = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_m24_ = Rsh_Fir_reg_m12_;
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx10_1;
  goto L5_;

L38_:;
  // dn22 = force? dn21
  Rsh_Fir_reg_dn22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn21_);
  // checkMissing(dn22)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dn22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(dn22)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dn22_;
  Rsh_Fir_reg_c9_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args213);
  // if c9 then L39() else L40(m23, l6, m24, dx11, dn22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_1)) {
  // L39()
    goto L39_;
  } else {
  // L40(m23, l6, m24, dx11, dn22)
    Rsh_Fir_reg_m27_ = Rsh_Fir_reg_m23_;
    Rsh_Fir_reg_l8_1 = Rsh_Fir_reg_l6_1;
    Rsh_Fir_reg_m28_ = Rsh_Fir_reg_m24_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_1;
    Rsh_Fir_reg_dn24_ = Rsh_Fir_reg_dn22_;
    goto L40_;
  }

L45_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // goto L7(dx18)
  // L7(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L7_;

L46_:;
  // dn26 = force? dn25
  Rsh_Fir_reg_dn26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn25_);
  // checkMissing(dn26)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dn26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(dn26)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dn26_;
  Rsh_Fir_reg_c11_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args216);
  // if c11 then L47() else L48(m36, l13, m34, dn26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_1)) {
  // L47()
    goto L47_;
  } else {
  // L48(m36, l13, m34, dn26)
    Rsh_Fir_reg_m41_ = Rsh_Fir_reg_m36_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    Rsh_Fir_reg_m42_ = Rsh_Fir_reg_m34_;
    Rsh_Fir_reg_dn28_ = Rsh_Fir_reg_dn26_;
    goto L48_;
  }

L54_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_value1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_1;

L6_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r40 = dyn ___(l10, m32, dx16, dx17)
  SEXP Rsh_Fir_array_args218[4];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_l10_1;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_m32_;
  Rsh_Fir_array_args218[2] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args218[3] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names75[4];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_array_arg_names75[2] = R_MissingArg;
  Rsh_Fir_array_arg_names75[3] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1, 4, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L4(r40)
  // L4(r40)
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_r40_1;
  goto L4_;

L8_:;
  // dn29 = ld dn2
  Rsh_Fir_reg_dn29_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L50() else D18()
  // L50()
  goto L50_;

L39_:;
  // dr12 = tryDispatchBuiltin.1("[[", dn22)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_dn22_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args219);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if dc6 then L41() else L40(m23, l6, m24, dx11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L41()
    goto L41_;
  } else {
  // L40(m23, l6, m24, dx11, dr12)
    Rsh_Fir_reg_m27_ = Rsh_Fir_reg_m23_;
    Rsh_Fir_reg_l8_1 = Rsh_Fir_reg_l6_1;
    Rsh_Fir_reg_m28_ = Rsh_Fir_reg_m24_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_1;
    Rsh_Fir_reg_dn24_ = Rsh_Fir_reg_dr12_;
    goto L40_;
  }

L40_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r39 = dyn __5(dn24, 2.0)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dn24_;
  Rsh_Fir_array_args221[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L6(m27, l8, m28, dx13, r39)
  // L6(m27, l8, m28, dx13, r39)
  Rsh_Fir_reg_m31_ = Rsh_Fir_reg_m27_;
  Rsh_Fir_reg_l10_1 = Rsh_Fir_reg_l8_1;
  Rsh_Fir_reg_m32_ = Rsh_Fir_reg_m28_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r39_;
  goto L6_;

L47_:;
  // dr16 = tryDispatchBuiltin.1("[[", dn26)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_dn26_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc8 then L49() else L48(m36, l13, m34, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L49()
    goto L49_;
  } else {
  // L48(m36, l13, m34, dr16)
    Rsh_Fir_reg_m41_ = Rsh_Fir_reg_m36_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    Rsh_Fir_reg_m42_ = Rsh_Fir_reg_m34_;
    Rsh_Fir_reg_dn28_ = Rsh_Fir_reg_dr16_;
    goto L48_;
  }

L48_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r41 = dyn __6(dn28, 1.0)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dn28_;
  Rsh_Fir_array_args224[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r41_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L8(m41, l15, m42, r41)
  // L8(m41, l15, m42, r41)
  Rsh_Fir_reg_m45_ = Rsh_Fir_reg_m41_;
  Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_m46_ = Rsh_Fir_reg_m42_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r41_1;
  goto L8_;

D18_:;
  // deopt 65 [m45, l17, m46, dx21, dn29]
  SEXP Rsh_Fir_array_deopt_stack60[5];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_m45_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack60[2] = Rsh_Fir_reg_m46_;
  Rsh_Fir_array_deopt_stack60[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack60[4] = Rsh_Fir_reg_dn29_;
  Rsh_Fir_deopt(65, 5, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L41_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L6(m23, l6, m24, dx11, dx15)
  // L6(m23, l6, m24, dx11, dx15)
  Rsh_Fir_reg_m31_ = Rsh_Fir_reg_m23_;
  Rsh_Fir_reg_l10_1 = Rsh_Fir_reg_l6_1;
  Rsh_Fir_reg_m32_ = Rsh_Fir_reg_m24_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_1;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L6_;

L49_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L8(m36, l13, m34, dx20)
  // L8(m36, l13, m34, dx20)
  Rsh_Fir_reg_m45_ = Rsh_Fir_reg_m36_;
  Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_m46_ = Rsh_Fir_reg_m34_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L8_;

L50_:;
  // dn30 = force? dn29
  Rsh_Fir_reg_dn30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn29_);
  // checkMissing(dn30)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dn30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(dn30)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dn30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args228);
  // if c12 then L51() else L52(m45, l17, m46, dx21, dn30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L51()
    goto L51_;
  } else {
  // L52(m45, l17, m46, dx21, dn30)
    Rsh_Fir_reg_m49_ = Rsh_Fir_reg_m45_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    Rsh_Fir_reg_m50_ = Rsh_Fir_reg_m46_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_dn32_ = Rsh_Fir_reg_dn30_;
    goto L52_;
  }

L9_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r43 = dyn ___1(l21, m54, dx26, dx27)
  SEXP Rsh_Fir_array_args229[4];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_m54_;
  Rsh_Fir_array_args229[2] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args229[3] = Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_array_arg_names78[4];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_array_arg_names78[2] = R_MissingArg;
  Rsh_Fir_array_arg_names78[3] = R_MissingArg;
  Rsh_Fir_reg_r43_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L7(r43)
  // L7(r43)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r43_1;
  goto L7_;

L51_:;
  // dr18 = tryDispatchBuiltin.1("[[", dn30)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_dn30_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args230);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc9 then L53() else L52(m45, l17, m46, dx21, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L53()
    goto L53_;
  } else {
  // L52(m45, l17, m46, dx21, dr18)
    Rsh_Fir_reg_m49_ = Rsh_Fir_reg_m45_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    Rsh_Fir_reg_m50_ = Rsh_Fir_reg_m46_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_dn32_ = Rsh_Fir_reg_dr18_;
    goto L52_;
  }

L52_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r42 = dyn __7(dn32, 2.0)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dn32_;
  Rsh_Fir_array_args232[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L9(m49, l19, m50, dx23, r42)
  // L9(m49, l19, m50, dx23, r42)
  Rsh_Fir_reg_m53_ = Rsh_Fir_reg_m49_;
  Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_m54_ = Rsh_Fir_reg_m50_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r42_1;
  goto L9_;

L53_:;
  // dx25 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L9(m45, l17, m46, dx21, dx25)
  // L9(m45, l17, m46, dx21, dx25)
  Rsh_Fir_reg_m53_ = Rsh_Fir_reg_m45_;
  Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_m54_ = Rsh_Fir_reg_m46_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_m4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // m3 = ld m1
  Rsh_Fir_reg_m3_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // m4 = force? m3
  Rsh_Fir_reg_m4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m3_);
  // checkMissing(m4)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_m4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return m4
  return Rsh_Fir_reg_m4_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_2;
  SEXP Rsh_Fir_reg_base2_2;
  SEXP Rsh_Fir_reg_guard2_2;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_reg_dn2_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_dn4_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r13_2;
  SEXP Rsh_Fir_reg_dn5_;
  SEXP Rsh_Fir_reg_dn6_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_dn8_;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r15_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym2_2;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base2_2;
  Rsh_Fir_reg_guard2_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard2 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_2)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L3_:;
  // dn1 = ld dn1
  Rsh_Fir_reg_dn1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // dn2 = force? dn1
  Rsh_Fir_reg_dn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn1_);
  // checkMissing(dn2)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(dn2)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args153);
  // if c1 then L5() else L6(dn2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L5()
    goto L5_;
  } else {
  // L6(dn2)
    Rsh_Fir_reg_dn4_ = Rsh_Fir_reg_dn2_;
    goto L6_;
  }

L4_:;
  // r11 = dyn base2(<lang `[[`(dn1, 1.0)>, <lang `[[`(dn2, 1.0)>)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_2, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L0_;

L1_:;
  // dn5 = ld dn2
  Rsh_Fir_reg_dn5_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // dn6 = force? dn5
  Rsh_Fir_reg_dn6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn5_);
  // checkMissing(dn6)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dn6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(dn6)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dn6_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args156);
  // if c2 then L8() else L9(dn6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L8()
    goto L8_;
  } else {
  // L9(dn6)
    Rsh_Fir_reg_dn8_ = Rsh_Fir_reg_dn6_;
    goto L9_;
  }

L5_:;
  // dr = tryDispatchBuiltin.1("[[", dn2)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args157);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_dn4_ = Rsh_Fir_reg_dr1;
    goto L6_;
  }

L6_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r13 = dyn __(dn4, 1.0)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r13_2;
  goto L1_;

L2_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r15 = dyn c3(dx1, dx3)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_1;
  goto L0_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

L8_:;
  // dr2 = tryDispatchBuiltin.1("[[", dn6)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_dn6_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc1 then L10() else L9(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr2)
    Rsh_Fir_reg_dn8_ = Rsh_Fir_reg_dr2_1;
    goto L9_;
  }

L9_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r14 = dyn __1(dn8, 1.0)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dn8_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r14_1;
  goto L2_;

L10_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_dn9_;
  SEXP Rsh_Fir_reg_dn10_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_dn12_;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx4_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg___2_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_dn13_;
  SEXP Rsh_Fir_reg_dn14_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_dn16_;
  SEXP Rsh_Fir_reg_dr6_1;
  SEXP Rsh_Fir_reg_dc3_1;
  SEXP Rsh_Fir_reg_dx6_1;
  SEXP Rsh_Fir_reg_dx7_1;
  SEXP Rsh_Fir_reg___3_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c6_1;
  SEXP Rsh_Fir_reg_r22_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if guard3 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L3_:;
  // dn9 = ld dn1
  Rsh_Fir_reg_dn9_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // dn10 = force? dn9
  Rsh_Fir_reg_dn10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn9_);
  // checkMissing(dn10)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dn10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(dn10)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dn10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args169);
  // if c4 then L5() else L6(dn10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dn10)
    Rsh_Fir_reg_dn12_ = Rsh_Fir_reg_dn10_;
    goto L6_;
  }

L4_:;
  // r18 = dyn base3(<lang `[[`(dn1, 2.0)>, <lang `[[`(dn2, 2.0)>)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;

L1_:;
  // dn13 = ld dn2
  Rsh_Fir_reg_dn13_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // dn14 = force? dn13
  Rsh_Fir_reg_dn14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn13_);
  // checkMissing(dn14)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dn14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(dn14)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dn14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args172);
  // if c5 then L8() else L9(dn14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L8()
    goto L8_;
  } else {
  // L9(dn14)
    Rsh_Fir_reg_dn16_ = Rsh_Fir_reg_dn14_;
    goto L9_;
  }

L5_:;
  // dr4 = tryDispatchBuiltin.1("[[", dn10)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_dn10_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args173);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if dc2 then L7() else L6(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr4)
    Rsh_Fir_reg_dn12_ = Rsh_Fir_reg_dr4_1;
    goto L6_;
  }

L6_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r20 = dyn __2(dn12, 2.0)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dn12_;
  Rsh_Fir_array_args175[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r20_1;
  goto L1_;

L2_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r22 = dyn c6(dx5, dx7)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dx5_1;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_dx7_1;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_1, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_1;
  goto L0_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L1_;

L8_:;
  // dr6 = tryDispatchBuiltin.1("[[", dn14)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_dn14_;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args178);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if dc3 then L10() else L9(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr6)
    Rsh_Fir_reg_dn16_ = Rsh_Fir_reg_dr6_1;
    goto L9_;
  }

L9_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r21 = dyn __3(dn16, 2.0)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dn16_;
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_1, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_r21_1;
  goto L2_;

L10_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L2(dx6)
  // L2(dx6)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_dx6_1;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_rows;
  SEXP Rsh_Fir_reg_rows1_;
  SEXP Rsh_Fir_reg_length1;
  SEXP Rsh_Fir_reg_r27_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf length
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args183);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // rows = ld rows
  Rsh_Fir_reg_rows = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // rows1 = force? rows
  Rsh_Fir_reg_rows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows);
  // checkMissing(rows1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_rows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r27 = dyn length(rows1)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_rows1_;
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_1;
  goto L0_;

L2_:;
  // r25 = dyn base4(<sym rows>)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_columns;
  SEXP Rsh_Fir_reg_columns1_;
  SEXP Rsh_Fir_reg_length1_1;
  SEXP Rsh_Fir_reg_r31_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf length
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args187);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_1;

L1_:;
  // columns = ld columns
  Rsh_Fir_reg_columns = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // columns1 = force? columns
  Rsh_Fir_reg_columns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_columns);
  // checkMissing(columns1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_columns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r31 = dyn length1(columns1)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_columns1_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_1, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r31_1;
  goto L0_;

L2_:;
  // r29 = dyn base5(<sym columns>)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1014511133_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_rows2_;
  SEXP Rsh_Fir_reg_rows3_;
  SEXP Rsh_Fir_reg_columns2_;
  SEXP Rsh_Fir_reg_columns3_;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1014511133/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf list
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args191);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r34
  return Rsh_Fir_reg_r34_;

L1_:;
  // rows2 = ld rows
  Rsh_Fir_reg_rows2_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // rows3 = force? rows2
  Rsh_Fir_reg_rows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows2_);
  // checkMissing(rows3)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_rows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // columns2 = ld columns
  Rsh_Fir_reg_columns2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // columns3 = force? columns2
  Rsh_Fir_reg_columns3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_columns2_);
  // checkMissing(columns3)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_columns3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r35 = dyn list(rows3, columns3)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_rows3_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_columns3_;
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L0_;

L2_:;
  // r33 = dyn base6(<sym rows>, <sym columns>)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 2, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
